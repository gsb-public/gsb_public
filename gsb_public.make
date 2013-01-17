api = 2
core = 7.x

; The Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 02baae4
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][1883422] = http://drupal.org/files/1883422-update_modules-3.patch
projects[panopoly_core][patch][1884656] = http://drupal.org/files/1884656-views_patch-2.patch

projects[panopoly_images][version] = 1.x-dev
projects[panopoly_images][subdir] = panopoly
projects[panopoly_images][download][type] = git
projects[panopoly_images][download][revision] = 36e5034
projects[panopoly_images][download][branch] = 7.x-1.x

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = 4f45887
projects[panopoly_theme][download][branch] = 7.x-1.x

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 27071ae
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = a257519
projects[panopoly_widgets][download][branch] = 7.x-1.x
projects[panopoly_widgets][patch][1883474] = http://drupal.org/files/1883474-upgrade_modules-2.patch

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 1ae9e87
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][1883436] = http://drupal.org/files/1883436-update_admin_views-1.patch

projects[panopoly_users][version] = 1.x-dev
projects[panopoly_users][subdir] = panopoly
projects[panopoly_users][download][type] = git
projects[panopoly_users][download][revision] = 4943fb1
projects[panopoly_users][download][branch] = 7.x-1.x

; The Panopoly Toolset

; remove this if we find out that we can live without
; projects[panopoly_pages][version] = 1.x-dev
; projects[panopoly_pages][subdir] = panopoly
; projects[panopoly_pages][download][type] = git
; projects[panopoly_pages][download][revision] = bae7bde
; projects[panopoly_pages][download][branch] = 7.x-1.x

projects[panopoly_wysiwyg][version] = 1.x-dev
projects[panopoly_wysiwyg][subdir] = panopoly
projects[panopoly_wysiwyg][download][type] = git
projects[panopoly_wysiwyg][download][revision] = a0878a3
projects[panopoly_wysiwyg][download][branch] = 7.x-1.x

projects[panopoly_search][version] = 1.x-dev
projects[panopoly_search][subdir] = panopoly
projects[panopoly_search][download][type] = git
projects[panopoly_search][download][revision] = 62f05b2
projects[panopoly_search][download][branch] = 7.x-1.x

; Not related to panopoly, but GSB added contrib modules.

projects[workbench][version] = 1.x-dev
projects[workbench][subdir] = contrib
projects[workbench][download][type] = git
projects[workbench][download][revision] = bb7fa65
projects[workbench][download][branch] = 7.x-1.x

projects[workbench_access][version] = 1.x-dev
projects[workbench_access][subdir] = contrib
projects[workbench_access][download][type] = git
projects[workbench_access][download][revision] = 1fbf6f3
projects[workbench_access][download][branch] = 7.x-1.x

projects[workbench_moderation][version] = 1.x-dev
projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][download][type] = git
projects[workbench_moderation][download][revision] = 3422c07
projects[workbench_moderation][download][branch] = 7.x-1.x

projects[views_url_alias][version] = 1.0-beta1
projects[views_url_alias][subdir] = contrib

; GSB Projects

projects[gsb_section_autoconfig][type] = module
projects[gsb_section_autoconfig][download][type] = git
projects[gsb_section_autoconfig][download][url] = https://github.com/gsbitse/gsb_section_autoconfig.git
projects[gsb_section_autoconfig][download][tag] = 1.3
projects[gsb_section_autoconfig][subdir] = custom

; GSB Feature Club
projects[gsb_feature_club][type] = module
projects[gsb_feature_club][download][type] = git
projects[gsb_feature_club][download][url] = https://github.com/gsbitse/gsb_feature_club.git
projects[gsb_feature_club][download][tag] = 1.1
projects[gsb_feature_club][subdir] = custom/features

; GSB Feature Event
projects[gsb_feature_event][type] = module
projects[gsb_feature_event][download][type] = git
projects[gsb_feature_event][download][url] = https://github.com/gsbitse/gsb_feature_event.git
projects[gsb_feature_event][download][tag] = 1.2
projects[gsb_feature_event][subdir] = custom/features

; GSB Feature Page
projects[gsb_feature_page][type] = module
projects[gsb_feature_page][download][type] = git
projects[gsb_feature_page][download][url] = https://github.com/gsbitse/gsb_feature_page.git
projects[gsb_feature_page][download][tag] = 1.2
projects[gsb_feature_page][subdir] = custom/features

; GSB Feature Person
projects[gsb_feature_person][type] = module
projects[gsb_feature_person][download][type] = git
projects[gsb_feature_person][download][url] = https://github.com/gsbitse/gsb_feature_person.git
projects[gsb_feature_person][download][tag] = 1.0
projects[gsb_feature_person][subdir] = custom/features

; Stanford Open Framework Theme (framework based on Twitter Bootstrap)
projects[open_framework][type] = theme
projects[open_framework][download][type] = git
projects[open_framework][download][url] = https://github.com/SU-SWS/open_framework.git
projects[open_framework][download][tag] = 7.x-2.02

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
