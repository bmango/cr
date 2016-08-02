<?php
/**
 * @file
 * rules_config.rules_set_url_for_jobs_created_by_employers.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_set_url_for_jobs_created_by_employers" : {
      "LABEL" : "Set URL for Jobs created by Employers",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules", "path" ],
      "ON" : { "node_insert--job" : { "bundle" : "job" } },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : { "4" : "4", "7" : "7" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : [ "node:url" ] } },
        { "drupal_message" : { "message" : [ "node:url" ] } },
        { "node_path_alias" : { "node" : [ "node" ], "alias" : "myjob\\/[node:author:uid]" } },
        { "drupal_message" : { "message" : [ "node:url" ] } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'path',
  2 => 'rules',
);
