<?php
/**
 * @file
 * field.profile2.field_other_spoken_languages.carer.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
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
            'field_data_field_other_spoken_languages' => array(
              'value' => 'field_other_spoken_languages_value',
              'revision_id' => 'field_other_spoken_languages_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_other_spoken_languages' => array(
              'value' => 'field_other_spoken_languages_value',
              'revision_id' => 'field_other_spoken_languages_revision_id',
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
    'field_name' => 'field_other_spoken_languages',
    'type' => 'paragraphs',
    'module' => 'paragraphs',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The paragraph item id.',
      ),
      'revision_id' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The paragraph item revision id.',
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Other Spoken Languages',
    'widget' => array(
      'weight' => '12',
      'type' => 'paragraphs_embed',
      'module' => 'paragraphs',
      'active' => 0,
      'settings' => array(
        'label_help_description' => '',
      ),
    ),
    'settings' => array(
      'title' => 'Language',
      'title_multiple' => 'Languages',
      'default_edit_mode' => 'open',
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'other_languages' => 'other_languages',
        'qualification' => -1,
        'work_experience' => -1,
      ),
      'bundle_weights' => array(
        'other_languages' => '2',
        'qualification' => '3',
        'work_experience' => '4',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '16',
        'settings' => array(),
      ),
      'page' => array(
        'label' => 'above',
        'type' => 'paragraphs_view',
        'weight' => '11',
        'settings' => array(
          'view_mode' => 'languages_list',
          'field_formatter_label' => '',
        ),
        'module' => 'paragraphs',
      ),
      'carer_profile' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '23',
        'settings' => array(),
      ),
      'carer_details_employer_' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '23',
        'settings' => array(),
      ),
      'carer_details_employer' => array(
        'label' => 'above',
        'type' => 'paragraphs_view',
        'weight' => '40',
        'settings' => array(
          'view_mode' => 'languages_list',
          'field_formatter_label' => '',
        ),
        'module' => 'paragraphs',
      ),
    ),
    'required' => 0,
    'description' => 'Do you speak any other languages?',
    'default_value' => NULL,
    'field_name' => 'field_other_spoken_languages',
    'entity_type' => 'profile2',
    'bundle' => 'carer',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'paragraphs',
);
