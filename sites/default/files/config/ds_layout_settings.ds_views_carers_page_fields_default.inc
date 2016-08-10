<?php
/**
 * @file
 * ds_layout_settings.ds_views_carers_page_fields_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'ds_views|carers-page-fields|default';
$ds_layout->entity_type = 'ds_views';
$ds_layout->bundle = 'carers-page-fields';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'bootstrap_6_6_bricks';
$ds_layout->settings = array(
  'regions' => array(
    'top' => array(
      0 => 'field_surname_initial',
      1 => 'field_district',
    ),
    'topleft' => array(
      2 => 'field_age',
      3 => 'field_gender_cr',
      4 => 'field_nationality',
      5 => 'field_spoken_english_level',
      6 => 'field_other_spoken_languages',
    ),
    'topright' => array(
      7 => 'field_job_type',
      8 => 'field_job_status',
      9 => 'field_availablity',
      10 => 'field_dbs_certificate',
      11 => 'field_lgbt_care',
    ),
    'bottomleft' => array(
      12 => 'field_description',
    ),
    'bottomright' => array(
      13 => 'field_driver_licence_required',
      14 => 'field_smoker',
      15 => 'field_references',
    ),
  ),
  'fields' => array(
    'field_surname_initial' => 'top',
    'field_district' => 'top',
    'field_age' => 'topleft',
    'field_gender_cr' => 'topleft',
    'field_nationality' => 'topleft',
    'field_spoken_english_level' => 'topleft',
    'field_other_spoken_languages' => 'topleft',
    'field_job_type' => 'topright',
    'field_job_status' => 'topright',
    'field_availablity' => 'topright',
    'field_dbs_certificate' => 'topright',
    'field_lgbt_care' => 'topright',
    'field_description' => 'bottomleft',
    'field_driver_licence_required' => 'bottomright',
    'field_smoker' => 'bottomright',
    'field_references' => 'bottomright',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'top' => 'div',
    'topleft' => 'div',
    'topright' => 'div',
    'central' => 'div',
    'bottomleft' => 'div',
    'bottomright' => 'div',
    'bottom' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'hide_page_title' => '0',
  'page_option_title' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
