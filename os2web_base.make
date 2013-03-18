api = 2
core = 7.x

;; OS2Web projects:

; OS2Web Modules

projects[os2web_taxonomies][type] = "module"
projects[os2web_taxonomies][download][type] = "git"
;projects[os2web_taxonomies][download][tag] = "1.10"
projects[os2web_taxonomies][download][branch] = "master"
projects[os2web_taxonomies][download][url] = "git://github.com/OS2web/os2web_taxonomies.git"

;; Contrib modules below:

; Libraries

; Contrib modules

; Features + related
projects[features][subdir] = "contrib"
projects[features][version] = "2.0-beta1"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

; Panels

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.2"

; Basic

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.2"

projects[media][subdir] = "contrib"
projects[media][version] = "1.3"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[eim][subdir] = "contrib"
projects[eim][version] = "1.2"

projects[imagefield_crop][subdir] = "contrib"
projects[imagefield_crop][version] = "1.0"

projects[field_slideshow][subdir] = "contrib"
projects[field_slideshow][version] = "1.6"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.1"
; Patch to remove notices in badly stored features. TODO: add issue on d.o
; projects[field_group][patch][] = "patches/field_group-1.patch"

projects[fieldable_panels_panes][subdir] = "contrib"
projects[fieldable_panels_panes][version] = "1.2"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.1"

projects[link][subdir] = "contrib"
projects[link][version] = "1.1"

projects[content_taxonomy][subdir] = "contrib"
projects[content_taxonomy][version] = "1.0-beta2"

projects[references][subdir] = "contrib"
projects[references][version] = "2.0"
