<?php
/**
 * @file
 * backup_migrate_schedules.weekly_backup.inc
 */

$api = '2.0.0';

$data = $item = new stdClass();
$item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
$item->api_version = 1;
$item->machine_name = 'weekly_backup';
$item->name = 'Weekly Backup';
$item->source_id = 'db';
$item->destination_id = 'scheduled';
$item->copy_destination_id = '';
$item->profile_id = 'default';
$item->keep = 25;
$item->period = 604800;
$item->enabled = TRUE;
$item->cron = 'builtin';
$item->cron_schedule = '0 4 * * *';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'backup_migrate',
);
