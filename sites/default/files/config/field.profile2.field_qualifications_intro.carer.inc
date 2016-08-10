<?php
/**
 * @file
 * field.profile2.field_qualifications_intro.carer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'markup' => array(
        'value' => '<p>Please enter details of all your qualifications and any relevant education details.</p>
',
        'format' => 'full_html',
      ),
      'profile2_private' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_qualifications_intro',
    'type' => 'markup',
    'module' => 'markup',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(),
  ),
  'field_instance' => array(
    'label' => 'Qualifications Intro',
    'widget' => array(
      'weight' => '13',
      'type' => 'markup',
      'module' => 'markup',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '8',
        'settings' => array(),
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'markup_default',
        'weight' => '6',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'markup',
      ),
      'carer_profile' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '21',
        'settings' => array(),
      ),
      'carer_details_employer_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '21',
        'settings' => array(),
      ),
      'carer_details_employer' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '20',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_qualifications_intro',
    'entity_type' => 'profile2',
    'bundle' => 'carer',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'profile2_type.carer' => 'profile2_type.carer',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'markup',
);
