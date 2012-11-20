<?php

_gsb_panopoly_setup_userinfo() {
  $variables = array(
    'user_cancel_method' => 'user_cancel_block',
    'user_default_timezone' => 0, // Use the Default timezone for the site.
    'user_email_verification' => 1,
    'user_mail_cancel_confirm_body' => "[user:name],\r\n\r\nA request to cancel your account has been made at [site:name].\r\n\r\nYou may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:\r\n\r\n[user:cancel-url]\r\n\r\nNOTE: The cancellation of your account is not reversible.\r\n\r\nThis link expires in one day and nothing will happen if it is not used.\r\n\r\n-- [site:name] team",
    'user_mail_cancel_confirm_subject' => "Account cancellation request for [user:name] at [site:name]",
    'user_mail_password_reset_body' => "[user:name],\r\n\r\nA request to reset the password for your account has been made at [site:name].\r\n\r\nYou may now log in by clicking this link or copying and pasting it to your browser:\r\n\r\n[user:one-time-login-url]\r\n\r\nThis link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it's not used.\r\n\r\n-- [site:name] team",
    'user_mail_password_reset_subject' => "Replacement login information for [user:name] at [site:name]",
    'user_mail_register_admin_created_body' => "[user:name],\r\n\r\nA site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:\r\n\r\n[user:one-time-login-url]\r\n\r\nThis link can only be used once to log in and will lead you to a page where you can set your password.\r\n\r\nAfter setting your password, you will be able to log in at [site:login-url] in the future using:\r\n\r\nusername: [user:name]\r\npassword: Your password\r\n\r\n-- [site:name] team",
    'user_mail_register_admin_created_subject' => "An administrator created an account for you at [site:name]",
    'user_mail_register_no_approval_required_body' => "[user:name],\r\n\r\nThank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:\r\n\r\n[user:one-time-login-url]\r\n\r\nThis link can only be used once to log in and will lead you to a page where you can set your password.\r\n\r\nAfter setting your password, you will be able to log in at [site:login-url] in the future using:\r\n\r\nusername: [user:name]\r\npassword: Your password\r\n\r\n-- [site:name] team",
    'user_mail_register_no_approval_required_subject' => "Account details for [user:name] at [site:name]",
    'user_mail_register_pending_approval_body' => "[user:name],\r\n\r\nThank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.\r\n\r\n\r\n-- [site:name] team",
    'user_mail_register_pending_approval_subject' => "Account details for [user:name] at [site:name] (pending admin approval)",
    'user_mail_status_activated_body' => "[user:name],\r\n\r\nYour account at [site:name] has been activated.\r\n\r\nYou may now log in by clicking this link or copying and pasting it into your browser:\r\n\r\n[user:one-time-login-url]\r\n\r\nThis link can only be used once to log in and will lead you to a page where you can set your password.\r\n\r\nAfter setting your password, you will be able to log in at [site:login-url] in the future using:\r\n\r\nusername: [user:name]\r\npassword: Your password\r\n\r\n-- [site:name] team",
    'user_mail_status_activated_notify' => 1,
    'user_mail_status_activated_subject' => "Account details for [user:name] at [site:name] (approved)",
    'user_mail_status_blocked_body' => "[user:name],\r\n\r\nYour account on [site:name] has been blocked.\r\n\r\n-- [site:name] team",
    'user_mail_status_blocked_notify' => 0,
    'user_mail_status_blocked_subject' => "Account details for [user:name] at [site:name] (blocked)",
    'user_mail_status_canceled_body' => "[user:name],\r\n\r\nYour account on [site:name] has been canceled.\r\n\r\n-- [site:name] team",
    'user_mail_status_canceled_notify' => 0,
    'user_mail_status_canceled_subject' => "Account details for [user:name] at [site:name] (canceled)",
    'user_pictures' => 0,
    'user_picture_default' => '',
    'user_picture_dimensions' => '85x85',
    'user_picture_file_size' => "30",
    'user_picture_guidelines' => "",
    'user_picture_path' => 'pictures',
    'user_picture_style' => '',
    'user_register' => "0",
    'user_signatures' => 0
  );

  _gsb_panopoly_variable_set_multiple($variables);
}
