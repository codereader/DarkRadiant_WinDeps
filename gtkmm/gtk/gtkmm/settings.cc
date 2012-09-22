// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/settings.h>
#include <gtkmm/private/settings_p.h>


// -*- c++ -*-
/* $Id: settings.ccg,v 1.4 2005/08/01 10:34:08 murrayc Exp $ */

/* 
 *
 * Copyright 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtk/gtk.h>

namespace Gtk
{


} //namespace Gtk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::IMPreeditStyle>::value_type()
{
  return gtk_im_preedit_style_get_type();
}

// static
GType Glib::Value<Gtk::IMStatusStyle>::value_type()
{
  return gtk_im_status_style_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::Settings> wrap(GtkSettings* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::Settings>( dynamic_cast<Gtk::Settings*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Settings_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Settings_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_settings_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Settings_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Settings_Class::wrap_new(GObject* object)
{
  return new Settings((GtkSettings*)object);
}


/* The implementation: */

GtkSettings* Settings::gobj_copy()
{
  reference();
  return gobj();
}

Settings::Settings(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Settings::Settings(GtkSettings* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Settings::~Settings()
{}


Settings::CppClassType Settings::settings_class_; // initialize static member

GType Settings::get_type()
{
  return settings_class_.init().get_type();
}


GType Settings::get_base_type()
{
  return gtk_settings_get_type();
}


Glib::RefPtr<Settings> Settings::get_default()
{

  Glib::RefPtr<Settings> retvalue = Glib::wrap(gtk_settings_get_default());

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}


Glib::RefPtr<Settings> Settings::get_for_screen(const Glib::RefPtr<Gdk::Screen>& screen)
{

  Glib::RefPtr<Settings> retvalue = Glib::wrap(gtk_settings_get_for_screen(Glib::unwrap(screen)));

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_double_click_time() 
{
  return Glib::PropertyProxy< int >(this, "gtk-double-click-time");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_double_click_time() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-double-click-time");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_double_click_distance() 
{
  return Glib::PropertyProxy< int >(this, "gtk-double-click-distance");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_double_click_distance() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-double-click-distance");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_cursor_blink() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-cursor-blink");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_cursor_blink() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-cursor-blink");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_cursor_blink_time() 
{
  return Glib::PropertyProxy< int >(this, "gtk-cursor-blink-time");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_cursor_blink_time() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-cursor-blink-time");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_cursor_blink_timeout() 
{
  return Glib::PropertyProxy< int >(this, "gtk-cursor-blink-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_cursor_blink_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-cursor-blink-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_split_cursor() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-split-cursor");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_split_cursor() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-split-cursor");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_key_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-key-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_key_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-key-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_menu_bar_accel() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-menu-bar-accel");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_menu_bar_accel() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-menu-bar-accel");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_dnd_drag_threshold() 
{
  return Glib::PropertyProxy< int >(this, "gtk-dnd-drag-threshold");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_dnd_drag_threshold() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-dnd-drag-threshold");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_font_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-font-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_font_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-font-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_modules() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-modules");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_modules() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-modules");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_xft_antialias() 
{
  return Glib::PropertyProxy< int >(this, "gtk-xft-antialias");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_xft_antialias() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-xft-antialias");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_xft_hinting() 
{
  return Glib::PropertyProxy< int >(this, "gtk-xft-hinting");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_xft_hinting() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-xft-hinting");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_xft_hintstyle() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-xft-hintstyle");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_xft_hintstyle() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-xft-hintstyle");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_xft_rgba() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-xft-rgba");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_xft_rgba() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-xft-rgba");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_xft_dpi() 
{
  return Glib::PropertyProxy< int >(this, "gtk-xft-dpi");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_xft_dpi() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-xft-dpi");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_cursor_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-cursor-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_cursor_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-cursor-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_cursor_theme_size() 
{
  return Glib::PropertyProxy< int >(this, "gtk-cursor-theme-size");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_cursor_theme_size() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-cursor-theme-size");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_alternative_button_order() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-alternative-button-order");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_alternative_button_order() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-alternative-button-order");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_alternative_sort_arrows() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-alternative-sort-arrows");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_alternative_sort_arrows() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-alternative-sort-arrows");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_show_input_method_menu() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-show-input-method-menu");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_show_input_method_menu() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-show-input-method-menu");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_show_unicode_menu() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-show-unicode-menu");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_show_unicode_menu() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-show-unicode-menu");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_timeout_initial() 
{
  return Glib::PropertyProxy< int >(this, "gtk-timeout-initial");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_timeout_initial() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-timeout-initial");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_timeout_repeat() 
{
  return Glib::PropertyProxy< int >(this, "gtk-timeout-repeat");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_timeout_repeat() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-timeout-repeat");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_timeout_expand() 
{
  return Glib::PropertyProxy< int >(this, "gtk-timeout-expand");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_timeout_expand() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-timeout-expand");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_color_scheme() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-color-scheme");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_color_scheme() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-color-scheme");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_enable_animations() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-animations");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_animations() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-animations");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_touchscreen_mode() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-touchscreen-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_touchscreen_mode() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-touchscreen-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_tooltip_timeout() 
{
  return Glib::PropertyProxy< int >(this, "gtk-tooltip-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_tooltip_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-tooltip-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_tooltip_browse_timeout() 
{
  return Glib::PropertyProxy< int >(this, "gtk-tooltip-browse-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_tooltip_browse_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-tooltip-browse-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_tooltip_browse_mode_timeout() 
{
  return Glib::PropertyProxy< int >(this, "gtk-tooltip-browse-mode-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_tooltip_browse_mode_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-tooltip-browse-mode-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_keynav_cursor_only() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-keynav-cursor-only");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_keynav_cursor_only() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-keynav-cursor-only");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_keynav_wrap_around() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-keynav-wrap-around");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_keynav_wrap_around() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-keynav-wrap-around");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_error_bell() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-error-bell");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_error_bell() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-error-bell");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Gdk::Color > Settings::property_color_hash() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::Color >(this, "color-hash");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_file_chooser_backend() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-file-chooser-backend");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_file_chooser_backend() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-file-chooser-backend");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_print_backends() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-print-backends");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_print_backends() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-print-backends");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_print_preview_command() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-print-preview-command");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_print_preview_command() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-print-preview-command");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_enable_mnemonics() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-mnemonics");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_mnemonics() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-mnemonics");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_enable_accels() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-accels");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_accels() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-accels");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_recent_files_limit() 
{
  return Glib::PropertyProxy< int >(this, "gtk-recent-files-limit");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_recent_files_limit() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-recent-files-limit");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_im_module() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-im-module");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_im_module() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-im-module");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_recent_files_max_age() 
{
  return Glib::PropertyProxy< int >(this, "gtk-recent-files-max-age");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_recent_files_max_age() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-recent-files-max-age");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_fontconfig_timestamp() 
{
  return Glib::PropertyProxy< int >(this, "gtk-fontconfig-timestamp");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_fontconfig_timestamp() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-fontconfig-timestamp");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_sound_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-sound-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_sound_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-sound-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_enable_input_feedback_sounds() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-input-feedback-sounds");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_input_feedback_sounds() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-input-feedback-sounds");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_enable_event_sounds() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-event-sounds");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_event_sounds() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-event-sounds");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_enable_tooltips() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-tooltips");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_tooltips() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-tooltips");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_application_prefer_dark_theme() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-application-prefer-dark-theme");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_application_prefer_dark_theme() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-application-prefer-dark-theme");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_auto_mnemonics() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-auto-mnemonics");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_auto_mnemonics() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-auto-mnemonics");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Gtk::PolicyType > Settings::property_gtk_visible_focus() 
{
  return Glib::PropertyProxy< Gtk::PolicyType >(this, "gtk-visible-focus");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Gtk::PolicyType > Settings::property_gtk_visible_focus() const
{
  return Glib::PropertyProxy_ReadOnly< Gtk::PolicyType >(this, "gtk-visible-focus");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< IMPreeditStyle > Settings::property_gtk_im_preedit_style() 
{
  return Glib::PropertyProxy< IMPreeditStyle >(this, "gtk-im-preedit-style");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< IMPreeditStyle > Settings::property_gtk_im_preedit_style() const
{
  return Glib::PropertyProxy_ReadOnly< IMPreeditStyle >(this, "gtk-im-preedit-style");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< IMStatusStyle > Settings::property_gtk_im_status_style() 
{
  return Glib::PropertyProxy< IMStatusStyle >(this, "gtk-im-status-style");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< IMStatusStyle > Settings::property_gtk_im_status_style() const
{
  return Glib::PropertyProxy_ReadOnly< IMStatusStyle >(this, "gtk-im-status-style");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_shell_shows_app_menu() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-shell-shows-app-menu");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_shell_shows_app_menu() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-shell-shows-app-menu");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_shell_shows_menubar() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-shell-shows-menubar");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_shell_shows_menubar() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-shell-shows-menubar");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_menu_popup_delay() 
{
  return Glib::PropertyProxy< int >(this, "gtk-menu-popup-delay");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_menu_popup_delay() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-menu-popup-delay");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_menu_popdown_delay() 
{
  return Glib::PropertyProxy< int >(this, "gtk-menu-popdown-delay");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_menu_popdown_delay() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-menu-popdown-delay");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_label_select_on_focus() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-label-select-on-focus");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_label_select_on_focus() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-label-select-on-focus");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< guint > Settings::property_gtk_entry_password_hint_timeout() 
{
  return Glib::PropertyProxy< guint >(this, "gtk-entry-password-hint-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< guint > Settings::property_gtk_entry_password_hint_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "gtk-entry-password-hint-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_menu_images() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-menu-images");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_menu_images() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-menu-images");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Settings::property_gtk_menu_bar_popup_delay() 
{
  return Glib::PropertyProxy< int >(this, "gtk-menu-bar-popup-delay");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_menu_bar_popup_delay() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-menu-bar-popup-delay");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< GtkCornerType > Settings::property_gtk_scrolled_window_placement() 
{
  return Glib::PropertyProxy< GtkCornerType >(this, "gtk-scrolled-window-placement");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< GtkCornerType > Settings::property_gtk_scrolled_window_placement() const
{
  return Glib::PropertyProxy_ReadOnly< GtkCornerType >(this, "gtk-scrolled-window-placement");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< ToolbarStyle > Settings::property_gtk_toolbar_style() 
{
  return Glib::PropertyProxy< ToolbarStyle >(this, "gtk-toolbar-style");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< ToolbarStyle > Settings::property_gtk_toolbar_style() const
{
  return Glib::PropertyProxy_ReadOnly< ToolbarStyle >(this, "gtk-toolbar-style");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< IconSize > Settings::property_gtk_toolbar_icon_size() 
{
  return Glib::PropertyProxy< IconSize >(this, "gtk-toolbar-icon-size");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< IconSize > Settings::property_gtk_toolbar_icon_size() const
{
  return Glib::PropertyProxy_ReadOnly< IconSize >(this, "gtk-toolbar-icon-size");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_can_change_accels() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-can-change-accels");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_can_change_accels() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-can-change-accels");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_entry_select_on_focus() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-entry-select-on-focus");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_entry_select_on_focus() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-entry-select-on-focus");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_color_palette() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-color-palette");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_color_palette() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-color-palette");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > Settings::property_gtk_button_images() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-button-images");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_button_images() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-button-images");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_icon_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-icon-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_icon_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-icon-theme-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_fallback_icon_theme() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-fallback-icon-theme");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_fallback_icon_theme() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-fallback-icon-theme");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_icon_sizes() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-icon-sizes");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_icon_sizes() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-icon-sizes");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gtk


