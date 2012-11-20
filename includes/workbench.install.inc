<?php

function _gsb_panopoly_setup_workbench() {
  variable_set('workbench_access', 'menu');
  variable_set('workbench_access_allow_multiple', 0);
  variable_set('workbench_access_auto_assign', 0);
  variable_set('workbench_access_label', 'Section');
  variable_set('workbench_access_menu', array('main-menu' => 'main-menu'));
}
