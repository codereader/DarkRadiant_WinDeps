// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gdkmm/pixbufanimation.h>
#include <gdkmm/private/pixbufanimation_p.h>

// -*- c++ -*-
/* $Id: pixbufanimation.ccg,v 1.1 2003/01/21 13:38:36 murrayc Exp $ */

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

#include <gdk/gdk.h>

namespace Gdk
{

#ifdef GLIBMM_EXCEPTIONS_ENABLED
Glib::RefPtr<PixbufAnimation> PixbufAnimation::create_from_file(const Glib::ustring& filename)
#else
Glib::RefPtr<PixbufAnimation> PixbufAnimation::create_from_file(const Glib::ustring& filename, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  return Glib::wrap(gdk_pixbuf_animation_new_from_file(filename.c_str(), &gerror));

#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED
}

} //Gdk


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::PixbufAnimation> wrap(GdkPixbufAnimation* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::PixbufAnimation>( dynamic_cast<Gdk::PixbufAnimation*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& PixbufAnimation_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PixbufAnimation_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_pixbuf_animation_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void PixbufAnimation_Class::class_init_function(void* g_class, void* class_data)
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


Glib::ObjectBase* PixbufAnimation_Class::wrap_new(GObject* object)
{
  return new PixbufAnimation((GdkPixbufAnimation*)object);
}


/* The implementation: */

GdkPixbufAnimation* PixbufAnimation::gobj_copy()
{
  reference();
  return gobj();
}

PixbufAnimation::PixbufAnimation(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

PixbufAnimation::PixbufAnimation(GdkPixbufAnimation* castitem)
:
  Glib::Object((GObject*)(castitem))
{}

PixbufAnimation::~PixbufAnimation()
{}


PixbufAnimation::CppClassType PixbufAnimation::pixbufanimation_class_; // initialize static member

GType PixbufAnimation::get_type()
{
  return pixbufanimation_class_.init().get_type();
}

GType PixbufAnimation::get_base_type()
{
  return gdk_pixbuf_animation_get_type();
}


int PixbufAnimation::get_width() const
{
  return gdk_pixbuf_animation_get_width(const_cast<GdkPixbufAnimation*>(gobj()));
}

int PixbufAnimation::get_height() const
{
  return gdk_pixbuf_animation_get_height(const_cast<GdkPixbufAnimation*>(gobj()));
}

bool PixbufAnimation::is_static_image() const
{
  return gdk_pixbuf_animation_is_static_image(const_cast<GdkPixbufAnimation*>(gobj()));
}

Glib::RefPtr<Pixbuf> PixbufAnimation::get_static_image()
{

  Glib::RefPtr<Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_animation_get_static_image(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<PixbufAnimationIter> PixbufAnimation::get_iter(const GTimeVal* start_time)
{

  Glib::RefPtr<PixbufAnimationIter> retvalue = Glib::wrap(gdk_pixbuf_animation_get_iter(gobj(), start_time));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gdk


