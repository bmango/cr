<?php
/**
 * @file
 * field.profile2.field_location.agency.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_location' => array(
              'value' => 'field_location_value',
              'format' => 'field_location_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_location' => array(
              'value' => 'field_location_value',
              'format' => 'field_location_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_location',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Areas Covered',
    'widget' => array(
      'weight' => '10',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '7',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '11',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'agency' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '11',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => 'Please enter the areas your agency covers, eg: London, West Midlands, Yorkshire etc',
    'default_value' => NULL,
    'field_name' => 'field_location',
    'entity_type' => 'profile2',
    'bundle' => 'agency',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'profile2_type.agency' => 'profile2_type.agency',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
