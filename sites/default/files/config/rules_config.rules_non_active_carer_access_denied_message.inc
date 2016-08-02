<?php
/**
 * @file
 * rules_config.rules_non_active_carer_access_denied_message.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_non_active_carer_access_denied_message" : {
      "LABEL" : "Non Active Carer Access Denied Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "carer", "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--page" : { "bundle" : "page" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:nid" ], "value" : "172" } },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "5" : "5" } }
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "node\\/167" } },
        { "drupal_message" : {
            "message" : "To access this page you need to become a member on the site.",
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
