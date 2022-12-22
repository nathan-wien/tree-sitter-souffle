#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 3
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_DOTdecl = 1,
  anon_sym_COMMA = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_eqrel = 5,
  anon_sym_btree = 6,
  anon_sym_brie = 7,
  anon_sym_no_magic = 8,
  anon_sym_magic = 9,
  anon_sym_no_inline = 10,
  anon_sym_inline = 11,
  anon_sym_override = 12,
  anon_sym_choice_DASHdomain = 13,
  anon_sym_COLON_DASH = 14,
  anon_sym_DOT = 15,
  anon_sym_SEMI = 16,
  anon_sym_BANG = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_EQ = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_DOTplan = 24,
  anon_sym_DOTinput = 25,
  anon_sym_DOToutput = 26,
  anon_sym_DOTprintsize = 27,
  anon_sym_DOTlimitsize = 28,
  anon_sym__ = 29,
  anon_sym_COLON = 30,
  anon_sym_DOTtype = 31,
  anon_sym_LT_COLON = 32,
  anon_sym_PIPE = 33,
  anon_sym_number = 34,
  anon_sym_symbol = 35,
  anon_sym_unsigned = 36,
  anon_sym_float = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  sym_string_literal = 40,
  sym_identifier = 41,
  sym_number = 42,
  sym_source_file = 43,
  sym__element = 44,
  sym_relation_decl = 45,
  sym_relation_qualifier = 46,
  sym_choice_domain = 47,
  sym_choice_domain_attribute = 48,
  sym_choice_domain_tuple_attribute = 49,
  sym_rule = 50,
  sym_disjunction = 51,
  sym_conjunction = 52,
  sym_constraint = 53,
  sym_binary_constraint = 54,
  sym_query_plan = 55,
  sym_directive = 56,
  sym_directive_qualifier = 57,
  sym_directive_attribute_assignment = 58,
  sym_directive_value = 59,
  sym_qualified_name = 60,
  sym_argument = 61,
  sym_variable = 62,
  sym_attribute = 63,
  sym_fact = 64,
  sym_type_decl = 65,
  sym_subtype_decl = 66,
  sym_equivalence_type_decl = 67,
  sym_union_type_decl = 68,
  sym_type_name = 69,
  sym_primitive_type = 70,
  sym_atom = 71,
  sym_boolean_literal = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_relation_decl_repeat1 = 74,
  aux_sym_relation_decl_repeat2 = 75,
  aux_sym_relation_decl_repeat3 = 76,
  aux_sym_choice_domain_repeat1 = 77,
  aux_sym_rule_repeat1 = 78,
  aux_sym_disjunction_repeat1 = 79,
  aux_sym_conjunction_repeat1 = 80,
  aux_sym_conjunction_repeat2 = 81,
  aux_sym_directive_repeat1 = 82,
  aux_sym_directive_repeat2 = 83,
  aux_sym_qualified_name_repeat1 = 84,
  aux_sym_union_type_decl_repeat1 = 85,
  aux_sym_atom_repeat1 = 86,
  alias_sym_attribute_name = 87,
  alias_sym_choice_domain_single_attribute = 88,
  alias_sym_user_defined_type = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTdecl] = ".decl",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_eqrel] = "eqrel",
  [anon_sym_btree] = "btree",
  [anon_sym_brie] = "brie",
  [anon_sym_no_magic] = "no_magic",
  [anon_sym_magic] = "magic",
  [anon_sym_no_inline] = "no_inline",
  [anon_sym_inline] = "inline",
  [anon_sym_override] = "override",
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
  [anon_sym_DOTtype] = ".type",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_PIPE] = "|",
  [anon_sym_number] = "number",
  [anon_sym_symbol] = "symbol",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_string_literal] = "string_literal",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_relation_decl] = "relation_decl",
  [sym_relation_qualifier] = "relation_qualifier",
  [sym_choice_domain] = "choice_domain",
  [sym_choice_domain_attribute] = "choice_domain_attribute",
  [sym_choice_domain_tuple_attribute] = "choice_domain_tuple_attribute",
  [sym_rule] = "rule",
  [sym_disjunction] = "disjunction",
  [sym_conjunction] = "conjunction",
  [sym_constraint] = "constraint",
  [sym_binary_constraint] = "binary_constraint",
  [sym_query_plan] = "query_plan",
  [sym_directive] = "directive",
  [sym_directive_qualifier] = "directive_qualifier",
  [sym_directive_attribute_assignment] = "directive_attribute_assignment",
  [sym_directive_value] = "directive_value",
  [sym_qualified_name] = "qualified_name",
  [sym_argument] = "argument",
  [sym_variable] = "variable",
  [sym_attribute] = "attribute",
  [sym_fact] = "fact",
  [sym_type_decl] = "type_decl",
  [sym_subtype_decl] = "subtype_decl",
  [sym_equivalence_type_decl] = "equivalence_type_decl",
  [sym_union_type_decl] = "union_type_decl",
  [sym_type_name] = "type_name",
  [sym_primitive_type] = "primitive_type",
  [sym_atom] = "atom",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_relation_decl_repeat1] = "relation_decl_repeat1",
  [aux_sym_relation_decl_repeat2] = "relation_decl_repeat2",
  [aux_sym_relation_decl_repeat3] = "relation_decl_repeat3",
  [aux_sym_choice_domain_repeat1] = "choice_domain_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_directive_repeat2] = "directive_repeat2",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
  [aux_sym_union_type_decl_repeat1] = "union_type_decl_repeat1",
  [aux_sym_atom_repeat1] = "atom_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_choice_domain_single_attribute] = "choice_domain_single_attribute",
  [alias_sym_user_defined_type] = "user_defined_type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTdecl] = anon_sym_DOTdecl,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_eqrel] = anon_sym_eqrel,
  [anon_sym_btree] = anon_sym_btree,
  [anon_sym_brie] = anon_sym_brie,
  [anon_sym_no_magic] = anon_sym_no_magic,
  [anon_sym_magic] = anon_sym_magic,
  [anon_sym_no_inline] = anon_sym_no_inline,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_override] = anon_sym_override,
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
  [anon_sym_DOTtype] = anon_sym_DOTtype,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_string_literal] = sym_string_literal,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_relation_decl] = sym_relation_decl,
  [sym_relation_qualifier] = sym_relation_qualifier,
  [sym_choice_domain] = sym_choice_domain,
  [sym_choice_domain_attribute] = sym_choice_domain_attribute,
  [sym_choice_domain_tuple_attribute] = sym_choice_domain_tuple_attribute,
  [sym_rule] = sym_rule,
  [sym_disjunction] = sym_disjunction,
  [sym_conjunction] = sym_conjunction,
  [sym_constraint] = sym_constraint,
  [sym_binary_constraint] = sym_binary_constraint,
  [sym_query_plan] = sym_query_plan,
  [sym_directive] = sym_directive,
  [sym_directive_qualifier] = sym_directive_qualifier,
  [sym_directive_attribute_assignment] = sym_directive_attribute_assignment,
  [sym_directive_value] = sym_directive_value,
  [sym_qualified_name] = sym_qualified_name,
  [sym_argument] = sym_argument,
  [sym_variable] = sym_variable,
  [sym_attribute] = sym_attribute,
  [sym_fact] = sym_fact,
  [sym_type_decl] = sym_type_decl,
  [sym_subtype_decl] = sym_subtype_decl,
  [sym_equivalence_type_decl] = sym_equivalence_type_decl,
  [sym_union_type_decl] = sym_union_type_decl,
  [sym_type_name] = sym_type_name,
  [sym_primitive_type] = sym_primitive_type,
  [sym_atom] = sym_atom,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_relation_decl_repeat1] = aux_sym_relation_decl_repeat1,
  [aux_sym_relation_decl_repeat2] = aux_sym_relation_decl_repeat2,
  [aux_sym_relation_decl_repeat3] = aux_sym_relation_decl_repeat3,
  [aux_sym_choice_domain_repeat1] = aux_sym_choice_domain_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_directive_repeat2] = aux_sym_directive_repeat2,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
  [aux_sym_union_type_decl_repeat1] = aux_sym_union_type_decl_repeat1,
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_choice_domain_single_attribute] = alias_sym_choice_domain_single_attribute,
  [alias_sym_user_defined_type] = alias_sym_user_defined_type,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqrel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
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
  [anon_sym_DOTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
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
  [sym_string_literal] = {
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
  [sym_relation_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_domain_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_domain_tuple_attribute] = {
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
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_subtype_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_equivalence_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
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
  [aux_sym_relation_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_domain_repeat1] = {
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
  [aux_sym_union_type_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_choice_domain_single_attribute] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_user_defined_type] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_directive_attribute = 1,
  field_directive_value = 2,
  field_relation_name = 3,
  field_rule_name = 4,
  field_type_ref = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_directive_attribute] = "directive_attribute",
  [field_directive_value] = "directive_value",
  [field_relation_name] = "relation_name",
  [field_rule_name] = "rule_name",
  [field_type_ref] = "type_ref",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_ref, 1},
  [1] =
    {field_rule_name, 0},
  [2] =
    {field_relation_name, 1},
  [3] =
    {field_rule_name, 0},
    {field_rule_name, 1},
  [5] =
    {field_relation_name, 1},
    {field_relation_name, 2},
  [7] =
    {field_directive_attribute, 0},
    {field_directive_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_user_defined_type,
  },
  [6] = {
    [0] = alias_sym_attribute_name,
  },
  [9] = {
    [0] = alias_sym_choice_domain_single_attribute,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_qualified_name, 2,
    sym_qualified_name,
    alias_sym_user_defined_type,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 25,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 26,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 24,
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
  [100] = 27,
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
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 153,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 49:
      if (lookahead == 'z') ADVANCE(17);
      END_STATE();
    case 50:
      if (lookahead == 'z') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 52:
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOTdecl);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOTplan);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOTinput);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOToutput);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOTprintsize);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOTlimitsize);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOTtype);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 54},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 52},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 52},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 52},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 52},
  [65] = {.lex_state = 52},
  [66] = {.lex_state = 52},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 52},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 52},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 52},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 52},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 52},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 52},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 52},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 52},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 52},
  [133] = {.lex_state = 52},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 52},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 52},
  [138] = {.lex_state = 52},
  [139] = {.lex_state = 52},
  [140] = {.lex_state = 52},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 52},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 52},
  [147] = {.lex_state = 52},
  [148] = {.lex_state = 53},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 52},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 52},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 52},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 52},
  [162] = {.lex_state = 52},
  [163] = {.lex_state = 52},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTdecl] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_eqrel] = ACTIONS(1),
    [anon_sym_btree] = ACTIONS(1),
    [anon_sym_brie] = ACTIONS(1),
    [anon_sym_no_magic] = ACTIONS(1),
    [anon_sym_magic] = ACTIONS(1),
    [anon_sym_no_inline] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
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
    [anon_sym_DOTtype] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(160),
    [sym__element] = STATE(11),
    [sym_relation_decl] = STATE(11),
    [sym_rule] = STATE(11),
    [sym_directive] = STATE(11),
    [sym_directive_qualifier] = STATE(135),
    [sym_qualified_name] = STATE(158),
    [sym_fact] = STATE(11),
    [sym_type_decl] = STATE(11),
    [sym_atom] = STATE(93),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOTdecl] = ACTIONS(5),
    [anon_sym_DOTinput] = ACTIONS(7),
    [anon_sym_DOToutput] = ACTIONS(7),
    [anon_sym_DOTprintsize] = ACTIONS(7),
    [anon_sym_DOTlimitsize] = ACTIONS(7),
    [anon_sym_DOTtype] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(17), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(70), 1,
      sym_choice_domain,
    STATE(4), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(13), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(15), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [33] = 6,
    ACTIONS(17), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(73), 1,
      sym_choice_domain,
    STATE(5), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(21), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(15), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [66] = 6,
    ACTIONS(17), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(69), 1,
      sym_choice_domain,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(15), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [99] = 6,
    ACTIONS(17), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(66), 1,
      sym_choice_domain,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(15), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [132] = 6,
    ACTIONS(17), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(70), 1,
      sym_choice_domain,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(13), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(15), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [165] = 6,
    ACTIONS(17), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(66), 1,
      sym_choice_domain,
    STATE(9), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(15), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [198] = 6,
    ACTIONS(17), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(71), 1,
      sym_choice_domain,
    STATE(6), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(15), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [231] = 6,
    ACTIONS(17), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(54), 1,
      sym_choice_domain,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(15), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [264] = 4,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(43), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [292] = 9,
    ACTIONS(5), 1,
      anon_sym_DOTdecl,
    ACTIONS(9), 1,
      anon_sym_DOTtype,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_atom,
    STATE(135), 1,
      sym_directive_qualifier,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(7), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(12), 7,
      sym__element,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [329] = 9,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_DOTdecl,
    ACTIONS(58), 1,
      anon_sym_DOTtype,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(93), 1,
      sym_atom,
    STATE(135), 1,
      sym_directive_qualifier,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(55), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(12), 7,
      sym__element,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [366] = 2,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
    ACTIONS(66), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
  [388] = 13,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_BANG,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_variable,
    STATE(76), 1,
      sym_argument,
    STATE(91), 1,
      sym_conjunction,
    STATE(157), 1,
      sym_disjunction,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [431] = 13,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_BANG,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_variable,
    STATE(76), 1,
      sym_argument,
    STATE(91), 1,
      sym_conjunction,
    STATE(154), 1,
      sym_disjunction,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [474] = 13,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_BANG,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_variable,
    STATE(76), 1,
      sym_argument,
    STATE(91), 1,
      sym_conjunction,
    STATE(150), 1,
      sym_disjunction,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [517] = 13,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_BANG,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_variable,
    STATE(76), 1,
      sym_argument,
    STATE(91), 1,
      sym_conjunction,
    STATE(156), 1,
      sym_disjunction,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [560] = 13,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_BANG,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_variable,
    STATE(76), 1,
      sym_argument,
    STATE(91), 1,
      sym_conjunction,
    STATE(149), 1,
      sym_disjunction,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [603] = 13,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_BANG,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_variable,
    STATE(76), 1,
      sym_argument,
    STATE(91), 1,
      sym_conjunction,
    STATE(152), 1,
      sym_disjunction,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [646] = 12,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_BANG,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_variable,
    STATE(76), 1,
      sym_argument,
    STATE(117), 1,
      sym_conjunction,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [686] = 11,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_BANG,
    STATE(40), 1,
      sym_variable,
    STATE(74), 1,
      aux_sym_conjunction_repeat1,
    STATE(76), 1,
      sym_argument,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [723] = 11,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_BANG,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_variable,
    STATE(74), 1,
      aux_sym_conjunction_repeat1,
    STATE(76), 1,
      sym_argument,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(106), 2,
      sym_constraint,
      sym_atom,
  [760] = 11,
    ACTIONS(72), 1,
      anon_sym__,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_BANG,
    STATE(22), 1,
      aux_sym_conjunction_repeat1,
    STATE(40), 1,
      sym_variable,
    STATE(76), 1,
      sym_argument,
    STATE(158), 1,
      sym_qualified_name,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_constraint,
      sym_atom,
    STATE(104), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [797] = 3,
    ACTIONS(90), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(88), 11,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [817] = 3,
    ACTIONS(90), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(92), 11,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [837] = 3,
    ACTIONS(96), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [857] = 2,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [874] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_directive_repeat1,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [892] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      aux_sym_directive_repeat1,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [912] = 1,
    ACTIONS(112), 11,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [926] = 1,
    ACTIONS(114), 11,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [940] = 4,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      aux_sym_directive_repeat1,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [960] = 1,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [974] = 3,
    ACTIONS(124), 1,
      anon_sym_DOTplan,
    STATE(56), 1,
      sym_query_plan,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [991] = 1,
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1004] = 3,
    ACTIONS(128), 1,
      anon_sym_PIPE,
    STATE(43), 1,
      aux_sym_union_type_decl_repeat1,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1021] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1038] = 3,
    ACTIONS(128), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      aux_sym_union_type_decl_repeat1,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1055] = 2,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [1070] = 2,
    ACTIONS(142), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(140), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [1085] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1102] = 3,
    ACTIONS(124), 1,
      anon_sym_DOTplan,
    STATE(59), 1,
      sym_query_plan,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1119] = 3,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    STATE(43), 1,
      aux_sym_union_type_decl_repeat1,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1136] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1153] = 2,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1167] = 1,
    ACTIONS(162), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1179] = 5,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [1199] = 1,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [1211] = 6,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_name,
    STATE(33), 1,
      sym_primitive_type,
    STATE(45), 1,
      sym_type_name,
    STATE(58), 1,
      sym_union_type_decl,
    ACTIONS(166), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1233] = 1,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1245] = 1,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1257] = 1,
    ACTIONS(172), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1269] = 1,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1281] = 1,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1292] = 5,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_name,
    STATE(33), 1,
      sym_primitive_type,
    STATE(38), 1,
      sym_type_name,
    ACTIONS(166), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1311] = 1,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1322] = 1,
    ACTIONS(180), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1333] = 1,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1344] = 1,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1355] = 1,
    ACTIONS(184), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1366] = 5,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_name,
    STATE(33), 1,
      sym_primitive_type,
    STATE(48), 1,
      sym_type_name,
    ACTIONS(166), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1385] = 1,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1396] = 1,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1407] = 1,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1418] = 1,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1429] = 1,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1440] = 1,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1451] = 5,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_name,
    STATE(33), 1,
      sym_primitive_type,
    STATE(60), 1,
      sym_type_name,
    ACTIONS(166), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1470] = 1,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1481] = 1,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1492] = 1,
    ACTIONS(13), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1503] = 5,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(31), 1,
      sym_qualified_name,
    STATE(33), 1,
      sym_primitive_type,
    STATE(134), 1,
      sym_type_name,
    ACTIONS(166), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1522] = 1,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTtype,
      sym_identifier,
  [1533] = 4,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_BANG,
    STATE(74), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(205), 4,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1549] = 5,
    ACTIONS(207), 1,
      sym_string_literal,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(136), 1,
      sym_boolean_literal,
    STATE(141), 1,
      sym_directive_value,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
  [1566] = 2,
    ACTIONS(211), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(213), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [1577] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(217), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1589] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(219), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1601] = 3,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(92), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1613] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(219), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1625] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(224), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1637] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(226), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1649] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(228), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1661] = 1,
    ACTIONS(230), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1669] = 3,
    ACTIONS(232), 1,
      anon_sym_DOT,
    STATE(85), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(94), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1681] = 1,
    ACTIONS(235), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1689] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(228), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1701] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(237), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1713] = 3,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(85), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1725] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(237), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1737] = 3,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(239), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1748] = 3,
    STATE(40), 1,
      sym_variable,
    STATE(101), 1,
      sym_argument,
    ACTIONS(72), 2,
      anon_sym__,
      sym_identifier,
  [1759] = 4,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_COLON_DASH,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_rule_repeat1,
  [1772] = 3,
    ACTIONS(249), 1,
      anon_sym_EQ,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    STATE(67), 2,
      sym_subtype_decl,
      sym_equivalence_type_decl,
  [1783] = 1,
    ACTIONS(253), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1790] = 3,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(255), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1801] = 3,
    STATE(40), 1,
      sym_variable,
    STATE(111), 1,
      sym_argument,
    ACTIONS(72), 2,
      anon_sym__,
      sym_identifier,
  [1812] = 1,
    ACTIONS(224), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1819] = 4,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(51), 1,
      sym_choice_domain_attribute,
    STATE(52), 1,
      sym_choice_domain_tuple_attribute,
  [1832] = 1,
    ACTIONS(94), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1839] = 1,
    ACTIONS(264), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1846] = 1,
    ACTIONS(266), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1853] = 1,
    ACTIONS(268), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1860] = 1,
    ACTIONS(270), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1867] = 3,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(275), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1878] = 1,
    ACTIONS(277), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1885] = 3,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(279), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1896] = 4,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(44), 1,
      sym_choice_domain_attribute,
    STATE(52), 1,
      sym_choice_domain_tuple_attribute,
  [1909] = 3,
    STATE(40), 1,
      sym_variable,
    STATE(142), 1,
      sym_argument,
    ACTIONS(72), 2,
      anon_sym__,
      sym_identifier,
  [1920] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      aux_sym_relation_decl_repeat1,
  [1930] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_atom_repeat1,
  [1940] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_directive_repeat2,
  [1950] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_relation_decl_repeat2,
  [1960] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      aux_sym_relation_decl_repeat1,
  [1970] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_relation_decl_repeat2,
  [1980] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_atom_repeat1,
  [1990] = 1,
    ACTIONS(255), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1996] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_relation_decl_repeat1,
  [2006] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(137), 1,
      sym_atom,
    STATE(158), 1,
      sym_qualified_name,
  [2016] = 3,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_directive_repeat2,
  [2026] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_directive_repeat2,
  [2036] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_COLON_DASH,
    STATE(129), 1,
      aux_sym_rule_repeat1,
  [2046] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_relation_decl_repeat2,
  [2056] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_directive_repeat2,
  [2066] = 3,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_directive_repeat2,
  [2076] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_atom_repeat1,
  [2086] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_relation_decl_repeat1,
  [2096] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_relation_decl_repeat2,
  [2106] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_COLON_DASH,
    STATE(129), 1,
      aux_sym_rule_repeat1,
  [2116] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_relation_decl_repeat2,
  [2126] = 1,
    ACTIONS(275), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2132] = 2,
    ACTIONS(337), 1,
      sym_identifier,
    STATE(130), 1,
      sym_attribute,
  [2139] = 2,
    ACTIONS(337), 1,
      sym_identifier,
    STATE(123), 1,
      sym_attribute,
  [2146] = 1,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2151] = 2,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(29), 1,
      sym_qualified_name,
  [2158] = 1,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2163] = 1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [2168] = 2,
    ACTIONS(337), 1,
      sym_identifier,
    STATE(144), 1,
      sym_attribute,
  [2175] = 2,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(124), 1,
      sym_directive_attribute_assignment,
  [2182] = 2,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(35), 1,
      sym_qualified_name,
  [2189] = 1,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2194] = 1,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2199] = 2,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(145), 1,
      sym_directive_attribute_assignment,
  [2206] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2211] = 1,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2216] = 2,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(112), 1,
      sym_directive_attribute_assignment,
  [2223] = 1,
    ACTIONS(349), 1,
      sym_identifier,
  [2227] = 1,
    ACTIONS(351), 1,
      anon_sym_COLON,
  [2231] = 1,
    ACTIONS(353), 1,
      anon_sym_DOT,
  [2235] = 1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2239] = 1,
    ACTIONS(357), 1,
      anon_sym_EQ,
  [2243] = 1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [2247] = 1,
    ACTIONS(361), 1,
      sym_identifier,
  [2251] = 1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
  [2255] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [2259] = 1,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
  [2263] = 1,
    ACTIONS(369), 1,
      anon_sym_DOT,
  [2267] = 1,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
  [2271] = 1,
    ACTIONS(373), 1,
      sym_identifier,
  [2275] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [2279] = 1,
    ACTIONS(377), 1,
      sym_identifier,
  [2283] = 1,
    ACTIONS(379), 1,
      sym_identifier,
  [2287] = 1,
    ACTIONS(381), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 329,
  [SMALL_STATE(13)] = 366,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 431,
  [SMALL_STATE(16)] = 474,
  [SMALL_STATE(17)] = 517,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 603,
  [SMALL_STATE(20)] = 646,
  [SMALL_STATE(21)] = 686,
  [SMALL_STATE(22)] = 723,
  [SMALL_STATE(23)] = 760,
  [SMALL_STATE(24)] = 797,
  [SMALL_STATE(25)] = 817,
  [SMALL_STATE(26)] = 837,
  [SMALL_STATE(27)] = 857,
  [SMALL_STATE(28)] = 874,
  [SMALL_STATE(29)] = 892,
  [SMALL_STATE(30)] = 912,
  [SMALL_STATE(31)] = 926,
  [SMALL_STATE(32)] = 940,
  [SMALL_STATE(33)] = 960,
  [SMALL_STATE(34)] = 974,
  [SMALL_STATE(35)] = 991,
  [SMALL_STATE(36)] = 1004,
  [SMALL_STATE(37)] = 1021,
  [SMALL_STATE(38)] = 1038,
  [SMALL_STATE(39)] = 1055,
  [SMALL_STATE(40)] = 1070,
  [SMALL_STATE(41)] = 1085,
  [SMALL_STATE(42)] = 1102,
  [SMALL_STATE(43)] = 1119,
  [SMALL_STATE(44)] = 1136,
  [SMALL_STATE(45)] = 1153,
  [SMALL_STATE(46)] = 1167,
  [SMALL_STATE(47)] = 1179,
  [SMALL_STATE(48)] = 1199,
  [SMALL_STATE(49)] = 1211,
  [SMALL_STATE(50)] = 1233,
  [SMALL_STATE(51)] = 1245,
  [SMALL_STATE(52)] = 1257,
  [SMALL_STATE(53)] = 1269,
  [SMALL_STATE(54)] = 1281,
  [SMALL_STATE(55)] = 1292,
  [SMALL_STATE(56)] = 1311,
  [SMALL_STATE(57)] = 1322,
  [SMALL_STATE(58)] = 1333,
  [SMALL_STATE(59)] = 1344,
  [SMALL_STATE(60)] = 1355,
  [SMALL_STATE(61)] = 1366,
  [SMALL_STATE(62)] = 1385,
  [SMALL_STATE(63)] = 1396,
  [SMALL_STATE(64)] = 1407,
  [SMALL_STATE(65)] = 1418,
  [SMALL_STATE(66)] = 1429,
  [SMALL_STATE(67)] = 1440,
  [SMALL_STATE(68)] = 1451,
  [SMALL_STATE(69)] = 1470,
  [SMALL_STATE(70)] = 1481,
  [SMALL_STATE(71)] = 1492,
  [SMALL_STATE(72)] = 1503,
  [SMALL_STATE(73)] = 1522,
  [SMALL_STATE(74)] = 1533,
  [SMALL_STATE(75)] = 1549,
  [SMALL_STATE(76)] = 1566,
  [SMALL_STATE(77)] = 1577,
  [SMALL_STATE(78)] = 1589,
  [SMALL_STATE(79)] = 1601,
  [SMALL_STATE(80)] = 1613,
  [SMALL_STATE(81)] = 1625,
  [SMALL_STATE(82)] = 1637,
  [SMALL_STATE(83)] = 1649,
  [SMALL_STATE(84)] = 1661,
  [SMALL_STATE(85)] = 1669,
  [SMALL_STATE(86)] = 1681,
  [SMALL_STATE(87)] = 1689,
  [SMALL_STATE(88)] = 1701,
  [SMALL_STATE(89)] = 1713,
  [SMALL_STATE(90)] = 1725,
  [SMALL_STATE(91)] = 1737,
  [SMALL_STATE(92)] = 1748,
  [SMALL_STATE(93)] = 1759,
  [SMALL_STATE(94)] = 1772,
  [SMALL_STATE(95)] = 1783,
  [SMALL_STATE(96)] = 1790,
  [SMALL_STATE(97)] = 1801,
  [SMALL_STATE(98)] = 1812,
  [SMALL_STATE(99)] = 1819,
  [SMALL_STATE(100)] = 1832,
  [SMALL_STATE(101)] = 1839,
  [SMALL_STATE(102)] = 1846,
  [SMALL_STATE(103)] = 1853,
  [SMALL_STATE(104)] = 1860,
  [SMALL_STATE(105)] = 1867,
  [SMALL_STATE(106)] = 1878,
  [SMALL_STATE(107)] = 1885,
  [SMALL_STATE(108)] = 1896,
  [SMALL_STATE(109)] = 1909,
  [SMALL_STATE(110)] = 1920,
  [SMALL_STATE(111)] = 1930,
  [SMALL_STATE(112)] = 1940,
  [SMALL_STATE(113)] = 1950,
  [SMALL_STATE(114)] = 1960,
  [SMALL_STATE(115)] = 1970,
  [SMALL_STATE(116)] = 1980,
  [SMALL_STATE(117)] = 1990,
  [SMALL_STATE(118)] = 1996,
  [SMALL_STATE(119)] = 2006,
  [SMALL_STATE(120)] = 2016,
  [SMALL_STATE(121)] = 2026,
  [SMALL_STATE(122)] = 2036,
  [SMALL_STATE(123)] = 2046,
  [SMALL_STATE(124)] = 2056,
  [SMALL_STATE(125)] = 2066,
  [SMALL_STATE(126)] = 2076,
  [SMALL_STATE(127)] = 2086,
  [SMALL_STATE(128)] = 2096,
  [SMALL_STATE(129)] = 2106,
  [SMALL_STATE(130)] = 2116,
  [SMALL_STATE(131)] = 2126,
  [SMALL_STATE(132)] = 2132,
  [SMALL_STATE(133)] = 2139,
  [SMALL_STATE(134)] = 2146,
  [SMALL_STATE(135)] = 2151,
  [SMALL_STATE(136)] = 2158,
  [SMALL_STATE(137)] = 2163,
  [SMALL_STATE(138)] = 2168,
  [SMALL_STATE(139)] = 2175,
  [SMALL_STATE(140)] = 2182,
  [SMALL_STATE(141)] = 2189,
  [SMALL_STATE(142)] = 2194,
  [SMALL_STATE(143)] = 2199,
  [SMALL_STATE(144)] = 2206,
  [SMALL_STATE(145)] = 2211,
  [SMALL_STATE(146)] = 2216,
  [SMALL_STATE(147)] = 2223,
  [SMALL_STATE(148)] = 2227,
  [SMALL_STATE(149)] = 2231,
  [SMALL_STATE(150)] = 2235,
  [SMALL_STATE(151)] = 2239,
  [SMALL_STATE(152)] = 2243,
  [SMALL_STATE(153)] = 2247,
  [SMALL_STATE(154)] = 2251,
  [SMALL_STATE(155)] = 2255,
  [SMALL_STATE(156)] = 2259,
  [SMALL_STATE(157)] = 2263,
  [SMALL_STATE(158)] = 2267,
  [SMALL_STATE(159)] = 2271,
  [SMALL_STATE(160)] = 2275,
  [SMALL_STATE(161)] = 2279,
  [SMALL_STATE(162)] = 2283,
  [SMALL_STATE(163)] = 2287,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 4),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(163),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(140),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_decl, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_decl, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(99),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_decl_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_decl_repeat1, 2), SHIFT_REPEAT(61),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalence_type_decl, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 9),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 7),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(74),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(23),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(153),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(147),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(138),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(143),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(109),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(119),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 8),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_qualifier, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
