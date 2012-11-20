<?php

function _gsb_panopoly_setup_workbench() {
  $variables = array(
    'workbench_access' => 'menu',
    'workbench_access_allow_multiple' => 0,
    'workbench_access_auto_assign' => 0,
    'workbench_access_label' => 'Section',
    'workbench_access_menu' => array(
      'main-menu' => 'main-menu'
    ),
  );

  _gsb_panopoly_variable_set_multiple($variables);
}
