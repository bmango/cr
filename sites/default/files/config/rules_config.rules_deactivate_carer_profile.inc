<?php
/**
 * @file
 * rules_config.rules_deactivate_carer_profile.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_deactivate_carer_profile" : {
      "LABEL" : "Deactivate Carer Profile and Send Email",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "schedule" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "label" : "User", "type" : "user" } },
      "ACTION SET" : [
        { "data_set" : { "data" : [ "user:profile-carer:field-profile-active" ], "value" : "0" } },
        { "mail" : {
            "to" : [ "user:mail" ],
            "subject" : "[site:name] Profile Set to Unactive",
            "message" : "Dear [user:profile-carer:field-first-name-em] [user:profile-carer:field-last-name-em],\\r\\n\\r\\nAs you have not logged in to [site:name] for 4 weeks your profile has been set to unactive. This means employers will no longer be able to see your profile.\\r\\n\\r\\nTo activate your profile, please login to the website at [site:login-url], and on your profile page, set your profile to active.\\r\\n\\r\\nMany thanks,\\r\\n\\r\\n[site:name] Team",
            "language" : [ "" ]
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
);
