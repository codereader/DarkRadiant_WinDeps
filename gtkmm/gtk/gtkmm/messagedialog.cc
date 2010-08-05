// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/messagedialog.h>
#include <gtkmm/private/messagedialog_p.h>

#include <gtk/gtk.h>
// -*- c++ -*-
/* $Id: messagedialog.ccg,v 1.7 2005/02/15 10:52:44 murrayc Exp $ */

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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtk/gtk.h>


namespace Gtk
{

MessageDialog::MessageDialog(const Glib::ustring& message, bool use_markup,
                             MessageType type, ButtonsType buttons,
                             bool modal)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(messagedialog_class_.init(), "message_type",(GtkMessageType)type,"buttons",(GtkButtonsType)buttons, static_cast<char*>(0)))
{
  set_modal(modal);
  set_message(message, use_markup);
}

MessageDialog::MessageDialog(Gtk::Window& parent, const Glib::ustring& message, bool use_markup,
                             MessageType type, ButtonsType buttons,
                             bool modal)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(messagedialog_class_.init(), "message_type",(GtkMessageType)type,"buttons",(GtkButtonsType)buttons, static_cast<char*>(0)))
{
  set_modal(modal);
  set_transient_for(parent);
  set_message(message, use_markup);
}

void MessageDialog::set_message(const Glib::ustring& message, bool use_markup)
{
  // TODO: GTK+ bug: The label widget is really a <private> struct field.
  // There should really be a message property.

  if(use_markup)
    gtk_message_dialog_set_markup(gobj(), message.c_str()); 
  else
    gtk_label_set_text(GTK_LABEL(gobj()->label), message.c_str());
}

void MessageDialog::set_secondary_text(const Glib::ustring& text, bool use_markup)
{
  if(use_markup)
    gtk_message_dialog_format_secondary_markup(gobj(), text.c_str());
  else
    gtk_message_dialog_format_secondary_text(gobj(), text.c_str());
}

} // namespace Gtk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::MessageType>::value_type()
{
  return gtk_message_type_get_type();
}

// static
GType Glib::Value<Gtk::ButtonsType>::value_type()
{
  return gtk_buttons_type_get_type();
}


namespace Glib
{

Gtk::MessageDialog* wrap(GtkMessageDialog* object, bool take_copy)
{
  return dynamic_cast<Gtk::MessageDialog *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& MessageDialog_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MessageDialog_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_message_dialog_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void MessageDialog_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* MessageDialog_Class::wrap_new(GObject* o)
{
  return new MessageDialog((GtkMessageDialog*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

MessageDialog::MessageDialog(const Glib::ConstructParams& construct_params)
:
  Gtk::Dialog(construct_params)
{
  }

MessageDialog::MessageDialog(GtkMessageDialog* castitem)
:
  Gtk::Dialog((GtkDialog*)(castitem))
{
  }

MessageDialog::~MessageDialog()
{
  destroy_();
}

MessageDialog::CppClassType MessageDialog::messagedialog_class_; // initialize static member

GType MessageDialog::get_type()
{
  return messagedialog_class_.init().get_type();
}

GType MessageDialog::get_base_type()
{
  return gtk_message_dialog_get_type();
}


void MessageDialog::set_image(Widget& image)
{
gtk_message_dialog_set_image(gobj(), (image).gobj()); 
}

Widget* MessageDialog::get_image()
{
  return Glib::wrap(gtk_message_dialog_get_image(gobj()));
}

const Widget* MessageDialog::get_image() const
{
  return const_cast<MessageDialog*>(this)->get_image();
}

#ifndef GTKMM_DISABLE_DEPRECATED

void MessageDialog::set_markup(const Glib::ustring& str)
{
gtk_message_dialog_set_markup(gobj(), str.c_str()); 
}

#endif // GTKMM_DISABLE_DEPRECATED


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<MessageType> MessageDialog::property_message_type() 
{
  return Glib::PropertyProxy<MessageType>(this, "message-type");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<MessageType> MessageDialog::property_message_type() const
{
  return Glib::PropertyProxy_ReadOnly<MessageType>(this, "message-type");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> MessageDialog::property_text() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "text");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> MessageDialog::property_text() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "text");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> MessageDialog::property_use_markup() 
{
  return Glib::PropertyProxy<bool>(this, "use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> MessageDialog::property_use_markup() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> MessageDialog::property_secondary_text() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "secondary-text");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> MessageDialog::property_secondary_text() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "secondary-text");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> MessageDialog::property_secondary_use_markup() 
{
  return Glib::PropertyProxy<bool>(this, "secondary-use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> MessageDialog::property_secondary_use_markup() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "secondary-use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Widget*> MessageDialog::property_image() 
{
  return Glib::PropertyProxy<Widget*>(this, "image");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Widget*> MessageDialog::property_image() const
{
  return Glib::PropertyProxy_ReadOnly<Widget*>(this, "image");
}
#endif //GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


