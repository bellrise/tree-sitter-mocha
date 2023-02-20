module.exports = grammar({
	name: 'coffee',

	extras: $ => [
		/\s/,
		$.comment
	],

	rules: {
		module: $ => repeat(choice(
			$.function,
			$.use,
			$.typedecl,
			$.builtin_call
		)),

		comment: $ => choice(
			seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
			seq(
				'/*',
				/[^*]*\*+([^/*][^*]*\*+)*/,
				'/'
			)
		),

		function: $ => seq(
			'fn',
			$.funcname,
			optional(seq(
				'(',
				optional(repeat(seq(
					$.varname,
					':',
					$.type,
					optional(',')
				))),
				')',
				optional(seq(
					'->',
					$.type
				))
			)),
			'{',
			repeat($.statement),
			'}'
		),

		typedecl: $ => seq(
			'type',
			$.type,
			'{',
			repeat(seq(
				$.varname,
				':',
				$.type
			)),
			'}'
		),

		use: $ => seq(
			'use',
			choice($.use_block, $.use_field)
		),

		use_block: $ => seq(
			'{',
			repeat($.use_field),
			'}'
		),

		use_field: $ => choice(
			seq(
				$.modname,
				repeat(seq(
					'.',
					$.modname
				)),
			),
			$.string
		),

		statement: $ => choice(
			$.vardecl,
			$.assign,
			$.call,
			$.ret
		),

		funcname: $ => $.identifier,
		varname: $ => $.identifier,
		modname: $ => $.identifier,

		ret: $ => seq(
			'ret',
			choice($.value, $.call)
		),

		vardecl: $ => seq(
			$.varname,
			':',
			$.type,
			optional(seq(
				'=',
				$.value
			))
		),

		assign: $ => seq(
			$.varname,
			'=',
			choice($.value, $.call)
		),

		addr: $ => seq(
			optional(choice('&', '*')),
			$.varname
		),

		value: $ => prec(2, choice(
			$.addr,
			$.varname,
			$.string,
			$.number
		)),

		call: $ => prec(1, choice(
			seq(
				$.funcname,
				'(',
				repeat(seq(
					$.value,
					','
				)),
				optional($.value),
				')'
			)
		)),

		builtin_call: $ => seq(
			$.funcname,
			'(',
			repeat(seq(
				choice($.value, $.type),
				','
			)),
			optional(choice($.value, $.type)),
			')'
		),

		plain_type: $ => token(choice(
			'null', 'bool', 'i8',
			'i16', 'i32', 'i64',
			'i128', 'u8', 'u16',
			'u32', 'u64', 'u128',
			'f32', 'f64'
		)),

		keyword: $ => token(choice(
			'fn', 'for', 'while',
			'and', 'or', 'not',
			'ret', 'use', 'type'
		)),

		type: $ => prec(3, seq(
			optional(choice('&','*')),
			choice($.identifier, $.plain_type)
		)),

		identifier: $ => /[A-z_]\w*/,
		number: $ => /\d+/,
		string: $ => /(".*"|'.*')/
	}
});
