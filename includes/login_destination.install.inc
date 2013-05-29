<?php

function _gsb_public_setup_login_destination() {
  $roles = array('administrator', 'section editor', 'section manager', 'fa', 'aa', 'cwo_admin');
  $rids = array();
  foreach ($roles as $role) {
    $role = user_role_load_by_name($role);
    $rids[$role->rid] = $role->rid;
  }

  $rules = array(
    array(
      'triggers' => array('login' => 'login'),
      'roles' => $rids,
      'pages_type' => 0,
      'pages' => 0,
      'destination_type' => '',
      'destination' => 'admin/workbench',
      'weight' => 0,
    ),
  );

  foreach ($rules as $rule) {
    $rule['triggers'] = serialize($rule['triggers']);
    $rule['roles'] = serialize($rule['roles']);
    db_insert('login_destination')->fields($rule)->execute();
  }

  variable_set('login_destination_preserve_destination', 1);
}
