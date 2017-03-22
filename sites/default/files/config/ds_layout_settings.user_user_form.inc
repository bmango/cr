<?php
/**
 * @file
 * ds_layout_settings.user_user_form.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'user|user|form';
$ds_layout->entity_type = 'user';
$ds_layout->bundle = 'user';
$ds_layout->view_mode = 'form';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'account',
      1 => 'timezone',
      2 => 'ckeditor',
    ),
    'hidden' => array(
      3 => 'field_first_name_em',
      4 => 'contact',
      5 => 'field_last_name_em',
      6 => 'metatags',
      7 => '_add_existing_field',
    ),
  ),
  'fields' => array(
    'account' => 'ds_content',
    'timezone' => 'ds_content',
    'ckeditor' => 'ds_content',
    'field_first_name_em' => 'hidden',
    'contact' => 'hidden',
    'field_last_name_em' => 'hidden',
    'metatags' => 'hidden',
    '_add_existing_field' => 'hidden',
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
