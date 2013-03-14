<?php

function _gsb_public_setup_roles() {
  // Update the administrator role
  $administrator = user_role_load_by_name('administrator');
  user_role_grant_permissions($administrator->rid, array_keys(module_invoke_all('permission')));

  // Update the editor role
  $section_editor = user_role_load_by_name('editor');

  // Rename to section editor
  $section_editor->name = 'section editor';
  user_role_save($section_editor);

  // Remove any existing permissions
  user_role_revoke_permissions($section_editor->rid, array_keys(module_invoke_all('permission')));

  $section_editor_permissions = array(
    'create fieldable basic_file',
    'edit fieldable basic_file',
    'create fieldable text',
    'edit fieldable text',
    'create fieldable table',
    'edit fieldable table',
    'create fieldable video',
    'edit fieldable video',
    'administer files',
    'create files',
    'use text format panopoly_wysiwyg_text',
    'use text format panopoly_html_text',
    'administer nodes',
    'access content',
    'view own unpublished content',
    'view revisions',
    'revert revisions',
    'use panels in place editing',
  );

  user_role_grant_permissions($section_editor->rid, $section_editor_permissions);


  // Create a section manager role
  $section_manager = new stdClass();
  $section_manager->name = 'section manager';
  $section_manager->weight = 3;
  user_role_save($section_manager);

  $section_manager_permissions = array(
    'create fieldable basic_file',
    'edit fieldable basic_file',
    'create fieldable text',
    'edit fieldable text',
    'create fieldable table',
    'edit fieldable table',
    'create fieldable video',
    'edit fieldable video',
    'create files',
    'use text format panopoly_wysiwyg_text',
    'use text format panopoly_html_text',
    'access content',
    'view own unpublished content',
    'use panels in place editing',
  );

  user_role_grant_permissions($section_manager->rid, $section_manager_permissions);
}
