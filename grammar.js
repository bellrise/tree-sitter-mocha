/* Based on the grammar.rst doc from Mocha.
   Copyright (c) 2023 mini-rose */

module.exports = grammar({
	name: 'mocha',

	extras: $ => [
		/\s/,
		$.comment
	],

	rules: {
		module: $ => repeat(choice(
			$.use_expr,
			$.function_decl,
			$.type_decl,
			$.type_alias,
			$.builtin_call
		)),

		use_expr: $ => choice(
			seq('use', $.use_block),
			seq('use', $.use_path),
		),

		use_block: $ => seq(
			'{', repeat1($.use_path), '}'
		),

		use_path: $ => choice(
			$.string,
			seq(
				$.symbol,
				repeat(seq(
					'.', $.symbol
				))
			)
		),

		function_decl: $ => seq(
			'fn',
			$.symbol_func,
			optional($.function_params),
			optional(seq(
				'->', $.type
			)),
			$.block
		),

		function_params: $ => seq(
			'(',
			optional(seq(
				$.function_param,
				repeat(seq(
					',',
					$.function_param
				)),
			)),
			')'
		),

		function_param: $ => seq(
			$.symbol, ':', $.type
		),

		type_decl: $ => seq(
			'type',
			$.symbol_type,
			'{',
			repeat($.type_field),
			'}'
		),

		type_field: $ => seq(
			$.symbol_field,
			':',
			choice($.type, $.type_method)
		),

		type_method: $ => seq(
			optional('static'),
			'fn',
			optional($.function_params),
			optional(seq(
				'->', $.type
			)),
			$.block
		),

		type_alias: $ => seq(
			'type',
			$.symbol_type,
			'=',
			$.type
		),

		builtin_call: $ => prec(2, seq(
			$.symbol_builtin,
			'(',
			optional(seq(
				choice($.rvalue, $.type),
				repeat(seq(
					',',
					choice($.rvalue, $.type)
				)),
			)),
			')'
		)),

		type: $ => seq(
			optional('&'),
			$.symbol_type,
			optional(seq('[', ']'))
		),

		statement: $ => choice(
			$.var_decl,
			$.var_assign,
			$.builtin_call,
			$.condition,
			$.call,
			$.member_call,
			$.ret
		),

		var_decl: $ => seq(
			$.symbol,
			':',
			$.type,
			optional(seq(
				'=', $.rvalue
			))
		),

		var_assign: $ => seq(
			$.lvalue, '=', $.rvalue
		),

		call: $ => prec(1, seq(
			$.symbol_func,
			'(',
			optional(seq(
				$.rvalue,
				repeat(seq(
					',',
					$.rvalue
				))
			)),
			')'
		)),

		ret: $ => seq(
			'ret', $.rvalue
		),

		condition: $ => seq(
			'(', $.rvalue, ')',
			'?', choice($.block, $.rvalue),
			optional(seq(
				':', choice($.block, $.rvalue)
			)),
		),

		member_call: $ => seq(
			$.symbol, '.', $.call
		),

		block: $ => seq(
			'{', repeat($.statement), '}'
		),

		rvalue: $ => prec(1, choice(
			seq(
				'(', $.rvalue, ')'
			),
			$.literal,
			$.symbol,
			$.deref,
			$.pointer_to,
			$.member,
			$.member_deref,
			$.member_pointer_to,
			$.call,
			prec.left(2, seq(
				$.rvalue, $.op, $.rvalue
			)),
			$.tuple
		)),

		lvalue: $ => prec(1, choice(
			$.symbol,
			$.deref,
			$.member,
			$.member_deref
		)),

		deref: $ => seq(
			'*', $.lvalue
		),

		pointer_to: $ => seq(
			'&', $.lvalue
		),

		tuple: $ => seq(
			'[',
			$.rvalue,
			']'
		),

		member: $ => seq(
			$.symbol, '.', $.symbol
		),

		member_deref: $ => seq(
			'*', $.member
		),

		member_pointer_to: $ => seq(
			'&', $.member
		),

		literal: $ => choice(
			$.string,
			$.number,
			$.boolean
		),

		boolean: $ => choice(
			'true',
			'false'
		),

		symbol: $ => /[A-z_]\w*/,
		string: $ => /('[^']*'|"[^"]*")/,
		number: $ => /\d+(\.\d+)?/,

		op: $ => choice(
			'+', '-', '*', '/', '==', '!='
		),

		// Custom fields

		symbol_func: $ => prec(2, /[A-z_]\w*/),
		symbol_builtin: $ => prec(2, /__builtin[A-z_]\w*/),
		symbol_type: $ => prec(2, /[A-z_][\w\d]*/),
		symbol_field: $ => prec(2, /[A-z_][\w\d]*/),

		comment: $ => choice(
			seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
			seq(
				'/*',
				/[^*]*\*+([^/*][^*]*\*+)*/,
				'/'
			)
		),
	}
});
