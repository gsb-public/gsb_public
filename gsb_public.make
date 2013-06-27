api = 2
core = 7.x

; Override make files. This absolutely has to be first.
projects[gsb_make_overrides][type] = module
projects[gsb_make_overrides][download][type] = git
projects[gsb_make_overrides][download][url] = git@github.com:gsbitse/gsb_make_overrides.git
projects[gsb_make_overrides][download][branch] = master
projects[gsb_make_overrides][subdir] = custom

;============================================
;  GSB Projects
;============================================

; GSB Public Custom
projects[custom][type] = module
projects[custom][download][type] = git
projects[custom][download][url] = git@github.com:gsbitse/gsb_public_custom.git
projects[custom][download][branch] = master


;================================================
;  GSB Themes
;================================================

; GSB Public Theme
projects[gsb_theme][type] = theme
projects[gsb_theme][download][type] = git
projects[gsb_theme][download][url] = git@github.com:gsbitse/gsb_theme.git
projects[gsb_theme][download][branch] = master

; GSB Public Admin Theme
projects[gsb_theme_admin][type] = theme
projects[gsb_theme_admin][download][type] = git
projects[gsb_theme_admin][download][url] = git@github.com:gsbitse/gsb_theme_admin.git
projects[gsb_theme_admin][download][branch] = master


;========================================
;  Additional Contrib Modules
;========================================

; Acquia connector
projects[acquia_connector][version] = 2.10
projects[acquia_connector][subdir] = contrib

projects[addressfield][version] = 1.0-beta4
projects[addressfield][subdir] = contrib

projects[addthis][version] = 4.0-alpha2
projects[addthis][subdir] = contrib

projects[auto_entitylabel][version] = 1.2
projects[auto_entitylabel][subdir] = contrib

projects[backup_migrate][version] = 2.7
projects[backup_migrate][subdir] = contrib

; Better exposed filters for checkbox in views
projects[better_exposed_filters][version] = 3.x-dev
projects[better_exposed_filters][subdir] = contrib
projects[better_exposed_filters][download][type] = git
projects[better_exposed_filters][download][url] = http://git.drupal.org/project/better_exposed_filters.git
projects[better_exposed_filters][download][revision] = 6e8b9a0
projects[better_exposed_filters][download][branch] = 7.x-3.x

; Phone module for Webform Phone
projects[phone][version] = 1.x-dev
projects[phone][subdir] = contrib
projects[phone][download][type] = git
projects[phone][download][url] = http://git.drupal.org/project/phone.git
projects[phone][download][revision] = 5e0ea65
projects[phone][download][branch] = 7.x-1.x

projects[webform_phone][version] = 1.11
projects[webform_phone][subdir] = contrib

projects[breadcrumbs_by_path][version] = 1.x-dev
projects[breadcrumbs_by_path][subdir] = contrib
projects[breadcrumbs_by_path][download][type] = git
projects[breadcrumbs_by_path][download][revision] = 2d60c5d
projects[breadcrumbs_by_path][download][branch] = 7.x-1.x
projects[breadcrumbs_by_path][patch][2013130] = http://drupal.org/files/breadcrumbs_by_path-add_missing_breadcrumb_paths-2013130.patch

projects[concat_field][version] = 1.x-dev
projects[concat_field][subdir] = contrib
projects[concat_field][download][type] = git
projects[concat_field][download][revision] = 450acb25
projects[concat_field][download][branch] = 7.x-1.x


projects[computed_field][version] = 1.x-dev
projects[computed_field][subdir] = contrib
projects[computed_field][download][type] = git
projects[computed_field][download][revision] = 4380d90
projects[computed_field][download][branch] = 7.x-1.x

; Add context filter by query in url
projects[ctools_query_string_context][type] = module
projects[ctools_query_string_context][download][type] = git
projects[ctools_query_string_context][download][url] = http://git.drupal.org/sandbox/balint.kleri/1442298.git
projects[ctools_query_string_context][download][revision] = dc75839
projects[ctools_query_string_context][download][branch] = 7.x
projects[ctools_query_string_context][subdir] = custom/modules

