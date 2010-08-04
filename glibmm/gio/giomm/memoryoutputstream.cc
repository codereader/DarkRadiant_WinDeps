// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/memoryoutputstream.h>
#include <giomm/private/memoryoutputstream_p.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2008 The gtkmm Development Team
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

Glib::RefPtr<Gio::MemoryOutputStream> wrap(GMemoryOutputStream* object, bool take_copy)
{
  return Glib::RefPtr<Gio::MemoryOutputStream>( dynamic_cast<Gio::MemoryOutputStream*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& MemoryOutputStream_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MemoryOutputStream_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_memory_output_stream_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Seekable::add_interface(get_type());

  }

  return *this;
}


void MemoryOutputStream_Class::class_init_function(void* g_class, void* class_data)
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


Glib::ObjectBase* MemoryOutputStream_Class::wrap_new(GObject* object)
{
  return new MemoryOutputStream((GMemoryOutputStream*)object);
}


/* The implementation: */

GMemoryOutputStream* MemoryOutputStream::gobj_copy()
{
  reference();
  return gobj();
}

MemoryOutputStream::MemoryOutputStream(const Glib::ConstructParams& construct_params)
:
  Gio::OutputStream(construct_params)
{

}

MemoryOutputStream::MemoryOutputStream(GMemoryOutputStream* castitem)
:
  Gio::OutputStream((GOutputStream*)(castitem))
{}


MemoryOutputStream::~MemoryOutputStream()
{}


MemoryOutputStream::CppClassType MemoryOutputStream::memoryoutputstream_class_; // initialize static member

GType MemoryOutputStream::get_type()
{
  return memoryoutputstream_class_.init().get_type();
}


GType MemoryOutputStream::get_base_type()
{
  return g_memory_output_stream_get_type();
}


MemoryOutputStream::MemoryOutputStream(gpointer data, gsize len, GReallocFunc realloc_fn, GDestroyNotify destroy)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gio::OutputStream(Glib::ConstructParams(memoryoutputstream_class_.init(), "data", data, "len", len, "realloc_fn", realloc_fn, "destroy", destroy, static_cast<char*>(0)))
{
  

}

Glib::RefPtr<MemoryOutputStream> MemoryOutputStream::create(gpointer data, gsize len, GReallocFunc realloc_fn, GDestroyNotify destroy)
{
  return Glib::RefPtr<MemoryOutputStream>( new MemoryOutputStream(data, len, realloc_fn, destroy) );
}
gpointer MemoryOutputStream::get_data()
{
  return g_memory_output_stream_get_data(gobj());
}

gsize MemoryOutputStream::get_size() const
{
  return g_memory_output_stream_get_size(const_cast<GMemoryOutputStream*>(gobj()));
}

gsize MemoryOutputStream::get_data_size() const
{
  return g_memory_output_stream_get_data_size(const_cast<GMemoryOutputStream*>(gobj()));
}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gio


