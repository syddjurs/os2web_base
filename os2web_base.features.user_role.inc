<?php
/**
 * @file
 * os2web_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function os2web_base_user_default_roles() {
  $roles = array();

  // Exported role: os2web_base_role_administrator.
  $roles['os2web_base_role_administrator'] = array(
    'name' => 'Administrator',
    'weight' => '5',
  );

  // Exported role: os2web_base_role_editor.
  $roles['os2web_base_role_editor'] = array(
    'name' => 'Editor',
    'weight' => '3',
  );

  // Exported role: os2web_base_role_communication.
  $roles['os2web_base_role_communication'] = array(
    'name' => 'Kommunikation',
    'weight' => '6',
  );

  // Exported role: os2web_base_role_student.
  $roles['os2web_base_role_student'] = array(
    'name' => 'Student',
    'weight' => '2',
  );

  // Exported role: os2web_base_role_webmaster.
  $roles['os2web_base_role_webmaster'] = array(
    'name' => 'Webmaster',
    'weight' => '4',
  );

  return $roles;
}
