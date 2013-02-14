api = 2
core = 7.x

; The Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 3bcd157
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][1884656] = http://drupal.org/files/1884656-views_patch-2.patch
projects[panopoly_core][patch][panopoly_core_default_config] = https://raw.github.com/gsbitse/gsb-revamp-patches/master/panopoly_core_default_config.patch

projects[panopoly_images][version] = 1.x-dev
projects[panopoly_images][subdir] = panopoly
projects[panopoly_images][download][type] = git
projects[panopoly_images][download][revision] = 98eb0f5
projects[panopoly_images][download][branch] = 7.x-1.x

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = 372aeb0
projects[panopoly_theme][download][branch] = 7.x-1.x

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 64d984e
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = 2a98c9e
projects[panopoly_widgets][download][branch] = 7.x-1.x

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 165fafb
projects[panopoly_admin][download][branch] = 7.x-1.x

projects[panopoly_users][version] = 1.x-dev
projects[panopoly_users][subdir] = panopoly
projects[panopoly_users][download][type] = git
projects[panopoly_users][download][revision] = cb4ca09
projects[panopoly_users][download][branch] = 7.x-1.x

; The Panopoly Toolset

projects[panopoly_wysiwyg][version] = 1.x-dev
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_wysiwyg][download][type] = git
projects[panopoly_wysiwyg][download][revision] = c745f0f
projects[panopoly_wysiwyg][download][branch] = 7.x-1.x

; Not related to panopoly, but GSB added contrib modules.

projects[fancybox][version] = 2.x-dev
projects[fancybox][subdir] = contrib
projects[fancybox][download][type] = git
projects[fancybox][download][revision] = 272acd3
projects[fancybox][download][branch] = 7.x-2.x

libraries[fancybox][download][type] = get
libraries[fancybox][download][url] = https://github.com/fancyapps/fancyBox/zipball/v2.1.4

projects[list_predefined_options] = 1.0

projects[menu_minipanels][version] = 1.1
projects[menu_minipanels][subdir] = contrib
libraries[qtip][download][type] = file
libraries[qtip][download][url] = https://raw.github.com/Craga89/qTip1/master/1.0.0-rc3/jquery.qtip-1.0.0-rc3.js

projects[workbench][version] = 1.x-dev
projects[workbench][subdir] = contrib
projects[workbench][download][type] = git
projects[workbench][download][revision] = 16a8fff
projects[workbench][download][branch] = 7.x-1.x

projects[workbench_access][version] = 1.2
projects[workbench_access][subdir] = contrib

projects[workbench_moderation][version] = 1.3
projects[workbench_moderation][subdir] = contrib

projects[workbench_predefined_options][version] = 1.x-dev
projects[workbench_predefined_options][subdir] = contrib
projects[workbench_predefined_options][download][type] = git
projects[workbench_predefined_options][download][url] = http://git.drupal.org/project/workbench_predefined_options.git
projects[workbench_predefined_options][download][revision] = a398acd
projects[workbench_predefined_options][download][branch] = 7.x-1.x

; GSB Projects

projects[gsb_section_autoconfig][type] = module
projects[gsb_section_autoconfig][download][type] = git
projects[gsb_section_autoconfig][download][url] = https://github.com/gsbitse/gsb_section_autoconfig.git
projects[gsb_section_autoconfig][download][tag] = 1.3
projects[gsb_section_autoconfig][subdir] = custom

projects[gsb_media_center][type] = module
projects[gsb_media_center][download][type] = git
projects[gsb_media_center][download][url] = https://github.com/gsbitse/gsb_media_center.git
projects[gsb_media_center][download][branch] = master
projects[gsb_media_center][subdir] = custom

; GSB Feature Club
projects[gsb_feature_club][type] = module
projects[gsb_feature_club][download][type] = git
projects[gsb_feature_club][download][url] = https://github.com/gsbitse/gsb_feature_club.git
projects[gsb_feature_club][download][branch] = master
projects[gsb_feature_club][subdir] = custom/features

; GSB Feature Event
projects[gsb_feature_event][type] = module
projects[gsb_feature_event][download][type] = git
projects[gsb_feature_event][download][url] = https://github.com/gsbitse/gsb_feature_event.git
projects[gsb_feature_event][download][branch] = master
projects[gsb_feature_event][subdir] = custom/features

; GSB Feature Page
projects[gsb_feature_page][type] = module
projects[gsb_feature_page][download][type] = git
projects[gsb_feature_page][download][url] = https://github.com/gsbitse/gsb_feature_page.git
projects[gsb_feature_page][download][tag] = 1.3
projects[gsb_feature_page][subdir] = custom/features

; GSB Feature Person
projects[gsb_feature_person][type] = module
projects[gsb_feature_person][download][type] = git
projects[gsb_feature_person][download][url] = https://github.com/gsbitse/gsb_feature_person.git
projects[gsb_feature_person][download][tag] = 1.0
projects[gsb_feature_person][subdir] = custom/features