projects[diff][version] = 3.2
projects[diff][subdir] = contrib

projects[ds][version] = 2.3
projects[ds][subdir] = contrib

projects[email][version] = 1.2
projects[email][subdir] = contrib

projects[eva][version] = 1.x-dev
projects[eva][subdir] = contrib
projects[eva][download][type] = git
projects[eva][download][revision] = 6d92c27
projects[eva][download][branch] = 7.x-1.x
projects[eva][patch][1772204] = http://drupal.org/files/1772204-d7-1.patch

projects[fancybox][version] = 2.x-dev
projects[fancybox][subdir] = contrib
projects[fancybox][download][type] = git
projects[fancybox][download][revision] = dd48c77
projects[fancybox][download][branch] = 7.x-2.x

libraries[fancybox][download][type] = get
libraries[fancybox][download][url] = https://github.com/fancyapps/fancyBox/zipball/v2.1.4

projects[ffc][version] = 1.0-beta2
projects[ffc][subdir] = contrib

projects[field_collection][version] = 1.0-beta5
projects[field_collection][subdir] = contrib
projects[field_collection][patch][1807460] = http://drupal.org/files/field_collection_with_workbench_moderation-1807460-1.patch

projects[field_formatter_settings][version] = 1.0
projects[field_formatter_settings][subdir] = contrib

projects[file_entity][version] = 2.x-dev
projects[file_entity][subdir] = contrib
projects[file_entity][download][type] = git
projects[file_entity][download][revision] = e6f091e
projects[file_entity][download][branch] = 7.x-2.x
projects[file_entity][patch][1994080] = http://drupal.org/files/file_entity-fix_previous_button-1994080.patch

projects[google_analytics][version] = 2.x
projects[google_analytics][subdir] = contrib

projects[hierarchical_select][version] = 3.x-dev
projects[hierarchical_select][subdir] = contrib
projects[hierarchical_select][download][type] = git
projects[hierarchical_select][download][revision] = 1da92c0
projects[hierarchical_select][download][branch] = 7.x-3.x
projects[hierarchical_select][patch][1959666] = http://drupal.org/files/1959666-d7-2.patch
projects[hierarchical_select][patch][1372300] = http://drupal.org/files/hierarchical_select-no-method-geteffect-1372300.patch

projects[imagecache_actions][version] = 1.1
projects[imagecache_actions][subdir] = contrib

projects[login_destination][version] = 1.1
projects[login_destination][subdir] = contrib

projects[maxlength][version] = 3.x-dev
projects[maxlength][subdir] = contrib
projects[maxlength][download][type] = git
projects[maxlength][download][revision] = 6604311
projects[maxlength][download][branch] = 7.x-3.x

projects[media][version] = 2.x-dev
projects[media][subdir] = contrib
projects[media][download][type] = git
projects[media][download][revision] = ecb9392
projects[media][download][branch] = 7.x-2.x
projects[media][patch][1319528] = http://drupal.org/files/media-browser-enter-submit-frontpage-1319528-11.patch
projects[media][patch][1931336] = http://drupal.org/files/1931336-d7-3.patch
projects[media][patch][1934226] = http://drupal.org/files/1934226-d7-2.patch
projects[media][patch][835516] = http://drupal.org/files/835516-wysiwyg-fields-60.patch
projects[media][patch][1919578] = http://drupal.org/files/media-popup_not_closing-1919578.patch

projects[media_youtube][version] = 2.x-dev
projects[media_youtube][subdir] = contrib
projects[media_youtube][download][type] = git
projects[media_youtube][download][revision] = c53660c
projects[media_youtube][download][branch] = 7.x-2.x

projects[media_vimeo][version] = 1.0-beta5
projects[media_vimeo][subdir] = contrib
projects[media_vimeo][patch][1823078] = http://drupal.org/files/1823078-1x-fix.patch

