// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtksourceviewmm/gutterrendererpixbuf.h>
#include <gtksourceviewmm/private/gutterrendererpixbuf_p.h>

/* gutterrendererpixbuf.cc
 *
 * Copyright (C) 2009, 2010, 2011 Krzesimir Nowak
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtksourceview/gtksourcegutterrendererpixbuf.h>


namespace
{
} // anonymous namespace


namespace Glib
{

Gsv::GutterRendererPixbuf* wrap(GtkSourceGutterRendererPixbuf* object, bool take_copy)
{
  return dynamic_cast<Gsv::GutterRendererPixbuf *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gsv
{


/* The *_Class implementation: */

const Glib::Class& GutterRendererPixbuf_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GutterRendererPixbuf_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_source_gutter_renderer_pixbuf_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GutterRendererPixbuf_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GutterRendererPixbuf_Class::wrap_new(GObject* o)
{
  return Gtk::manage(new GutterRendererPixbuf((GtkSourceGutterRendererPixbuf*)(o)));

}


/* The implementation: */

GutterRendererPixbuf::GutterRendererPixbuf(const Glib::ConstructParams& construct_params)
:
  GutterRenderer(construct_params)
{
  }

GutterRendererPixbuf::GutterRendererPixbuf(GtkSourceGutterRendererPixbuf* castitem)
:
  GutterRenderer((GtkSourceGutterRenderer*)(castitem))
{
  }

GutterRendererPixbuf::~GutterRendererPixbuf()
{
  destroy_();
}

GutterRendererPixbuf::CppClassType GutterRendererPixbuf::gutterrendererpixbuf_class_; // initialize static member

GType GutterRendererPixbuf::get_type()
{
  return gutterrendererpixbuf_class_.init().get_type();
}


GType GutterRendererPixbuf::get_base_type()
{
  return gtk_source_gutter_renderer_pixbuf_get_type();
}


GutterRendererPixbuf::GutterRendererPixbuf()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  GutterRenderer(Glib::ConstructParams(gutterrendererpixbuf_class_.init()))
{
  

}

Glib::RefPtr<Gdk::Pixbuf> GutterRendererPixbuf::get_pixbuf()
{

  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gtk_source_gutter_renderer_pixbuf_get_pixbuf(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Gdk::Pixbuf> GutterRendererPixbuf::get_pixbuf() const
{
  return const_cast<GutterRendererPixbuf*>(this)->get_pixbuf();
}

void GutterRendererPixbuf::set_pixbuf(const Glib::RefPtr<const Gdk::Pixbuf>& pixbuf)
{
gtk_source_gutter_renderer_pixbuf_set_pixbuf(gobj(), const_cast<GdkPixbuf*>(Glib::unwrap(pixbuf))); 
}

std::string GutterRendererPixbuf::get_stock_id() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(gtk_source_gutter_renderer_pixbuf_get_stock_id(const_cast<GtkSourceGutterRendererPixbuf*>(gobj())));
}

void GutterRendererPixbuf::set_stock_id(const std::string& stock_id)
{
gtk_source_gutter_renderer_pixbuf_set_stock_id(gobj(), stock_id.c_str()); 
}

Glib::RefPtr<Gio::Icon> GutterRendererPixbuf::get_icon()
{

  Glib::RefPtr<Gio::Icon> retvalue = Glib::wrap(gtk_source_gutter_renderer_pixbuf_get_gicon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Gio::Icon> GutterRendererPixbuf::get_icon() const
{
  return const_cast<GutterRendererPixbuf*>(this)->get_icon();
}

void GutterRendererPixbuf::set_icon(const Glib::RefPtr<Gio::Icon>& icon)
{
gtk_source_gutter_renderer_pixbuf_set_gicon(gobj(), Glib::unwrap(icon)); 
}

std::string GutterRendererPixbuf::get_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(gtk_source_gutter_renderer_pixbuf_get_icon_name(const_cast<GtkSourceGutterRendererPixbuf*>(gobj())));
}

void GutterRendererPixbuf::set_icon_name(const std::string& icon_name)
{
gtk_source_gutter_renderer_pixbuf_set_icon_name(gobj(), icon_name.c_str()); 
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > GutterRendererPixbuf::property_pixbuf() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> >(this, "pixbuf");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > GutterRendererPixbuf::property_pixbuf() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> >(this, "pixbuf");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<std::string> GutterRendererPixbuf::property_stock_id() 
{
  return Glib::PropertyProxy<std::string>(this, "stock-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<std::string> GutterRendererPixbuf::property_stock_id() const
{
  return Glib::PropertyProxy_ReadOnly<std::string>(this, "stock-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<std::string> GutterRendererPixbuf::property_icon_name() 
{
  return Glib::PropertyProxy<std::string>(this, "icon-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<std::string> GutterRendererPixbuf::property_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly<std::string>(this, "icon-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > GutterRendererPixbuf::property_gicon() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> >(this, "gicon");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > GutterRendererPixbuf::property_gicon() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> >(this, "gicon");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gsv


