<?php

function _gsb_public_setup_menu() {
  
  // Build footer 1 menu
  $menu_footer_1 = array(
    'menu_name' => 'menu-footer-1',
    'title' => 'Footer 1',
    'description' => 'This is the footer 1 menu.',
  );
  
  menu_save($menu_footer_1);

  // Build footer 2 menu
  $menu_footer_2 = array(
    'menu_name' => 'menu-footer-2',
    'title' => 'Footer 2',
    'description' => 'This is the footer 2 menu.',
  );
  
  menu_save($menu_footer_2);

  // Build footer 3 menu
  $menu_footer_3 = array(
    'menu_name' => 'menu-footer-3',
    'title' => 'Footer 3',
    'description' => 'This is the footer 3 menu.',
  );
  
  menu_save($menu_footer_3);

  $variables = array();

  _gsb_public_variable_set_multiple($variables);

}
