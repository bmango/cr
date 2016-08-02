<?php
/**
 * @file
 * field.node.field_agency.message.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_agency' => array(
              'value' => 'field_agency_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_agency' => array(
              'value' => 'field_agency_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_agency',
    'type' => 'field_hidden_text',
    'module' => 'field_hidden',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Agency',
    'widget' => array(
      'weight' => '7',
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
        'settings' => array(),
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '16',
        'settings' => array(),
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_agency',
    'entity_type' => 'node',
    'bundle' => 'message',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.message' => 'content_type.message',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'field_hidden',
);
