<?php
/**
 * @file
 * field.paragraphs_item.field_experience_length.experience.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'experience_length',
          'parent' => '0',
        ),
      ),
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
            'field_data_field_experience_length' => array(
              'tid' => 'field_experience_length_tid',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_experience_length' => array(
              'tid' => 'field_experience_length_tid',
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
    'field_name' => 'field_experience_length',
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
    'label' => 'Experience Length',
    'widget' => array(
      'weight' => '3',
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
        'label' => 'hidden',
        'type' => 'taxonomy_term_reference_plain',
        'weight' => '1',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'module' => 'taxonomy',
      ),
      'paragraphs_editor_preview' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(),
    'field_name' => 'field_experience_length',
    'entity_type' => 'paragraphs_item',
    'bundle' => 'experience',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'vocabulary.experience_length' => 'vocabulary.experience_length',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'taxonomy',
  2 => 'options',
);
