<?php
/**
 * @file
 * ds_fields.sent.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'sent';
$ds_field->label = 'Sent';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'comment' => 'comment',
);
$ds_field->ui_limit = '';
$ds_field->properties = array(
  'code' => array(
    'value' => '<?php 
//dpm($entity);

	$cr_user = user_load($entity->uid);
	if(in_array(\'agency\', $cr_user->roles)) :
		$profile = profile2_by_uid_load($cr_user->uid, \'agency\');
		$to = $profile->field_company[\'und\'][0][\'value\'];
	else :
		$to = cr_profile($entity->uid);
	endif;

	print "Sent by " . $to . " on " . date("jS F Y g:ia", $entity->created);
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
