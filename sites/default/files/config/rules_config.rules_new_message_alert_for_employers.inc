<?php
/**
 * @file
 * rules_config.rules_new_message_alert_for_employers.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_new_message_alert_for_employers" : {
      "LABEL" : "New Message Alert for Employers",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--message" : { "bundle" : "message" } },
      "IF" : [
        { "list_contains" : { "list" : [ "node:field-to:roles" ], "item" : "4" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-to:mail" ],
            "subject" : "New message received at [site:name] ",
            "message" : "Dear [node:field-to:profile-employer:field-first-name-em] [node:field-to:profile-employer:field-last-name-em],\\r\\n\\r\\nYou have received a new message from [node:author:profile-carer:field-first-name-em], a carer. You can see this message at [node:url]\\r\\n\\r\\n[site:name] team",
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
