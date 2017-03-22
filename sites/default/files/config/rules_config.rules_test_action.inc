<?php
/**
 * @file
 * rules_config.rules_test_action.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_test_action" : {
      "LABEL" : "Test Action",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "auser" : { "label" : "Auser", "type" : "user", "parameter" : false } },
      "ACTION SET" : [ { "drupal_message" : { "message" : "Hello" } } ],
      "PROVIDES VARIABLES" : [ "auser" ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
