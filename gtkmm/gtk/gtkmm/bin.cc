// Generated by gtkmmproc -- DO NOT MODIFY!

//Include this before the other headers, such as container.h,
//so that the undef is used.
#include <gtkmm/box.h>
 

#include <gtkmm/bin.h>
#include <gtkmm/private/bin_p.h>

// -*- c++ -*-
/* $Id: bin.ccg,v 1.2 2004/03/15 00:26:00 murrayc Exp $ */

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

#include <gtkmm/box.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/label.h>
#include <gtkmm/image.h>
#include <gtk/gtk.h>

namespace Gtk
{


void
Bin::remove()
{
  GtkWidget* child = gtk_bin_get_child(gobj());
  if(child)
  {
    Gtk::Widget* cppChild = Glib::wrap(child);

    //If this is a managed widget,
    //then do an extra ref so that it will
    //not be destroyed when adding to another container
    //This should leave it in much the same state as when it was instantiated,
    //before being added to the first container.
    if(cppChild->is_managed_())
      cppChild->reference();

    gtk_container_remove(Container::gobj(), cppChild->gobj());
  }
}

void
Bin::add_label(const Glib::ustring& str, bool mnemonic /* = false */,
	             double x_align /* = 0.5 */, double y_align /* = 0.5 */)
{
  Label* label = manage(new Label(str, x_align, y_align, mnemonic));
  add(*label);

  //This might not always be appropriate:
  //because maybe the mnemonic widget should be another child widget.
  //if(mnemonic)
    //label->set_mnemonic_widget(*this);

  label->show();
}

void
Bin::add_label(const Glib::ustring& str, bool mnemonic,
	       AlignmentEnum x_align, AlignmentEnum y_align /* = ALIGN_CENTER */)
{
  add_label(str, mnemonic,
	    _gtkmm_align_float_from_enum(x_align),
	    _gtkmm_align_float_from_enum(y_align));
}

void
Bin::add_pixmap(const Glib::RefPtr<Gdk::Pixmap>& pixmap, const Glib::RefPtr<Gdk::Bitmap>& mask)
{
  Image* p = manage(new Image(pixmap, mask));
  add(*p);
  p->show();
}

void
Bin::add_pixlabel (const Glib::RefPtr<Gdk::Pixmap>& pixmap,
		   const Glib::RefPtr<Gdk::Bitmap>& mask,
		   const Glib::ustring& str,
		   double x_align /* = 0.5 */, double y_align /* = 0.5 */)
{
  //Create Pixmap and Label widgets:
  Image* pmap = manage(new Image(pixmap, mask));
  Label* label = manage(new Label(str));
  label->set_alignment (x_align, y_align);

  //Put them in a VBox:
  Box* box = manage(new HBox(false,5));
  box->pack_start(*pmap, PACK_SHRINK);
  box->pack_start(*label);
  box->show_all();

  //And put that VBox in this:
  add(*box);
}

void
Bin::add_pixlabel(const Glib::ustring& pixfile,
		  const Glib::ustring& str,
		  double x_align /* = 0.5 */, double y_align /* = 0.5 */)
{
  //Create Pixmap and Label widgets:
  Image* pmap = manage(new Image(pixfile));
  Label* label = manage(new Label(str));
  label->set_alignment (x_align, y_align);

  //Put them in a VBox:
  Box* vbox = manage(new HBox(false, 5));
  vbox->pack_start(*pmap, PACK_SHRINK);
  vbox->pack_start(*label);
  vbox->show_all();

  //And put that VBox in this:
  add(*vbox);
}


} /* namespace Gtk */

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Bin* wrap(GtkBin* object, bool take_copy)
{
  return dynamic_cast<Gtk::Bin *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Bin_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Bin_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_bin_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Bin_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Bin_Class::wrap_new(GObject* o)
{
  return manage(new Bin((GtkBin*)(o)));

}


/* The implementation: */

Bin::Bin(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

Bin::Bin(GtkBin* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }

Bin::~Bin()
{
  destroy_();
}

Bin::CppClassType Bin::bin_class_; // initialize static member

GType Bin::get_type()
{
  return bin_class_.init().get_type();
}


GType Bin::get_base_type()
{
  return gtk_bin_get_type();
}


Bin::Bin()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Container(Glib::ConstructParams(bin_class_.init()))
{
  

}

Gtk::Widget* Bin::get_child()
{
  return Glib::wrap(gtk_bin_get_child(gobj()));
}

const Gtk::Widget* Bin::get_child() const
{
  return Glib::wrap(gtk_bin_get_child(const_cast<GtkBin*>(gobj())));
}


} // namespace Gtk


