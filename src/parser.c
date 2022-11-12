#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_DOTdecl = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_choice_DASHdomain = 5,
  anon_sym_COLON_DASH = 6,
  anon_sym_DOT = 7,
  anon_sym_SEMI = 8,
  anon_sym_BANG = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_DOTplan = 16,
  anon_sym_DOTinput = 17,
  anon_sym_DOToutput = 18,
  anon_sym_DOTprintsize = 19,
  anon_sym_DOTlimitsize = 20,
  anon_sym__ = 21,
  anon_sym_COLON = 22,
  anon_sym_DQUOTE = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym__string_content = 26,
  sym_identifier = 27,
  sym_number = 28,
  sym_source_file = 29,
  sym__element = 30,
  sym_relation_decl = 31,
  sym_choice_domain = 32,
  sym_rule = 33,
  sym_disjunction = 34,
  sym_conjunction = 35,
  sym_constraint = 36,
  sym_binary_constraint = 37,
  sym_query_plan = 38,
  sym_atom = 39,
  sym_directive = 40,
  sym_directive_qualifier = 41,
  sym_directive_attribute_assignment = 42,
  sym_directive_value = 43,
  sym_qualified_name = 44,
  sym_argument = 45,
  sym_variable = 46,
  sym_attribute = 47,
  sym_string = 48,
  sym_boolean_literal = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_relation_decl_repeat1 = 51,
  aux_sym_rule_repeat1 = 52,
  aux_sym_disjunction_repeat1 = 53,
  aux_sym_conjunction_repeat1 = 54,
  aux_sym_conjunction_repeat2 = 55,
  aux_sym_atom_repeat1 = 56,
  aux_sym_directive_repeat1 = 57,
  aux_sym_directive_repeat2 = 58,
  aux_sym_qualified_name_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTdecl] = ".decl",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_choice_DASHdomain] = "choice-domain",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_DOTplan] = ".plan",
  [anon_sym_DOTinput] = ".input",
  [anon_sym_DOToutput] = ".output",
  [anon_sym_DOTprintsize] = ".printsize",
  [anon_sym_DOTlimitsize] = ".limitsize",
  [anon_sym__] = "_",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__string_content] = "_string_content",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_relation_decl] = "relation_decl",
  [sym_choice_domain] = "choice_domain",
  [sym_rule] = "rule",
  [sym_disjunction] = "disjunction",
  [sym_conjunction] = "conjunction",
  [sym_constraint] = "constraint",
  [sym_binary_constraint] = "binary_constraint",
  [sym_query_plan] = "query_plan",
  [sym_atom] = "atom",
  [sym_directive] = "directive",
  [sym_directive_qualifier] = "directive_qualifier",
  [sym_directive_attribute_assignment] = "directive_attribute_assignment",
  [sym_directive_value] = "directive_value",
  [sym_qualified_name] = "qualified_name",
  [sym_argument] = "argument",
  [sym_variable] = "variable",
  [sym_attribute] = "attribute",
  [sym_string] = "string",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_relation_decl_repeat1] = "relation_decl_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_atom_repeat1] = "atom_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_directive_repeat2] = "directive_repeat2",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTdecl] = anon_sym_DOTdecl,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_choice_DASHdomain] = anon_sym_choice_DASHdomain,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_DOTplan] = anon_sym_DOTplan,
  [anon_sym_DOTinput] = anon_sym_DOTinput,
  [anon_sym_DOToutput] = anon_sym_DOToutput,
  [anon_sym_DOTprintsize] = anon_sym_DOTprintsize,
  [anon_sym_DOTlimitsize] = anon_sym_DOTlimitsize,
  [anon_sym__] = anon_sym__,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__string_content] = sym__string_content,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_relation_decl] = sym_relation_decl,
  [sym_choice_domain] = sym_choice_domain,
  [sym_rule] = sym_rule,
  [sym_disjunction] = sym_disjunction,
  [sym_conjunction] = sym_conjunction,
  [sym_constraint] = sym_constraint,
  [sym_binary_constraint] = sym_binary_constraint,
  [sym_query_plan] = sym_query_plan,
  [sym_atom] = sym_atom,
  [sym_directive] = sym_directive,
  [sym_directive_qualifier] = sym_directive_qualifier,
  [sym_directive_attribute_assignment] = sym_directive_attribute_assignment,
  [sym_directive_value] = sym_directive_value,
  [sym_qualified_name] = sym_qualified_name,
  [sym_argument] = sym_argument,
  [sym_variable] = sym_variable,
  [sym_attribute] = sym_attribute,
  [sym_string] = sym_string,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_relation_decl_repeat1] = aux_sym_relation_decl_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_directive_repeat2] = aux_sym_directive_repeat2,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOTdecl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_choice_DASHdomain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTplan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOToutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTprintsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlimitsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_relation_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_query_plan] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_value] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_attribute_name = 1,
  field_directive_attribute = 2,
  field_directive_value = 3,
  field_relation_name = 4,
  field_type_name = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attribute_name] = "attribute_name",
  [field_directive_attribute] = "directive_attribute",
  [field_directive_value] = "directive_value",
  [field_relation_name] = "relation_name",
  [field_type_name] = "type_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_relation_name, 1},
  [1] =
    {field_attribute_name, 0},
    {field_type_name, 2},
  [3] =
    {field_directive_attribute, 0},
    {field_directive_value, 2},
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
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
  [69] = 14,
  [70] = 70,
  [71] = 16,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 15,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 20,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
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
  [117] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'z') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'z') ADVANCE(13);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOTdecl);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOTplan);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOTinput);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOToutput);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOTprintsize);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOTlimitsize);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__string_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 45},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 45},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 45},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 45},
  [95] = {.lex_state = 45},
  [96] = {.lex_state = 45},
  [97] = {.lex_state = 45},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 44},
  [102] = {.lex_state = 45},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 45},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 45},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 45},
  [117] = {.lex_state = 45},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTdecl] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_choice_DASHdomain] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_DOTinput] = ACTIONS(1),
    [anon_sym_DOToutput] = ACTIONS(1),
    [anon_sym_DOTprintsize] = ACTIONS(1),
    [anon_sym_DOTlimitsize] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(114),
    [sym__element] = STATE(10),
    [sym_relation_decl] = STATE(10),
    [sym_rule] = STATE(10),
    [sym_atom] = STATE(80),
    [sym_directive] = STATE(10),
    [sym_directive_qualifier] = STATE(94),
    [sym_qualified_name] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOTdecl] = ACTIONS(5),
    [anon_sym_DOTinput] = ACTIONS(7),
    [anon_sym_DOToutput] = ACTIONS(7),
    [anon_sym_DOTprintsize] = ACTIONS(7),
    [anon_sym_DOTlimitsize] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(19), 1,
      sym_variable,
    STATE(40), 1,
      sym_argument,
    STATE(52), 1,
      sym_conjunction,
    STATE(104), 1,
      sym_disjunction,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_constraint,
      sym_atom,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [43] = 13,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(19), 1,
      sym_variable,
    STATE(40), 1,
      sym_argument,
    STATE(52), 1,
      sym_conjunction,
    STATE(103), 1,
      sym_disjunction,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_constraint,
      sym_atom,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [86] = 13,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(19), 1,
      sym_variable,
    STATE(40), 1,
      sym_argument,
    STATE(52), 1,
      sym_conjunction,
    STATE(108), 1,
      sym_qualified_name,
    STATE(112), 1,
      sym_disjunction,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_constraint,
      sym_atom,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [129] = 13,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(19), 1,
      sym_variable,
    STATE(40), 1,
      sym_argument,
    STATE(52), 1,
      sym_conjunction,
    STATE(108), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym_disjunction,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_constraint,
      sym_atom,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [172] = 13,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(19), 1,
      sym_variable,
    STATE(40), 1,
      sym_argument,
    STATE(52), 1,
      sym_conjunction,
    STATE(100), 1,
      sym_disjunction,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_constraint,
      sym_atom,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [215] = 13,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(19), 1,
      sym_variable,
    STATE(40), 1,
      sym_argument,
    STATE(52), 1,
      sym_conjunction,
    STATE(107), 1,
      sym_disjunction,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_constraint,
      sym_atom,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [258] = 8,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_DOTdecl,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(80), 1,
      sym_atom,
    STATE(94), 1,
      sym_directive_qualifier,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(26), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(8), 5,
      sym__element,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      aux_sym_source_file_repeat1,
  [290] = 12,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(19), 1,
      sym_variable,
    STATE(40), 1,
      sym_argument,
    STATE(68), 1,
      sym_conjunction,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_constraint,
      sym_atom,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [330] = 8,
    ACTIONS(5), 1,
      anon_sym_DOTdecl,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym_atom,
    STATE(94), 1,
      sym_directive_qualifier,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(7), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(8), 5,
      sym__element,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      aux_sym_source_file_repeat1,
  [362] = 11,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      anon_sym_BANG,
    STATE(19), 1,
      sym_variable,
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_argument,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(50), 2,
      sym_constraint,
      sym_atom,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [399] = 11,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_BANG,
    STATE(13), 1,
      aux_sym_conjunction_repeat1,
    STATE(19), 1,
      sym_variable,
    STATE(40), 1,
      sym_argument,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(64), 2,
      sym_constraint,
      sym_atom,
  [436] = 11,
    ACTIONS(15), 1,
      anon_sym__,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(36), 1,
      anon_sym_BANG,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_variable,
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_argument,
    STATE(108), 1,
      sym_qualified_name,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(62), 2,
      sym_constraint,
      sym_atom,
  [473] = 3,
    ACTIONS(46), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(44), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [491] = 3,
    ACTIONS(50), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [509] = 3,
    ACTIONS(46), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(53), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [527] = 4,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_directive_repeat1,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [546] = 4,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      aux_sym_directive_repeat1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [565] = 2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [580] = 2,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [595] = 2,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [610] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_directive_repeat1,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [627] = 3,
    ACTIONS(82), 1,
      anon_sym_DOTplan,
    STATE(38), 1,
      sym_query_plan,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [643] = 5,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [663] = 1,
    ACTIONS(75), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [675] = 4,
    ACTIONS(88), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(34), 1,
      sym_choice_domain,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
  [693] = 3,
    ACTIONS(82), 1,
      anon_sym_DOTplan,
    STATE(39), 1,
      sym_query_plan,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [709] = 4,
    ACTIONS(88), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(36), 1,
      sym_choice_domain,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
  [727] = 1,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [737] = 1,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [747] = 5,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(85), 1,
      sym_directive_value,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_string,
      sym_boolean_literal,
  [765] = 1,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [775] = 4,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_BANG,
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(113), 4,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [791] = 1,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [801] = 1,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [811] = 1,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [821] = 1,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [831] = 1,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [841] = 1,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      sym_identifier,
  [851] = 2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [862] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(129), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [874] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(131), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [886] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(133), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [898] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(133), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [910] = 1,
    ACTIONS(135), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [918] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(140), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [930] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(142), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [942] = 1,
    ACTIONS(144), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [950] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(146), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [962] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(142), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [974] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(129), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [986] = 3,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(148), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [997] = 3,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(152), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1008] = 1,
    ACTIONS(157), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1015] = 1,
    ACTIONS(159), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1022] = 3,
    STATE(19), 1,
      sym_variable,
    STATE(70), 1,
      sym_argument,
    ACTIONS(15), 2,
      anon_sym__,
      sym_identifier,
  [1033] = 1,
    ACTIONS(161), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1040] = 3,
    STATE(19), 1,
      sym_variable,
    STATE(88), 1,
      sym_argument,
    ACTIONS(15), 2,
      anon_sym__,
      sym_identifier,
  [1051] = 1,
    ACTIONS(163), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1058] = 3,
    STATE(19), 1,
      sym_variable,
    STATE(61), 1,
      sym_argument,
    ACTIONS(15), 2,
      anon_sym__,
      sym_identifier,
  [1069] = 1,
    ACTIONS(165), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1076] = 1,
    ACTIONS(167), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1083] = 3,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1094] = 1,
    ACTIONS(140), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1101] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_atom_repeat1,
  [1111] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_relation_decl_repeat1,
  [1121] = 3,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(84), 1,
      sym_atom,
    STATE(108), 1,
      sym_qualified_name,
  [1131] = 1,
    ACTIONS(152), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1137] = 3,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_qualified_name_repeat1,
  [1147] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_atom_repeat1,
  [1157] = 3,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
  [1167] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_relation_decl_repeat1,
  [1177] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_COLON_DASH,
    STATE(76), 1,
      aux_sym_rule_repeat1,
  [1187] = 3,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_directive_repeat2,
  [1197] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_directive_repeat2,
  [1207] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_COLON_DASH,
    STATE(76), 1,
      aux_sym_rule_repeat1,
  [1217] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_directive_repeat2,
  [1227] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_relation_decl_repeat1,
  [1237] = 3,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
  [1247] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_COLON_DASH,
    STATE(73), 1,
      aux_sym_rule_repeat1,
  [1257] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_directive_repeat2,
  [1267] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_directive_repeat2,
  [1277] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_atom_repeat1,
  [1287] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [1292] = 1,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1297] = 1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1302] = 1,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1307] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1312] = 1,
    ACTIONS(48), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [1317] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(66), 1,
      sym_attribute,
  [1324] = 2,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(98), 1,
      sym_directive_attribute_assignment,
  [1331] = 2,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(82), 1,
      sym_directive_attribute_assignment,
  [1338] = 1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1343] = 2,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(17), 1,
      sym_qualified_name,
  [1350] = 2,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(77), 1,
      sym_directive_attribute_assignment,
  [1357] = 2,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(25), 1,
      sym_qualified_name,
  [1364] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(87), 1,
      sym_attribute,
  [1371] = 1,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1376] = 1,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1381] = 1,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
  [1385] = 1,
    ACTIONS(236), 1,
      sym__string_content,
  [1389] = 1,
    ACTIONS(238), 1,
      sym_identifier,
  [1393] = 1,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
  [1397] = 1,
    ACTIONS(242), 1,
      anon_sym_DOT,
  [1401] = 1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
  [1405] = 1,
    ACTIONS(246), 1,
      sym_identifier,
  [1409] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [1413] = 1,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
  [1417] = 1,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
  [1421] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [1425] = 1,
    ACTIONS(256), 1,
      sym_identifier,
  [1429] = 1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
  [1433] = 1,
    ACTIONS(260), 1,
      anon_sym_DOT,
  [1437] = 1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1441] = 1,
    ACTIONS(264), 1,
      anon_sym_EQ,
  [1445] = 1,
    ACTIONS(266), 1,
      sym_identifier,
  [1449] = 1,
    ACTIONS(268), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 215,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 362,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 436,
  [SMALL_STATE(14)] = 473,
  [SMALL_STATE(15)] = 491,
  [SMALL_STATE(16)] = 509,
  [SMALL_STATE(17)] = 527,
  [SMALL_STATE(18)] = 546,
  [SMALL_STATE(19)] = 565,
  [SMALL_STATE(20)] = 580,
  [SMALL_STATE(21)] = 595,
  [SMALL_STATE(22)] = 610,
  [SMALL_STATE(23)] = 627,
  [SMALL_STATE(24)] = 643,
  [SMALL_STATE(25)] = 663,
  [SMALL_STATE(26)] = 675,
  [SMALL_STATE(27)] = 693,
  [SMALL_STATE(28)] = 709,
  [SMALL_STATE(29)] = 727,
  [SMALL_STATE(30)] = 737,
  [SMALL_STATE(31)] = 747,
  [SMALL_STATE(32)] = 765,
  [SMALL_STATE(33)] = 775,
  [SMALL_STATE(34)] = 791,
  [SMALL_STATE(35)] = 801,
  [SMALL_STATE(36)] = 811,
  [SMALL_STATE(37)] = 821,
  [SMALL_STATE(38)] = 831,
  [SMALL_STATE(39)] = 841,
  [SMALL_STATE(40)] = 851,
  [SMALL_STATE(41)] = 862,
  [SMALL_STATE(42)] = 874,
  [SMALL_STATE(43)] = 886,
  [SMALL_STATE(44)] = 898,
  [SMALL_STATE(45)] = 910,
  [SMALL_STATE(46)] = 918,
  [SMALL_STATE(47)] = 930,
  [SMALL_STATE(48)] = 942,
  [SMALL_STATE(49)] = 950,
  [SMALL_STATE(50)] = 962,
  [SMALL_STATE(51)] = 974,
  [SMALL_STATE(52)] = 986,
  [SMALL_STATE(53)] = 997,
  [SMALL_STATE(54)] = 1008,
  [SMALL_STATE(55)] = 1015,
  [SMALL_STATE(56)] = 1022,
  [SMALL_STATE(57)] = 1033,
  [SMALL_STATE(58)] = 1040,
  [SMALL_STATE(59)] = 1051,
  [SMALL_STATE(60)] = 1058,
  [SMALL_STATE(61)] = 1069,
  [SMALL_STATE(62)] = 1076,
  [SMALL_STATE(63)] = 1083,
  [SMALL_STATE(64)] = 1094,
  [SMALL_STATE(65)] = 1101,
  [SMALL_STATE(66)] = 1111,
  [SMALL_STATE(67)] = 1121,
  [SMALL_STATE(68)] = 1131,
  [SMALL_STATE(69)] = 1137,
  [SMALL_STATE(70)] = 1147,
  [SMALL_STATE(71)] = 1157,
  [SMALL_STATE(72)] = 1167,
  [SMALL_STATE(73)] = 1177,
  [SMALL_STATE(74)] = 1187,
  [SMALL_STATE(75)] = 1197,
  [SMALL_STATE(76)] = 1207,
  [SMALL_STATE(77)] = 1217,
  [SMALL_STATE(78)] = 1227,
  [SMALL_STATE(79)] = 1237,
  [SMALL_STATE(80)] = 1247,
  [SMALL_STATE(81)] = 1257,
  [SMALL_STATE(82)] = 1267,
  [SMALL_STATE(83)] = 1277,
  [SMALL_STATE(84)] = 1287,
  [SMALL_STATE(85)] = 1292,
  [SMALL_STATE(86)] = 1297,
  [SMALL_STATE(87)] = 1302,
  [SMALL_STATE(88)] = 1307,
  [SMALL_STATE(89)] = 1312,
  [SMALL_STATE(90)] = 1317,
  [SMALL_STATE(91)] = 1324,
  [SMALL_STATE(92)] = 1331,
  [SMALL_STATE(93)] = 1338,
  [SMALL_STATE(94)] = 1343,
  [SMALL_STATE(95)] = 1350,
  [SMALL_STATE(96)] = 1357,
  [SMALL_STATE(97)] = 1364,
  [SMALL_STATE(98)] = 1371,
  [SMALL_STATE(99)] = 1376,
  [SMALL_STATE(100)] = 1381,
  [SMALL_STATE(101)] = 1385,
  [SMALL_STATE(102)] = 1389,
  [SMALL_STATE(103)] = 1393,
  [SMALL_STATE(104)] = 1397,
  [SMALL_STATE(105)] = 1401,
  [SMALL_STATE(106)] = 1405,
  [SMALL_STATE(107)] = 1409,
  [SMALL_STATE(108)] = 1413,
  [SMALL_STATE(109)] = 1417,
  [SMALL_STATE(110)] = 1421,
  [SMALL_STATE(111)] = 1425,
  [SMALL_STATE(112)] = 1429,
  [SMALL_STATE(113)] = 1433,
  [SMALL_STATE(114)] = 1437,
  [SMALL_STATE(115)] = 1441,
  [SMALL_STATE(116)] = 1445,
  [SMALL_STATE(117)] = 1449,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(117),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(96),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(33),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(91),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(67),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(97),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(102),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(58),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_qualifier, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_souffle(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
