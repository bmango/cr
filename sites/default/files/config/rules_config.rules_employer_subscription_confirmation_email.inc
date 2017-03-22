<?php
/**
 * @file
 * rules_config.rules_employer_subscription_confirmation_email.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_employer_subscription_confirmation_email" : {
      "LABEL" : "Employer Subscription Confirmation Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "employer", "subscription" ],
      "REQUIRES" : [ "rules", "views_rules", "stripe_subscription" ],
      "ON" : { "stripe_subscription_event" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "subscription-action" ], "value" : "created" } },
        { "data_is" : { "data" : [ "plan" ], "value" : "Employer Membership" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[acting-user:mail]",
            "subject" : "Carers Register Membership Confirmation",
            "message" : "Dear [acting-user:field-first-name-em] [acting-user:field-last-name-em],\\r\\n\\r\\nThank you for becoming a member at [site:name] with [plan:value] for [subscription-amount:value]. Your membership will renew each month until you cancel. You can see your membership details at [site:url]subscription.\\r\\n\\r\\nYou can log in at [site:login-url] using:\\r\\n\\r\\nusername: [acting-user:name] (or your email address)\\r\\npassword: Your password\\r\\n\\r\\nYour membership will renew on [subscription-renewal:value]. You will be sent a reminder email about your upcoming subscription renewal seven days before it renews. You can cancel at anytime by going to [site:url]subscription. Please note that when you cancel, your membership is cancelled at the same time, although your registration details will remain on the system, and so will still be able to login.\\r\\n\\r\\nYou can now contact carers on this site by viewing the individual carer details. Carers registered with this site will also be able to send you a message if they want to contact you about a job.\\r\\n\\r\\nYou will be sent an email every time a carer contacts you on the site.\\r\\n\\r\\nYou can unpublish your job at any time in the edit job section. If you have not already created your job you can create it at [site:url]node\\/add\\/job.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions about your membership.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team",
            "language" : [ "" ]
          }
        },
        { "views_rules_collect_rows" : {
            "USING" : {
              "views_rules_display" : "employer_job_for_rules:views_rules_1",
              "uid" : [ "acting-user:uid" ]
            },
            "PROVIDE" : {
              "nid" : { "nid" : "List of Nid" },
              "entity_id" : { "entity_id" : "List of Entity ID" }
            }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "employer_job_for_rules",
            "DISPLAY" : "views_rules_1",
            "USING" : { "uid" : [ "acting-user:uid" ] },
            "ROW VARIABLES" : {
              "nid" : { "nid_list" : "Nid" },
              "entity_id" : { "entity_id_list" : "Entity ID" }
            },
            "DO" : [ { "node_publish" : { "node" : [ "nid-list" ] } } ]
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
  2 => 'stripe_subscription',
  3 => 'views_rules',
);
