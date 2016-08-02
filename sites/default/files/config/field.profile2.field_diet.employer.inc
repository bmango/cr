<?php
/**
 * @file
 * field.profile2.field_diet.employer.inc
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
            'field_data_field_diet' => array(
              'value' => 'field_diet_value',
              'format' => 'field_diet_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_diet' => array(
              'value' => 'field_diet_value',
              'format' => 'field_diet_format',
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
    'field_name' => 'field_diet',
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
    'label' => 'Diet',
    'widget' => array(
      'weight' => '30',
      'type' => 'select_or_other_buttons',
      'module' => 'select_or_other',
      'active' => 1,
      'settings' => array(
        'available_options' => 'Mixed|Mixed
Vegetarian|Vegetarian
Vegan|Vegan',
        'available_options_php' => '',
        'other' => 'Other',
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'other_size' => '60',
        'sort_options' => 0,
        'label_help_description' => '',
        'markup_available_options_php' => '&lt;none&gt;',
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
        'weight' => '29',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
      'employer_details_carer_' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '9',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_diet',
    'entity_type' => 'profile2',
    'bundle' => 'employer',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
  2 => 'select_or_other',
);
