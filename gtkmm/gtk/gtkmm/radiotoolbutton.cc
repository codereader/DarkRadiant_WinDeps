// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/radiotoolbutton.h>
#include <gtkmm/private/radiotoolbutton_p.h>

// -*- c++ -*-
/* $Id: radiotoolbutton.ccg,v 1.4 2003/12/06 14:06:18 murrayc Exp $ */

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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtk/gtk.h>

typedef Gtk::RadioToolButton::Group Group; //So that the generate get_group return type is parsed.

namespace Gtk
{

RadioToolButton::RadioToolButton(Group& group, const Glib::ustring& label)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToggleToolButton(Glib::ConstructParams(radiotoolbutton_class_.init(), "label", label.c_str(), (char*) 0))
{
  set_group(group);
}

RadioToolButton::RadioToolButton(Group& group, const Gtk::StockID& stock_id)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToggleToolButton(Glib::ConstructParams(radiotoolbutton_class_.init(), "stock_id", (stock_id).get_c_str(), (char*) 0))
{
  //Based on the source of gtk_radio_tool_button_new_from_stock():
  set_group(group);
}

/* This would look too much like a copy constructor:
RadioToolButton::RadioToolButton(RadioToolButton& group, const Gtk::StockID& stock_id)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToggleToolButton(Glib::ConstructParams(radiotoolbutton_class_.init(), "stock_id", (stock_id).get_c_str(), (char*) 0))
{
  //Based on the source of gtk_radio_tool_button_new_with_stock_from_widget():
  Gtk::RadioButtonGroup radiogroup = group.get_group();
  set_group(radiogroup);
}
*/

RadioToolButton::RadioToolButton(Widget& icon_widget, const Glib::ustring& label)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToggleToolButton(Glib::ConstructParams(radiotoolbutton_class_.init(), "icon_widget", (icon_widget).gobj(), "label", label.c_str(), (char*) 0))
{
}


} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::RadioToolButton* wrap(GtkRadioToolButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::RadioToolButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& RadioToolButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &RadioToolButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_radio_tool_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void RadioToolButton_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* RadioToolButton_Class::wrap_new(GObject* o)
{
  return manage(new RadioToolButton((GtkRadioToolButton*)(o)));

}


/* The implementation: */

RadioToolButton::RadioToolButton(const Glib::ConstructParams& construct_params)
:
  Gtk::ToggleToolButton(construct_params)
{
  }

RadioToolButton::RadioToolButton(GtkRadioToolButton* castitem)
:
  Gtk::ToggleToolButton((GtkToggleToolButton*)(castitem))
{
  }

RadioToolButton::~RadioToolButton()
{
  destroy_();
}

RadioToolButton::CppClassType RadioToolButton::radiotoolbutton_class_; // initialize static member

GType RadioToolButton::get_type()
{
  return radiotoolbutton_class_.init().get_type();
}


GType RadioToolButton::get_base_type()
{
  return gtk_radio_tool_button_get_type();
}


RadioToolButton::RadioToolButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::ToggleToolButton(Glib::ConstructParams(radiotoolbutton_class_.init()))
{
  

}

Group RadioToolButton::get_group()
{
  return Group(gtk_radio_tool_button_get_group(gobj()));
}

void RadioToolButton::set_group(Group& group)
{
gtk_radio_tool_button_set_group(gobj(), group.group_); 
}


} // namespace Gtk


