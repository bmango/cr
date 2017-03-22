<?php
/**
 * @file
 * field.profile2.field_alcohol.employer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Regularly' => 'Regularly',
        'Socially' => 'Socially',
        'Rarely' => 'Rarely',
        'Never' => 'Never',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_alcohol' => array(
              'value' => 'field_alcohol_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_alcohol' => array(
              'value' => 'field_alcohol_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'field_name' => 'field_alcohol',
    'type' => 'list_text',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Alcohol Drinking Habits',
    'widget' => array(
      'weight' => '27',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
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
        'type' => 'list_default',
        'weight' => '26',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
      'employer_details_carer_' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '6',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_alcohol',
    'entity_type' => 'profile2',
    'bundle' => 'employer',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
