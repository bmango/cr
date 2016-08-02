<?php
/**
 * @file
 * field.profile2.field_nationality.carer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'countries',
          'parent' => '0',
        ),
      ),
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
            'field_data_field_nationality' => array(
              'tid' => 'field_nationality_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_nationality' => array(
              'tid' => 'field_nationality_tid',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'tid' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'tid' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_nationality',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'tid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Nationality (by country)',
    'widget' => array(
      'weight' => '6',
      'type' => 'options_select',
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
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '6',
        'settings' => array(
          'empty_fields_handler' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '5',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'carer_profile' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '0',
        'settings' => array(
          'empty_fields_handler' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'carer_details_employer_' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '0',
        'settings' => array(
          'empty_fields_handler' => '',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'carer_details_employer' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '34',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_nationality',
    'entity_type' => 'profile2',
    'bundle' => 'carer',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'vocabulary.countries' => 'vocabulary.countries',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
