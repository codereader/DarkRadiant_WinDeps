// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/bufferedinputstream.h>
#include <giomm/private/bufferedinputstream_p.h>


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
#include <glibmm/error.h>
#include "slot_async.h"

namespace Gio
{
Glib::RefPtr<BufferedInputStream> BufferedInputStream::create_sized(const Glib::RefPtr<InputStream>& base_stream, gsize buffer_size)
{
  return Glib::RefPtr<Gio::BufferedInputStream>(new BufferedInputStream(base_stream, buffer_size));
}

gssize BufferedInputStream::fill(gssize count)
{
  GError* gerror = 0;
  const gssize retvalue = g_buffered_input_stream_fill(const_cast<GBufferedInputStream*>(gobj()), count, 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

void BufferedInputStream::fill_async(const SlotAsyncReady& slot,
                                     gssize count,
                                     const Glib::RefPtr<Cancellable>& cancellable,
                                     int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
    SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

    g_buffered_input_stream_fill_async(gobj(),
            count,
            io_priority,
            Glib::unwrap(cancellable),
            &SignalProxy_async_callback,
            slot_copy);
}

void BufferedInputStream::fill_async(const SlotAsyncReady& slot,
                                     gssize count,
                                     int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
    SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

    g_buffered_input_stream_fill_async(gobj(),
            count,
            io_priority,
            0,
            &SignalProxy_async_callback,
            slot_copy);
}

int BufferedInputStream::read_byte()
{
  GError* gerror = 0;
  const int retvalue = g_buffered_input_stream_read_byte(gobj(), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}


}   // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::BufferedInputStream> wrap(GBufferedInputStream* object, bool take_copy)
{
  return Glib::RefPtr<Gio::BufferedInputStream>( dynamic_cast<Gio::BufferedInputStream*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& BufferedInputStream_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &BufferedInputStream_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_buffered_input_stream_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void BufferedInputStream_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* BufferedInputStream_Class::wrap_new(GObject* object)
{
  return new BufferedInputStream((GBufferedInputStream*)object);
}


/* The implementation: */

GBufferedInputStream* BufferedInputStream::gobj_copy()
{
  reference();
  return gobj();
}

BufferedInputStream::BufferedInputStream(const Glib::ConstructParams& construct_params)
:
  Gio::FilterInputStream(construct_params)
{

}

BufferedInputStream::BufferedInputStream(GBufferedInputStream* castitem)
:
  Gio::FilterInputStream((GFilterInputStream*)(castitem))
{}


BufferedInputStream::~BufferedInputStream()
{}


BufferedInputStream::CppClassType BufferedInputStream::bufferedinputstream_class_; // initialize static member

GType BufferedInputStream::get_type()
{
  return bufferedinputstream_class_.init().get_type();
}


GType BufferedInputStream::get_base_type()
{
  return g_buffered_input_stream_get_type();
}


BufferedInputStream::BufferedInputStream(const Glib::RefPtr<InputStream>& base_stream)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gio::FilterInputStream(Glib::ConstructParams(bufferedinputstream_class_.init(), "base_stream", const_cast<GInputStream*>(Glib::unwrap(base_stream)), static_cast<char*>(0)))
{
  

}

BufferedInputStream::BufferedInputStream(const Glib::RefPtr<InputStream>& base_stream, gsize buffer_size)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gio::FilterInputStream(Glib::ConstructParams(bufferedinputstream_class_.init(), "base_stream", const_cast<GInputStream*>(Glib::unwrap(base_stream)), "buffer_size", buffer_size, static_cast<char*>(0)))
{
  

}

Glib::RefPtr<BufferedInputStream> BufferedInputStream::create(const Glib::RefPtr<InputStream>& base_stream)
{
  return Glib::RefPtr<BufferedInputStream>( new BufferedInputStream(base_stream) );
}

gsize BufferedInputStream::get_buffer_size() const
{
  return g_buffered_input_stream_get_buffer_size(const_cast<GBufferedInputStream*>(gobj()));
}

void BufferedInputStream::set_buffer_size(gsize size)
{
  g_buffered_input_stream_set_buffer_size(gobj(), size); 
}

gsize BufferedInputStream::get_available() const
{
  return g_buffered_input_stream_get_available(const_cast<GBufferedInputStream*>(gobj()));
}

gsize BufferedInputStream::peek(void* buffer, gsize offset, gsize count) const
{
  return g_buffered_input_stream_peek(const_cast<GBufferedInputStream*>(gobj()), buffer, offset, count);
}

const void* BufferedInputStream::peek_buffer(gsize& count) const
{
  return g_buffered_input_stream_peek_buffer(const_cast<GBufferedInputStream*>(gobj()), &(count));
}

gssize BufferedInputStream::fill(gssize count, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  gssize retvalue = g_buffered_input_stream_fill(gobj(), count, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

gssize BufferedInputStream::fill_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  gssize retvalue = g_buffered_input_stream_fill_finish(gobj(), Glib::unwrap(result), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

int BufferedInputStream::read_byte(const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  int retvalue = g_buffered_input_stream_read_byte(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< guint > BufferedInputStream::property_buffer_size() 
{
  return Glib::PropertyProxy< guint >(this, "buffer-size");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< guint > BufferedInputStream::property_buffer_size() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "buffer-size");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gio


