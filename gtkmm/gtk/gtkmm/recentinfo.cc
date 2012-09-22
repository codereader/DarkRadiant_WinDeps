// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/recentinfo.h>
#include <gtkmm/private/recentinfo_p.h>


/* Copyright (C) 2006 The gtkmm Development Team
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

#include <glibmm/vectorutils.h>

#include <gtk/gtk.h>

namespace Gtk
{

std::vector<Glib::ustring> RecentInfo::get_applications() const
{
  gsize length = 0;
  char** const applications =
    gtk_recent_info_get_applications(const_cast<GtkRecentInfo*>(gobj()), &length);

  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(applications, length, Glib::OWNERSHIP_DEEP);
}

bool RecentInfo::get_application_info(const Glib::ustring& app_name, std::string& app_exec,
                                      guint& count, time_t& time_) const
{
  const char* app_exec_cstr = 0;
  const int found = gtk_recent_info_get_application_info(
      const_cast<GtkRecentInfo*>(gobj()), app_name.c_str(), &app_exec_cstr, &count, &time_);

  if (app_exec_cstr)
    app_exec = app_exec_cstr;
  else
    app_exec.erase();

  return (found != 0);
}

std::vector<Glib::ustring> RecentInfo::get_groups() const
{
  gsize length = 0;
  char** const groups = gtk_recent_info_get_groups(const_cast<GtkRecentInfo*>(gobj()), &length);

  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(groups, length, Glib::OWNERSHIP_DEEP);
}

RecentInfoTraits::CppType RecentInfoTraits::to_cpp_type(const CType& obj)
{
  return Glib::wrap(const_cast<CTypeNonConst>(obj), true);
}

} // namespace Gtk

namespace Glib
{

GType Value<RefPtr<Gtk::RecentInfo> >::value_type()
{
  return gtk_recent_info_get_type();
}

void Value<RefPtr<Gtk::RecentInfo> >::set(const CppType& data)
{
  set_boxed(Glib::unwrap(data));
}

Value<RefPtr<Gtk::RecentInfo> >::CppType Value<RefPtr<Gtk::RecentInfo> >::get() const
{
  return Glib::wrap(static_cast<CType>(get_boxed()), true);
}

} // namespace Glib

namespace
{
} // anonymous namespace


/* Why reinterpret_cast<RecentInfo*>(gobject) is needed:
 *
 * A RecentInfo instance is in fact always a GtkRecentInfo instance.
 * Unfortunately, GtkRecentInfo cannot be a member of RecentInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because RecentInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gtk::RecentInfo> wrap(GtkRecentInfo* object, bool take_copy)
{
  if(take_copy && object)
    gtk_recent_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gtk::RecentInfo>(reinterpret_cast<Gtk::RecentInfo*>(object));
}

} // namespace Glib


namespace Gtk
{


void RecentInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gtk_recent_info_ref(reinterpret_cast<GtkRecentInfo*>(const_cast<RecentInfo*>(this)));
}

void RecentInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gtk_recent_info_unref(reinterpret_cast<GtkRecentInfo*>(const_cast<RecentInfo*>(this)));
}

GtkRecentInfo* RecentInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GtkRecentInfo*>(this);
}

const GtkRecentInfo* RecentInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GtkRecentInfo*>(this);
}

GtkRecentInfo* RecentInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GtkRecentInfo *const gobject = reinterpret_cast<GtkRecentInfo*>(const_cast<RecentInfo*>(this));
  gtk_recent_info_ref(gobject);
  return gobject;
}


Glib::ustring RecentInfo::get_uri() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_recent_info_get_uri(const_cast<GtkRecentInfo*>(gobj())));
}

Glib::ustring RecentInfo::get_display_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_recent_info_get_display_name(const_cast<GtkRecentInfo*>(gobj())));
}

Glib::ustring RecentInfo::get_description() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_recent_info_get_description(const_cast<GtkRecentInfo*>(gobj())));
}

Glib::ustring RecentInfo::get_mime_type() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_recent_info_get_mime_type(const_cast<GtkRecentInfo*>(gobj())));
}

time_t RecentInfo::get_added() const
{
  return gtk_recent_info_get_added(const_cast<GtkRecentInfo*>(gobj()));
}

time_t RecentInfo::get_modified() const
{
  return gtk_recent_info_get_modified(const_cast<GtkRecentInfo*>(gobj()));
}

time_t RecentInfo::get_visited() const
{
  return gtk_recent_info_get_visited(const_cast<GtkRecentInfo*>(gobj()));
}

bool RecentInfo::get_private_hint() const
{
  return gtk_recent_info_get_private_hint(const_cast<GtkRecentInfo*>(gobj()));
}

Glib::RefPtr<Gio::AppInfo> RecentInfo::create_app_info(const Glib::ustring& app_name)
{
  GError* gerror = 0;
  Glib::RefPtr<Gio::AppInfo> retvalue = Glib::wrap(gtk_recent_info_create_app_info(gobj(), app_name.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

Glib::ustring RecentInfo::last_application() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_recent_info_last_application(const_cast<GtkRecentInfo*>(gobj())));
}

bool RecentInfo::has_application(const Glib::ustring& app_name) const
{
  return gtk_recent_info_has_application(const_cast<GtkRecentInfo*>(gobj()), app_name.c_str());
}

bool RecentInfo::has_group(const Glib::ustring& group) const
{
  return gtk_recent_info_has_group(const_cast<GtkRecentInfo*>(gobj()), group.c_str());
}

Glib::RefPtr<Gdk::Pixbuf> RecentInfo::get_icon(int size)
{

  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_recent_info_get_icon(gobj(), size));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Gdk::Pixbuf> RecentInfo::get_icon(int size) const
{
  return const_cast<RecentInfo*>(this)->get_icon(size);
}

Glib::RefPtr<Gio::Icon> RecentInfo::get_gicon()
{

  Glib::RefPtr<Gio::Icon> retvalue = Glib::wrap(gtk_recent_info_get_gicon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Gio::Icon> RecentInfo::get_gicon() const
{
  return const_cast<RecentInfo*>(this)->get_gicon();
}

Glib::ustring RecentInfo::get_short_name() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_recent_info_get_short_name(const_cast<GtkRecentInfo*>(gobj())));
}

Glib::ustring RecentInfo::get_uri_display() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_recent_info_get_uri_display(const_cast<GtkRecentInfo*>(gobj())));
}

int RecentInfo::get_age() const
{
  return gtk_recent_info_get_age(const_cast<GtkRecentInfo*>(gobj()));
}

bool RecentInfo::is_local() const
{
  return gtk_recent_info_is_local(const_cast<GtkRecentInfo*>(gobj()));
}

bool RecentInfo::exists() const
{
  return gtk_recent_info_exists(const_cast<GtkRecentInfo*>(gobj()));
}

bool RecentInfo::equal(const RecentInfo& b) const
{
  return gtk_recent_info_match(const_cast<GtkRecentInfo*>(gobj()), const_cast<GtkRecentInfo*>((b).gobj()));
}


} // namespace Gtk


