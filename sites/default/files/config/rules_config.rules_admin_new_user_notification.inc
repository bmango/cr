<?php
/**
 * @file
 * rules_config.rules_admin_new_user_notification.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_admin_new_user_notification" : {
      "LABEL" : "Admin New User Notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "admin", "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "A new user has registered on Carers Register",
            "message" : "[account:name] has registered on the site. View at [account:url], edit at [account:edit-url]. \\r\\n\\r\\nEmail is [account:mail].\\r\\n\\r\\nFirst name: [account:field-first-name-em]\\r\\nLast name: [account:field-last-name-em]\\r\\n\\r\\nEmployer: [account:profile-employer]\\r\\nCarer: [account:profile-carer]\\r\\nAgency: [account:profile-agency]\\r\\n\\r\\nCarers Register",
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
