<?php
/**
 * @file
 * os2web_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: create os2web_base_contentpage content.
  $permissions['create os2web_base_contentpage content'] = array(
    'name' => 'create os2web_base_contentpage content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create os2web_base_gallery content.
  $permissions['create os2web_base_gallery content'] = array(
    'name' => 'create os2web_base_gallery content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create os2web_base_news content.
  $permissions['create os2web_base_news content'] = array(
    'name' => 'create os2web_base_news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create os2web_base_rotating_image content.
  $permissions['create os2web_base_rotating_image content'] = array(
    'name' => 'create os2web_base_rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_base_contentpage content.
  $permissions['delete any os2web_base_contentpage content'] = array(
    'name' => 'delete any os2web_base_contentpage content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Kommunikation',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_base_gallery content.
  $permissions['delete any os2web_base_gallery content'] = array(
    'name' => 'delete any os2web_base_gallery content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_base_news content.
  $permissions['delete any os2web_base_news content'] = array(
    'name' => 'delete any os2web_base_news content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_base_rotating_image content.
  $permissions['delete any os2web_base_rotating_image content'] = array(
    'name' => 'delete any os2web_base_rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own os2web_base_contentpage content.
  $permissions['delete own os2web_base_contentpage content'] = array(
    'name' => 'delete own os2web_base_contentpage content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own os2web_base_gallery content.
  $permissions['delete own os2web_base_gallery content'] = array(
    'name' => 'delete own os2web_base_gallery content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own os2web_base_news content.
  $permissions['delete own os2web_base_news content'] = array(
    'name' => 'delete own os2web_base_news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own os2web_base_rotating_image content.
  $permissions['delete own os2web_base_rotating_image content'] = array(
    'name' => 'delete own os2web_base_rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_base_contentpage content.
  $permissions['edit any os2web_base_contentpage content'] = array(
    'name' => 'edit any os2web_base_contentpage content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_base_gallery content.
  $permissions['edit any os2web_base_gallery content'] = array(
    'name' => 'edit any os2web_base_gallery content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_base_news content.
  $permissions['edit any os2web_base_news content'] = array(
    'name' => 'edit any os2web_base_news content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_base_rotating_image content.
  $permissions['edit any os2web_base_rotating_image content'] = array(
    'name' => 'edit any os2web_base_rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own os2web_base_contentpage content.
  $permissions['edit own os2web_base_contentpage content'] = array(
    'name' => 'edit own os2web_base_contentpage content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own os2web_base_gallery content.
  $permissions['edit own os2web_base_gallery content'] = array(
    'name' => 'edit own os2web_base_gallery content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own os2web_base_news content.
  $permissions['edit own os2web_base_news content'] = array(
    'name' => 'edit own os2web_base_news content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own os2web_base_rotating_image content.
  $permissions['edit own os2web_base_rotating_image content'] = array(
    'name' => 'edit own os2web_base_rotating_image content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Kommunikation',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
