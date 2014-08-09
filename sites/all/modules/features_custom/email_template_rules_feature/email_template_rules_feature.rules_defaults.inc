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
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
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
                  "subject" : "The LifeStep Process \\u2013 Annual Review Ready for Download",
                  "message" : "This letter is to notify you that Annual Review documents for [node:field-client:field-first-name] [node:field-client:field-last-name] are now ready for download from your portal on Westward\\u0027s website. \\r\\n\\r\\nThe Annual Review documents contain the financial and tax reporting information required for you to prepare annual financial statements and tax returns regarding your client\\u2019s life insurance plan created by our LifeStep Process and managed by The Performance Optimizer.   \\r\\n\\r\\nTo access the files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login.\\r\\n\\r\\nTo confirm that you now have all the documents required to prepare your client\\u2019s tax return in respect of the life insurance plan, please click the link below.\\r\\n\\r\\nhttp:\\/\\/westwardadvisors.com\\/cron\\/annual_review_confirmation.php?aid=[advisor:uid]\\u0026cid=[node:field-client:uid]\\r\\n\\r\\nUpon receiving your confirmation, a note will be sent to your client and associated advisors confirming that you have received all tax reporting documents.\\r\\n\\r\\nIf additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.\\r\\n\\r\\nThis note was sent automatically from Westward\\u0027s Advisor Pathway. If we have not received confirmation within one week, we will follow-up with a reminder email. \\r\\n\\r\\nThank you,\\r\\n\\r\\nYour Performance Optimizer Team\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.",
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
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
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
                  "subject" : "The LifeStep Process \\u2013 Annual Review Ready for Download",
                  "message" : "This letter is to notify you that Annual Review documents for [node:field-client:field-first-name] [node:field-client:field-last-name] are now ready for download from your portal on Westward\\u0027s website. \\r\\n\\r\\nThe Annual Review documents contain the financial and tax reporting information required for you to prepare annual financial statements and tax returns regarding your client\\u2019s life insurance plan created by our LifeStep Process and managed by The Performance Optimizer.   \\r\\n\\r\\nTo access the files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login.\\r\\n\\r\\nTo confirm that you now have all the documents required to prepare your client\\u2019s tax return in respect of the life insurance plan, please click the link below.\\r\\n\\r\\nhttp:\\/\\/westwardadvisors.com\\/cron\\/annual_review_confirmation.php?aid=[advisor:uid]\\u0026cid=[node:field-client:uid]\\r\\n\\r\\nUpon receiving your confirmation, a note will be sent to your client and associated advisors confirming that you have received all tax reporting documents.\\r\\n\\r\\nIf additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.\\r\\n\\r\\nThis note was sent automatically from Westward\\u0027s Advisor Pathway. If we have not received confirmation within one week, we will follow-up with a reminder email. \\r\\n\\r\\nThank you,\\r\\n\\r\\nYour Performance Optimizer Team\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.",
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
  $items['rules_email_advisor_file_added_email_attachment'] = entity_import('rules_config', '{ "rules_email_advisor_file_added_email_attachment" : {
      "LABEL" : "Email: Advisor File Added - Email Attachment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_insert--advisor_file" : { "bundle" : "advisor_file" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "advisor_file" : "advisor_file" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-adv:field-email-attachments" ], "value" : 1 } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "advisor-file-attachment",
            "to" : [ "node:field-adv:mail" ],
            "bcc" : "service@westwardadvisors.com",
            "from_name" : "Westward Advisors",
            "subject" : "Attached File Posted to Your Westward Portal",
            "body" : "\\u003Cp\\u003EAs requested, new files added to your Westward portal are  also automatically emailed to you.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease review the document at your earliest convenience.  Other files related to your Westward tax and estate plan are also posted in  your portal. You can access these files here \\u003Ca href=\\u0022http:\\/\\/www.westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/www.westwardadvisors.com\\/login\\u003C\\/a\\u003E. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EIf you have any questions or would like your login  instructions sent to you please send a note to \\u003Ca href=\\u0022mailto:service@westwardadvisors.com\\u0022\\u003Eservice@westwardadvisors.com\\u003C\\/a\\u003E. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThanks.\\u003Cbr\\u003E\\r\\n  Your Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\n  This message may contain confidential information and is intended only for the  recipient named. If you have received this email in error, please notify the  sender immediately via return email and then delete it. Unauthorized email  distribution is strictly prohibited. The sender does not accept liability for  any errors or omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
            "plaintext" : "As requested, new files added to your Westward portal are also automatically emailed to you. \\r\\n\\r\\nPlease review the document at your earliest convenience. Other files related to your Westward tax and estate plan are also posted in your portal. You can access these files here http:\\/\\/www.westwardadvisors.com\\/login. \\r\\n\\r\\nIf you have any questions or would like your login instructions sent to you please send a note to service@westwardadvisors.com. \\r\\n\\r\\nThanks.\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.",
            "attachments" : "sites\\/default\\/files\\/private\\/advisor-files\\/[node:field-file:file:name]",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "Email attachment has been sent to [node:field-adv:field-first-name] [node:field-adv:field-last-name] ([node:field-adv:mail])" } }
      ]
    }
  }');
  $items['rules_email_client_file_added_email_attachment'] = entity_import('rules_config', '{ "rules_email_client_file_added_email_attachment" : {
      "LABEL" : "Email: Client File Added -  Email Attachment",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-visible-to-client" ], "value" : 1 } },
        { "data_is" : { "data" : [ "node:field-client:field-email-attachments" ], "value" : 1 } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "client-file-attachment",
            "to" : [ "node:field-client:mail" ],
            "bcc" : "service@westwardadvisors.com",
            "from_name" : "Westward Advisors",
            "subject" : "Attached File Posted to Your Westward Portal",
            "body" : "\\u003Cp\\u003EAs requested, new files added to your Westward portal are  also automatically emailed to you.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease review the document at your earliest convenience.  Other files related to your Westward tax and estate plan are also posted in  your portal. You can access these files here \\u003Ca href=\\u0022http:\\/\\/www.westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/www.westwardadvisors.com\\/login\\u003C\\/a\\u003E. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EIf you have any questions or would like your login  instructions sent to you please send a note to \\u003Ca href=\\u0022mailto:service@westwardadvisors.com\\u0022\\u003Eservice@westwardadvisors.com\\u003C\\/a\\u003E. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ENote: you will receive another confirmation note that the file is posted to your client portal. Please disregard the message. The newly posted file is attached to this email. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThanks.\\u003Cbr\\u003E\\r\\n  Your Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\n  This message may contain confidential information and is intended only for the  recipient named. If you have received this email in error, please notify the  sender immediately via return email and then delete it. Unauthorized email  distribution is strictly prohibited. The sender does not accept liability for  any errors or omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
            "plaintext" : "As requested, new files added to your Westward portal are also automatically emailed to you. \\r\\n\\r\\nPlease review the document at your earliest convenience. Other files related to your Westward tax and estate plan are also posted in your portal. You can access these files here http:\\/\\/www.westwardadvisors.com\\/login. \\r\\n\\r\\nIf you have any questions or would like your login instructions sent to you please send a note to service@westwardadvisors.com. \\r\\n\\r\\nNote: you will receive another confirmation note that the file is posted to your client portal. Please disregard the message. The newly posted file is attached to this email. \\r\\n\\r\\nThanks.\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.",
            "attachments" : "sites\\/default\\/files\\/private\\/client-files\\/[node:field-file:file:name]",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "Email attachment has been sent to [node:field-client:field-first-name] [node:field-client:field-last-name] ([node:field-client:mail])" } }
      ]
    }
  }');
  $items['rules_email_client_file_added_generic_advisor_message'] = entity_import('rules_config', '{ "rules_email_client_file_added_generic_advisor_message" : {
      "LABEL" : "Email: Client File Added - Generic Advisor Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
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
  $items['rules_email_client_file_added_generic_client_message'] = entity_import('rules_config', '{ "rules_email_client_file_added_generic_client_message" : {
      "LABEL" : "Email: Client File Added - Generic Client Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-visible-to-client" ], "value" : 1 } },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "3" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-client:mail" ],
            "subject" : "New File Posted in Your Client Pathway",
            "message" : "This note has been sent automatically from your Westward Client Pathway. \\r\\n\\r\\nA new document has been posted to your personal portal related to your Westward tax and estate plan. Please download and review the materials at your earliest convenience. \\r\\n\\r\\nIf you have any questions or would like your login instructions sent to you please send a note to the contact below. Or, if you prefer to receive the documents via either email or regular mail just let us know. \\r\\n\\r\\nThanks. \\r\\nYour Performance Optimizer Team\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.",
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
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
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
  $items['rules_email_client_file_added_loan_renewal_industrial_alliance'] = entity_import('rules_config', '{ "rules_email_client_file_added_loan_renewal_industrial_alliance" : {
      "LABEL" : "Email: Client File Added - Loan Renewal - Industrial Alliance",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "5" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-client:field-advisor" ] },
            "ITEM" : { "advisor" : "Advisor" },
            "DO" : [
              { "drupal_message" : { "message" : "\\u0027Loan Renewal - Industrial Alliance\\u0027 email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } },
              { "mimemail" : {
                  "key" : "loan-industrial",
                  "to" : [ "advisor:mail" ],
                  "subject" : " Industrial Alliance Annual Loan Renewal",
                  "body" : "\\u003Cp\\u003EHi [node:field-client:field-first-name],\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEverything  to renew your Industrial Alliance loan is now available in your client portal  on Westward\\u0026rsquo;s website.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EACTIONS  REQUIRED within the next two weeks:\\u003C\\/p\\u003E\\r\\n\\u003Col\\u003E\\r\\n  \\u003Cli\\u003EPlease login to your portal and download your loan renewal file\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EPrint and sign the loan renewal forms\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EAttach your loan renewal cheques\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003ECall us to pick up the completed package\\u0026nbsp;\\u003C\\/li\\u003E\\r\\n\\u003C\\/ol\\u003E\\r\\n\\u003Cp\\u003ETo  access your files, simply login to your portal at\\u0026nbsp;\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/westwardadvisors.com\\/login\\u003C\\/a\\u003E.\\u003Cbr\\u003E\\r\\n  Renewing  the loan is part of your annual plan maintenance. It keeps the plan running  smoothly so you can achieve the full estate benefits and continue to increase  your tax recovery.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease  note, no action is required on the loan renewal package that you will receive  directly from Industrial Alliance by regular mail. \\u0026nbsp;It is a duplicate, so  please discard it.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EWe\\u0026rsquo;ve  also prepared a short video outlining your loan renewal steps and the benefits  it delivers. You can view the video by clicking on the link below:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/IA-CF-Renewal_Video\\/IA-CF-Renewal.html\\u0022\\u003EIndustrial  Alliance Loan Renewal Video\\u003C\\/a\\u003E\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis  note was sent automatically from Westward\\u0026rsquo;s Advisor Pathway. \\u0026nbsp;Your  advisor(s) are copied. if you have any questions, please contact your Westward  tax associate at your earliest convenience:\\u0026nbsp;\\u003Ca href=\\u0022mailto:michaell@westwardadvisors.com\\u0022\\u003Emichaell@westwardadvisors.com\\u003C\\/a\\u003E\\u0026nbsp;or \\u003Ca href=\\u0022mailto:viviank@westwardadvisors.com\\u0022\\u003Eviviank@westwardadvisors.com\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank  you,\\u003Cbr\\u003E\\r\\nYour  Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\n  This message may contain confidential information and is intended only for the  recipient named. If you have received this email in error, please notify the  sender immediately via return email and then delete it. Unauthorized email  distribution is strictly prohibited. The sender does not accept liability for  any errors or omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
                  "plaintext" : "Hi [node:field-client:field-first-name],\\r\\n\\r\\nEverything to renew your Industrial Alliance loan is now available in your client portal on Westward\\u2019s website.\\u00a0\\r\\n\\r\\nACTIONS REQUIRED within the next two weeks:\\r\\n\\r\\n- Please login to your portal and download your loan renewal file\\r\\n\\r\\n- Print and sign the loan renewal forms\\r\\n\\r\\n- Attach your loan renewal cheques\\r\\n\\r\\n- Call us to pick up the completed package\\u00a0\\r\\n\\r\\n\\r\\nTo access your files, simply login to your portal at\\u00a0http:\\/\\/westwardadvisors.com\\/login.\\r\\nRenewing the loan is part of your annual plan maintenance. It keeps the plan running smoothly so you can achieve the full estate benefits and continue to increase your tax recovery.\\r\\n\\r\\nPlease note, no action is required on the loan renewal package that you will receive directly from Industrial Alliance by regular mail. It is a duplicate, so please discard it.\\u00a0\\r\\n\\r\\nWe\\u2019ve also prepared a short video outlining your loan renewal steps and the benefits it delivers. You can view the video by clicking on the link below:\\r\\n\\r\\nIndustrial Alliance Loan Renewal Video\\r\\nhttp:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/IA-CF-Renewal_Video\\/IA-CF-Renewal.html\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. Your advisor(s) are copied. if you have any questions, please contact your Westward tax associate at your earliest convenience:\\u00a0michaell@westwardadvisors.com\\u00a0or viviank@westwardadvisors.com\\r\\n\\r\\nThank you,\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        },
        { "mimemail" : {
            "key" : "loan-industrial-client",
            "to" : [ "node:field-client:mail" ],
            "bcc" : "service@westwardadvisors.com",
            "from_name" : "Westward Advisors",
            "subject" : "Industrial Alliance Annual Loan Renewal \\u2013 Time Sensitive",
            "body" : "\\u003Cp\\u003EHi [node:field-client:field-first-name],\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEverything to  renew your Industrial Alliance loan is now available in your client portal on  Westward\\u0026rsquo;s website. The date by which the completed documents are to be  returned to us for processing is highlighted. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ETo access the  files, simply login to your portal at \\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/westwardadvisors.com\\/login\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ERenewing the  loan is part of plan maintenance. It keeps the plan running smoothly so you can  achieve the full estate benefits and continue to increase your tax recovery. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThe renewal  process is straightforward. Step-by-step instructions are included. We\\u0026rsquo;ve also  prepared a short video outlining the steps and the benefits it delivers. You  can view the video by clicking on the link below: \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/IA-CF-Renewal_Video\\/IA-CF-Renewal.html\\u0022\\u003EIndustrial  Alliance Loan Renewal Video\\u003C\\/a\\u003E\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis note was  sent automatically from Westward\\u0026rsquo;s Advisor Pathway. \\u0026nbsp;Your advisor(s) are  copied. If additional documents are needed or if you have any questions, please  contact your Westward tax associate at your earliest convenience: \\u003Ca href=\\u0022mailto:michaell@westwardadvisors.com\\u0022\\u003Emichaell@westwardadvisors.com\\u003C\\/a\\u003E or \\u003Ca href=\\u0022mailto:viviank@westwardadvisors.com\\u0022\\u003Eviviank@westwardadvisors.com\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank you,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour  Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\n  This message  may contain confidential information and is intended only for the recipient named.  If you have received this email in error, please notify the sender immediately  via return email and then delete it. Unauthorized email distribution is  strictly prohibited. The sender does not accept liability for any errors or  omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
            "plaintext" : "Hi [node:field-client:field-first-name],\\r\\n\\r\\nEverything to renew your Industrial Alliance loan is now available in your client portal on Westward\\u2019s website. The date by which the completed documents are to be returned to us for processing is highlighted. \\r\\n\\r\\nTo access the files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login.\\r\\n\\r\\nRenewing the loan is part of plan maintenance. It keeps the plan running smoothly so you can achieve the full estate benefits and continue to increase your tax recovery. \\r\\n\\r\\nThe renewal process is straightforward. Step-by-step instructions are included. We\\u2019ve also prepared a short video outlining the steps and the benefits it delivers. You can view the video by clicking on the link below: \\r\\n\\r\\nIndustrial Alliance Loan Renewal Video\\r\\nhttp:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/IA-CF-Renewal_Video\\/IA-CF-Renewal.html\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. Your advisor(s) are copied. If additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.\\r\\n\\r\\nThank you,\\r\\n\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "\\u0027Loan Renewal - Industrial Alliance\\u0027 email has been sent to [node:field-client:field-first-name] [node:field-client:field-last-name] ([node:field-client:mail])" } }
      ]
    }
  }');
  $items['rules_email_client_file_added_loan_renewal_rbc_insurance'] = entity_import('rules_config', '{ "rules_email_client_file_added_loan_renewal_rbc_insurance" : {
      "LABEL" : "Email: Client File Added - Loan Renewal - RBC Insurance",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "6" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-client:field-advisor" ] },
            "ITEM" : { "advisor" : "Advisor" },
            "DO" : [
              { "drupal_message" : { "message" : "\\u0027Loan Renewal - RBC Insurance\\u0027 email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } },
              { "mimemail" : {
                  "key" : "loan-rbc-advisor",
                  "to" : [ "advisor:mail" ],
                  "from_name" : "Westward Advisors",
                  "subject" : "RBC Annual Loan Renewal \\u2013 Time Sensitive",
                  "body" : "\\u003Cp\\u003EHi [node:field-client:field-first-name],\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEverything to  renew your RBC Insurance loan is now available in your client portal on  Westward\\u0026rsquo;s website. The date by which the completed documents are to be  returned to us for processing is highlighted. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ETo access the  files, simply login to your portal at \\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/westwardadvisors.com\\/login\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ERenewing the  loan is part of plan maintenance. It keeps the plan running smoothly so you can  achieve the full estate benefits and continue to increase your tax recovery. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThe renewal  process is straightforward. Step-by-step instructions are included. We\\u0026rsquo;ve also  prepared a short video outlining the steps and the benefits it delivers. You  can view the video by clicking on the link below:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/RBC-CF-Renewal_Video\\/RBC-CF-Renewal-Final.html\\u0022\\u003ERBC  Loan Renewal Video\\u003C\\/a\\u003E\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis note was  sent automatically from Westward\\u0026rsquo;s Advisor Pathway. \\u0026nbsp;Your advisor(s) are  copied. If additional documents are needed or if you have any questions, please  contact your Westward tax associate at your earliest convenience: \\u003Ca href=\\u0022mailto:michaell@westwardadvisors.com\\u0022\\u003Emichaell@westwardadvisors.com\\u003C\\/a\\u003E or \\u003Ca href=\\u0022mailto:viviank@westwardadvisors.com\\u0022\\u003Eviviank@westwardadvisors.com\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank you,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour  Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\n  This message  may contain confidential information and is intended only for the recipient named.  If you have received this email in error, please notify the sender immediately  via return email and then delete it. Unauthorized email distribution is  strictly prohibited. The sender does not accept liability for any errors or  omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
                  "plaintext" : "Hi [node:field-client:field-first-name],\\r\\n\\r\\nEverything to renew your RBC Insurance loan is now available in your client portal on Westward\\u2019s website. The date by which the completed documents are to be returned to us for processing is highlighted. \\r\\n\\r\\nTo access the files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login.\\r\\n\\r\\nRenewing the loan is part of plan maintenance. It keeps the plan running smoothly so you can achieve the full estate benefits and continue to increase your tax recovery. \\r\\n\\r\\nThe renewal process is straightforward. Step-by-step instructions are included. We\\u2019ve also prepared a short video outlining the steps and the benefits it delivers. You can view the video by clicking on the link below: \\r\\n\\r\\nRBC Loan Renewal Video\\r\\nhttp:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/RBC-CF-Renewal_Video\\/RBC-CF-Renewal-Final.html\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. Your advisor(s) are copied. If additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.\\r\\n\\r\\nThank you,\\r\\n\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        },
        { "mimemail" : {
            "key" : "loan-rbc-client",
            "to" : [ "node:field-client:mail" ],
            "bcc" : "service@westwardadvisors.com",
            "from_name" : "Westward Advisors",
            "subject" : "RBC Annual Loan Renewal \\u2013 Time Sensitive",
            "body" : "\\u003Cp\\u003EHi [node:field-client:field-first-name],\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEverything  to renew your RBC Insurance loan is now available in your client portal  on Westward\\u0026rsquo;s website.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EACTIONS  REQUIRED within the next two weeks:\\u003C\\/p\\u003E\\r\\n\\u003Col\\u003E\\r\\n  \\u003Cli\\u003EPlease login to your portal and download your loan renewal file\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EPrint and sign the loan renewal forms\\u003Cbr\\u003E\\r\\n   \\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EAttach your loan renewal cheques\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003ECall us to pick up the completed package\\u0026nbsp;\\u003C\\/li\\u003E\\r\\n\\u003C\\/ol\\u003E\\r\\n\\u003Cp\\u003ETo  access your files, simply login to your portal at\\u0026nbsp;\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/westwardadvisors.com\\/login\\u003C\\/a\\u003E.\\u003Cbr\\u003E\\r\\nRenewing  the loan is part of your annual plan maintenance. It keeps the plan running  smoothly so you can achieve the full estate benefits and continue to increase  your tax recovery.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease  note, no action is required on the loan renewal package that you will receive  directly from Industrial Alliance by regular mail. \\u0026nbsp;It is a duplicate, so  please discard it.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EWe\\u0026rsquo;ve  also prepared a short video outlining your loan renewal steps and the benefits  it delivers. You can view the video by clicking on the link below:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/Video\\/RBC-CF-Renewal_Video\\/RBC-CF-Renewal-Final.html\\u0022\\u003ERBC Loan Renewal Video\\u003C\\/a\\u003E\\u003C\\/strong\\u003E \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis  note was sent automatically from Westward\\u0026rsquo;s Advisor Pathway. \\u0026nbsp;Your  advisor(s) are copied. if you have any questions, please contact your Westward  tax associate at your earliest convenience:\\u0026nbsp;\\u003Ca href=\\u0022mailto:michaell@westwardadvisors.com\\u0022\\u003Emichaell@westwardadvisors.com\\u003C\\/a\\u003E\\u0026nbsp;or \\u003Ca href=\\u0022mailto:viviank@westwardadvisors.com\\u0022\\u003Eviviank@westwardadvisors.com\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank  you,\\u003Cbr\\u003E\\r\\n  Your  Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\nThis message may contain confidential information and is intended only for the  recipient named. If you have received this email in error, please notify the  sender immediately via return email and then delete it. Unauthorized email  distribution is strictly prohibited. The sender does not accept liability for  any errors or omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
            "plaintext" : "Hi [node:field-client:field-first-name],\\r\\n\\r\\nEverything to renew your RBC Insurance loan is now available in your client portal on Westward\\u2019s website.\\u00a0\\r\\n\\r\\nACTIONS REQUIRED within the next two weeks:\\r\\n\\r\\n - Please login to your portal and download your loan renewal file\\r\\n- Print and sign the loan renewal forms\\r\\n - Attach your loan renewal cheques\\r\\n - Call us to pick up the completed package\\u00a0\\r\\n\\r\\n\\r\\nTo access your files, simply login to your portal at\\u00a0http:\\/\\/westwardadvisors.com\\/login.\\r\\nRenewing the loan is part of your annual plan maintenance. It keeps the plan running smoothly so you can achieve the full estate benefits and continue to increase your tax recovery.\\r\\n\\r\\nPlease note, no action is required on the loan renewal package that you will receive directly from Industrial Alliance by regular mail. It is a duplicate, so please discard it.\\u00a0\\r\\n\\r\\nWe\\u2019ve also prepared a short video outlining your loan renewal steps and the benefits it delivers. You can view the video by clicking on the link below:\\r\\n\\r\\nRBC Loan Renewal Video \\r\\nhttp:\\/\\/westwardadvisors.com\\/Video\\/RBC-CF-Renewal_Video\\/RBC-CF-Renewal-Final.html\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. Your advisor(s) are copied. if you have any questions, please contact your Westward tax associate at your earliest convenience:\\u00a0michaell@westwardadvisors.com\\u00a0or viviank@westwardadvisors.com\\r\\n\\r\\nThank you,\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "\\u0027Loan Renewal - RBC Insurance\\u0027 email has been sent to [node:field-client:field-first-name] [node:field-client:field-last-name] ([node:field-client:mail])" } }
      ]
    }
  }');
  $items['rules_email_client_file_edited_generic_advisor_message'] = entity_import('rules_config', '{ "rules_email_client_file_edited_generic_advisor_message" : {
      "LABEL" : "Email: Client File Edited - Generic Advisor Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
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
  $items['rules_email_client_file_edited_generic_client_message'] = entity_import('rules_config', '{ "rules_email_client_file_edited_generic_client_message" : {
      "LABEL" : "Email: Client File Edited - Generic Client Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-visible-to-client" ], "value" : 1 } },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "3" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-client:mail" ],
            "subject" : "New File Posted in Your Client Pathway",
            "message" : "This note has been sent automatically from your Westward Client Pathway. \\r\\n\\r\\nA new document has been posted to your personal portal related to your Westward tax and estate plan. Please download and review the materials at your earliest convenience. \\r\\n\\r\\nIf you have any questions or would like your login instructions sent to you please send a note to the contact below. Or, if you prefer to receive the documents via either email or regular mail just let us know. \\r\\n\\r\\nThanks. \\r\\nYour Performance Optimizer Team\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.",
            "from" : "service@westwardadvisors.com",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "\\u0027Client File Added - Generic Client Message\\u0027 email has been sent to [node:field-client:field-first-name] [node:field-client:field-last-name] ([node:field-client:mail])" } }
      ]
    }
  }');
  $items['rules_email_client_file_edited_loan_renewal_industrial_alliance'] = entity_import('rules_config', '{ "rules_email_client_file_edited_loan_renewal_industrial_alliance" : {
      "LABEL" : "Email: Client File Edited- Loan Renewal - Industrial Alliance",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_update--client_file" : { "bundle" : "client_file" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "5" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-client:field-advisor" ] },
            "ITEM" : { "advisor" : "Advisor" },
            "DO" : [
              { "drupal_message" : { "message" : "\\u0027Loan Renewal - Industrial Alliance\\u0027 email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } },
              { "mimemail" : {
                  "key" : "loan-industrial-advisor",
                  "to" : [ "advisor:mail" ],
                  "from_name" : "Westward Advisors",
                  "subject" : "Industrial Alliance Annual Loan Renewal \\u2013 Time Sensitive",
                  "body" : "\\u003Cp\\u003EHi [node:field-client:field-first-name],\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEverything  to renew your Industrial Alliance loan is now available in your client portal  on Westward\\u0026rsquo;s website.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EACTIONS  REQUIRED within the next two weeks:\\u003C\\/p\\u003E\\r\\n\\u003Col\\u003E\\r\\n  \\u003Cli\\u003EPlease login to your portal and download your loan renewal file\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EPrint and sign the loan renewal forms\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EAttach your loan renewal cheques\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003ECall us to pick up the completed package\\u0026nbsp;\\u003C\\/li\\u003E\\r\\n\\u003C\\/ol\\u003E\\r\\n\\u003Cp\\u003ETo  access your files, simply login to your portal at\\u0026nbsp;\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/westwardadvisors.com\\/login\\u003C\\/a\\u003E.\\u003Cbr\\u003E\\r\\n  Renewing  the loan is part of your annual plan maintenance. It keeps the plan running  smoothly so you can achieve the full estate benefits and continue to increase  your tax recovery.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease  note, no action is required on the loan renewal package that you will receive  directly from Industrial Alliance by regular mail. \\u0026nbsp;It is a duplicate, so  please discard it.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EWe\\u0026rsquo;ve  also prepared a short video outlining your loan renewal steps and the benefits  it delivers. You can view the video by clicking on the link below:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/IA-CF-Renewal_Video\\/IA-CF-Renewal.html\\u0022\\u003EIndustrial  Alliance Loan Renewal Video\\u003C\\/a\\u003E\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis  note was sent automatically from Westward\\u0026rsquo;s Advisor Pathway. \\u0026nbsp;Your  advisor(s) are copied. if you have any questions, please contact your Westward  tax associate at your earliest convenience:\\u0026nbsp;\\u003Ca href=\\u0022mailto:michaell@westwardadvisors.com\\u0022\\u003Emichaell@westwardadvisors.com\\u003C\\/a\\u003E\\u0026nbsp;or \\u003Ca href=\\u0022mailto:viviank@westwardadvisors.com\\u0022\\u003Eviviank@westwardadvisors.com\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank  you,\\u003Cbr\\u003E\\r\\nYour  Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\n  This message may contain confidential information and is intended only for the  recipient named. If you have received this email in error, please notify the  sender immediately via return email and then delete it. Unauthorized email  distribution is strictly prohibited. The sender does not accept liability for  any errors or omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
                  "plaintext" : "Hi [node:field-client:field-first-name],\\r\\n\\r\\nEverything to renew your Industrial Alliance loan is now available in your client portal on Westward\\u2019s website. \\r\\n\\r\\nACTIONS REQUIRED within the next two weeks:\\r\\n\\r\\n- Please login to your portal and download your loan renewal file\\r\\n\\r\\n- Print and sign the loan renewal forms\\r\\n\\r\\n- Attach your loan renewal cheques\\r\\n\\r\\n- Call us to pick up the completed package \\r\\n\\r\\n\\r\\nTo access your files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login.\\r\\nRenewing the loan is part of your annual plan maintenance. It keeps the plan running smoothly so you can achieve the full estate benefits and continue to increase your tax recovery.\\r\\n\\r\\nPlease note, no action is required on the loan renewal package that you will receive directly from Industrial Alliance by regular mail. It is a duplicate, so please discard it. \\r\\n\\r\\nWe\\u2019ve also prepared a short video outlining your loan renewal steps and the benefits it delivers. You can view the video by clicking on the link below:\\r\\n\\r\\nIndustrial Alliance Loan Renewal Video\\r\\nhttp:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/IA-CF-Renewal_Video\\/IA-CF-Renewal.html\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. Your advisor(s) are copied. if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com\\r\\n\\r\\nThank you,\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        },
        { "mimemail" : {
            "key" : "loan-industrial-client",
            "to" : [ "node:field-client:mail" ],
            "bcc" : "service@westwardadvisors.com",
            "from_name" : "Westward Advisors",
            "subject" : "Industrial Alliance Annual Loan Renewal",
            "body" : "\\u003Cp\\u003EHi [node:field-client:field-first-name],\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEverything  to renew your Industrial Alliance loan is now available in your client portal  on Westward\\u0026rsquo;s website.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EACTIONS  REQUIRED within the next two weeks:\\u003C\\/p\\u003E\\r\\n\\u003Col\\u003E\\r\\n  \\u003Cli\\u003E Please login to your portal and download your loan renewal file\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EPrint and sign the loan renewal forms\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EAttach your loan renewal cheques\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003ECall us to pick up the completed package\\u0026nbsp;\\u003C\\/li\\u003E\\r\\n\\u003C\\/ol\\u003E\\r\\n\\u003Cp\\u003ETo  access your files, simply login to your portal at\\u0026nbsp;\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/westwardadvisors.com\\/login\\u003C\\/a\\u003E.\\u003Cbr\\u003E\\r\\n  Renewing  the loan is part of your annual plan maintenance. It keeps the plan running  smoothly so you can achieve the full estate benefits and continue to increase  your tax recovery.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease  note, no action is required on the loan renewal package that you will receive  directly from Industrial Alliance by regular mail. \\u0026nbsp;It is a duplicate, so  please discard it.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EWe\\u0026rsquo;ve  also prepared a short video outlining your loan renewal steps and the benefits  it delivers. You can view the video by clicking on the link below:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/IA-CF-Renewal_Video\\/IA-CF-Renewal.html\\u0022\\u003EIndustrial  Alliance Loan Renewal Video\\u003C\\/a\\u003E\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis  note was sent automatically from Westward\\u0026rsquo;s Advisor Pathway. \\u0026nbsp;Your  advisor(s) are copied. if you have any questions, please contact your Westward  tax associate at your earliest convenience:\\u0026nbsp;\\u003Ca href=\\u0022mailto:michaell@westwardadvisors.com\\u0022\\u003Emichaell@westwardadvisors.com\\u003C\\/a\\u003E\\u0026nbsp;or \\u003Ca href=\\u0022mailto:viviank@westwardadvisors.com\\u0022\\u003Eviviank@westwardadvisors.com\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank  you,\\u003Cbr\\u003E\\r\\nYour  Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\n  This message may contain confidential information and is intended only for the  recipient named. If you have received this email in error, please notify the  sender immediately via return email and then delete it. Unauthorized email  distribution is strictly prohibited. The sender does not accept liability for  any errors or omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
            "plaintext" : "Hi [node:field-client:field-first-name],\\r\\n\\r\\nEverything to renew your Industrial Alliance loan is now available in your client portal on Westward\\u2019s website. The date by which the completed documents are to be returned to us for processing is highlighted. \\r\\n\\r\\nTo access the files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login.\\r\\n\\r\\nRenewing the loan is part of plan maintenance. It keeps the plan running smoothly so you can achieve the full estate benefits and continue to increase your tax recovery. \\r\\n\\r\\nThe renewal process is straightforward. Step-by-step instructions are included. We\\u2019ve also prepared a short video outlining the steps and the benefits it delivers. You can view the video by clicking on the link below: \\r\\n\\r\\nIndustrial Alliance Loan Renewal Video\\r\\nhttp:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/IA-CF-Renewal_Video\\/IA-CF-Renewal.html\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. Your advisor(s) are copied. If additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.\\r\\n\\r\\nThank you,\\r\\n\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "\\u0027Loan Renewal - Industrial Alliance\\u0027 email has been sent to [node:field-client:field-first-name] [node:field-client:field-last-name] ([node:field-client:mail])" } }
      ]
    }
  }');
  $items['rules_email_client_file_edited_loan_renewal_rbc_insurance'] = entity_import('rules_config', '{ "rules_email_client_file_edited_loan_renewal_rbc_insurance" : {
      "LABEL" : "Email: Client File Edited- Loan Renewal - RBC Insurance",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_update--client_file" : { "bundle" : "client_file" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "client_file" : "client_file" } }
          }
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-email-template" ] } },
        { "list_contains" : { "list" : [ "node:field-email-template" ], "item" : "6" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-client:field-advisor" ] },
            "ITEM" : { "advisor" : "Advisor" },
            "DO" : [
              { "drupal_message" : { "message" : "\\u0027Loan Renewal - RBC Insurance\\u0027 email has been sent to [advisor:field-first-name] [advisor:field-last-name] ([advisor:mail])" } },
              { "mimemail" : {
                  "key" : "loan-rbc-advisor",
                  "to" : [ "advisor:mail" ],
                  "from_name" : "Westward Advisors",
                  "subject" : "RBC Annual Loan Renewal \\u2013 Time Sensitive",
                  "body" : "\\u003Cp\\u003EHi [node:field-client:field-first-name],\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEverything to  renew your RBC Insurance loan is now available in your client portal on  Westward\\u0026rsquo;s website. The date by which the completed documents are to be  returned to us for processing is highlighted. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ETo access the  files, simply login to your portal at \\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/westwardadvisors.com\\/login\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ERenewing the  loan is part of plan maintenance. It keeps the plan running smoothly so you can  achieve the full estate benefits and continue to increase your tax recovery. \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThe renewal  process is straightforward. Step-by-step instructions are included. We\\u0026rsquo;ve also  prepared a short video outlining the steps and the benefits it delivers. You  can view the video by clicking on the link below:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/RBC-CF-Renewal_Video\\/RBC-CF-Renewal-Final.html\\u0022\\u003ERBC  Loan Renewal Video\\u003C\\/a\\u003E\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis note was  sent automatically from Westward\\u0026rsquo;s Advisor Pathway. \\u0026nbsp;Your advisor(s) are  copied. If additional documents are needed or if you have any questions, please  contact your Westward tax associate at your earliest convenience: \\u003Ca href=\\u0022mailto:michaell@westwardadvisors.com\\u0022\\u003Emichaell@westwardadvisors.com\\u003C\\/a\\u003E or \\u003Ca href=\\u0022mailto:viviank@westwardadvisors.com\\u0022\\u003Eviviank@westwardadvisors.com\\u003C\\/a\\u003E.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank you,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EYour  Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\n  This message  may contain confidential information and is intended only for the recipient named.  If you have received this email in error, please notify the sender immediately  via return email and then delete it. Unauthorized email distribution is  strictly prohibited. The sender does not accept liability for any errors or  omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
                  "plaintext" : "Hi [node:field-client:field-first-name],\\r\\n\\r\\nEverything to renew your RBC Insurance loan is now available in your client portal on Westward\\u2019s website. The date by which the completed documents are to be returned to us for processing is highlighted. \\r\\n\\r\\nTo access the files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login.\\r\\n\\r\\nRenewing the loan is part of plan maintenance. It keeps the plan running smoothly so you can achieve the full estate benefits and continue to increase your tax recovery. \\r\\n\\r\\nThe renewal process is straightforward. Step-by-step instructions are included. We\\u2019ve also prepared a short video outlining the steps and the benefits it delivers. You can view the video by clicking on the link below: \\r\\n\\r\\nRBC Loan Renewal Video\\r\\nhttp:\\/\\/westwardadvisors.com\\/westwardadvisors.com\\/Video\\/RBC-CF-Renewal_Video\\/RBC-CF-Renewal-Final.html\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. Your advisor(s) are copied. If additional documents are needed or if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com.\\r\\n\\r\\nThank you,\\r\\n\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
                  "language" : [ "" ]
                }
              }
            ]
          }
        },
        { "mimemail" : {
            "key" : "loan-rbc-client-edited",
            "to" : [ "node:field-client:mail" ],
            "bcc" : "service@westwardadvisors.com",
            "from_name" : "Westward Advisors",
            "subject" : "RBC Annual Loan Renewal \\u2013 Time Sensitive",
            "body" : "\\u003Cp\\u003EHi [node:field-client:field-first-name],\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EEverything  to renew your RBC Insurance loan is now available in your client portal  on Westward\\u0026rsquo;s website.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EACTIONS  REQUIRED within the next two weeks:\\u003C\\/p\\u003E\\r\\n\\u003Col\\u003E\\r\\n  \\u003Cli\\u003EPlease login to your portal and download your loan renewal file\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EPrint and sign the loan renewal forms\\u003Cbr\\u003E\\r\\n   \\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003EAttach your loan renewal cheques\\u003C\\/li\\u003E\\r\\n  \\u003Cli\\u003ECall us to pick up the completed package\\u0026nbsp;\\u003C\\/li\\u003E\\r\\n\\u003C\\/ol\\u003E\\r\\n\\u003Cp\\u003ETo  access your files, simply login to your portal at\\u0026nbsp;\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/login\\u0022\\u003Ehttp:\\/\\/westwardadvisors.com\\/login\\u003C\\/a\\u003E.\\u003Cbr\\u003E\\r\\nRenewing  the loan is part of your annual plan maintenance. It keeps the plan running  smoothly so you can achieve the full estate benefits and continue to increase  your tax recovery.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPlease  note, no action is required on the loan renewal package that you will receive  directly from Industrial Alliance by regular mail. \\u0026nbsp;It is a duplicate, so  please discard it.\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EWe\\u0026rsquo;ve  also prepared a short video outlining your loan renewal steps and the benefits  it delivers. You can view the video by clicking on the link below:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/westwardadvisors.com\\/Video\\/RBC-CF-Renewal_Video\\/RBC-CF-Renewal-Final.html\\u0022\\u003ERBC Loan Renewal Video\\u003C\\/a\\u003E\\u003C\\/strong\\u003E \\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThis  note was sent automatically from Westward\\u0026rsquo;s Advisor Pathway. \\u0026nbsp;Your  advisor(s) are copied. if you have any questions, please contact your Westward  tax associate at your earliest convenience:\\u0026nbsp;\\u003Ca href=\\u0022mailto:michaell@westwardadvisors.com\\u0022\\u003Emichaell@westwardadvisors.com\\u003C\\/a\\u003E\\u0026nbsp;or \\u003Ca href=\\u0022mailto:viviank@westwardadvisors.com\\u0022\\u003Eviviank@westwardadvisors.com\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThank  you,\\u003Cbr\\u003E\\r\\n  Your  Performance Optimizer Team\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ECONFIDENTIALITY  DISCLAIMER\\u003Cbr\\u003E\\r\\nThis message may contain confidential information and is intended only for the  recipient named. If you have received this email in error, please notify the  sender immediately via return email and then delete it. Unauthorized email  distribution is strictly prohibited. The sender does not accept liability for  any errors or omissions in the contents of this message.\\u003C\\/p\\u003E\\r\\n",
            "plaintext" : "Hi [node:field-client:field-first-name],\\r\\n\\r\\nEverything to renew your RBC Insurance loan is now available in your client portal on Westward\\u2019s website. \\r\\n\\r\\nACTIONS REQUIRED within the next two weeks:\\r\\n\\r\\n - Please login to your portal and download your loan renewal file\\r\\n- Print and sign the loan renewal forms\\r\\n - Attach your loan renewal cheques\\r\\n - Call us to pick up the completed package \\r\\n\\r\\n\\r\\nTo access your files, simply login to your portal at http:\\/\\/westwardadvisors.com\\/login.\\r\\nRenewing the loan is part of your annual plan maintenance. It keeps the plan running smoothly so you can achieve the full estate benefits and continue to increase your tax recovery.\\r\\n\\r\\nPlease note, no action is required on the loan renewal package that you will receive directly from Industrial Alliance by regular mail. It is a duplicate, so please discard it. \\r\\n\\r\\nWe\\u2019ve also prepared a short video outlining your loan renewal steps and the benefits it delivers. You can view the video by clicking on the link below:\\r\\n\\r\\nRBC Loan Renewal Video \\r\\nhttp:\\/\\/westwardadvisors.com\\/Video\\/RBC-CF-Renewal_Video\\/RBC-CF-Renewal-Final.html\\r\\n\\r\\nThis note was sent automatically from Westward\\u2019s Advisor Pathway. Your advisor(s) are copied. if you have any questions, please contact your Westward tax associate at your earliest convenience: michaell@westwardadvisors.com or viviank@westwardadvisors.com\\r\\n\\r\\nThank you,\\r\\nYour Performance Optimizer Team\\r\\n\\r\\n\\r\\n\\r\\nCONFIDENTIALITY DISCLAIMER\\r\\nThis message may contain confidential information and is intended only for the recipient named. If you have received this email in error, please notify the sender immediately via return email and then delete it. Unauthorized email distribution is strictly prohibited. The sender does not accept liability for any errors or omissions in the contents of this message.\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "\\u0027Loan Renewal - RBC Insurance\\u0027 email has been sent to [node:field-client:field-first-name] [node:field-client:field-last-name] ([node:field-client:mail])" } }
      ]
    }
  }');
  $items['rules_test'] = entity_import('rules_config', '{ "rules_test" : {
      "LABEL" : "Email: Confirmation of Client Amendment Agreement",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
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
