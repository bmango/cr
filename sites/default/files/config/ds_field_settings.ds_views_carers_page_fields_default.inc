<?php
/**
 * @file
 * ds_field_settings.ds_views_carers_page_fields_default.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'ds_views|carers-page-fields|default';
$ds_fieldsetting->entity_type = 'ds_views';
$ds_fieldsetting->bundle = 'carers-page-fields';
$ds_fieldsetting->view_mode = 'default';
$ds_fieldsetting->settings = array(
  'field_district' => array(
    'weight' => '1',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_surname_initial' => array(
    'weight' => '0',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_age' => array(
    'weight' => '2',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_gender_cr' => array(
    'weight' => '3',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_job_type' => array(
    'weight' => '7',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_lgbt_care' => array(
    'weight' => '11',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_job_status' => array(
    'weight' => '8',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_nationality' => array(
    'weight' => '4',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_availablity' => array(
    'weight' => '9',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_description' => array(
    'weight' => '12',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_spoken_english_level' => array(
    'weight' => '5',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_other_spoken_languages' => array(
    'weight' => '6',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_dbs_certificate' => array(
    'weight' => '10',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_references' => array(
    'weight' => '15',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_driver_licence_required' => array(
    'weight' => '13',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'field_smoker' => array(
    'weight' => '14',
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
