<?php
/**
 * @file
 * rules_config.rules_home_page_view.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_home_page_view" : {
      "LABEL" : "Home Page View",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "stats" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "info@carersregister.co.uk",
            "subject" : "Visitor at Carers Register",
            "message" : "A visitor visited [node:title] at [node:url]",
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
