<?php
/**
 * @file
 * ds_fields.profile_name.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'profile_name';
$ds_field->label = 'To';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'node' => 'node',
);
$ds_field->ui_limit = '';
$ds_field->properties = array(
  'code' => array(
    'value' => '<?php 
//dpm($entity);
	if(isset($entity->field_agency[\'und\'][0][\'value\'])) {
		$to = $entity->field_agency[\'und\'][0][\'value\'];
	} else {
		$to = cr_profile($entity->field_to[\'und\'][0][\'target_id\']);
	}
	print $to;
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
