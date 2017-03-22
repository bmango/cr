<?php
/**
 * @file
 * ds_layout_settings.node_job_job_details_agency_view.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|job|job_details_agency_view';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'job';
$ds_layout->view_mode = 'job_details_agency_view';
$ds_layout->layout = 'bootstrap_12';
$ds_layout->settings = array(
  'regions' => array(
    'central' => array(
      0 => 'published_status',
      1 => 'group_job',
      2 => 'field_agency_contact',
      3 => 'group_agency',
      4 => 'field_agency_contact_phone',
      5 => 'field_agency_contact_link',
      6 => 'field_ni_number',
      7 => 'field_job_type',
      8 => 'field_job_status',
      9 => 'field_care_category',
      10 => 'field_job_hours',
      11 => 'pay',
      12 => 'field_pay_basis',
      13 => 'field_driver_licence_required',
      14 => 'field_preferred_carer_gender',
      15 => 'field_lgbt_care',
      16 => 'field_job_duties',
      17 => 'field_night_time_assistance',
      18 => 'field_language',
      19 => 'field_address',
      20 => 'group_top',
      21 => 'title',
      22 => 'apply_here',
      23 => 'field_description',
      24 => 'group_left',
      25 => 'group_right',
    ),
  ),
  'fields' => array(
    'published_status' => 'central',
    'group_job' => 'central',
    'field_agency_contact' => 'central',
    'group_agency' => 'central',
    'field_agency_contact_phone' => 'central',
    'field_agency_contact_link' => 'central',
    'field_ni_number' => 'central',
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
    'field_address' => 'central',
    'group_top' => 'central',
    'title' => 'central',
    'apply_here' => 'central',
    'field_description' => 'central',
    'group_left' => 'central',
    'group_right' => 'central',
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
