<?php

function _gsb_public_setup_themes() {

  theme_disable(array('bartik'));

  $themes['theme_default'] = "gsb_revamp";
  $themes['admin_theme'] = "gsb_theme_admin";

  theme_enable($themes);

  _gsb_public_variable_set_multiple($themes);

}