projects[menu_block][version] = 2.x-dev
projects[menu_block][subdir] = contrib
projects[menu_block][download][type] = git
projects[menu_block][download][revision] = 32ab1cf
projects[menu_block][download][branch] = 7.x-2.x

projects[menu_minipanels][version] = 1.1
projects[menu_minipanels][subdir] = contrib
projects[menu_minipanels][patch][1977018] = http://drupal.org/files/1977018-d7-2.patch

projects[menu_trail_by_path][version] = 2.x-dev
projects[menu_trail_by_path][subdir] = contrib
projects[menu_trail_by_path][download][type] = git
projects[menu_trail_by_path][download][revision] = 5fce1c8
projects[menu_trail_by_path][download][branch] = 7.x-2.x

projects[metatag][version] = 1.0-beta7
projects[metatag][subdir] = contrib

projects[node_clone][version] = 1.0-rc1
projects[node_clone][subdir] = contrib

projects[redirect][version] = 1.0-rc1
projects[redirect][subdir] = contrib

projects[views_responsive_grid][version] = 1.3
projects[views_responsive_grid][subdir] = contrib

projects[telephone][version] = 1.x-dev
projects[telephone][subdir] = contrib
projects[telephone][download][type] = git
projects[telephone][download][revision] = 3de75b4
projects[telephone][download][branch] = 7.x-1.x

; Load more functionality for views
projects[views_load_more][type] = module
projects[views_load_more][download][type] = git
projects[views_load_more][download][url] = http://git.drupal.org/project/views_load_more.git
projects[views_load_more][download][revision] = 28de384
projects[views_load_more][download][branch] = 7.x-1.x
projects[views_load_more][subdir] = contrib
projects[views_load_more][patch][1923870] = http://drupal.org/files/1923870-d7-3.patch
projects[views_load_more][patch][1454750] = http://drupal.org/files/view_load_more-table-style.patch

projects[workbench][version] = 1.x-dev
projects[workbench][subdir] = contrib
projects[workbench][download][type] = git
projects[workbench][download][revision] = 6856e4a
projects[workbench][download][branch] = 7.x-1.x

projects[workbench_access][version] = 1.2
projects[workbench_access][subdir] = contrib

projects[workbench_moderation][version] = 1.3
projects[workbench_moderation][subdir] = contrib


;=========================================
;  Panopoly Features
;=========================================

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = 4d9d071
projects[panopoly_admin][download][branch] = 7.x-1.x
projects[panopoly_admin][patch][remove-file-entity-permissions] = https://raw.github.com/gsbitse/gsb-revamp-patches/master/remove-file-entity-permissions.patch

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = 192ed62
projects[panopoly_core][download][branch] = 7.x-1.x
projects[panopoly_core][patch][panopoly_core_default_config] = https://raw.github.com/gsbitse/gsb-revamp-patches/master/panopoly_core_default_config.patch

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 3a1f8f9
projects[panopoly_magic][download][branch] = 7.x-1.x
projects[panopoly_magic][patch][1961726] = http://drupal.org/files/panopoly_magic-1961726-4.patch
projects[panopoly_magic][patch][1983788] = http://drupal.org/files/panopoly_magic-1983788-1.patch

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = b8d3809
projects[panopoly_theme][download][branch] = 7.x-1.x

;================================================================
; Libraries
;================================================================

libraries[easyResponsiveTabs][download][type] = get
libraries[easyResponsiveTabs][download][url] = https://raw.github.com/samsono/Easy-Responsive-Tabs-to-Accordion/5c346ab52c8633eb1c10f2a27e6a6537797a87eb/js/easyResponsiveTabs.js

libraries[tmhOAuth][download][type] = git
libraries[tmhOAuth][download][url] = git@github.com:themattharris/tmhOAuth.git
libraries[tmhOAuth][download][tag] = 0.8.2
