<?php
/**
 * @file
 * field_group.group_details_profile2_agency_page.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_details|profile2|agency|page';
$field_group->group_name = 'group_details';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'agency';
$field_group->mode = 'page';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Agency Details',
  'weight' => '0',
  'children' => array(
    0 => 'field_telephone_em',
    1 => 'field_address',
    2 => 'field_description',
    3 => 'field_care_category',
    4 => 'field_location',
    5 => 'field_agency_contact_link',
    6 => 'field_company',
    7 => 'field_agency_contact_email',
    8 => 'field_image',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Agency Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-details field-group-html-element group-agency-details',
      'element' => 'div',
      'show_label' => '1',
      'label_element' => 'h4',
      'attributes' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
