<?php
/**
 * @file
 * rules_config.rules_flag_message_for_new_comment_flag_recipient.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_flag_message_for_new_comment_flag_recipient" : {
      "LABEL" : "Flag message and send email for new comment - flag recipient",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "flag" ],
      "REQUIRES" : [ "rules", "flag", "comment" ],
      "ON" : { "comment_insert--comment_node_message" : { "bundle" : "comment_node_message" } },
      "IF" : [
        { "data_is" : { "data" : [ "comment:author" ], "value" : [ "comment:node:author" ] } },
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "message" : "message" } }
          }
        }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "new_reply",
            "node" : [ "comment:node" ],
            "flagging_user" : [ "comment:node:field-to" ],
            "permission_check" : "1"
          }
        },
        { "mail" : {
            "to" : [ "comment:node:field-to:mail" ],
            "subject" : "New Reply to Your Message on Carers Register",
            "message" : "You have received a new reply to your Message. You can see the reply at [comment:url].\\r\\n\\r\\nCarers Register Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'comment',
  2 => 'flag',
  3 => 'rules',
);
