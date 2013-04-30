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

  // Update section editor role

  $section_editor_permissions = array(

    'administer files',
    'create files',
    'use text format panopoly_wysiwyg_text',
    'use text format panopoly_html_text',

    // FPP permissions

    'edit fieldable accordion',  

    'create fieldable existing_node',
    'edit fieldable existing_node',

    'edit fieldable People',

    'edit fieldable quote',

    'edit fieldable slideshow',

    'edit fieldable spotlight',

    'edit fieldable links',
  
    'edit fieldable text',
  
    'edit fieldable video',

    // File entity

    'view own files',
    'view files',    

    // Filter

    'use text format panopoly_wysiwyg_text',  

    // Media Internet Sources

    'add media from remote sources',    

    // Mobile friendly navigation toolbar

    'access navbar',              

    // Node permissions

    'access content',
    'view own unpublished content',
    'view revisions',
    'revert revisions',    

    'edit any alumni content',
  
    'create event content',
    'edit own event content',
    'edit any event content',
    'delete own event content',
  
    'edit any msx_fellows content',
  
    'edit any page content',
  
    'edit any phd_candidate content',

    'edit any staff content',

    'edit any webform content',  

    // Panels

    'view pane admin links',
    'use panels in place editing',

    // Workbench

    'access workbench',

  );

  user_role_grant_permissions($section_editor->rid, $section_editor_permissions);


  // Create a section manager role

  $section_manager = new stdClass();
  $section_manager->name = 'section manager';
  $section_manager->weight = 3;
  user_role_save($section_manager);

  $section_manager_permissions = array(

    'create files',
    'use text format panopoly_wysiwyg_text',
    'use text format panopoly_html_text',

    // FPP permissions    
    
    'create fieldable accordion',
    'edit fieldable accordion',
    'delete fieldable accordion',     

    'create fieldable cta',
    'edit fieldable cta',
    'delete fieldable cta',   

    'create fieldable existing_node',
    'edit fieldable existing_node',
    'delete fieldable existing_node', 

    'create fieldable people',
    'edit fieldable people',
    'delete fieldable people',

    'create fieldable quote',
    'edit fieldable quote',
    'delete fieldable quote',

    'create fieldable slideshow',
    'edit fieldable slideshow',
    'delete fieldable slideshow',

    'create fieldable social_feed',
    'edit fieldable social_feed',
    'delete fieldable social_feed', 

    'create fieldable spotlight',
    'edit fieldable spotlight',
    'delete fieldable spotlight', 
  
    'create fieldable links',
    'edit fieldable links',
    'delete fieldable links', 
  
    'create fieldable text',
    'edit fieldable text',
    'delete fieldable text',  
  
    'create fieldable video',
    'edit fieldable video',
    'delete fieldable video', 

    // File entity

    'view own files',
    'view files',  

    // Filter

    'use text format panopoly_wysiwyg_text',    

    // Media Internet Sources

    'add media from remote sources',       

    // Menu

    'administer menu',     

    // Mobile friendly navigation toolbar

    'access navbar',    

    // Node permissions

    'administer nodes',
    'access content',
    'view own unpublished content',
    'view revisions',
    'revert revisions',

    'create alumni content',
    'edit own alumni content',
    'edit any alumni content',
    'delete own alumni content',
  
    'create event content',
    'edit own event content',
    'edit any event content',
    'delete own event content',
  
    'create msx_fellows content',
    'edit own msx_fellows content',
    'edit any msx_fellows content',
    'delete own msx_fellows content',
  
    'create page content',
    'edit own page content',
    'edit any page content',
    'delete own page content',
  
    'create phd_candidate content',
    'edit own phd_candidate content',
    'edit any phd_candidate content',
    'delete own phd_candidate content',
  
    'create staff content',
    'edit own staff content',
    'edit any staff content',
    'delete own staff content',

    'create webform content',
    'edit own webform content',
    'edit any webform content',
    'delete own webform content',

    // Panels

    'view pane admin links',
    'use panels in place editing',
    'change layouts in place editing',

    // Workbench

    'access workbench',    

  );

  user_role_grant_permissions($section_manager->rid, $section_manager_permissions);
}
