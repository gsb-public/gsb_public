<?php

function _gsb_public_setup_cmis() {
  $variables = array(
    'cmis_common_no_verify_cert' => TRUE,
  );

  _gsb_public_variable_set_multiple($variables);
}
