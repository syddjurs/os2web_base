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
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_base_contentpage content.
  $permissions['delete any os2web_base_contentpage content'] = array(
    'name' => 'delete any os2web_base_contentpage content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_communication',
      2 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_base_gallery content.
  $permissions['delete any os2web_base_gallery content'] = array(
    'name' => 'delete any os2web_base_gallery content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_base_news content.
  $permissions['delete any os2web_base_news content'] = array(
    'name' => 'delete any os2web_base_news content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_base_rotating_image content.
  $permissions['delete any os2web_base_rotating_image content'] = array(
    'name' => 'delete any os2web_base_rotating_image content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own os2web_base_contentpage content.
  $permissions['delete own os2web_base_contentpage content'] = array(
    'name' => 'delete own os2web_base_contentpage content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own os2web_base_gallery content.
  $permissions['delete own os2web_base_gallery content'] = array(
    'name' => 'delete own os2web_base_gallery content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
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
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_base_contentpage content.
  $permissions['edit any os2web_base_contentpage content'] = array(
    'name' => 'edit any os2web_base_contentpage content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_base_gallery content.
  $permissions['edit any os2web_base_gallery content'] = array(
    'name' => 'edit any os2web_base_gallery content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_base_news content.
  $permissions['edit any os2web_base_news content'] = array(
    'name' => 'edit any os2web_base_news content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_base_rotating_image content.
  $permissions['edit any os2web_base_rotating_image content'] = array(
    'name' => 'edit any os2web_base_rotating_image content',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
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
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_webmaster',
    ),
    'module' => 'image',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'os2web_base_role_administrator',
      1 => 'os2web_base_role_editor',
      2 => 'os2web_base_role_communication',
      3 => 'os2web_base_role_webmaster',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
