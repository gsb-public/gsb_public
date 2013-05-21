<?php

function _gsb_public_setup_quickbar() 

  // set the quickbar configuration for the roles and menus
  // used by revamp

  $roles = user_roles();
  
  $menus = array();
  $weights = array();
  
  foreach ($roles as $rid => $name) {
    $menus[$rid] = '0';
    $weights[$rid] = '0';
  }
  
  $num_roles = count($roles);
  $index = $num_roles;
  
  $ma_role = user_role_load_by_name('marketing_admin');
  $menus[$ma_role->rid] = 'menu-marketing';
  $weights[$ma_role->rid] = $index * -1;
  $index--;
  
  $sm_role = user_role_load_by_name('section manager');
  $menus[$sm_role->rid] = 'menu-section-manager-toolbar';
  $weights[$sm_role->rid] = $index * -1;
  $index--;
  
  $se_role = user_role_load_by_name('section editor');
  $menus[$se_role->rid] = 'menu-section-editor-toolbar';
  $weights[$se_role->rid] = $index * -1;
  $index--;
  
  variable_set('quickbar_role_weights', serialize($weights));
  variable_set('quickbar_role_menus', serialize($menus));

}
