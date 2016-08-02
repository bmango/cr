<?php
/**
 * @file
 * rules_config.rules_set_job_type_to_agency.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_set_job_type_to_agency" : {
      "LABEL" : "Set Job Type to Agency",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "agency", "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--job" : { "bundle" : "job" } },
      "IF" : [
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-agency-job" ], "value" : "Yes" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
