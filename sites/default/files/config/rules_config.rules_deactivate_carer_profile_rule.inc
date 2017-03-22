<?php
/**
 * @file
 * rules_config.rules_deactivate_carer_profile_rule.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_deactivate_carer_profile_rule" : {
      "LABEL" : "Deactivate Carer Profile 4 weeks after creating profile",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "schedule" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "user_logout" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } },
        { "data_is" : {
            "data" : [ "account:profile-carer:field-profile-active" ],
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "rules_deactivate_carer_profile",
            "date" : "+4 weeks",
            "identifier" : "[account:uid]",
            "param_user" : [ "account" ]
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
  2 => 'rules_scheduler',
);
