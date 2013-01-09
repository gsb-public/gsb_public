<?php

function gsb_public_modules_enabled($modules) {

    // When any module is enabled we check to see if we 
    // need to add any specific permissions for the module
    // Currently, we add permissions for any of the 
    // content types we use for the public site.

    $permissions = array();
    _gsb_public_add_permissions($modules, $permissions);

    if (!empty($permissions)) {

        $role_name = "editor";
        $editor = user_role_load_by_name($role_name);
        user_role_grant_permissions($editor->rid, $permissions);

        $role_name = "author";
        $author = user_role_load_by_name($role_name);
        user_role_grant_permissions($author->rid, $permissions);
    }

}

function gsb_public_menu_alter(&$items) {

  // If the workbench sections tab page is defined,
  // we remove it by setting the "access callback" to FALSE

  if (isset($items["admin/workbench/sections"])) {
    $items["admin/workbench/sections"]["access callback"] = FALSE;
  }
  
}


function gsb_public_views_default_views_alter(&$views) {

  // Remove the workbench "drafts", "needs review" tabs, 
  // by disabling the workbench_moderation view.

  if (isset($views['workbench_moderation'])) {
    $views['workbench_moderation']->disabled = TRUE;
  }

  // Add additional filters to the "My Edits" page that is 
  // part of the Workbench dashboard.
  // The "My Edits" page is created via the "workbench_edited" 
  // view.

  if (isset($views['workbench_edited'])) {
    $filters = &$views['workbench_edited']->display['default']->display_options['filters'];
    $filters['nid']['id'] = 'nid';
    $filters['nid']['table'] = 'node';
    $filters['nid']['field'] = 'nid';
    $filters['nid']['relationship'] = 'vid';
    $filters['nid']['exposed'] = TRUE;
    $filters['nid']['expose']['operator_id'] = 'nid_op';
    $filters['nid']['expose']['label'] = 'Node Id';
    $filters['nid']['expose']['operator'] = 'nid_op';
    $filters['nid']['expose']['identifier'] = 'nid';
    $filters['nid']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
      5 => 0,
      4 => 0,
    );
  }

}

function _gsb_public_get_content_modules(&$modules) {

    if (module_exists("gsb_feature_page")) {
        $modules[] = "gsb_feature_page";
    }

    if (module_exists("gsb_feature_club")) {
        $modules[] = "gsb_feature_club";
    }

}

function _gsb_public_add_permissions($modules, &$permissions) {

    if (in_array('gsb_feature_page', $modules)) {
        $permissions[] = "create gsb_page content";
        $permissions[] = "edit own gsb_page content";
        $permissions[] = "delete own gsb_page content";
        $permissions[] = "administer panelizer node gsb_page content";
    }

    if (in_array('gsb_feature_club', $modules)) {
        $permissions[] = "create gsb_club content";
        $permissions[] = "edit own gsb_club content";
        $permissions[] = "delete own gsb_club content";
    }

}

