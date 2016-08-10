<?php
/**
 * @file
 * ds_field_settings.ds_views_carers_profiles_page_fields_default.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'ds_views|carers_profiles-page-fields|default';
$ds_fieldsetting->entity_type = 'ds_views';
$ds_fieldsetting->bundle = 'carers_profiles-page-fields';
$ds_fieldsetting->view_mode = 'default';
$ds_fieldsetting->settings = array(
  'pid' => array(
    'weight' => '0',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_address_country' => array(
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
