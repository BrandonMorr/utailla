<?php
/**
 * @file
 * Migrate hooks.
 */

/**
 * Implements hook_migrate_api().
 */
function utailla_migrate_api() {
  return array(
    'api' => 2,
    'groups' => array(
      'utailla' => array(
        'title' => t('UTAilla Migrations'),
      ),
    ),
    'migrations' => array(
      'UtaillaUser' => array(
        'class_name' => 'UtaillaUserMigration',
        'group_name' => 'utailla',
      ),
    ),
  );
}