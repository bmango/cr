<?php
/**
 * @file
 * rules_for_employers.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_for_employers_default_rules_configuration() {
  $items = array();
  $items['rules_carer_employer_registration_re_direct'] = entity_import('rules_config', '{ "rules_carer_employer_registration_re_direct" : {
      "LABEL" : "Employer Registration Re-direct",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "employer" ],
      "REQUIRES" : [ "rules", "commerce_order" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "4" : "4" } },
            "operation" : "OR"
          }
        },
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "site:current-cart-order" ],
            "product_type" : { "value" : { "employers_membership" : "employers_membership" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "cart" } },
        { "drupal_message" : { "message" : "Please checkout to complete your registration" } }
      ]
    }
  }');
  $items['rules_employer_checkout_re_direct_to_add_job'] = entity_import('rules_config', '{ "rules_employer_checkout_re_direct_to_add_job" : {
      "LABEL" : "Employer Checkout Re-direct to Add Job",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "employer" ],
      "REQUIRES" : [ "commerce_order", "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "employers_membership" : "employers_membership" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "node\\/add\\/job" } },
        { "drupal_message" : { "message" : "Please enter your job details for Carers to apply for" } }
      ]
    }
  }');
  $items['rules_employer_license_has_expired'] = entity_import('rules_config', '{ "rules_employer_license_has_expired" : {
      "LABEL" : "Employer license expiry email notification and unpublish job",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "employer" ],
      "REQUIRES" : [ "rules", "views_rules", "commerce_license" ],
      "ON" : { "commerce_license_update" : [] },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "commerce-license:status" ],
            "value" : [ "commerce-license-unchanged:status" ]
          }
        },
        { "data_is" : {
            "data" : [ "commerce-license:status" ],
            "op" : "IN",
            "value" : { "value" : { "3" : "3" } }
          }
        },
        { "user_has_role" : {
            "account" : [ "commerce-license:owner" ],
            "roles" : { "value" : { "2" : "2" } }
          }
        },
        { "entity_has_field" : {
            "entity" : [ "commerce-license:owner:profile-employer:user" ],
            "field" : "field_first_name_em"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "commerce-license:owner:mail" ],
            "subject" : "Membership Expired on Carers Register",
            "message" : "Dear [commerce-license:owner:field-first-name-em] [commerce-license:owner:field-last-name-em],\\r\\n\\r\\nThis is to confirm that your membership with Carers Register has now expired.\\r\\n\\r\\nWe hope that you have been able to find a carer using our site.\\r\\n\\r\\nAs your membership has expired, your job will now be unpublished and will no longer be visible to carers. Your job details however, will still be held on your account. You will still be able to continue to login to the website and access any existing messages you have, but will no longer be able to contact carers directly.\\r\\n\\r\\nYou can purchase a new membership at any time by going to [site:url]employer-membership.\\r\\n\\r\\nIf you want to cancel your entire account, and remove all your information just login and click on the Cancel Account link under the My Profile menu. This will completely remove all the data we hold about you.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team\\r\\nEmail: [site:mail]\\r\\nTel: 0800 061 4924",
            "from" : [ "" ],
            "language" : [ "" ]
          }
        },
        { "views_rules_collect_rows" : {
            "USING" : {
              "views_rules_display" : "employer_job_for_rules:views_rules_1",
              "uid" : [ "commerce-license:owner:uid" ]
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
  $items['rules_employer_publish_job'] = entity_import('rules_config', '{ "rules_employer_publish_job" : {
      "LABEL" : "Employer Publish Job",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "cr", "employer" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--job" : { "bundle" : "job" } },
      "IF" : [
        { "user_has_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "7" : "7" } } } }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  $items['rules_employer_register_on_checkout'] = entity_import('rules_config', '{ "rules_employer_register_on_checkout" : {
      "LABEL" : "Employer Register Redirect on Add to Cart",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "employer" ],
      "REQUIRES" : [ "rules", "commerce_order", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        },
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "employers_membership" : "employers_membership" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "employer\\/register" } } ]
    }
  }');
  $items['rules_employer_registration_confirmation_email'] = entity_import('rules_config', '{ "rules_employer_registration_confirmation_email" : {
      "LABEL" : "Employer Registration Confirmation Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "employer" ],
      "REQUIRES" : [ "commerce_order", "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "IF" : [
        { "commerce_order_contains_product_type" : {
            "commerce_order" : [ "commerce_order" ],
            "product_type" : { "value" : { "employers_membership" : "employers_membership" } },
            "operator" : "\\u003E=",
            "value" : "1"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "commerce-order:owner:mail" ],
            "subject" : "Carers Register Membership Confirmation",
            "message" : "Dear [commerce-order:owner:field-first-name-em] [commerce-order:owner:field-last-name-em],\\r\\n\\r\\nThank you for becoming a member at [site:name] with your purchase of \\u0022[commerce-order:commerce-line-items:0:line-item-label]\\u0022. You can see your membership details at [site:url]profile-employer\\/[commerce-order:uid].\\r\\n\\r\\nYou can log in at [site:login-url] using:\\r\\n\\r\\nusername: [acting-user:name] (or your email address)\\r\\npassword: Your password\\r\\n\\r\\nYou can now contact carers on this site by viewing the individual carer details. Carers registered with this site will also be able to send you a message if they want to contact you about a job.\\r\\n\\r\\nYou will be sent an email every time a carer contacts you on the site.\\r\\n\\r\\nYou can unpublish your job at any time in the edit job section. If you have not already created your job you can create it at [site:url]create-job.\\r\\n\\r\\nYou will be sent a reminder email one week before your subscription expires. You can cancel your account at any time by going to the Cancel Account link under the My Profile menu. Cancelling your account will remove all your details from the system.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions about your membership.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team\\r\\nEmail: [site:mail]\\r\\nTel: 0800 061 4924",
            "from" : [ "" ],
            "language" : [ "commerce-order:state" ]
          }
        }
      ]
    }
  }');
  $items['rules_employer_reminder_email_one_week_before_expiry'] = entity_import('rules_config', '{ "rules_employer_reminder_email_one_week_before_expiry" : {
      "LABEL" : "Employer reminder email one week before expiry",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "user" : { "label" : "User", "type" : "user" } },
      "ACTION SET" : [
        { "mail" : {
            "to" : [ "user:mail" ],
            "subject" : "[site:name] Membership Expiry Reminder",
            "message" : "Dear [user:profile-employer:field-first-name-em] [user:profile-employer:field-last-name-em], \\r\\n\\r\\nThis is a reminder email that your membership for [site:name] expires in one week. \\r\\n\\r\\nYou can renew your membership at any time by visiting [site:url]employer-membership.\\r\\n\\r\\n[site:name] Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_employer_subscription_cancellation_email'] = entity_import('rules_config', '{ "rules_employer_subscription_cancellation_email" : {
      "LABEL" : "Employer Subscription Cancellation Email and Unpublish Job",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "cr", "employer", "subscription" ],
      "REQUIRES" : [ "rules", "views_rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "site:current-user:roles" ],
            "value" : { "value" : { "7" : "7" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[acting-user:mail]",
            "subject" : "Carers Register Membership Cancellation",
            "message" : "Dear [acting-user:field-first-name-em] [acting-user:field-last-name-em],\\r\\n\\r\\nThis is to confirm that we have cancelled your [plan:value]. We are sorry to see you go. \\r\\n\\r\\nEven though you have cancelled your membership, you still have a basic account on the website and can continue to login and access all your existing messages. Your job details are still held on the website as well, but it will not be published. \\r\\n\\r\\nAs you have cancelled your account you will no longer be able to contact carers through the website and your job details will no longer be visible to carers.\\r\\n\\r\\nYou can renew your membership at any time by going to [site:url]subscription.\\r\\n\\r\\nIf you want to cancel your entire account, and remove all your information just login and click on the Cancel Account link under the My Profile menu. This will completely remove all the data we hold about you.\\r\\n\\r\\nPlease contact us at [site:mail] if you have any questions.\\r\\n\\r\\nKind regards,\\r\\n\\r\\n[site:name] team",
            "from" : [ "" ],
            "language" : [ "" ]
          }
        },
        { "views_rules_collect_rows" : {
            "USING" : {
              "views_rules_display" : "employer_job_for_rules:views_rules_1",
              "uid" : [ "site:current-user:uid" ]
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
  return $items;
}
