<?php

function _gsb_public_setup_roles() {
  //We need both of these to get ther permissions right.

  //features_flush_caches();
  features_revert_module('gsb_feature_page_ct');
  drupal_static_reset('panelizer_entity_plugin_get_handler');

  // Create an administrator role

  $administrator = new stdClass();
  $administrator->name = 'administrator';
  $administrator->weight = 3;
  user_role_save($administrator);

  // Update the administrator role
  $administrator = user_role_load_by_name('administrator');
  user_role_grant_permissions($administrator->rid, array_keys(module_invoke_all('permission')));

  // Create an section editor role

  $section_editor = new stdClass();
  $section_editor->name = 'section editor';
  $section_editor->weight = 3;
  user_role_save($section_editor);

  $section_editor = user_role_load_by_name('section editor');

  // Update section editor role

  $section_editor_permissions = array(

    // FPP permissions

    'edit fieldable accordion',

    'edit fieldable cta',

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

    'create files',
    'view own files',
    'view files',

    'edit any image files',
    'edit any video files',
    'edit any audio files',
    'edit any document files',

    // Filter

    'use text format gsb_wysiwyg_text',
    'use text format gsb_html_text',

    // Media Internet Sources

    'add media from remote sources',

    // Node permissions

    'access content',
    'view own unpublished content',
    'view revisions',
    'revert revisions',

    'create event content',
    'edit own event content',
    'edit any event content',
    'delete own event content',

    'edit any msx_fellows content',

    'edit any page content',

    //'edit any phd_candidate content',

    'edit any staff content',

    'edit any webform content',

    //'edit any gsb_video content',

    //'edit any alumni content',
    //'edit any student content',

    // Panels

    'use panels in place editing',

    // Panelizer

   'administer panelizer node page content',

    // System

    "view the administration theme",

    // Workbench

    'access workbench',

    // Workbench Moderation

    'bypass workbench moderation',
    'view moderation history',
    'view moderation messages',
    'view all unpublished content',

  );

  user_role_grant_permissions($section_editor->rid, $section_editor_permissions);

  // Create a section manager role

  $section_manager = new stdClass();
  $section_manager->name = 'section manager';
  $section_manager->weight = 3;
  user_role_save($section_manager);

  $section_manager_permissions = array(

    'create files',

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

    'create files',
    'view own files',
    'view files',

    'edit any image files',
    'edit any video files',
    'edit any audio files',
    'edit any document files',

    // Filter

    'use text format gsb_wysiwyg_text',
    'use text format gsb_html_text',

    // Media Internet Sources

    'add media from remote sources',

    // Node permissions

    'administer nodes',
    'access content',
    'access content overview',
    'view own unpublished content',
    'view revisions',
    'revert revisions',

    //'create alumni content',
    //'edit own alumni content',
    //'edit any alumni content',
    //'delete own alumni content',
    //'delete any alumni content',

    'create event content',
    'edit own event content',
    'edit any event content',
    'delete own event content',
    'delete any event content',

    'create msx_fellows content',
    'edit own msx_fellows content',
    'edit any msx_fellows content',
    'delete own msx_fellows content',
    'delete any msx_fellows content',

    'create page content',
    'edit own page content',
    'edit any page content',
    'delete own page content',
    'delete any page content',

    /**
    'create phd_candidate content',
    'edit own phd_candidate content',
    'edit any phd_candidate content',
    'delete own phd_candidate content',
    'delete any phd_candidate content',
    **/

    'create staff content',
    'edit own staff content',
    'edit any staff content',
    'delete own staff content',
    'delete any staff content',

    //'create student content',
    //'edit own student content',
    //'edit any student content',
    //'delete own student content',
    //'delete any student content',

    'create webform content',
    'edit own webform content',
    'edit any webform content',
    'delete own webform content',
    'delete any webform content',

    // Panels

    'use panels in place editing',
    'change layouts in place editing',

    // Panelizer

// 'administer panelizer node page content',

    // System

    "view the administration theme",

    // Workbench

    'access workbench',

    // Workbench Moderation

    'bypass workbench moderation',
    'view moderation history',
    'view moderation messages',
    'view all unpublished content',

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

    'use text format gsb_wysiwyg_text',

    // Media Internet Sources

    'add media from remote sources',

    // Node permissions

    'access content',
    'view own unpublished content',
    'view revisions',
    'revert revisions',

    'create event content',
    'edit own event content',
    'edit any event content',
    'delete own event content',
    'delete any event content',

    'edit any faculty content',

    //'edit any publication content',

    // Workbench

    'access workbench',

  );

  user_role_grant_permissions($fa->rid, $fa_permissions);

  // Create the AA role

  $aa = new stdClass();
  $aa->name = 'aa';
  $aa->weight = 4;
  user_role_save($aa);

  $aa_permissions = array(

    // File entity

    'view own files',
    'view files',

    // Filter

    'use text format gsb_wysiwyg_text',

    // Media Internet Sources

    'add media from remote sources',

    // Node permissions

    'access content',
    'view own unpublished content',
    'view revisions',
    'revert revisions',

    'create event content',
    'edit own event content',
    'edit any event content',
    'delete own event content',
    'delete any event content',

    'create faculty content',
    'edit own faculty content',
    'edit any faculty content',
    'delete own faculty content',
    'delete any faculty content',

    /**
    'create publication content',
    'edit own publication content',
    'edit any publication content',
    'delete own publication content',
    'delete any publication content',
**/
    // Workbench

    'access workbench',

  );

  user_role_grant_permissions($aa->rid, $aa_permissions);

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

    'use text format gsb_wysiwyg_text',

    // Media Internet Sources

    'add media from remote sources',

    // Node permissions

    'access content',
    'view own unpublished content',
    'view revisions',
    'revert revisions',

    /**
    'create case_study content',
    'edit own case_study content',
    'edit any case_study content',
    'delete own case_study content',
**/

    'create event content',
    'edit own event content',
    'edit any event content',
    'delete own event content',
    'delete any event content',

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
/**
    'create business_insight content',
    'edit own business_insight content',
    'edit any business_insight content',
    'delete own business_insight content',
    'delete any business_insight content',

    'create media_mention content',
    'edit own media_mention content',
    'edit any media_mention content',
    'delete own media_mention content',
    'delete any media_mention content',

    'create news content',
    'edit own news content',
    'edit any news content',
    'delete own news content',
    'delete any news content',

    'create publication content',
    'edit own publication content',
    'edit any publication content',
    'delete own publication content',
    'delete any publication content',
**/

/**
    'create gsb_video content',
    'edit own gsb_video content',
    'edit any gsb_video content',
    'delete own gsb_video content',
    'delete any gsb_video content',
**/

    // Page Manager

    'use page manager',
    'administer page manager',

    // System

    "view the administration theme",

    // Workbench

    'access workbench',

  );

  user_role_grant_permissions($marketing_admin->rid, $marketing_admin_permissions);

}
