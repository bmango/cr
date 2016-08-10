<?php
/**
 * @file
 * ds_layout_settings.node_job_full.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|job|full';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'job';
$ds_layout->view_mode = 'full';
$ds_layout->layout = 'bootstrap_12';
$ds_layout->settings = array(
  'regions' => array(
    'central' => array(
      0 => 'group_job',
      1 => 'title',
      2 => 'field_description',
      3 => 'group_left',
      4 => 'field_job_type',
      5 => 'field_job_status',
      6 => 'field_care_category',
      7 => 'field_job_hours',
      8 => 'pay',
      9 => 'group_right',
      10 => 'field_pay_basis',
      11 => 'field_driver_licence_required',
      12 => 'field_preferred_carer_gender',
      13 => 'field_lgbt_care',
      14 => 'field_job_duties',
      15 => 'field_night_time_assistance',
      16 => 'field_language',
      17 => 'field_address',
    ),
  ),
  'fields' => array(
    'group_job' => 'central',
    'title' => 'central',
    'field_description' => 'central',
    'group_left' => 'central',
    'field_job_type' => 'central',
    'field_job_status' => 'central',
    'field_care_category' => 'central',
    'field_job_hours' => 'central',
    'pay' => 'central',
    'group_right' => 'central',
    'field_pay_basis' => 'central',
    'field_driver_licence_required' => 'central',
    'field_preferred_carer_gender' => 'central',
    'field_lgbt_care' => 'central',
    'field_job_duties' => 'central',
    'field_night_time_assistance' => 'central',
    'field_language' => 'central',
    'field_address' => 'central',
  ),
  'classes' => array(
    'layout_class' => array(
      'job-content' => 'job-content',
    ),
  ),
  'wrappers' => array(
    'central' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'layout_disable_css' => FALSE,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
