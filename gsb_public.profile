<?php

function gsb_public_menu_alter(&$items) {

  // If the workbench sections tab page is defined,
  // we remove it by setting the "access callback" to FALSE

  if (isset($items["admin/workbench/sections"])) {
    $items["admin/workbench/sections"]["access callback"] = FALSE;
  }

  if (isset($items["admin/workbench/content"])) {
    $items["admin/workbench/content"]["title"] = "Content";
  }

}

function gsb_public_views_default_views_alter(&$views) {

  // Remove the workbench "drafts", "needs review" tabs,
  // by disabling the workbench_moderation view.

  if (isset($views['workbench_moderation'])) {
    $views['workbench_moderation']->disabled = TRUE;
  }

  _gsb_public_views_alter_workbench_editted($views);

  _gsb_public_views_alter_workbench_recent_content($views);

}

function _gsb_public_views_alter_workbench_editted(&$views) {

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
    /*
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
    */

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

    // field - delete node

    $fields['delete_node']['id'] = 'delete_node';
    $fields['delete_node']['table'] = 'views_entity_node';
    $fields['delete_node']['field'] = 'delete_node';
    $fields['delete_node']['label'] = '';
    $fields['delete_node']['element_label_colon'] = FALSE;
    $fields['delete_node']['text'] = 'delete'; 

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

function _gsb_public_views_alter_workbench_recent_content(&$views) {

  if (isset($views['workbench_recent_content'])) {

    $filters = &$views['workbench_recent_content']->display['default']->display_options['filters'];
    $fields = &$views['workbench_recent_content']->display['default']->display_options['fields'];
    $menu = &$views['workbench_recent_content']->display['default']->display_options['menu'];

    //

    $filters['title']['group'] = 1;
    $filters['type']['group'] = 1;
    $filters['status']['group'] = 1;
    $filters['status_extra']['group'] = 1;

    /* Filter criterion: Content: Nid */
    $filters['nid']['id'] = 'nid';
    $filters['nid']['table'] = 'node';
    $filters['nid']['field'] = 'nid';
    $filters['nid']['group'] = 1;
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
      6 => 0,
      7 => 0,
      8 => 0,
    );

    /* Filter criterion: Content: User has a revision */
    $filters['uid_revision']['id'] = 'uid_revision';
    $filters['uid_revision']['table'] = 'node';
    $filters['uid_revision']['field'] = 'uid_revision';
    $filters['uid_revision']['value'] = '';
    $filters['uid_revision']['group'] = 1;
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
      6 => 0,
      7 => 0,
      8 => 0,
    );

    /* Filter criterion: Content: Path */
    $filters['alias']['id'] = 'alias';
    $filters['alias']['table'] = 'url_alias';
    $filters['alias']['field'] = 'alias';
    $filters['alias']['operator'] = 'contains';
    $filters['alias']['group'] = 1;
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
      6 => 0,
      7 => 0,
      8 => 0,
    );

    $filters['alias']['expose']['autocomplete_items'] = '10';
    $filters['alias']['expose']['autocomplete_raw_suggestion'] = 1;
    $filters['alias']['expose']['autocomplete_raw_dropdown'] = 1;
    $filters['alias']['expose']['autocomplete_dependent'] = 0;

    // field - delete node

    $fields['delete_node']['id'] = 'delete_node';
    $fields['delete_node']['table'] = 'views_entity_node';
    $fields['delete_node']['field'] = 'delete_node';
    $fields['delete_node']['label'] = '';
    $fields['delete_node']['element_label_colon'] = FALSE;
    $fields['delete_node']['text'] = 'delete';     

    /* Field: Content: Nid */
    $fields['nid']['id'] = 'nid';
    $fields['nid']['table'] = 'node';
    $fields['nid']['field'] = 'nid';
    $fields['nid']['label'] = 'Node Id';

    unset($views['workbench_recent_content']->display['page_1']->display_options['defaults']['fields']);

    $style_options_info = &$views['workbench_recent_content']->display['default']->display_options['style_options']['info'];

    $style_options_info['title'] = array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    );

    $style_options_info['nid'] = array(
        'sortable' => 1,
        'default_sort_order' => 'desc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    );

    $views['workbench_recent_content']->display['default']->display_options['style_options']['order'] = 'desc';

    $style_options_columns = &$views['workbench_recent_content']->display['default']->display_options['style_options']['columns'];

    $style_options_columns['title'] = 'title';
    $style_options_columns['type'] = 'type';
    $style_options_columns['name'] = 'name';
    $style_options_columns['changed'] = 'changed';
    $style_options_columns['edit_node'] = 'edit_node';
    $style_options_columns['nid'] = 'nid';

    $menu['type'] = 'tab';
    $menu['title'] = 'All Recent Content';
    $menu['weight'] = '2';

    //&$views['workbench_recent_content']->display['default']->display_options['path'] = 'admin/workbench/content/all';

  }

}

/**
 * Implementation of hook_form_alter()
 * 
 * We set a workbench message to tell the user the current Revision State, on 
 * any of our node edit forms - if the user has moderation access.
 * 
 */
function gsb_public_form_alter(&$form, &$form_state, $form_id) {

  if (isset($form['#entity_type']) &&  $form['#entity_type'] == 'node') {
    
    $node = $form['#node'];

    if (!user_access('view moderation messages')
        || (!$node && !($node = menu_get_object()))
        || !workbench_moderation_node_type_moderated($node->type)) {
      return;
    }

    if (!isset($node->workbench_moderation)) {
      return;
    }

    // An array of messages to add to the general workbench block.
    $info_block_messages = array();

    $state = $node->workbench_moderation;

    $info_block_messages[] = array(
      'label' => t('Revision state'),
      'message' => check_plain(workbench_moderation_state_label($state['my_revision']->state)),
    );

    // Send the info block array to a static variable.
    workbench_moderation_set_message($info_block_messages);

  }

}




