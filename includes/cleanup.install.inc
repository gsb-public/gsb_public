<?php

function _gsb_public_setup_cleanup() {

  // Disable some panopoly modules
  module_disable(array('simplified_menu_admin'));
  drupal_uninstall_modules(array('simplified_menu_admin'));

  cache_clear_all();
}
