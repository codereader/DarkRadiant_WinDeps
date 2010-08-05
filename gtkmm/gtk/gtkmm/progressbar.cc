// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/progressbar.h>
#include <gtkmm/private/progressbar_p.h>

#include <gtk/gtk.h>
// -*- c++ -*-
/* $Id: progressbar.ccg,v 1.1 2003/01/21 13:40:34 murrayc Exp $ */

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

#include <gtkmm/adjustment.h>
#include <gtk/gtk.h>

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::ProgressBarStyle>::value_type()
{
  return gtk_progress_bar_style_get_type();
}

// static
GType Glib::Value<Gtk::ProgressBarOrientation>::value_type()
{
  return gtk_progress_bar_orientation_get_type();
}


namespace Glib
{

Gtk::ProgressBar* wrap(GtkProgressBar* object, bool take_copy)
{
  return dynamic_cast<Gtk::ProgressBar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ProgressBar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ProgressBar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_progress_bar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void ProgressBar_Class::class_init_function(void* g_class, void* class_data)
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


Glib::ObjectBase* ProgressBar_Class::wrap_new(GObject* o)
{
  return manage(new ProgressBar((GtkProgressBar*)(o)));

}


/* The implementation: */

ProgressBar::ProgressBar(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

ProgressBar::ProgressBar(GtkProgressBar* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }

ProgressBar::~ProgressBar()
{
  destroy_();
}

ProgressBar::CppClassType ProgressBar::progressbar_class_; // initialize static member

GType ProgressBar::get_type()
{
  return progressbar_class_.init().get_type();
}

GType ProgressBar::get_base_type()
{
  return gtk_progress_bar_get_type();
}


ProgressBar::ProgressBar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Widget(Glib::ConstructParams(progressbar_class_.init()))
{
  

}

void ProgressBar::pulse()
{
gtk_progress_bar_pulse(gobj()); 
}

Glib::ustring ProgressBar::get_text() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_progress_bar_get_text(const_cast<GtkProgressBar*>(gobj())));
}

void ProgressBar::set_text(const Glib::ustring& text)
{
gtk_progress_bar_set_text(gobj(), text.c_str()); 
}

double ProgressBar::get_fraction() const
{
  return gtk_progress_bar_get_fraction(const_cast<GtkProgressBar*>(gobj()));
}

void ProgressBar::set_fraction(double fraction)
{
gtk_progress_bar_set_fraction(gobj(), fraction); 
}

double ProgressBar::get_pulse_step() const
{
  return gtk_progress_bar_get_pulse_step(const_cast<GtkProgressBar*>(gobj()));
}

void ProgressBar::set_pulse_step(double fraction)
{
gtk_progress_bar_set_pulse_step(gobj(), fraction); 
}

void ProgressBar::set_orientation(ProgressBarOrientation orientation)
{
gtk_progress_bar_set_orientation(gobj(), ((GtkProgressBarOrientation)(orientation))); 
}

ProgressBarOrientation ProgressBar::get_orientation() const
{
  return ((ProgressBarOrientation)(gtk_progress_bar_get_orientation(const_cast<GtkProgressBar*>(gobj()))));
}

void ProgressBar::set_ellipsize(Pango::EllipsizeMode mode)
{
gtk_progress_bar_set_ellipsize(gobj(), ((PangoEllipsizeMode)(mode))); 
}

Pango::EllipsizeMode ProgressBar::get_ellipsize() const
{
  return ((Pango::EllipsizeMode)(gtk_progress_bar_get_ellipsize(const_cast<GtkProgressBar*>(gobj()))));
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> ProgressBar::property_fraction() 
{
  return Glib::PropertyProxy<double>(this, "fraction");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> ProgressBar::property_fraction() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "fraction");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> ProgressBar::property_pulse_step() 
{
  return Glib::PropertyProxy<double>(this, "pulse-step");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> ProgressBar::property_pulse_step() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "pulse-step");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<ProgressBarOrientation> ProgressBar::property_orientation() 
{
  return Glib::PropertyProxy<ProgressBarOrientation>(this, "orientation");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<ProgressBarOrientation> ProgressBar::property_orientation() const
{
  return Glib::PropertyProxy_ReadOnly<ProgressBarOrientation>(this, "orientation");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> ProgressBar::property_text() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "text");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> ProgressBar::property_text() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "text");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> ProgressBar::property_ellipsize() 
{
  return Glib::PropertyProxy<bool>(this, "ellipsize");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> ProgressBar::property_ellipsize() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "ellipsize");
}
#endif //GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


