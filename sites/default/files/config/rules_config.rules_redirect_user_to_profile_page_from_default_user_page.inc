<?php
/**
 * @file
 * rules_config.rules_redirect_user_to_profile_page_from_default_user_page.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_redirect_user_to_profile_page_from_default_user_page" : {
      "LABEL" : "Redirect user to profile page from default user page",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "cr" ],
      "REQUIRES" : [ "rules", "php" ],
      "ON" : { "user_view" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:uid" ], "value" : [ "site:current-user:uid" ] } }
      ],
      "DO" : [
        { "redirect" : { "url" : "\\u003C?php \\r\\n\\tif(in_array(\\u0027employer\\u0027, $account-\\u003Eroles)) : \\r\\n\\t\\tprint \\u0022profile-employer\\u0022;\\r\\n\\telseif(in_array(\\u0027agency\\u0027, $account-\\u003Eroles)) : \\r\\n\\t\\tprint \\u0022profile-agency\\u0022;\\r\\n\\telseif(in_array(\\u0027carer\\u0027, $account-\\u003Eroles)) : \\r\\n\\t\\tprint \\u0022profile-carer\\u0022;\\r\\n\\telse :\\r\\n\\t\\tprint \\u0022\\u0022;\\r\\n\\tendif;\\r\\n?\\u003E" } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'php',
  2 => 'rules',
);
