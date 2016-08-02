<?php
/**
 * @file
 * rules_config.rules_carer_employer_registration_re_direct.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_carer_employer_registration_re_direct" : {
      "LABEL" : "Employer Registration Re-direct",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "4" : "4" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "node\\/add\\/job" } },
        { "drupal_message" : { "message" : "Please create your job profile" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
