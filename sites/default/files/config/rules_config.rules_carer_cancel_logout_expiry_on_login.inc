<?php
/**
 * @file
 * rules_config.rules_carer_cancel_logout_expiry_on_login.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_carer_cancel_logout_expiry_on_login" : {
      "LABEL" : "Carer Cancel Logout Expiry on Login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules_scheduler", "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "schedule_delete" : {
            "component" : "rules_deactivate_carer_profile",
            "task" : [ "account:uid" ]
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
