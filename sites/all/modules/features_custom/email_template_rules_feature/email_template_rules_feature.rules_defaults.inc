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
  $items['rules_email_advisor_ar_complete_reply'] = entity_import('rules_config', '{ "rules_email_advisor_ar_complete_reply" : {
      "LABEL" : "Email: Advisor AR Complete Reply",
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
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "4" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-client:field-advisor" ] },
            "ITEM" : { "advisor" : "Advisor" },
            "DO" : [
              { "mail" : {
                  "to" : [ "advisor:mail" ],
                  "subject" : "Annual Review Ready for Download",
                  "message" : "This letter is to notify you that annual review documents for [node:field-client:field-first-name] [node:field-client:field-last-name] are now ready for download from your portal on Westward\\u2019s website.  To access the files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login. New client files are highlighted. \\r\\n\\r\\nTo confirm that you now have all the statements to prepare your client\\u2019s tax return, please click the link below.\\r\\n\\r\\nhttp:\\/\\/westwardadvisors.com\\/cron\\/annual_review_confirmation.php?AID=[advisor:uid]\\u0026CID=[node:field-client:uid]\\r\\n\\r\\nA note will be sent to your client and associated advisors copied on this email confirming that you have received all tax reporting documents.   \\r\\n\\r\\nIf additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. If we have not received confirmation within one week, we will follow-up with a reminder email. \\r\\n\\r\\nThank you,\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.",
                  "from" : "service@westwardadvisors.com",
                  "language" : [ "" ]
                }
              },
              { "drupal_message" : { "message" : "\\u0027Advisor AR Complete Reply\\u0027 email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_email_advisor_ar_complete_reply_edited'] = entity_import('rules_config', '{ "rules_email_advisor_ar_complete_reply_edited" : {
      "LABEL" : "Email: Advisor AR Complete Reply - Edited",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "4" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-client:field-advisor" ] },
            "ITEM" : { "advisor" : "Advisor" },
            "DO" : [
              { "mail" : {
                  "to" : [ "advisor:mail" ],
                  "subject" : "Annual Review Ready for Download",
                  "message" : "This letter is to notify you that annual review documents for [node:field-client:field-first-name] [node:field-client:field-last-name] are now ready for download from your portal on Westward\\u2019s website.  To access the files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login. New client files are highlighted. \\r\\n\\r\\nTo confirm that you now have all the statements to prepare your client\\u2019s tax return, please click the link below.\\r\\n\\r\\nhttp:\\/\\/westwardadvisors.com\\/cron\\/annual_review_confirmation.php?AID=[advisor:uid]\\u0026CID=[node:field-client:uid]\\r\\n\\r\\nA note will be sent to your client and associated advisors copied on this email confirming that you have received all tax reporting documents.   \\r\\n\\r\\nIf additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. If we have not received confirmation within one week, we will follow-up with a reminder email. \\r\\n\\r\\nThank you,\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.",
                  "from" : "service@westwardadvisors.com",
                  "language" : [ "" ]
                }
              },
              { "drupal_message" : { "message" : "\\u0027Advisor AR Complete Reply\\u0027 email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_email_client_file_added_generic_client_message'] = entity_import('rules_config', '{ "rules_email_client_file_added_generic_client_message" : {
      "LABEL" : "Email: Client File Added - Generic Client Message",
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
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "3" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-client:mail" ],
            "subject" : "New File Posted in Your Client Pathway",
            "message" : "This note has been sent automatically from your Westward Client Pathway. \\r\\n\\r\\nA new document has been posted to your personal portal related to your Westward tax and estate plan. Please download and review the materials at your earliest convenience. \\r\\n\\r\\nIf you have any questions or would like your login instructions sent to you please send a note to the contact below. Or, if you prefer to receive the documents via either email or regular mail just let us know. \\r\\n\\r\\nThanks. \\r\\nYour Performance Optimizer Team\\r\\n",
            "from" : "service@westwardadvisors.com",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "\\u0027Client File Added - Generic Client Message\\u0027 email has been sent to [node:field-client:field-first-name] [node:field-client:field-last-name] ([node:field-client:mail])" } }
      ]
    }
  }');
  $items['rules_email_client_file_added_generic_message'] = entity_import('rules_config', '{ "rules_email_client_file_added_generic_message" : {
      "LABEL" : "Email: Client File Added - Generic Message",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "2" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-client:field-advisor" ] },
            "ITEM" : { "advisor" : "Advisor" },
            "DO" : [
              { "mail" : {
                  "to" : [ "advisor:mail" ],
                  "subject" : "Client File Added to Westward Advisor Pathway",
                  "message" : "[advisor:field-first-name] [advisor:field-last-name]\\r\\n\\r\\nA new document for [node:field-client:field-first-name] [node:field-client:field-last-name] is posted in Westward\\u0027s Advisor Pathway and ready for download. You can login to your account at: http:\\/\\/www.westwardadvisors.com\\/login\\r\\n\\r\\nThis note has been sent automatically from Westward\\u0027s Advisor Pathway. If you have any questions, please contact service@westwardadvisors.com. \\r\\n\\r\\nThank you\\r\\nWestward Advisors\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
                  "from" : "service@westwardadvisors.com",
                  "language" : [ "" ]
                }
              },
              { "drupal_message" : { "message" : "\\u0027Client File Added - Generic Advisor Message\\u0027 email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_test'] = entity_import('rules_config', '{ "rules_test" : {
      "LABEL" : "Email: Confirmation of Client Amendment Agreement",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
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
                  "message" : "[advisor:field-first-name] [advisor:field-last-name]\\r\\n\\r\\nWe are pleased to confirm that your client, [node:field-client:field-first-name] [node:field-client:field-last-name], has signed off on the policy and loan amendments to comply with the 2013 Budget changes affecting 10\\/8 Policies. The amendments automatically took effect on January 1, 2014.\\r\\n\\r\\nA copy of the insurer\\u2019s confirmation notice has been added to your client\\u2019s folder in your Advisor Pathway on our website for your reference.\\r\\n\\r\\nYou can login to your account at: http:\\/\\/www.westwardadvisors.com\\/login\\r\\n\\r\\nWe appreciate your assistance during this transition and look forward to working with you in 2014.\\r\\n\\r\\n\\r\\nWestward Advisors\\r\\nservice@westward advisors.com\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n",
                  "from" : "service@westwardadvisors.com",
                  "language" : [ "" ]
                }
              },
              { "drupal_message" : { "message" : "\\u0027Confirmation of Client Amendment Agreement\\u0027 email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
