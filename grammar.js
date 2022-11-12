module.exports = grammar({ 
  name: "souffle",

  rules: {
    source_file: $ => repeat($._element),
    _element: $ => choice(
        $.directive,
        $.relation_decl,
        $.rule,
    ),
    relation_decl: $ => seq(
        ".decl",
        field("relation_name", $.identifier),
        "(",
        commaSep1($.attribute),
        ")",
        optional($.choice_domain)
    ),
    choice_domain: _ => seq(
        "choice-domain"
        // TODO: $.choice_domain_attributes
    ),
    // choice_domain_attributes: _ => seq(
    //     // TODO
    // ),
    rule: $ => seq(
        commaSep1($.atom),
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
    atom: $ => seq(
        $.qualified_name,
        "(",
        commaSep1($.argument),
        ")",
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
        $.string,
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
        field("attribute_name", $.identifier),
        ":",
        field("type_name", $.identifier)
    ),
    string: $ => seq(
        '"',
        $._string_content,
        '"',
    ),
    boolean_literal: _ => choice("true", "false"),
    _string_content: _ => /[\s\d\w]+/,
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: _ => /\d+/,
  },
});

function commaSep1(rule) {
  return sep1(rule, ",")
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
