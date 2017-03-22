<?php
/**
 * @file
 * rules_config.rules_new_message_alert.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_new_message_alert" : {
      "LABEL" : "New Message Alert for Carers",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--message" : { "bundle" : "message" } },
      "IF" : [
        { "list_contains" : { "list" : [ "node:field-to:roles" ], "item" : "5" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-to:mail" ],
            "subject" : "New message received at [site:name] ",
            "message" : "Dear [node:field-to:profile-carer:field-first-name-em] [node:field-to:profile-carer:field-last-name-em],\\r\\n\\r\\nYou have received a new message from [node:author:profile-employer:field-first-name-em], an employer. You can see this message at [node:url]\\r\\n\\r\\n[site:name] team",
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
