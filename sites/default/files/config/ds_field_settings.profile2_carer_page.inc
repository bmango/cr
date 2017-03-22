<?php
/**
 * @file
 * ds_field_settings.profile2_carer_page.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'profile2|carer|page';
$ds_fieldsetting->entity_type = 'profile2';
$ds_fieldsetting->bundle = 'carer';
$ds_fieldsetting->view_mode = 'page';
$ds_fieldsetting->settings = array(
  'carer_membership_active' => array(
    'weight' => '0',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'carer_profile_active' => array(
    'weight' => '1',
    'label' => 'hidden',
    'format' => 'default',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
