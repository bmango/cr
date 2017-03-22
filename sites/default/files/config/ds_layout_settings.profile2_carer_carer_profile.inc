<?php
/**
 * @file
 * ds_layout_settings.profile2_carer_carer_profile.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'profile2|carer|carer_profile';
$ds_layout->entity_type = 'profile2';
$ds_layout->bundle = 'carer';
$ds_layout->view_mode = 'carer_profile';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'field_nationality',
      1 => 'field_first_name_em',
      2 => 'field_last_name_em',
    ),
  ),
  'fields' => array(
    'field_nationality' => 'ds_content',
    'field_first_name_em' => 'ds_content',
    'field_last_name_em' => 'ds_content',
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
  'hide_page_title' => '0',
  'page_option_title' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
