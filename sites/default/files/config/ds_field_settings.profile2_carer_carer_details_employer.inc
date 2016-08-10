<?php
/**
 * @file
 * ds_field_settings.profile2_carer_carer_details_employer.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'profile2|carer|carer_details_employer';
$ds_fieldsetting->entity_type = 'profile2';
$ds_fieldsetting->bundle = 'carer';
$ds_fieldsetting->view_mode = 'carer_details_employer';
$ds_fieldsetting->settings = array(
  'employer_carers_links' => array(
    'weight' => '0',
    'label' => 'hidden',
    'format' => 'default',
    'formatter_settings' => array(
      'field_formatter_label' => 'test',
    ),
  ),
  'send_message' => array(
    'weight' => '29',
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
