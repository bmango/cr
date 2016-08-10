<?php
/**
 * @file
 * ds_layout_settings.node_job_job_details_agency_.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|job|job_details_agency_';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'job';
$ds_layout->view_mode = 'job_details_agency_';
$ds_layout->layout = 'bootstrap_12';
$ds_layout->settings = array(
  'regions' => array(
    'central' => array(
      0 => 'carer_favourite_links',
      1 => 'group_job',
      2 => 'group_agency',
      3 => 'field_agency_contact',
      4 => 'field_agency_contact_phone',
      5 => 'field_agency_contact_link',
      6 => 'field_job_type',
      7 => 'field_job_status',
      8 => 'field_care_category',
      9 => 'field_job_hours',
      10 => 'pay',
      11 => 'field_pay_basis',
      12 => 'field_driver_licence_required',
      13 => 'field_preferred_carer_gender',
      14 => 'field_lgbt_care',
      15 => 'field_job_duties',
      16 => 'field_night_time_assistance',
      17 => 'field_language',
      18 => 'group_top',
      19 => 'field_description',
      20 => 'send_message',
      21 => 'group_left',
      22 => 'apply_here',
      23 => 'group_right',
      24 => 'flag_favourite_jobs',
    ),
  ),
  'fields' => array(
    'carer_favourite_links' => 'central',
    'group_job' => 'central',
    'group_agency' => 'central',
    'field_agency_contact' => 'central',
    'field_agency_contact_phone' => 'central',
    'field_agency_contact_link' => 'central',
    'field_job_type' => 'central',
    'field_job_status' => 'central',
    'field_care_category' => 'central',
    'field_job_hours' => 'central',
    'pay' => 'central',
    'field_pay_basis' => 'central',
    'field_driver_licence_required' => 'central',
    'field_preferred_carer_gender' => 'central',
    'field_lgbt_care' => 'central',
    'field_job_duties' => 'central',
    'field_night_time_assistance' => 'central',
    'field_language' => 'central',
    'group_top' => 'central',
    'field_description' => 'central',
    'send_message' => 'central',
    'group_left' => 'central',
    'apply_here' => 'central',
    'group_right' => 'central',
    'flag_favourite_jobs' => 'central',
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
  'hide_page_title' => '0',
  'page_option_title' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
