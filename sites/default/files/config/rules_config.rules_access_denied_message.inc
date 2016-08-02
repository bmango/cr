<?php
/**
 * @file
 * rules_config.rules_access_denied_message.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_access_denied_message" : {
      "LABEL" : "Access Denied Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--page" : { "bundle" : "page" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:nid" ], "value" : "172" } },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "5" : "5" } }
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "To access this page you need to \\u003Ca href=\\u0022\\/user\\u0022\\u003Elogin\\u003C\\/a\\u003E or register on the site.",
            "type" : "error"
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
