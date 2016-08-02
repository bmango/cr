<?php
/**
 * @file
 * field.profile2.field_surname_initial.agency.inc
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
      'type' => 'field_hidden',
      'weight' => '12',
      'settings' => array(),
      'module' => 'field_hidden',
    ),
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '12',
        'settings' => array(),
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '17',
        'settings' => array(),
      ),
      'agency' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '8',
        'settings' => array(),
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'field_surname_initial',
    'entity_type' => 'profile2',
    'bundle' => 'agency',
    'deleted' => '0',
    'default_value' => NULL,
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'field_hidden',
);
