// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/misc.h>
#include <gtkmm/private/misc_p.h>

// -*- c++ -*-
/* $Id: misc.ccg,v 1.1 2003/01/21 13:40:31 murrayc Exp $ */

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

namespace Gtk
{

} //namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Misc* wrap(GtkMisc* object, bool take_copy)
{
  return dynamic_cast<Gtk::Misc *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Misc_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Misc_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_misc_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void Misc_Class::class_init_function(void* g_class, void* class_data)
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


Glib::ObjectBase* Misc_Class::wrap_new(GObject* o)
{
  return manage(new Misc((GtkMisc*)(o)));

}


/* The implementation: */

Misc::Misc(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Misc::Misc(GtkMisc* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }

Misc::~Misc()
{
  destroy_();
}

Misc::CppClassType Misc::misc_class_; // initialize static member

GType Misc::get_type()
{
  return misc_class_.init().get_type();
}

GType Misc::get_base_type()
{
  return gtk_misc_get_type();
}


Misc::Misc()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Widget(Glib::ConstructParams(misc_class_.init()))
{
  

}

void Misc::set_alignment(float xalign, float yalign)
{
gtk_misc_set_alignment(gobj(), xalign, yalign); 
}

void Misc::set_alignment(AlignmentEnum xalign, AlignmentEnum yalign)
{
gtk_misc_set_alignment(gobj(), _gtkmm_align_float_from_enum(xalign), _gtkmm_align_float_from_enum(yalign)); 
}

void Misc::get_alignment(float& xalign, float& yalign) const
{
gtk_misc_get_alignment(const_cast<GtkMisc*>(gobj()), &(xalign), &(yalign)); 
}

void Misc::set_padding(int xpad, int ypad)
{
gtk_misc_set_padding(gobj(), xpad, ypad); 
}

void Misc::get_padding(int& xpad, int& ypad) const
{
gtk_misc_get_padding(const_cast<GtkMisc*>(gobj()), &xpad, &ypad); 
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<float> Misc::property_xalign() 
{
  return Glib::PropertyProxy<float>(this, "xalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<float> Misc::property_xalign() const
{
  return Glib::PropertyProxy_ReadOnly<float>(this, "xalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<float> Misc::property_yalign() 
{
  return Glib::PropertyProxy<float>(this, "yalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<float> Misc::property_yalign() const
{
  return Glib::PropertyProxy_ReadOnly<float>(this, "yalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> Misc::property_xpad() 
{
  return Glib::PropertyProxy<int>(this, "xpad");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Misc::property_xpad() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "xpad");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> Misc::property_ypad() 
{
  return Glib::PropertyProxy<int>(this, "ypad");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Misc::property_ypad() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "ypad");
}
#endif //GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


