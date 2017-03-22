<?php
/**
 * @file
 * ds_fields.send_message.inc
 */

$api = '2.0.0';

$data = $ds_field = new stdClass();
$ds_field->api_version = 1;
$ds_field->field = 'send_message';
$ds_field->label = 'Send message';
$ds_field->field_type = 5;
$ds_field->entities = array(
  'node' => 'node',
  'profile2' => 'profile2',
);
$ds_field->ui_limit = '';
$ds_field->properties = array(
  'code' => array(
    'value' => '<?php
	//dpm($entity);
	//is this a job or a profile we are looking at?
	global $user;
	if(property_exists($entity, \'field_first_name_em\')) { //it is a profile
		global $user;
		if(in_array(\'employer\', $user->roles) || in_array(\'anonymous user\', $user->roles)) { //only show to employers
			$nid = cr_employer_job($user->uid); //get job nid from employer
			print \'<a class="btn btn-primary" href="/node/add/message?field_to=\' . $entity->uid . \'&field_job=\' . $nid . \'" class="message">Send Message</a>\';
		}
	} 
	elseif(property_exists($entity, \'field_job_type\')) { //it is a job
		if(in_array(\'carer\', $user->roles) || in_array(\'anonymous user\', $user->roles)) { //only show to carers and anonymous users
			print \'<a class="btn btn-primary" href="/node/add/message?field_to=\' . $entity->uid . \'&field_job=\' . $entity->nid . \'" class="message">Send Message</a>\';
		}
	}
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
