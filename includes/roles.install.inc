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

    'edit fieldable people',

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

    // System

    "view the administration theme",

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
    'access content overview',
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

    // Panelizer

    'administer panelizer node page content',

    // System

    "view the administration theme",

    // Workbench

    'access workbench',

    // Workbench Moderation

    'bypass workbench moderation',

  );

  user_role_grant_permissions($section_manager->rid, $section_manager_permissions);

  // Create the FA role

  $fa = new stdClass();
  $fa->name = 'fa';
  $fa->weight = 4;
  user_role_save($fa);

  $fa_permissions = array(

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

    'create event content',
    'edit own event content',
    'delete own event content',       

    'create faculty content',
    'edit own faculty content',
    'edit any faculty content',
    'delete own faculty content',   

    'create publication content', 
    'edit own publication content', 
    'edit any publication content', 
    'delete own publication content',      

    // Workbench

    'access workbench',       

  );

  user_role_grant_permissions($fa->rid, $fa_permissions);

  // Create the CWO Admin role

  $cwo_admin = new stdClass();
  $cwo_admin->name = 'cwo_admin';
  $cwo_admin->weight = 5;
  user_role_save($cwo_admin);

  $cwo_admin_permissions = array(

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

    'create case_study content',
    'edit own case_study content',
    'edit any case_study content',
    'delete own case_study content',     

    'create event content',
    'edit own event content',
    'delete own event content',  

    // Workbench

    'access workbench',              

  );

  user_role_grant_permissions($cwo_admin->rid, $cwo_admin_permissions);  

  // Create the Marketing Admin role

  $marketing_admin = new stdClass();
  $marketing_admin->name = 'marketing_admin';
  $marketing_admin->weight = 6;
  user_role_save($marketing_admin);

  $marketing_admin_permissions = array(

    // FPP permissions    

    'create fieldable image_cta',
    'edit fieldable image_cta',
    'delete fieldable image_cta',

    // Mini panels

    'administer mini panels',       

    // Node permissions

    'create business_insight content', 
    'edit own business_insight content', 
    'edit any business_insight content', 
    'delete own business_insight content', 

    'create club content',
    'edit own club content',
    'edit any club content',
    'delete own club content',        

    'edit any faculty content',

    'create media_mention content',
    'edit own media_mention content',
    'edit any media_mention content',
    'delete own media_mention content',             

    'create news content',
    'edit own news content',
    'edit any news content',
    'delete own news content',     

    'create publication content',
    'edit own publication content',
    'edit any publication content',
    'delete own publication content',  

    'create gsb_video content',
    'edit own gsb_video content',
    'edit any gsb_video content',
    'delete own gsb_video content',      

  );

  user_role_grant_permissions($marketing_admin->rid, $marketing_admin_permissions);   

}
