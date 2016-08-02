<?php
/**
 * @file
 * rules_config.rules_carer_subscription_confirmation_email_.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_carer_subscription_confirmation_email_" : {
      "LABEL" : "Carer Membership Confirmation Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "carer", "cr", "subscription" ],
      "REQUIRES" : [ "rules", "stripe_subscription" ],
      "ON" : { "stripe_subscription_event" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "subscription-action" ], "value" : "created" } },
        { "data_is" : { "data" : [ "plan" ], "value" : "Carer Membership" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[acting-user:mail]",
            "subject" : "Carers Register Membership Confirmation",
            "message" : "Dear [acting-user:field-first-name-em] [acting-user:field-last-name-em],\\r\\n\\r\\nThank you for becoming a member at [site:name] with [plan:value] for [subscription-amount:value]. Your membership will renew each month until you cancel. You can see your membership details at [site:url]subscription.\\r\\n\\r\\nYour membership will renew on [subscription-renewal:value]. You will be sent a reminder email about your upcoming subscription renewal seven days before it renews. You can cancel at anytime by going to [site:url]subscription. Please note that when you cancel, your membership is cancelled at the same time, although your registration details will remain on the system, and so will still be able to login.\\r\\n\\r\\nYou can now contact employers on this site by viewing the individual job details and clicking on the Send Message button.\\r\\n\\r\\nYou will be sent an email every time an employer contacts you on the site.\\r\\n\\r\\nYou can unpublish your profile at any time in the edit profile section.\\r\\n\\r\\nDon\\u0027t forget, you will still need to login at least once every four weeks to keep your profile active.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions about your membership.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team",
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
