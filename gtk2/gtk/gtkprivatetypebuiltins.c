
/* Generated data (by glib-mkenums) */

#include "gtk.h"
#include "gtkprivate.h"

/* enumerations from "gtkcsstypesprivate.h" */
GType
_gtk_css_special_value_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GTK_CSS_INHERIT, "GTK_CSS_INHERIT", "inherit" },
            { GTK_CSS_INITIAL, "GTK_CSS_INITIAL", "initial" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GtkCssSpecialValue"), values);
    }
    return etype;
}

GType
_gtk_css_background_repeat_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GTK_CSS_BACKGROUND_REPEAT, "GTK_CSS_BACKGROUND_REPEAT", "repeat" },
            { GTK_CSS_BACKGROUND_SPACE, "GTK_CSS_BACKGROUND_SPACE", "space" },
            { GTK_CSS_BACKGROUND_ROUND, "GTK_CSS_BACKGROUND_ROUND", "round" },
            { GTK_CSS_BACKGROUND_NO_REPEAT, "GTK_CSS_BACKGROUND_NO_REPEAT", "no-repeat" },
            { GTK_CSS_BACKGROUND_REPEAT_X, "GTK_CSS_BACKGROUND_REPEAT_X", "repeat-x" },
            { GTK_CSS_BACKGROUND_REPEAT_Y, "GTK_CSS_BACKGROUND_REPEAT_Y", "repeat-y" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GtkCssBackgroundRepeat"), values);
    }
    return etype;
}

GType
_gtk_css_border_repeat_style_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GTK_CSS_REPEAT_STYLE_STRETCH, "GTK_CSS_REPEAT_STYLE_STRETCH", "stretch" },
            { GTK_CSS_REPEAT_STYLE_REPEAT, "GTK_CSS_REPEAT_STYLE_REPEAT", "repeat" },
            { GTK_CSS_REPEAT_STYLE_ROUND, "GTK_CSS_REPEAT_STYLE_ROUND", "round" },
            { GTK_CSS_REPEAT_STYLE_SPACE, "GTK_CSS_REPEAT_STYLE_SPACE", "space" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GtkCssBorderRepeatStyle"), values);
    }
    return etype;
}

GType
_gtk_css_area_get_type (void)
{
    static GType etype = 0;
    if (G_UNLIKELY(etype == 0)) {
        static const GEnumValue values[] = {
            { GTK_CSS_AREA_BORDER_BOX, "GTK_CSS_AREA_BORDER_BOX", "border-box" },
            { GTK_CSS_AREA_PADDING_BOX, "GTK_CSS_AREA_PADDING_BOX", "padding-box" },
            { GTK_CSS_AREA_CONTENT_BOX, "GTK_CSS_AREA_CONTENT_BOX", "content-box" },
            { 0, NULL, NULL }
        };
        etype = g_enum_register_static (g_intern_static_string ("GtkCssArea"), values);
    }
    return etype;
}



/* Generated data ends here */

