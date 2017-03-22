<?php
/**
 * @file
 * rules_config.rules_agency_registration_redirect_to_cart.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_agency_registration_redirect_to_cart" : {
      "LABEL" : "Agency Registration Redirect to Membership Confirmation Page",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-6",
      "OWNER" : "rules",
      "TAGS" : [ "agency", "cr" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "agency-membership-confirmation" } } ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
