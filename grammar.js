/* Based on the grammar.rst doc from Coffee.
   Copyright (c) 2023 mini-rose */

module.exports = grammar({
	name: 'coffee',

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
			'{',
			repeat($.statement),
			'}'
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
			$.symbol,
			':',
			$.type
		),

		type_alias: $ => seq(
			'type',
			$.symbol_type,
			'=',
			$.type
		),

		builtin_call: $ => seq(
			$.symbol_func,
			'(',
			optional(seq(
				choice($.rvalue, $.type),
				repeat(seq(
					',',
					choice($.rvalue, $.type)
				)),
			)),
			')'
		),

		type: $ => seq(
			optional('&'),
			$.symbol_type,
			optional(seq(
				'[', $.number, ']',
			)),
		),

		statement: $ => choice(
			$.var_decl,
			$.var_assign,
			$.call,
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

		call: $ => seq(
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
		),

		ret: $ => seq(
			'ret', $.rvalue
		),

		rvalue: $ => prec(1, choice(
			$.literal,
			$.symbol,
			$.deref,
			$.pointer_to,
			$.member,
			$.member_deref,
			$.member_pointer_to,
			$.call
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
			$.number
		),

		symbol: $ => /[A-z_][\w\d]*/,
		string: $ => /('[^']*'|"[^"]*")/,
		number: $ => /\d+(\.\d+)?/,

		// Custom fields

		symbol_func: $ => prec(2, /[A-z_][\w\d]*/),
		symbol_type: $ => prec(2, /[A-z_][\w\d]*/),
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
