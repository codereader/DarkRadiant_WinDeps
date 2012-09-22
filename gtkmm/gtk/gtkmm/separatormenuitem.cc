// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/separatormenuitem.h>
#include <gtkmm/private/separatormenuitem_p.h>


// -*- c++ -*-
/* $Id: separatormenuitem.ccg,v 1.1 2003/01/21 13:40:37 murrayc Exp $ */

/* 
 *
 * Copyright 2002 The gtkmm Development Team
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

Gtk::SeparatorMenuItem* wrap(GtkSeparatorMenuItem* object, bool take_copy)
{
  return dynamic_cast<Gtk::SeparatorMenuItem *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& SeparatorMenuItem_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SeparatorMenuItem_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_separator_menu_item_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SeparatorMenuItem_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SeparatorMenuItem_Class::wrap_new(GObject* o)
{
  return manage(new SeparatorMenuItem((GtkSeparatorMenuItem*)(o)));

}


/* The implementation: */

SeparatorMenuItem::SeparatorMenuItem(const Glib::ConstructParams& construct_params)
:
  Gtk::MenuItem(construct_params)
{
  }

SeparatorMenuItem::SeparatorMenuItem(GtkSeparatorMenuItem* castitem)
:
  Gtk::MenuItem((GtkMenuItem*)(castitem))
{
  }

SeparatorMenuItem::~SeparatorMenuItem()
{
  destroy_();
}

SeparatorMenuItem::CppClassType SeparatorMenuItem::separatormenuitem_class_; // initialize static member

GType SeparatorMenuItem::get_type()
{
  return separatormenuitem_class_.init().get_type();
}


GType SeparatorMenuItem::get_base_type()
{
  return gtk_separator_menu_item_get_type();
}


SeparatorMenuItem::SeparatorMenuItem()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::MenuItem(Glib::ConstructParams(separatormenuitem_class_.init()))
{
  

}


} // namespace Gtk


