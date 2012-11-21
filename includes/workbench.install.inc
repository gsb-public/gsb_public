<?php

function _gsb_public_setup_workbench() {
  $variables = array(
    'workbench_access' => 'menu',
    'workbench_access_allow_multiple' => 0,
    'workbench_access_auto_assign' => 0,
    'workbench_access_label' => 'Section',
    'workbench_access_menu' => array(
      'main-menu' => 'main-menu'
    ),
  );

  _gsb_public_variable_set_multiple($variables);
}
