<?php
/**
 * @file
 * rules_config.rules_clear_new_system_message_alert.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_clear_new_system_message_alert" : {
      "LABEL" : "Clear New System Message Alert",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "wwu_rules_extensions", "rules" ],
      "ON" : { "init" : [] },
      "DO" : [
        { "wwu_rules_extensions_rules_action_clear_messages" : { "type" : "none", "pattern" : ".*" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
  2 => 'wwu_rules_extensions',
);
