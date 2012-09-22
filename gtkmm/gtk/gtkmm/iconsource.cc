// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/iconsource.h>
#include <gtkmm/private/iconsource_p.h>


// -*- c++ -*-
/* $Id: iconsource.ccg,v 1.1 2003/01/21 13:40:26 murrayc Exp $ */

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

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::IconSource wrap(GtkIconSource* object, bool take_copy)
{
  return Gtk::IconSource(object, take_copy);
}

} // namespace Glib


namespace Gtk
{


// static
GType IconSource::get_type()
{
  return gtk_icon_source_get_type();
}

IconSource::IconSource()
:
  gobject_ (gtk_icon_source_new())
{}

IconSource::IconSource(const IconSource& other)
:
  gobject_ ((other.gobject_) ? gtk_icon_source_copy(other.gobject_) : 0)
{}

IconSource::IconSource(GtkIconSource* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gtk_icon_source_copy(gobject) : gobject)
{}

IconSource& IconSource::operator=(const IconSource& other)
{
  IconSource temp (other);
  swap(temp);
  return *this;
}

IconSource::~IconSource()
{
  if(gobject_)
    gtk_icon_source_free(gobject_);
}

void IconSource::swap(IconSource& other)
{
  GtkIconSource *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

GtkIconSource* IconSource::gobj_copy() const
{
  return gtk_icon_source_copy(gobject_);
}


void IconSource::set_filename(const Glib::ustring& filename)
{
  gtk_icon_source_set_filename(gobj(), filename.c_str()); 
}

void IconSource::set_pixbuf(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf)
{
  gtk_icon_source_set_pixbuf(gobj(), Glib::unwrap(pixbuf)); 
}

Glib::ustring IconSource::get_filename() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_icon_source_get_filename(const_cast<GtkIconSource*>(gobj())));
}

Glib::RefPtr<Gdk::Pixbuf> IconSource::get_pixbuf()
{

  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_icon_source_get_pixbuf(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Gdk::Pixbuf> IconSource::get_pixbuf() const
{
  return const_cast<IconSource*>(this)->get_pixbuf();
}

void IconSource::set_direction_wildcarded(bool setting)
{
  gtk_icon_source_set_direction_wildcarded(gobj(), static_cast<int>(setting)); 
}

void IconSource::set_state_wildcarded(bool setting)
{
  gtk_icon_source_set_state_wildcarded(gobj(), static_cast<int>(setting)); 
}

void IconSource::set_size_wildcarded(bool setting)
{
  gtk_icon_source_set_size_wildcarded(gobj(), static_cast<int>(setting)); 
}

bool IconSource::get_size_wildcarded() const
{
  return gtk_icon_source_get_size_wildcarded(const_cast<GtkIconSource*>(gobj()));
}

bool IconSource::get_state_wildcarded() const
{
  return gtk_icon_source_get_state_wildcarded(const_cast<GtkIconSource*>(gobj()));
}

bool IconSource::get_direction_wildcarded() const
{
  return gtk_icon_source_get_direction_wildcarded(const_cast<GtkIconSource*>(gobj()));
}

void IconSource::set_direction(TextDirection direction)
{
  gtk_icon_source_set_direction(gobj(), ((GtkTextDirection)(direction))); 
}

void IconSource::set_state(Gtk::StateType state)
{
  gtk_icon_source_set_state(gobj(), ((GtkStateType)(state))); 
}

void IconSource::set_size(IconSize size)
{
  gtk_icon_source_set_size(gobj(), static_cast<GtkIconSize>(int(size))); 
}

TextDirection IconSource::get_direction() const
{
  return ((TextDirection)(gtk_icon_source_get_direction(const_cast<GtkIconSource*>(gobj()))));
}

Gtk::StateType IconSource::get_state() const
{
  return ((Gtk::StateType)(gtk_icon_source_get_state(const_cast<GtkIconSource*>(gobj()))));
}

IconSize IconSource::get_size() const
{
  return IconSize(static_cast<int>(gtk_icon_source_get_size(const_cast<GtkIconSource*>(gobj()))));
}

void IconSource::set_icon_name(const Glib::ustring& icon_name)
{
  gtk_icon_source_set_icon_name(gobj(), icon_name.c_str()); 
}

Glib::ustring IconSource::get_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_icon_source_get_icon_name(const_cast<GtkIconSource*>(gobj())));
}


} // namespace Gtk


