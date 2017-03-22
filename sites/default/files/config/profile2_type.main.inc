<?php
/**
 * @file
 * profile2_type.main.inc
 */

$api = '2.0.0';

$data = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'profile2',
);
