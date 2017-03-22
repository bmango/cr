<?php
/**
 * @file
 * rules_config.rules_agency_membership_cancel_unpublish_jobs.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_agency_membership_cancel_unpublish_jobs" : {
      "LABEL" : "Agency Membership Cancel - Unpublish jobs and Send Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "agency", "cr" ],
      "REQUIRES" : [ "rules", "stripe_subscription" ],
      "ON" : { "stripe_subscription_event" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "subscription-action" ], "value" : "deleted" } },
        { "user_has_role" : { "account" : [ "acting-user" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[acting-user:mail]",
            "subject" : "Carers Register Membership Cancellation",
            "message" : "Dear [acting-user:field-first-name-em] [acting-user:field-last-name-em],\\r\\n\\r\\nThis is to confirm that we have cancelled your [plan:value]. We are sorry to see you go. \\r\\n\\r\\nEven though you have cancelled your membership, you still have a basic account on the website and can continue to login and access all your existing messages. Any jobs you have listed will now be unpublished but they will not be deleted.\\r\\n\\r\\nYou can renew your membership at any time by going to [site:url]subscription.\\r\\n\\r\\nIf you want to cancel your entire account, and remove all your information just login and click on the Cancel Account link under the My Profile menu. This will completely remove all the data we hold about you.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team",
            "language" : [ "" ]
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "employer_job_for_rules",
            "DISPLAY" : "views_rules_2",
            "USING" : { "uid" : [ "acting-user:uid" ] },
            "ROW VARIABLES" : { "nid" : { "nid1" : "Nid1" }, "entity_id" : { "entity_1" : "Entity 1" } },
            "DO" : [ { "node_unpublish" : { "node" : [ "nid1" ] } } ]
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
