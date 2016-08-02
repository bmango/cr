<?php
/**
 * @file
 * rules_config.rules_carer_registration_welcome_email.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_carer_registration_welcome_email" : {
      "LABEL" : "Carer Registration Welcome Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_insert" : [] },
      "IF" : [ { "data_is" : { "data" : [ "profile2:type" ], "value" : "carer" } } ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "profile2:user:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "user" : "User" } }
          }
        },
        { "mail" : {
            "to" : [ "user:mail" ],
            "subject" : "Account details for [user:name] at [site:name]",
            "message" : "Dear [profile2:field-first-name-em] [profile2:field-last-name-em],\\r\\n\\r\\nThank you for registering as a carer with [site:name]. You may now log in at [site:login-url] using:\\r\\n\\r\\nusername: [user:name] (or your email address)\\r\\npassword: Your password\\r\\n\\r\\nYour profile is now active. If you do not login within four weeks your profile will be automatically de-activated. You can always re-activate your profile by logging in and going to the edit profile section.\\r\\n\\r\\nEmployers registered with this site will be able to send you a message if they want to contact you about a job when they view your profile.\\r\\n\\r\\nYou can contact employers about jobs they have posted if you become a member. Membership costs \\u00a310 a month. To become a member go to [site:url]subscription.\\r\\n\\r\\nAll your personal contact details will be kept hidden. Employers will be able to contact you using the Contact Carer button.\\r\\n\\r\\nYou will be sent an email every time an employer contacts you on the site.\\r\\n\\r\\nYou can deactivate your profile at any time in the edit profile section.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team",
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
  1 => 'profile2',
  2 => 'rules',
);
