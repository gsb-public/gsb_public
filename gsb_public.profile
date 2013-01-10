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

  // Also add the Node Id and Section as columns that gets displayed in the
  // view's results table.

  if (isset($views['workbench_edited'])) {

    $filters = &$views['workbench_edited']->display['default']->display_options['filters'];
    $fields = &$views['workbench_edited']->display['default']->display_options['fields'];
    $relationships =  &$views['workbench_edited']->display['default']->display_options['relationships'];
    $sorts = &$views['workbench_edited']->display['default']->display_options['sorts'];

    // relationships

    $relationships['vid']['id'] = 'vid';
    $relationships['vid']['table'] = 'node_revision';
    $relationships['vid']['field'] = 'vid';

    // filter - Node Id

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

    // filter - Updated By

    $filters['uid_revision']['id'] = 'uid_revision';
    $filters['uid_revision']['table'] = 'node';
    $filters['uid_revision']['field'] = 'uid_revision';
    $filters['uid_revision']['relationship'] = 'vid';
    $filters['uid_revision']['value'] = '';
    $filters['uid_revision']['exposed'] = TRUE;
    $filters['uid_revision']['expose']['operator_id'] = 'uid_revision_op';
    $filters['uid_revision']['expose']['label'] = 'Updated By';
    $filters['uid_revision']['expose']['operator'] = 'uid_revision_op';
    $filters['uid_revision']['expose']['identifier'] = 'uid_revision';
    $filters['uid_revision']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
      5 => 0,
      4 => 0,
    );

    // filter - Path

    $filters['alias']['id'] = 'alias';
    $filters['alias']['table'] = 'url_alias';
    $filters['alias']['field'] = 'alias';
    $filters['alias']['relationship'] = 'vid';
    $filters['alias']['operator'] = 'contains';
    $filters['alias']['exposed'] = TRUE;
    $filters['alias']['expose']['operator_id'] = 'alias_op';
    $filters['alias']['expose']['label'] = 'Path';
    $filters['alias']['expose']['operator'] = 'alias_op';
    $filters['alias']['expose']['identifier'] = 'alias';
    $filters['alias']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
      5 => 0,
      4 => 0,
    );
    $filters['alias']['expose']['autocomplete_items'] = '10';
    $filters['alias']['expose']['autocomplete_raw_suggestion'] = 1;
    $filters['alias']['expose']['autocomplete_raw_dropdown'] = 1;
    $filters['alias']['expose']['autocomplete_dependent'] = 0;

    // filter - Section

    $filters['access_id']['id'] = 'access_id';
    $filters['access_id']['table'] = 'workbench_access';
    $filters['access_id']['field'] = 'access_id';
    $filters['access_id']['exposed'] = TRUE;
    $filters['access_id']['expose']['operator_id'] = 'access_id_op';
    $filters['access_id']['expose']['label'] = 'Section';
    $filters['access_id']['expose']['operator'] = 'access_id_op';
    $filters['access_id']['expose']['identifier'] = 'access_id';
    $filters['access_id']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      3 => 0,
      5 => 0,
      4 => 0,
    );
    $filters['access_id']['access_id'] = array();
    $filters['access_id']['size'] = '5';
    
    // filter relationships

    $filters['status']['relationship'] = 'vid';
    $filters['type']['relationship'] = 'vid';

    // field - Node Id

    $fields['nid_1']['id'] = 'nid_1';
    $fields['nid_1']['table'] = 'node';
    $fields['nid_1']['field'] = 'nid';
    $fields['nid_1']['relationship'] = 'vid';
    $fields['nid_1']['label'] = 'Node Id';

    // field - Section

    $fields['section']['id'] = 'section';
    $fields['section']['table'] = 'workbench_access';
    $fields['section']['field'] = 'section';

    // field relationships

    $fields['nid']['relationship'] = 'vid';
    $fields['status']['relationship'] = 'vid';
    $fields['type']['relationship'] = 'vid';

    // Make the Node Id and Section columns sortable

    $style_options_info = &$views['workbench_edited']->display['default']->display_options['style_options']['info'];

    $style_options_info['nid_1'] = array(
        'sortable' => 1,
        'default_sort_order' => 'desc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    );

    $style_options_columns = &$views['workbench_edited']->display['default']->display_options['style_options']['columns'];

    $style_options_columns['nid_1'] = 'nid_1';

    $sorts['changed']['relationship'] = 'vid';

  }

}

//function gsb_public_form_views_exposed_form_alter(&$form, $form_state, $form_id) {
  //drupal_set_message("Form ID is : " . $form_id);
//}

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

