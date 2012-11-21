<?php

function _gsb_public_setup_roles() {

  // Create a default role for site administrators, with all available permissions assigned.

  //$admin_role = new stdClass();
  //$admin_role->name = 'administrator';
  //$admin_role->weight = 4;
  //user_role_save($admin_role);

  //user_role_grant_permissions($admin_role->rid, array_keys(module_invoke_all('permission')));

  // Set this as the administrator role.

  //variable_set('user_admin_role', $admin_role->rid);

  // Update the editor role

  $editor = user_role_load_by_name('editor');

  $editor_permissions = array(
    'create fieldable quick_links',
    'edit fieldable quick_links',
    'create fieldable basic_file',
    'edit fieldable basic_file',
    'create fieldable image',
    'edit fieldable image',
    'create fieldable text',
    'edit fieldable text',
    'create fieldable map',
    'edit fieldable map',
    'create fieldable table',
    'edit fieldable table',
    'create fieldable video',
    'edit fieldable video',
    'create fieldable spotlight',
    'edit fieldable spotlight',
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
    'change layouts in place editing'
  );

  user_role_grant_permissions($editor->rid, $editor_permissions);

  // Create an author role

  $author = new stdClass();
  $author->name = 'author';
  $author->weight = 3;
  user_role_save($author);

  $author_permissions = array(
    'create fieldable quick_links',
    'edit fieldable quick_links',
    'create fieldable basic_file',
    'edit fieldable basic_file',
    'create fieldable image',
    'edit fieldable image',
    'create fieldable text',
    'edit fieldable text',
    'create fieldable map',
    'edit fieldable map',
    'create fieldable table',
    'edit fieldable table',
    'create fieldable video',
    'edit fieldable video',
    'create fieldable spotlight',
    'edit fieldable spotlight',
    'create files',
    'use text format panopoly_wysiwyg_text',
    'use text format panopoly_html_text',
    'access content',
    'view own unpublished content',
    'use panels in place editing',
    'change layouts in place editing'
  );

  user_role_grant_permissions($author->rid, $author_permissions);

}