; GSB Feature News
projects[gsb_feature_news][type] = module
projects[gsb_feature_news][download][type] = git
projects[gsb_feature_news][download][url] = https://github.com/gsbitse/gsb_feature_news.git
projects[gsb_feature_news][download][tag] = 1.0
projects[gsb_feature_news][subdir] = custom/features

; GSB Feature Spotlight
projects[gsb_feature_spotlight][type] = module
projects[gsb_feature_spotlight][download][type] = git
projects[gsb_feature_spotlight][download][url] = https://github.com/gsbitse/gsb_feature_spotlight.git
projects[gsb_feature_spotlight][download][branch] = master
projects[gsb_feature_spotlight][subdir] = custom/features

; GSB Feature Slideshow
projects[gsb_feature_slideshow][type] = module
projects[gsb_feature_slideshow][download][type] = git
projects[gsb_feature_slideshow][download][url] = https://github.com/gsbitse/gsb_feature_slideshow.git
projects[gsb_feature_slideshow][download][tag] = 1.0
projects[gsb_feature_slideshow][subdir] = custom/features

; GSB Feature Video
projects[gsb_feature_video][type] = module
projects[gsb_feature_video][download][type] = git
projects[gsb_feature_video][download][url] = https://github.com/gsbitse/gsb_feature_video.git
projects[gsb_feature_video][download][tag] = 1.0
projects[gsb_feature_video][subdir] = custom/features

; GSB Panopoly Images Override
projects[gsb_panopoly_images_override][type] = module
projects[gsb_panopoly_images_override][download][type] = git
projects[gsb_panopoly_images_override][download][url] = https://github.com/gsbitse/gsb_panopoly_images_override.git
projects[gsb_panopoly_images_override][download][branch] = master
projects[gsb_panopoly_images_override][subdir] = custom/features

; GSB Panopoly Wysiwyg Override
projects[gsb_panopoly_wysiwyg_override][type] = module
projects[gsb_panopoly_wysiwyg_override][download][type] = git
projects[gsb_panopoly_wysiwyg_override][download][url] = https://github.com/gsbitse/gsb_panopoly_wysiwyg_override.git
projects[gsb_panopoly_wysiwyg_override][download][tag] = 1.1
projects[gsb_panopoly_wysiwyg_override][subdir] = custom/features

; GSB Search Server
projects[gsb_search_server][type] = module
projects[gsb_search_server][download][type] = git
projects[gsb_search_server][download][url] = https://github.com/gsbitse/gsb_search_server.git
projects[gsb_search_server][download][branch] = master
projects[gsb_search_server][subdir] = custom/features

; GSB Features Import GatherContent
projects[gsb_feature_import_gathercontent][type] = module
projects[gsb_feature_import_gathercontent][download][type] = git
projects[gsb_feature_import_gathercontent][download][url] = https://github.com/gsbitse/gsb_feature_import_gathercontent.git
projects[gsb_feature_import_gathercontent][download][branch] = master
projects[gsb_feature_import_gathercontent][subdir] = custom/features

; Stanford Open Framework Theme (framework based on Twitter Bootstrap)
projects[open_framework][type] = theme
projects[open_framework][download][type] = get
projects[open_framework][download][url] = https://github.com/SU-SWS/open_framework/archive/7.x-2.02.zip
projects[open_framework][patch][remove-jquery] = https://raw.github.com/gsbitse/gsb-revamp-patches/master/openframework-jquery.patch

; GSB Framework Theme
projects[gsb_framework][type] = theme
projects[gsb_framework][download][type] = git
projects[gsb_framework][download][url] = https://github.com/gsbitse/gsb_framework.git
projects[gsb_framework][download][branch] = master

; GSB Public Revamp Theme
projects[gsb_revamp][type] = theme
projects[gsb_revamp][download][type] = git
projects[gsb_revamp][download][url] = https://github.com/gsbitse/gsb_revamp.git
projects[gsb_revamp][download][branch] = master

; GSB FPP Customization
projects[gsb_fpp_customization][type] = module
projects[gsb_fpp_customization][download][type] = git
projects[gsb_fpp_customization][download][url] = https://github.com/gsbitse/gsb_fpp_customization.git
projects[gsb_fpp_customization][download][tag] = 1.0
projects[gsb_fpp_customization][subdir] = custom


; Override make files.  This absolutely has to be last.
projects[gsb_make_overrides][type] = module
projects[gsb_make_overrides][download][type] = git
projects[gsb_make_overrides][download][url] = https://github.com/gsbitse/gsb_make_overrides.git
projects[gsb_make_overrides][download][branch] = master
projects[gsb_make_overrides][subdir] = custom
