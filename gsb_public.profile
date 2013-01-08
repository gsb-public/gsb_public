<?php

function gsb_public_modules_enabled($modules) {

    $permissions = array();
    _gsb_public_add_permissions($modules, $permissions);

    if (!empty($permissions)) {

        $role_name = "editor";
        $editor = user_role_load_by_name($role_name);
        user_role_grant_permissions($editor->rid, $permissions);

        $role_name = "author";
        $author = user_role_load_by_name($role_name);
        user_role_grant_permissions($author->rid, $permissions);
    }

}

function _gsb_public_get_content_modules(&$modules) {

    if (module_exists("gsb_feature_page")) {
        $modules[] = "gsb_feature_page";
    }

    if (module_exists("gsb_feature_club")) {
        $modules[] = "gsb_feature_club";
    }

}

function _gsb_public_add_permissions($modules, &$permissions) {

    if (in_array('gsb_feature_page', $modules)) {
        $permissions[] = "create gsb_page content";
        $permissions[] = "edit own gsb_page content";
        $permissions[] = "delete own gsb_page content";
        $permissions[] = "administer panelizer node gsb_page content";
    }

    if (in_array('gsb_feature_club', $modules)) {
        $permissions[] = "create gsb_club content";
        $permissions[] = "edit own gsb_club content";
        $permissions[] = "delete own gsb_club content";
    }

}
