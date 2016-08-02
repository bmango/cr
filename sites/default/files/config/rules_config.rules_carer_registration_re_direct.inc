<?php
/**
 * @file
 * rules_config.rules_carer_registration_re_direct.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_carer_registration_re_direct" : {
      "LABEL" : "Carer Registration Re-direct",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "carers-registration-confirmation" } } ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
