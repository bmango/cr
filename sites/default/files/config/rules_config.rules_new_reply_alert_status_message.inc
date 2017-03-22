<?php
/**
 * @file
 * rules_config.rules_new_reply_alert_status_message.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_new_reply_alert_status_message" : {
      "LABEL" : "New Reply Alert - Status Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "flag" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "list_count_is" : {
            "list" : [ "site:current-user:flag-new-reply-flagged" ],
            "op" : "\\u003E",
            "value" : "0"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "You have received a new reply to your message." } },
        { "flag_fetch_node_by_user" : {
            "USING" : { "flag" : "new_reply", "flagging_user" : [ "site:current-user" ] },
            "PROVIDE" : { "content_flagged_by_user" : { "flagged_message" : "Flagged Message" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "flagged-message" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "flag_unflagnode" : {
                  "flag" : "new_reply",
                  "node" : [ "list-item" ],
                  "flagging_user" : [ "site:current-user" ],
                  "permission_check" : "1"
                }
              }
            ]
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'flag',
  2 => 'rules',
);
