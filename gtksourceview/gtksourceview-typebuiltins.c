
/* Generated data (by glib-mkenums) */

#include <glib-object.h>
#include "gtksourceview-typebuiltins.h"


/* enumerations from "gtksourceiter.h" */
static const GFlagsValue _gtk_source_search_flags_values[] = {
  { GTK_SOURCE_SEARCH_VISIBLE_ONLY, "GTK_SOURCE_SEARCH_VISIBLE_ONLY", "visible-only" },
  { GTK_SOURCE_SEARCH_TEXT_ONLY, "GTK_SOURCE_SEARCH_TEXT_ONLY", "text-only" },
  { GTK_SOURCE_SEARCH_CASE_INSENSITIVE, "GTK_SOURCE_SEARCH_CASE_INSENSITIVE", "case-insensitive" },
  { 0, NULL, NULL }
};

GType
gtk_source_search_flags_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_flags_register_static ("GtkSourceSearchFlags", _gtk_source_search_flags_values);

  return type;
}


/* enumerations from "gtksourceview.h" */
static const GEnumValue _gtk_source_smart_home_end_type_values[] = {
  { GTK_SOURCE_SMART_HOME_END_DISABLED, "GTK_SOURCE_SMART_HOME_END_DISABLED", "disabled" },
  { GTK_SOURCE_SMART_HOME_END_BEFORE, "GTK_SOURCE_SMART_HOME_END_BEFORE", "before" },
  { GTK_SOURCE_SMART_HOME_END_AFTER, "GTK_SOURCE_SMART_HOME_END_AFTER", "after" },
  { GTK_SOURCE_SMART_HOME_END_ALWAYS, "GTK_SOURCE_SMART_HOME_END_ALWAYS", "always" },
  { 0, NULL, NULL }
};

GType
gtk_source_smart_home_end_type_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("GtkSourceSmartHomeEndType", _gtk_source_smart_home_end_type_values);

  return type;
}

static const GFlagsValue _gtk_source_draw_spaces_flags_values[] = {
  { GTK_SOURCE_DRAW_SPACES_SPACE, "GTK_SOURCE_DRAW_SPACES_SPACE", "space" },
  { GTK_SOURCE_DRAW_SPACES_TAB, "GTK_SOURCE_DRAW_SPACES_TAB", "tab" },
  { GTK_SOURCE_DRAW_SPACES_NEWLINE, "GTK_SOURCE_DRAW_SPACES_NEWLINE", "newline" },
  { GTK_SOURCE_DRAW_SPACES_NBSP, "GTK_SOURCE_DRAW_SPACES_NBSP", "nbsp" },
  { GTK_SOURCE_DRAW_SPACES_ALL, "GTK_SOURCE_DRAW_SPACES_ALL", "all" },
  { 0, NULL, NULL }
};

GType
gtk_source_draw_spaces_flags_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_flags_register_static ("GtkSourceDrawSpacesFlags", _gtk_source_draw_spaces_flags_values);

  return type;
}


/* Generated data ends here */

