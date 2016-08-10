<?php
/**
 * @file
 * ds_fields.from.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'from';
$ds_field->label = 'From';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'node' => 'node',
);
$ds_field->ui_limit = 'message|full';
$ds_field->properties = array(
  'code' => array(
    'value' => '<?php 
//dpm($entity);
//$profile = profile2_by_uid_load($entity->uid, \'carer_employer\');
$profile = cr_profile($entity->uid);
//dpm($profile);
//print $profile->field_first_name_em[\'und\'][0][\'value\'] . \' \' . $profile->field_surname_initial[\'und\'][0][\'value\'];
print $profile;
?>',
    'format' => 'ds_code',
  ),
  'use_token' => 0,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
