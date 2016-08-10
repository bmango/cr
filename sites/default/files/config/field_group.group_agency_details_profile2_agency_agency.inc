<?php
/**
 * @file
 * field_group.group_agency_details_profile2_agency_agency.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_agency_details|profile2|agency|agency';
$field_group->group_name = 'group_agency_details';
$field_group->entity_type = 'profile2';
$field_group->bundle = 'agency';
$field_group->mode = 'agency';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Agency Details',
  'weight' => '1',
  'children' => array(
    0 => 'field_first_name_em',
    1 => 'field_last_name_em',
    2 => 'field_telephone_em',
    3 => 'field_address',
    4 => 'field_description',
    5 => 'field_location',
    6 => 'field_agency_contact_link',
    7 => 'field_company',
    8 => 'field_agency_contact_email',
    9 => 'field_image',
  ),
  'format_type' => 'html-element',
  'format_settings' => array(
    'label' => 'Agency Details',
    'instance_settings' => array(
      'id' => '',
      'classes' => 'group-agency-details field-group-html-element',
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
