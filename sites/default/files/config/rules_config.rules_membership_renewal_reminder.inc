<?php
/**
 * @file
 * rules_config.rules_membership_renewal_reminder.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_membership_renewal_reminder" : {
      "LABEL" : "Membership Renewal Reminder",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules", "stripe_subscription" ],
      "ON" : { "stripe_subscription_event" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "subscription-action" ], "value" : "reminder" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "acting-user:mail" ],
            "subject" : "Carers Register Membership Renewal Reminder",
            "message" : "Dear [acting-user:field-first-name-em] [acting-user:field-last-name-em], \\r\\n\\r\\nThis is a reminder that your membership for [site:name] will renew on [subscription-renewal:value].\\r\\n\\r\\nYou can view your membership details or cancel your membership at any time by visiting [site:url]subscription.\\r\\n\\r\\n[site:name] Team",
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
