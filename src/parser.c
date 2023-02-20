#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_SLASH = 5,
  anon_sym_fn = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COLON = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_DASH_GT = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_type = 14,
  anon_sym_use = 15,
  anon_sym_DOT = 16,
  anon_sym_ret = 17,
  anon_sym_EQ = 18,
  anon_sym_AMP = 19,
  anon_sym_STAR = 20,
  sym_plain_type = 21,
  sym_keyword = 22,
  sym_identifier = 23,
  sym_number = 24,
  sym_string = 25,
  sym_module = 26,
  sym_comment = 27,
  sym_function = 28,
  sym_typedecl = 29,
  sym_use = 30,
  sym_use_block = 31,
  sym_use_field = 32,
  sym_statement = 33,
  sym_funcname = 34,
  sym_varname = 35,
  sym_modname = 36,
  sym_ret = 37,
  sym_vardecl = 38,
  sym_assign = 39,
  sym_addr = 40,
  sym_value = 41,
  sym_call = 42,
  sym_builtin_call = 43,
  sym_type = 44,
  aux_sym_module_repeat1 = 45,
  aux_sym_function_repeat1 = 46,
  aux_sym_function_repeat2 = 47,
  aux_sym_typedecl_repeat1 = 48,
  aux_sym_use_block_repeat1 = 49,
  aux_sym_use_field_repeat1 = 50,
  aux_sym_call_repeat1 = 51,
  aux_sym_builtin_call_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_use] = "use",
  [anon_sym_DOT] = ".",
  [anon_sym_ret] = "ret",
  [anon_sym_EQ] = "=",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [sym_plain_type] = "plain_type",
  [sym_keyword] = "keyword",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_module] = "module",
  [sym_comment] = "comment",
  [sym_function] = "function",
  [sym_typedecl] = "typedecl",
  [sym_use] = "use",
  [sym_use_block] = "use_block",
  [sym_use_field] = "use_field",
  [sym_statement] = "statement",
  [sym_funcname] = "funcname",
  [sym_varname] = "varname",
  [sym_modname] = "modname",
  [sym_ret] = "ret",
  [sym_vardecl] = "vardecl",
  [sym_assign] = "assign",
  [sym_addr] = "addr",
  [sym_value] = "value",
  [sym_call] = "call",
  [sym_builtin_call] = "builtin_call",
  [sym_type] = "type",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_function_repeat2] = "function_repeat2",
  [aux_sym_typedecl_repeat1] = "typedecl_repeat1",
  [aux_sym_use_block_repeat1] = "use_block_repeat1",
  [aux_sym_use_field_repeat1] = "use_field_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
  [aux_sym_builtin_call_repeat1] = "builtin_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_plain_type] = sym_plain_type,
  [sym_keyword] = sym_keyword,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_module] = sym_module,
  [sym_comment] = sym_comment,
  [sym_function] = sym_function,
  [sym_typedecl] = sym_typedecl,
  [sym_use] = sym_use,
  [sym_use_block] = sym_use_block,
  [sym_use_field] = sym_use_field,
  [sym_statement] = sym_statement,
  [sym_funcname] = sym_funcname,
  [sym_varname] = sym_varname,
  [sym_modname] = sym_modname,
  [sym_ret] = sym_ret,
  [sym_vardecl] = sym_vardecl,
  [sym_assign] = sym_assign,
  [sym_addr] = sym_addr,
  [sym_value] = sym_value,
  [sym_call] = sym_call,
  [sym_builtin_call] = sym_builtin_call,
  [sym_type] = sym_type,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_function_repeat2] = aux_sym_function_repeat2,
  [aux_sym_typedecl_repeat1] = aux_sym_typedecl_repeat1,
  [aux_sym_use_block_repeat1] = aux_sym_use_block_repeat1,
  [aux_sym_use_field_repeat1] = aux_sym_use_field_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
  [aux_sym_builtin_call_repeat1] = aux_sym_builtin_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_plain_type] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_typedecl] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_use_block] = {
    .visible = true,
    .named = true,
  },
  [sym_use_field] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_funcname] = {
    .visible = true,
    .named = true,
  },
  [sym_varname] = {
    .visible = true,
    .named = true,
  },
  [sym_modname] = {
    .visible = true,
    .named = true,
  },
  [sym_ret] = {
    .visible = true,
    .named = true,
  },
  [sym_vardecl] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_call] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 26,
  [40] = 40,
  [41] = 27,
  [42] = 24,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 29,
  [71] = 61,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 62,
  [76] = 32,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 65,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 92,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 102,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '&') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(20);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_ret);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_plain_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == '8') ADVANCE(41);
      if (lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == '8') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(50);
      if (lookahead == '6') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {(TSStateId)(-1)},
  [124] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_plain_type] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(115),
    [sym_comment] = STATE(1),
    [sym_function] = STATE(50),
    [sym_typedecl] = STATE(50),
    [sym_use] = STATE(50),
    [sym_funcname] = STATE(114),
    [sym_builtin_call] = STATE(50),
    [aux_sym_module_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_use] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(22), 1,
      sym_plain_type,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    ACTIONS(19), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(28), 2,
      sym_number,
      sym_string,
    STATE(2), 2,
      sym_comment,
      aux_sym_builtin_call_repeat1,
    STATE(110), 2,
      sym_value,
      sym_type,
  [38] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      sym_plain_type,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(2), 1,
      aux_sym_builtin_call_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    ACTIONS(33), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(39), 2,
      sym_number,
      sym_string,
    STATE(103), 2,
      sym_value,
      sym_type,
  [78] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      sym_plain_type,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_builtin_call_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    ACTIONS(33), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(39), 2,
      sym_number,
      sym_string,
    STATE(96), 2,
      sym_value,
      sym_type,
  [118] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_function_repeat2,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [155] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_function_repeat2,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [192] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_function_repeat2,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [229] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_function_repeat2,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [266] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_function_repeat2,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [303] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_function_repeat2,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [340] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_module_repeat1,
    STATE(114), 1,
      sym_funcname,
    STATE(50), 4,
      sym_function,
      sym_typedecl,
      sym_use,
      sym_builtin_call,
  [377] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_function_repeat2,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [414] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_function_repeat2,
    STATE(13), 1,
      sym_comment,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [451] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_function_repeat2,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [488] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      anon_sym_ret,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(15), 2,
      sym_comment,
      aux_sym_function_repeat2,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [523] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_fn,
    ACTIONS(74), 1,
      anon_sym_type,
    ACTIONS(77), 1,
      anon_sym_use,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(114), 1,
      sym_funcname,
    STATE(16), 2,
      sym_comment,
      aux_sym_module_repeat1,
    STATE(50), 4,
      sym_function,
      sym_typedecl,
      sym_use,
      sym_builtin_call,
  [558] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_function_repeat2,
    STATE(17), 1,
      sym_comment,
    STATE(85), 1,
      sym_statement,
    STATE(97), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    STATE(88), 4,
      sym_ret,
      sym_vardecl,
      sym_assign,
      sym_call,
  [595] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_call_repeat1,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    STATE(91), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_number,
      sym_string,
    ACTIONS(87), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [631] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(19), 1,
      sym_comment,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    ACTIONS(39), 2,
      sym_number,
      sym_string,
    ACTIONS(87), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(80), 2,
      sym_value,
      sym_call,
  [665] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_call_repeat1,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    STATE(100), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_number,
      sym_string,
    ACTIONS(87), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [701] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(21), 1,
      sym_comment,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    STATE(116), 1,
      sym_funcname,
    ACTIONS(39), 2,
      sym_number,
      sym_string,
    ACTIONS(87), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    STATE(82), 2,
      sym_value,
      sym_call,
  [735] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    STATE(117), 1,
      sym_value,
    ACTIONS(97), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(103), 2,
      sym_number,
      sym_string,
    STATE(22), 2,
      sym_comment,
      aux_sym_call_repeat1,
  [769] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(23), 1,
      sym_comment,
    STATE(43), 1,
      sym_addr,
    STATE(44), 1,
      sym_varname,
    STATE(83), 1,
      sym_value,
    ACTIONS(39), 2,
      sym_number,
      sym_string,
    ACTIONS(87), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [799] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(24), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_use_field_repeat1,
    ACTIONS(108), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [824] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(112), 2,
      sym_plain_type,
      sym_identifier,
    ACTIONS(17), 5,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      sym_number,
      sym_string,
  [845] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_DOT,
    STATE(26), 2,
      sym_comment,
      aux_sym_use_field_repeat1,
    ACTIONS(116), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [868] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_use_field_repeat1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [893] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym_string,
    STATE(28), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_use_block_repeat1,
    STATE(42), 1,
      sym_modname,
    STATE(81), 1,
      sym_use_field,
  [921] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
    ACTIONS(133), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [941] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_string,
    STATE(24), 1,
      sym_modname,
    STATE(30), 1,
      sym_comment,
    STATE(38), 2,
      sym_use_block,
      sym_use_field,
  [967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(95), 6,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_STAR,
      sym_identifier,
      sym_number,
      sym_string,
  [985] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_DOT,
    ACTIONS(116), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1005] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(146), 1,
      sym_string,
    STATE(42), 1,
      sym_modname,
    STATE(81), 1,
      sym_use_field,
    STATE(33), 2,
      sym_comment,
      aux_sym_use_block_repeat1,
  [1031] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_ret,
      sym_identifier,
    ACTIONS(149), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1051] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym_string,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_use_block_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(42), 1,
      sym_modname,
    STATE(81), 1,
      sym_use_field,
  [1079] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_ret,
      sym_identifier,
    ACTIONS(149), 3,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [1101] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_ret,
      sym_identifier,
    ACTIONS(157), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1120] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_comment,
    ACTIONS(163), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(39), 2,
      sym_comment,
      aux_sym_use_field_repeat1,
    ACTIONS(114), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
  [1158] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1177] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      anon_sym_DOT,
    STATE(39), 1,
      aux_sym_use_field_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
  [1198] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_use_field_repeat1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(106), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
  [1219] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_ret,
      sym_identifier,
    ACTIONS(174), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1238] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_ret,
      sym_identifier,
    ACTIONS(174), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1257] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_comment,
    ACTIONS(180), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1276] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_comment,
    ACTIONS(184), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1295] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    STATE(122), 1,
      sym_type,
    ACTIONS(35), 2,
      sym_plain_type,
      sym_identifier,
    ACTIONS(186), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [1316] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1335] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_comment,
    ACTIONS(194), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1354] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1373] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_comment,
    ACTIONS(202), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1392] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    STATE(111), 1,
      sym_type,
    ACTIONS(35), 2,
      sym_plain_type,
      sym_identifier,
    ACTIONS(186), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [1413] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1432] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
    ACTIONS(210), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1451] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1470] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    STATE(87), 1,
      sym_type,
    ACTIONS(35), 2,
      sym_plain_type,
      sym_identifier,
    ACTIONS(186), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [1491] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1510] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1529] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1548] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1567] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [1584] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(234), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [1601] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    STATE(95), 1,
      sym_type,
    ACTIONS(35), 2,
      sym_plain_type,
      sym_identifier,
    ACTIONS(186), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [1622] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1641] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_comment,
    ACTIONS(108), 4,
      anon_sym_fn,
      anon_sym_type,
      anon_sym_use,
      sym_identifier,
  [1660] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    STATE(74), 1,
      sym_type,
    ACTIONS(240), 2,
      anon_sym_AMP,
      anon_sym_STAR,
    ACTIONS(242), 2,
      sym_plain_type,
      sym_identifier,
  [1681] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 1,
      sym_comment,
    STATE(121), 1,
      sym_type,
    ACTIONS(35), 2,
      sym_plain_type,
      sym_identifier,
    ACTIONS(186), 2,
      anon_sym_AMP,
      anon_sym_STAR,
  [1702] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_typedecl_repeat1,
    STATE(120), 1,
      sym_varname,
  [1724] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_typedecl_repeat1,
    STATE(120), 1,
      sym_varname,
  [1746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_comment,
    ACTIONS(131), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_identifier,
      sym_string,
  [1762] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(248), 2,
      anon_sym_ret,
      sym_identifier,
  [1780] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_function_repeat1,
    STATE(112), 1,
      sym_varname,
  [1802] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_function_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(112), 1,
      sym_varname,
  [1824] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_ret,
      sym_identifier,
  [1844] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_RBRACE,
      anon_sym_EQ,
    ACTIONS(260), 2,
      anon_sym_ret,
      sym_identifier,
  [1862] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(114), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_identifier,
      sym_string,
  [1878] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(112), 1,
      sym_varname,
    STATE(77), 2,
      sym_comment,
      aux_sym_function_repeat1,
  [1898] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(120), 1,
      sym_varname,
    STATE(78), 2,
      sym_comment,
      aux_sym_typedecl_repeat1,
  [1918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_ret,
      sym_identifier,
  [1935] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_ret,
      sym_identifier,
  [1952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
  [1967] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_ret,
      sym_identifier,
  [1984] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_ret,
      sym_identifier,
  [2001] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_ret,
      sym_identifier,
  [2018] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_ret,
      sym_identifier,
  [2035] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(106), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_string,
  [2050] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [2067] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_ret,
      sym_identifier,
  [2084] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(306), 1,
      sym_plain_type,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(37), 1,
      sym_varname,
    STATE(89), 1,
      sym_comment,
  [2103] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_ret,
      sym_identifier,
  [2120] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_comment,
  [2136] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(316), 2,
      sym_plain_type,
      sym_identifier,
  [2150] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_comment,
  [2166] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(322), 1,
      anon_sym_DASH_GT,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_comment,
  [2182] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2196] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_comment,
  [2212] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(332), 1,
      anon_sym_EQ,
    STATE(97), 1,
      sym_comment,
  [2228] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [2242] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(306), 2,
      sym_plain_type,
      sym_identifier,
  [2256] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
  [2272] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [2286] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      sym_identifier,
    STATE(76), 1,
      sym_modname,
    STATE(102), 1,
      sym_comment,
  [2302] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym_comment,
  [2318] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(93), 1,
      sym_funcname,
    STATE(104), 1,
      sym_comment,
  [2334] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2348] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(32), 1,
      sym_modname,
    STATE(106), 1,
      sym_comment,
  [2364] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(342), 1,
      anon_sym_DASH_GT,
    ACTIONS(344), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_comment,
  [2380] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2394] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(37), 1,
      sym_varname,
    STATE(109), 1,
      sym_comment,
  [2410] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_comment,
  [2423] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_comment,
  [2436] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(348), 1,
      anon_sym_COLON,
    STATE(112), 1,
      sym_comment,
  [2449] = 4,
    ACTIONS(350), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      aux_sym_comment_token2,
    STATE(113), 1,
      sym_comment,
  [2462] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
  [2475] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_comment,
  [2488] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_comment,
  [2501] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      sym_comment,
  [2514] = 4,
    ACTIONS(350), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(362), 1,
      aux_sym_comment_token1,
    STATE(118), 1,
      sym_comment,
  [2527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(364), 1,
      anon_sym_SLASH,
    STATE(119), 1,
      sym_comment,
  [2540] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(366), 1,
      anon_sym_COLON,
    STATE(120), 1,
      sym_comment,
  [2553] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_comment,
  [2566] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_comment,
  [2579] = 1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [2583] = 1,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 229,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 303,
  [SMALL_STATE(11)] = 340,
  [SMALL_STATE(12)] = 377,
  [SMALL_STATE(13)] = 414,
  [SMALL_STATE(14)] = 451,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 523,
  [SMALL_STATE(17)] = 558,
  [SMALL_STATE(18)] = 595,
  [SMALL_STATE(19)] = 631,
  [SMALL_STATE(20)] = 665,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 735,
  [SMALL_STATE(23)] = 769,
  [SMALL_STATE(24)] = 799,
  [SMALL_STATE(25)] = 824,
  [SMALL_STATE(26)] = 845,
  [SMALL_STATE(27)] = 868,
  [SMALL_STATE(28)] = 893,
  [SMALL_STATE(29)] = 921,
  [SMALL_STATE(30)] = 941,
  [SMALL_STATE(31)] = 967,
  [SMALL_STATE(32)] = 985,
  [SMALL_STATE(33)] = 1005,
  [SMALL_STATE(34)] = 1031,
  [SMALL_STATE(35)] = 1051,
  [SMALL_STATE(36)] = 1079,
  [SMALL_STATE(37)] = 1101,
  [SMALL_STATE(38)] = 1120,
  [SMALL_STATE(39)] = 1139,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1177,
  [SMALL_STATE(42)] = 1198,
  [SMALL_STATE(43)] = 1219,
  [SMALL_STATE(44)] = 1238,
  [SMALL_STATE(45)] = 1257,
  [SMALL_STATE(46)] = 1276,
  [SMALL_STATE(47)] = 1295,
  [SMALL_STATE(48)] = 1316,
  [SMALL_STATE(49)] = 1335,
  [SMALL_STATE(50)] = 1354,
  [SMALL_STATE(51)] = 1373,
  [SMALL_STATE(52)] = 1392,
  [SMALL_STATE(53)] = 1413,
  [SMALL_STATE(54)] = 1432,
  [SMALL_STATE(55)] = 1451,
  [SMALL_STATE(56)] = 1470,
  [SMALL_STATE(57)] = 1491,
  [SMALL_STATE(58)] = 1510,
  [SMALL_STATE(59)] = 1529,
  [SMALL_STATE(60)] = 1548,
  [SMALL_STATE(61)] = 1567,
  [SMALL_STATE(62)] = 1584,
  [SMALL_STATE(63)] = 1601,
  [SMALL_STATE(64)] = 1622,
  [SMALL_STATE(65)] = 1641,
  [SMALL_STATE(66)] = 1660,
  [SMALL_STATE(67)] = 1681,
  [SMALL_STATE(68)] = 1702,
  [SMALL_STATE(69)] = 1724,
  [SMALL_STATE(70)] = 1746,
  [SMALL_STATE(71)] = 1762,
  [SMALL_STATE(72)] = 1780,
  [SMALL_STATE(73)] = 1802,
  [SMALL_STATE(74)] = 1824,
  [SMALL_STATE(75)] = 1844,
  [SMALL_STATE(76)] = 1862,
  [SMALL_STATE(77)] = 1878,
  [SMALL_STATE(78)] = 1898,
  [SMALL_STATE(79)] = 1918,
  [SMALL_STATE(80)] = 1935,
  [SMALL_STATE(81)] = 1952,
  [SMALL_STATE(82)] = 1967,
  [SMALL_STATE(83)] = 1984,
  [SMALL_STATE(84)] = 2001,
  [SMALL_STATE(85)] = 2018,
  [SMALL_STATE(86)] = 2035,
  [SMALL_STATE(87)] = 2050,
  [SMALL_STATE(88)] = 2067,
  [SMALL_STATE(89)] = 2084,
  [SMALL_STATE(90)] = 2103,
  [SMALL_STATE(91)] = 2120,
  [SMALL_STATE(92)] = 2136,
  [SMALL_STATE(93)] = 2150,
  [SMALL_STATE(94)] = 2166,
  [SMALL_STATE(95)] = 2182,
  [SMALL_STATE(96)] = 2196,
  [SMALL_STATE(97)] = 2212,
  [SMALL_STATE(98)] = 2228,
  [SMALL_STATE(99)] = 2242,
  [SMALL_STATE(100)] = 2256,
  [SMALL_STATE(101)] = 2272,
  [SMALL_STATE(102)] = 2286,
  [SMALL_STATE(103)] = 2302,
  [SMALL_STATE(104)] = 2318,
  [SMALL_STATE(105)] = 2334,
  [SMALL_STATE(106)] = 2348,
  [SMALL_STATE(107)] = 2364,
  [SMALL_STATE(108)] = 2380,
  [SMALL_STATE(109)] = 2394,
  [SMALL_STATE(110)] = 2410,
  [SMALL_STATE(111)] = 2423,
  [SMALL_STATE(112)] = 2436,
  [SMALL_STATE(113)] = 2449,
  [SMALL_STATE(114)] = 2462,
  [SMALL_STATE(115)] = 2475,
  [SMALL_STATE(116)] = 2488,
  [SMALL_STATE(117)] = 2501,
  [SMALL_STATE(118)] = 2514,
  [SMALL_STATE(119)] = 2527,
  [SMALL_STATE(120)] = 2540,
  [SMALL_STATE(121)] = 2553,
  [SMALL_STATE(122)] = 2566,
  [SMALL_STATE(123)] = 2579,
  [SMALL_STATE(124)] = 2583,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_builtin_call_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_call_repeat1, 2), SHIFT_REPEAT(89),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_builtin_call_repeat1, 2), SHIFT_REPEAT(61),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_builtin_call_repeat1, 2), SHIFT_REPEAT(105),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_builtin_call_repeat1, 2), SHIFT_REPEAT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat2, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(21),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_repeat2, 2), SHIFT_REPEAT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(104),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(47),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(30),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(101),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(109),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(34),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_field, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_field, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_builtin_call_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_field_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_field_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_field_repeat1, 2), SHIFT_REPEAT(106),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_field, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_field, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modname, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modname, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_block_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_block_repeat1, 2), SHIFT_REPEAT(70),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_block_repeat1, 2), SHIFT_REPEAT(86),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varname, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varname, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcname, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addr, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_field_repeat1, 2), SHIFT_REPEAT(102),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_call, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_call, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 10),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 10),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 9),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 9),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 8),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 7),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedecl, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedecl, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_call, 5),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_call, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_block, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedecl, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedecl, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_block, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_block, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_call, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_call, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardecl, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vardecl, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(34),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedecl_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedecl_repeat1, 2), SHIFT_REPEAT(34),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_block_repeat1, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vardecl, 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vardecl, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat2, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_repeat2, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedecl_repeat1, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_coffee(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
