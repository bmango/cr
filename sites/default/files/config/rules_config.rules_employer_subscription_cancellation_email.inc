<?php
/**
 * @file
 * rules_config.rules_employer_subscription_cancellation_email.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_employer_subscription_cancellation_email" : {
      "LABEL" : "Employer Subscription Cancellation Email and Unpublish Job",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "employer", "subscription" ],
      "REQUIRES" : [ "rules", "views_rules", "stripe_subscription" ],
      "ON" : { "stripe_subscription_event" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "subscription-action" ], "value" : "deleted" } },
        { "data_is" : { "data" : [ "plan" ], "value" : "Employer Membership" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[acting-user:mail]",
            "subject" : "Carers Register Membership Cancellation",
            "message" : "Dear [acting-user:field-first-name-em] [acting-user:field-last-name-em],\\r\\n\\r\\nThis is to confirm that we have cancelled your [plan:value]. We are sorry to see you go. \\r\\n\\r\\nEven though you have cancelled your membership, you still have a basic account on the website and can continue to login and access all your existing messages. Your job details are still held on the website as well, but it will not be published. \\r\\n\\r\\nAs you have cancelled your account you will no longer be able to contact carers through the website and your job details will no longer be visible to carers.\\r\\n\\r\\nYou can renew your membership at any time by going to [site:url]subscription.\\r\\n\\r\\nIf you want to cancel your entire account, and remove all your information just login and click on the Cancel Account link under the My Profile menu. This will completely remove all the data we hold about you.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team",
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
        { "node_unpublish" : { "node" : [ "nid:0" ] } }
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
