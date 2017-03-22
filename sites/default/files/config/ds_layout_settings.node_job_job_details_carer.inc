<?php
/**
 * @file
 * ds_layout_settings.node_job_job_details_carer.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|job|job_details_carer';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'job';
$ds_layout->view_mode = 'job_details_carer';
$ds_layout->layout = 'bootstrap_12';
$ds_layout->settings = array(
  'regions' => array(
    'central' => array(
      0 => 'carer_favourite_links',
      1 => 'group_job',
      2 => 'group_care_receiver',
      3 => 'care_receiver_details_profile_entity_view_1',
      4 => 'field_district',
      5 => 'field_driver_licence_required',
      6 => 'contact_name',
      7 => 'field_lgbt_care',
      8 => 'field_job_type',
      9 => 'field_job_status',
      10 => 'field_job_duties',
      11 => 'field_care_category',
      12 => 'field_night_time_assistance',
      13 => 'field_language',
      14 => 'field_job_hours',
      15 => 'pay',
      16 => 'field_pay_basis',
      17 => 'field_preferred_carer_gender',
      18 => 'group_top',
      19 => 'send_message',
      20 => 'field_description',
      21 => 'group_left',
      22 => 'flag_favourite_jobs',
      23 => 'group_right',
    ),
  ),
  'fields' => array(
    'carer_favourite_links' => 'central',
    'group_job' => 'central',
    'group_care_receiver' => 'central',
    'care_receiver_details_profile_entity_view_1' => 'central',
    'field_district' => 'central',
    'field_driver_licence_required' => 'central',
    'contact_name' => 'central',
    'field_lgbt_care' => 'central',
    'field_job_type' => 'central',
    'field_job_status' => 'central',
    'field_job_duties' => 'central',
    'field_care_category' => 'central',
    'field_night_time_assistance' => 'central',
    'field_language' => 'central',
    'field_job_hours' => 'central',
    'pay' => 'central',
    'field_pay_basis' => 'central',
    'field_preferred_carer_gender' => 'central',
    'group_top' => 'central',
    'send_message' => 'central',
    'field_description' => 'central',
    'group_left' => 'central',
    'flag_favourite_jobs' => 'central',
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
