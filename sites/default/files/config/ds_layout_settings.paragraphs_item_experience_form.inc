<?php
/**
 * @file
 * ds_layout_settings.paragraphs_item_experience_form.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'paragraphs_item|experience|form';
$ds_layout->entity_type = 'paragraphs_item';
$ds_layout->bundle = 'experience';
$ds_layout->view_mode = 'form';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'field_care_category',
      1 => 'field_experience_length',
    ),
    'hidden' => array(
      2 => '_add_existing_field',
    ),
  ),
  'fields' => array(
    'field_care_category' => 'ds_content',
    'field_experience_length' => 'ds_content',
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
