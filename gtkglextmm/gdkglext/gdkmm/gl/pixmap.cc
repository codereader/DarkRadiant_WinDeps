// Generated by gtkmmproc -- DO NOT MODIFY!

#include <gdkmm/gl/pixmap.h>
#include <gdkmm/gl/private/pixmap_p.h>

// -*- C++ -*-
/* gdkglextmm - C++ Wrapper for GdkGLExt
 * Copyright (C) 2002-2003  Naofumi Yasufuku
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA.
 */

#include <gdk/gdkgldrawable.h>
#include <gdk/gdkglpixmap.h>

namespace Gdk
{
  namespace GL
  {

    Pixmap::Pixmap(const Glib::RefPtr<const Config>& glconfig,
                   const Glib::RefPtr<const Gdk::Pixmap>& pixmap,
                   const int* attrib_list)
      : Gdk::Drawable(reinterpret_cast<GdkDrawable*>(
          gdk_gl_pixmap_new(const_cast<GdkGLConfig*>(Glib::unwrap<Config>(glconfig)),
                            const_cast<GdkPixmap*>(Glib::unwrap<Gdk::Pixmap>(pixmap)),
                            attrib_list)))
    {}

  } // namespace GL
} // namespace Gdk


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::GL::Pixmap> wrap(GdkGLPixmap* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::GL::Pixmap>( dynamic_cast<Gdk::GL::Pixmap*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{

namespace GL
{


/* The *_Class implementation: */

const Glib::Class& Pixmap_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Pixmap_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_gl_pixmap_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  }

  return *this;
}

void Pixmap_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

}


Glib::ObjectBase* Pixmap_Class::wrap_new(GObject* object)
{
  return new Pixmap((GdkGLPixmap*)object);
}


/* The implementation: */

GdkGLPixmap* Pixmap::gobj_copy()
{
  reference();
  return gobj();
}

Pixmap::Pixmap(const Glib::ConstructParams& construct_params)
:
  Gdk::Drawable(construct_params)
{}

Pixmap::Pixmap(GdkGLPixmap* castitem)
:
  Gdk::Drawable((GdkDrawable*)(castitem))
{}

Pixmap::~Pixmap()
{}


Pixmap::CppClassType Pixmap::pixmap_class_; // initialize static member

GType Pixmap::get_type()
{
  return pixmap_class_.init().get_type();
}

GType Pixmap::get_base_type()
{
  return gdk_gl_pixmap_get_type();
}


Glib::RefPtr<Pixmap> Pixmap::create(const Glib::RefPtr<const Config>& glconfig, const Glib::RefPtr<const Gdk::Pixmap>& pixmap, const int* attrib_list)
{
  return Glib::RefPtr<Pixmap>( new Pixmap(glconfig, pixmap, attrib_list) );
}
Glib::RefPtr<Gdk::Pixmap> Pixmap::get_pixmap()
{

  Glib::RefPtr<Gdk::Pixmap> retvalue = Glib::wrap((GdkPixmapObject*)(gdk_gl_pixmap_get_pixmap(gobj())));

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Gdk::Pixmap> Pixmap::get_pixmap() const
{

  Glib::RefPtr<const Gdk::Pixmap> retvalue = Glib::wrap((GdkPixmapObject*)(gdk_gl_pixmap_get_pixmap(const_cast<GdkGLPixmap*>(gobj()))));

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}


} // namespace GL

} // namespace Gdk


