<?php

function _gsb_panopoly_setup_themes() {

  theme_disable(array('bartik'));

  $themes['theme_default'] = "gsb_public_revamp";
  theme_enable($themes);

  _gsb_panopoly_variable_set_multiple($themes);

}
