<?php
/**
 * @file
 * rules_config.rules_agency_subscription_confirmation_email.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_agency_subscription_confirmation_email" : {
      "LABEL" : "Agency Subscription Confirmation Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "agency", "cr", "subscription" ],
      "REQUIRES" : [ "rules", "stripe_subscription" ],
      "ON" : { "stripe_subscription_event" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "subscription-action" ], "value" : "created" } },
        { "data_is" : {
            "data" : [ "plan" ],
            "op" : "IN",
            "value" : { "value" : [ "Agency Bronze", "Agency Silver", "Agency Gold" ] }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[acting-user:mail]",
            "subject" : "Carers Register Membership Confirmation",
            "message" : "Dear [acting-user:field-first-name-em] [acting-user:field-last-name-em],\\r\\n\\r\\nThank you for becoming a member at [site:name] with [plan:value] for [subscription-amount:value]. Your membership will renew each month until you cancel. You can see your membership details at [site:url]subscription.\\r\\n\\r\\nYou can log in at [site:login-url] using:\\r\\n\\r\\nusername: [acting-user:name] (or your email address)\\r\\npassword: Your password\\r\\n\\r\\nYou can now create your agency jobs up to the limit specified by the membership plan you have chosen. You can also contact carers on this site by viewing the individual carer details. \\r\\n\\r\\nCarers registered with this site will also be able to send you a message if they want to contact you about a job, as long as they have an active membership.\\r\\n\\r\\nYou will be sent an email every time a carer contacts you on the site.\\r\\n\\r\\nYou can unpublish your jobs at any time in the edit job section. If you have not already created your job you can create it at [site:url]node\\/add\\/job.\\r\\n\\r\\nYour membership will renew on [subscription-renewal:value]. You will be sent a reminder email about your subscription renewal seven days before it renews. You can cancel at any time by going to [site:url]subscription. If you cancel your membership any jobs that you have will be unpublished but you can continue to login and access all your existing messages, but not send new ones. You can also completely delete your account which will remove all your details from the system.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions about your membership.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team",
            "language" : [ "" ]
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "employer_job_for_rules",
            "DISPLAY" : "views_rules_2",
            "USING" : { "uid" : [ "acting-user:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid1" : "Nid1" }, "entity_id" : { "entity_1" : "Entity 1" } },
            "DO" : [ { "node_publish" : { "node" : [ "nid1" ] } } ]
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
