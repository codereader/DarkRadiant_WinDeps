// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/fileicon.h>
#include <giomm/private/fileicon_p.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::FileIcon> wrap(GFileIcon* object, bool take_copy)
{
  return Glib::RefPtr<Gio::FileIcon>( dynamic_cast<Gio::FileIcon*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& FileIcon_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FileIcon_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_file_icon_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Icon::add_interface(get_type());
  LoadableIcon::add_interface(get_type());

  }

  return *this;
}


void FileIcon_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FileIcon_Class::wrap_new(GObject* object)
{
  return new FileIcon((GFileIcon*)object);
}


/* The implementation: */

GFileIcon* FileIcon::gobj_copy()
{
  reference();
  return gobj();
}

FileIcon::FileIcon(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

FileIcon::FileIcon(GFileIcon* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


FileIcon::~FileIcon()
{}


FileIcon::CppClassType FileIcon::fileicon_class_; // initialize static member

GType FileIcon::get_type()
{
  return fileicon_class_.init().get_type();
}


GType FileIcon::get_base_type()
{
  return g_file_icon_get_type();
}


FileIcon::FileIcon()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(fileicon_class_.init()))
{
  

}

Glib::RefPtr<FileIcon> FileIcon::create()
{
  return Glib::RefPtr<FileIcon>( new FileIcon() );
}

Glib::RefPtr<File> FileIcon::get_file()
{

  Glib::RefPtr<File> retvalue = Glib::wrap(g_file_icon_get_file(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const File> FileIcon::get_file() const
{
  return const_cast<FileIcon*>(this)->get_file();
}


} // namespace Gio


