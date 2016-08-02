<?php
/**
 * @file
 * rules_config.rules_carer_reminder_email_one_week_before_expiry.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_carer_reminder_email_one_week_before_expiry" : {
      "LABEL" : "Carer reminder email one week before expiry",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "label" : "User", "type" : "user" } },
      "ACTION SET" : [
        { "mail" : {
            "to" : [ "user:mail" ],
            "subject" : "[site:name] Membership Expiry Reminder",
            "message" : "Dear [user:profile-carer:field-first-name-em] [user:profile-carer:field-last-name-em], \\r\\n\\r\\nThis is a reminder email that your membership for [site:name] expires in one week. \\r\\n\\r\\nYou can renew your membership at any time by visiting [site:url]carer-membership.\\r\\n\\r\\n[site:name] Team",
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
