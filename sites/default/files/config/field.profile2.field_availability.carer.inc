<?php
/**
 * @file
 * field.profile2.field_availability.carer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'availability',
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
            'field_data_field_availability' => array(
              'tid' => 'field_availability_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_availability' => array(
              'tid' => 'field_availability_tid',
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
    'field_name' => 'field_availability',
    'type' => 'taxonomy_term_reference',
    'module' => 'taxonomy',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
    'label' => 'Availability',
    'widget' => array(
      'weight' => '5',
      'type' => 'select_or_other_buttons',
      'module' => 'select_or_other',
      'active' => 1,
      'settings' => array(
        'other' => 'More details',
        'other_title' => 'More Details',
        'other_unknown_defaults' => 'other',
        'other_size' => '60',
        'sort_options' => 0,
        'label_help_description' => '',
        'available_options' => '',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_link',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
        'weight' => 24,
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '19',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'carer_details_employer' => array(
        'label' => 'above',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '11',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'carer_profile' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_availability',
    'entity_type' => 'profile2',
    'bundle' => 'carer',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'vocabulary.availability' => 'vocabulary.availability',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'select_or_other',
);
