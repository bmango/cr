<?php
/**
 * @file
 * rules_config.rules_flag_new_message.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_flag_new_message" : {
      "LABEL" : "Flag new message for person it is to",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "flag" ],
      "REQUIRES" : [ "flag", "rules" ],
      "ON" : { "node_insert--message" : { "bundle" : "message" } },
      "DO" : [
        { "flag_flagnode" : {
            "flag" : "new",
            "node" : [ "node" ],
            "flagging_user" : [ "node:field-to" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'flag',
  2 => 'rules',
);
