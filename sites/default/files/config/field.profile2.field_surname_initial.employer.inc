<?php
/**
 * @file
 * field.profile2.field_surname_initial.employer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '5',
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_surname_initial' => array(
              'value' => 'field_surname_initial_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_surname_initial' => array(
              'value' => 'field_surname_initial_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_surname_initial',
    'type' => 'field_hidden_text',
    'module' => 'field_hidden',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '5',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Surname Initial',
    'widget' => array(
      'weight' => '32',
      'type' => 'field_hidden',
      'module' => 'field_hidden',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '4',
        'settings' => array(),
      ),
      'employer_details_carer_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '2',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'ds_extras_field_template' => '',
    'default_value' => NULL,
    'field_name' => 'field_surname_initial',
    'entity_type' => 'profile2',
    'bundle' => 'employer',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'field_hidden',
);
