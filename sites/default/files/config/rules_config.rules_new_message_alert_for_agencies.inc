<?php
/**
 * @file
 * rules_config.rules_new_message_alert_for_agencies.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_new_message_alert_for_agencies" : {
      "LABEL" : "New Message Alert for Agencies",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "agency", "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--message" : { "bundle" : "message" } },
      "IF" : [
        { "list_contains" : { "list" : [ "node:field-to:roles" ], "item" : "6" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-to:mail" ],
            "subject" : "New message received at [site:name] ",
            "message" : "To [node:field-to:profile-agency:field-company],\\r\\n\\r\\nYou have received a new message from [node:author:profile-carer:field-first-name-em], a carer. You can see this message at [node:url]\\r\\n\\r\\n[site:name] team",
            "from" : [ "" ],
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
  1 => 'rules',
);
