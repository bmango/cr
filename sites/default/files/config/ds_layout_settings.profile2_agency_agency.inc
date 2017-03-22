<?php
/**
 * @file
 * ds_layout_settings.profile2_agency_agency.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'profile2|agency|agency';
$ds_layout->entity_type = 'profile2';
$ds_layout->bundle = 'agency';
$ds_layout->view_mode = 'agency';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'agency_membership_status',
      1 => 'group_agency_details',
      2 => 'field_image',
      3 => 'field_company',
      4 => 'field_first_name_em',
      5 => 'field_last_name_em',
      6 => 'field_description',
      7 => 'field_telephone_em',
      8 => 'field_agency_contact_email',
      9 => 'field_agency_contact_link',
      10 => 'field_address',
      11 => 'field_location',
    ),
  ),
  'fields' => array(
    'agency_membership_status' => 'ds_content',
    'group_agency_details' => 'ds_content',
    'field_image' => 'ds_content',
    'field_company' => 'ds_content',
    'field_first_name_em' => 'ds_content',
    'field_last_name_em' => 'ds_content',
    'field_description' => 'ds_content',
    'field_telephone_em' => 'ds_content',
    'field_agency_contact_email' => 'ds_content',
    'field_agency_contact_link' => 'ds_content',
    'field_address' => 'ds_content',
    'field_location' => 'ds_content',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'ds_content' => 'div',
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
