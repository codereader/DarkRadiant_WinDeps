// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/separator.h>
#include <gtkmm/private/separator_p.h>

// -*- c++ -*-
/* $Id: separator.ccg,v 1.1 2003/01/21 13:40:37 murrayc Exp $ */

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

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Separator* wrap(GtkSeparator* object, bool take_copy)
{
  return dynamic_cast<Gtk::Separator *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Separator_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Separator_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_separator_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void Separator_Class::class_init_function(void* g_class, void* class_data)
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


Glib::ObjectBase* Separator_Class::wrap_new(GObject* o)
{
  return manage(new Separator((GtkSeparator*)(o)));

}


/* The implementation: */

Separator::Separator(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Separator::Separator(GtkSeparator* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }

Separator::~Separator()
{
  destroy_();
}

Separator::CppClassType Separator::separator_class_; // initialize static member

GType Separator::get_type()
{
  return separator_class_.init().get_type();
}

GType Separator::get_base_type()
{
  return gtk_separator_get_type();
}


Separator::Separator()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Widget(Glib::ConstructParams(separator_class_.init()))
{
  

}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


namespace Glib
{

Gtk::VSeparator* wrap(GtkVSeparator* object, bool take_copy)
{
  return dynamic_cast<Gtk::VSeparator *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& VSeparator_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &VSeparator_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_vseparator_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void VSeparator_Class::class_init_function(void* g_class, void* class_data)
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


Glib::ObjectBase* VSeparator_Class::wrap_new(GObject* o)
{
  return manage(new VSeparator((GtkVSeparator*)(o)));

}


/* The implementation: */

VSeparator::VSeparator(const Glib::ConstructParams& construct_params)
:
  Gtk::Separator(construct_params)
{
  }

VSeparator::VSeparator(GtkVSeparator* castitem)
:
  Gtk::Separator((GtkSeparator*)(castitem))
{
  }

VSeparator::~VSeparator()
{
  destroy_();
}

VSeparator::CppClassType VSeparator::vseparator_class_; // initialize static member

GType VSeparator::get_type()
{
  return vseparator_class_.init().get_type();
}

GType VSeparator::get_base_type()
{
  return gtk_vseparator_get_type();
}

VSeparator::VSeparator()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Separator(Glib::ConstructParams(vseparator_class_.init()))
{
  

}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


namespace Glib
{

Gtk::HSeparator* wrap(GtkHSeparator* object, bool take_copy)
{
  return dynamic_cast<Gtk::HSeparator *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& HSeparator_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &HSeparator_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_hseparator_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void HSeparator_Class::class_init_function(void* g_class, void* class_data)
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


Glib::ObjectBase* HSeparator_Class::wrap_new(GObject* o)
{
  return manage(new HSeparator((GtkHSeparator*)(o)));

}


/* The implementation: */

HSeparator::HSeparator(const Glib::ConstructParams& construct_params)
:
  Gtk::Separator(construct_params)
{
  }

HSeparator::HSeparator(GtkHSeparator* castitem)
:
  Gtk::Separator((GtkSeparator*)(castitem))
{
  }

HSeparator::~HSeparator()
{
  destroy_();
}

HSeparator::CppClassType HSeparator::hseparator_class_; // initialize static member

GType HSeparator::get_type()
{
  return hseparator_class_.init().get_type();
}

GType HSeparator::get_base_type()
{
  return gtk_hseparator_get_type();
}

HSeparator::HSeparator()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Separator(Glib::ConstructParams(hseparator_class_.init()))
{
  

}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


