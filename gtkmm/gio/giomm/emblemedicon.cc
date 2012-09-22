// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/emblemedicon.h>
#include <giomm/private/emblemedicon_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2008 Jonathon Jongsma
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

#include <gio/gio.h>

namespace Gio
{

EmblemedIcon::EmblemedIcon(const Glib::RefPtr<Icon>& icon)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(emblemedicon_class_.init(), "icon",Glib::unwrap(icon), static_cast<char*>(0)))
{
}

} //namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::EmblemedIcon> wrap(GEmblemedIcon* object, bool take_copy)
{
  return Glib::RefPtr<Gio::EmblemedIcon>( dynamic_cast<Gio::EmblemedIcon*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& EmblemedIcon_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &EmblemedIcon_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_emblemed_icon_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Icon::add_interface(get_type());

  }

  return *this;
}


void EmblemedIcon_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* EmblemedIcon_Class::wrap_new(GObject* object)
{
  return new EmblemedIcon((GEmblemedIcon*)object);
}


/* The implementation: */

GEmblemedIcon* EmblemedIcon::gobj_copy()
{
  reference();
  return gobj();
}

EmblemedIcon::EmblemedIcon(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

EmblemedIcon::EmblemedIcon(GEmblemedIcon* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


EmblemedIcon::~EmblemedIcon()
{}


EmblemedIcon::CppClassType EmblemedIcon::emblemedicon_class_; // initialize static member

GType EmblemedIcon::get_type()
{
  return emblemedicon_class_.init().get_type();
}


GType EmblemedIcon::get_base_type()
{
  return g_emblemed_icon_get_type();
}


EmblemedIcon::EmblemedIcon(const Glib::RefPtr<Icon>& icon, const Glib::RefPtr<Emblem>& emblem)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(emblemedicon_class_.init(), "icon", const_cast<GIcon*>(Glib::unwrap(icon)), "emblem", const_cast<GEmblem*>(Glib::unwrap(emblem)), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<EmblemedIcon> EmblemedIcon::create(const Glib::RefPtr<Icon>& icon, const Glib::RefPtr<Emblem>& emblem)
{
  return Glib::RefPtr<EmblemedIcon>( new EmblemedIcon(icon, emblem) );
}

Glib::RefPtr<EmblemedIcon> EmblemedIcon::create(const Glib::RefPtr<Icon>& icon)
{
  return Glib::RefPtr<EmblemedIcon>( new EmblemedIcon(icon) );
}

Glib::RefPtr<Icon> EmblemedIcon::get_icon()
{
  return Glib::wrap(g_emblemed_icon_get_icon(gobj()));
}

Glib::RefPtr<const Icon> EmblemedIcon::get_icon() const
{
  return const_cast<EmblemedIcon*>(this)->get_icon();
}

Glib::ListHandle<Glib::RefPtr<Emblem> > EmblemedIcon::get_emblems()
{
  return Glib::ListHandle<Glib::RefPtr<Emblem> >(g_emblemed_icon_get_emblems(gobj()), Glib::OWNERSHIP_NONE);
}

void EmblemedIcon::add_emblem(const Glib::RefPtr<Emblem>& emblem)
{
  g_emblemed_icon_add_emblem(gobj(), const_cast<GEmblem*>(Glib::unwrap(emblem))); 
}

void EmblemedIcon::clear_emblems()
{
  g_emblemed_icon_clear_emblems(gobj()); 
}


} // namespace Gio


