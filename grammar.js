module.exports = grammar({ 
  name: "souffle",

  rules: {
    source_file: $ => repeat($._element),
    _element: $ => choice(
        $.directive,
        $.relation_decl,
        $.rule,
        $.fact,
        $.type_decl,
    ),
    relation_decl: $ => seq(
        ".decl",
        field("relation_name", commaSep1($.identifier)),
        "(",
        commaSep1($.attribute),
        ")",
        repeat($.relation_qualifier),
        optional($.choice_domain)
    ),
    relation_qualifier: _ => choice(
        "eqrel",
        "btree",
        "brie",
        "no_magic",
        "magic",
        "no_inline",
        "inline",
        "override"
    ),
    choice_domain: $ => seq(
        "choice-domain",
        commaSep1($.choice_domain_attribute)
    ),
    choice_domain_attribute: $ => choice(
        alias($.identifier, $.choice_domain_single_attribute),
        $.choice_domain_tuple_attribute,
    ),
    choice_domain_tuple_attribute: $ => seq(
        "(",
        commaSep1($.identifier),
        ")"
    ),
    rule: $ => seq(
        field('rule_name', commaSep1($.atom)),
        ":-",
        $.disjunction,
        '.',
        optional($.query_plan)
    ),
    disjunction: $ => sep1($.conjunction, ";"),
    conjunction: $ => commaSep1(
        seq(
            repeat("!"),
            choice(
                $.atom,
                $.constraint,
                seq(
                    "(",
                    $.disjunction,
                    ")"
                )
            ),
        )
    ),
    constraint: $ => choice(
        $.binary_constraint,
        $.boolean_literal
        // TODO: match and contains
    ),
    binary_constraint: $ => seq(
        $.argument,
        choice("<", ">", "<=", ">=", "=", "!="),
        $.argument
    ),
    query_plan: _ => seq(
        ".plan",
        // TODO
    ),
    directive: $ => seq(
        $.directive_qualifier,
        commaSep1($.qualified_name),
        optional(seq(
            "(",
            commaSep1($.directive_attribute_assignment),
            ")"
        ))
    ),
    directive_qualifier: _ => choice(
        ".input",
        ".output",
        ".printsize",
        ".limitsize"
    ),
    directive_attribute_assignment: $ => seq(
        field("directive_attribute", $.identifier),
        "=",
        field("directive_value", $.directive_value)
    ),
    directive_value: $ => choice(
        $.string_literal,
        $.identifier,
        $.boolean_literal
    ),
    qualified_name: $ => sep1($.identifier, "."),
    argument: $ => choice(
        $.variable
    ),
    variable: $ => choice(
        $.identifier,
        "_"
    ),
    attribute: $ => seq(
        alias($.identifier, $.attribute_name),
        ":",
        $.type_name
    ),
    fact: $ => seq(
        $.atom,
        "."
    ),
    type_decl: $ => seq(
        ".type",
        field("type_ref", $.identifier),
        choice(
            $.subtype_decl,
            $.equivalence_type_decl,
        )
    ),
    subtype_decl: $ => seq("<:", $.type_name),
    equivalence_type_decl: $ => seq("=",
        choice(
            $.union_type_decl,
            $.type_name,
            // TODO
            // $.record_list,
            // sep1($.adt_branch, "|")
        )
    ),
    union_type_decl: $ => prec(2, sep2($.type_name, "|")),
    type_name: $ => choice(
        $.primitive_type,
        alias($.qualified_name, $.user_defined_type)
    ),
    primitive_type: _ => choice(
        "number",
        "symbol",
        "unsigned",
        "float",
    ),
    atom: $ => seq(
        $.qualified_name,
        "(",
        commaSep1($.argument),
        ")",
    ),
    boolean_literal: _ => choice("true", "false"),
    string_literal: _ => token(
      seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),
    ),
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: _ => /\d+/,
  },
});

function commaSep1(rule) {
  return sep1(rule, ",")
}

function sep2(rule, separator) {
  return seq(rule, separator, rule, repeat(seq(separator, rule)))
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
