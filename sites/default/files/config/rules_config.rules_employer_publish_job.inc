<?php
/**
 * @file
 * rules_config.rules_employer_publish_job.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_employer_publish_job" : {
      "LABEL" : "Employer Publish Job",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "employer" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--job" : { "bundle" : "job" } },
      "IF" : [
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "7" : "7" } } } }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
