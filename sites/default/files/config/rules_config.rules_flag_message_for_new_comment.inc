<?php
/**
 * @file
 * rules_config.rules_flag_message_for_new_comment.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_flag_message_for_new_comment" : {
      "LABEL" : "Flag message and send email for new comment - flag author",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "flag" ],
      "REQUIRES" : [ "rules", "flag", "comment" ],
      "ON" : { "comment_insert--comment_node_message" : { "bundle" : "comment_node_message" } },
      "IF" : [
        { "NOT data_is" : { "data" : [ "comment:author" ], "value" : [ "comment:node:author" ] } }
      ],
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "new_reply",
            "node" : [ "comment:node" ],
            "flagging_user" : [ "comment:node:author" ],
            "permission_check" : "1"
          }
        },
        { "mail" : {
            "to" : [ "comment:node:author:mail" ],
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
