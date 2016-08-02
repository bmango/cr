<?php
/**
 * @file
 * rules_config.rules_carer_subscription_cancellation_email.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_carer_subscription_cancellation_email" : {
      "LABEL" : "Carer Subscription Cancellation Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "carer", "cr", "subscription" ],
      "REQUIRES" : [ "rules", "stripe_subscription" ],
      "ON" : { "stripe_subscription_event" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "subscription-action" ], "value" : "deleted" } },
        { "data_is" : { "data" : [ "plan" ], "value" : "Carer Membership" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[acting-user:mail]",
            "subject" : "Carers Register Membership Cancellation",
            "message" : "Dear [acting-user:field-first-name-em] [acting-user:field-last-name-em],\\r\\n\\r\\nThis is to confirm that we have cancelled your [plan:value]. We are sorry to see you go. \\r\\n\\r\\nEven though you have cancelled your membership, you still have a basic account on the website and can continue to login and access all your existing messages. Employers will still be able to contact you directly through the site. \\r\\n\\r\\nAs you have cancelled your membership you will no longer be able to contact employers through the website.\\r\\n\\r\\nYou can renew your membership at any time by going to [site:url]subscription.\\r\\n\\r\\nIf you want to cancel your entire account, and remove all your information just login and click on the Cancel Account link under the My Profile menu. This will completely remove all the data we hold about you.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team",
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
  2 => 'stripe_subscription',
);
