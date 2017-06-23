<?php
/**
 * @file
 * rules_config.rules_carer_unactive_profile_welcome_text.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_carer_unactive_profile_welcome_text" : {
      "LABEL" : "Carer Unactive Profile Welcome Text",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "carer" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "module" : { "label" : "module", "type" : "text" },
        "delta" : { "label" : "delta", "type" : "text" },
        "result" : { "label" : "result", "type" : "boolean", "parameter" : false }
      },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "5" : "5" } }
          }
        },
        { "data_is" : {
            "data" : [ "site:current-user:profile-carer:field-profile-active" ],
            "value" : "0"
          }
        }
      ],
      "DO" : [ { "data_set" : { "data" : [ "result" ], "value" : "1" } } ],
      "PROVIDES VARIABLES" : [ "result" ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
