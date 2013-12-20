<?php
/**
 * @file
 * email_template_rules_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function email_template_rules_feature_default_rules_configuration() {
  $items = array();
  $items['rules_test'] = entity_import('rules_config', '{ "rules_test" : {
      "LABEL" : "Email: Confirmation of Client Amendment Agreement",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "data_is" : { "data" : [ "node:field-email-template" ], "value" : "1" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-client:field-advisor" ] },
            "ITEM" : { "advisor" : "Advisor" },
            "DO" : [
              { "mail" : {
                  "to" : [ "advisor:mail" ],
                  "subject" : "Westward - Confirmation of Client Amendment Agreement",
                  "message" : "[advisor:field-first-name] [advisor:field-last-name]\\r\\n\\r\\nWe are pleased to confirm that your client, [node:field-client:field-first-name] [node:field-client:field-last-name], has signed off on the policy and loan amendments to comply with the 2013 Budget changes affecting 10\\/8 Policies. The amendments will automatically take effect on January 1, 2014. \\r\\n\\r\\nA copy of the insurer\\u2019s confirmation notice has been added to your client\\u2019s folder in your Advisor Pathway on our website for your reference. You can login to your account at: http:\\/\\/www.westwardadvisors.com\\/login \\r\\n\\r\\nWe appreciate your assistance during this transition and look forward to working with you in the new year. \\r\\n\\r\\nWestward Advisors\\r\\n",
                  "from" : "service@westwardadvisors.com",
                  "language" : [ "" ]
                }
              },
              { "drupal_message" : { "message" : "Confirmation of Client Amendment Agreement email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
