// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/inputstream.h>
#include <giomm/private/inputstream_p.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The giomm Development Team
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
#include <giomm/asyncresult.h>
#include "slot_async.h"

namespace Gio
{

gssize InputStream::read(void* buffer, gsize count)
{
  GError* gerror = 0;
  gssize retvalue = g_input_stream_read(gobj(), buffer, count, 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}


bool InputStream::read_all(void* buffer, gsize count, gsize& bytes_read)
{
  GError* gerror = 0;
  bool retvalue = g_input_stream_read_all(gobj(), buffer, count, &(bytes_read), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

gssize InputStream::skip(gsize count)
{
  GError* gerror = 0;
  gssize retvalue = g_input_stream_skip(gobj(), count, 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

bool InputStream::close()
{
  GError* gerror = 0;
  bool retvalue = g_input_stream_close(gobj(), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

void
InputStream::read_async(void* buffer, gsize count, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_input_stream_read_async(gobj(),
                            buffer,
                            count,
                            io_priority,
                            Glib::unwrap(cancellable),
                            &SignalProxy_async_callback,
                            slot_copy);
}

void
InputStream::read_async(void* buffer, gsize count, const SlotAsyncReady& slot, int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_input_stream_read_async(gobj(),
                            buffer,
                            count,
                            io_priority,
                            0,
                            &SignalProxy_async_callback,
                            slot_copy);
}


void
InputStream::skip_async(gsize count, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_input_stream_skip_async(gobj(),
                            count,
                            io_priority,
                            Glib::unwrap(cancellable),
                            &SignalProxy_async_callback,
                            slot_copy);
}

void
InputStream::skip_async(gsize count, const SlotAsyncReady& slot, int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_input_stream_skip_async(gobj(),
                            count,
                            io_priority,
                            0,
                            &SignalProxy_async_callback,
                            slot_copy);
}

void
InputStream::close_async(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_input_stream_close_async(gobj(),
                             io_priority,
                             Glib::unwrap(cancellable),
                             &SignalProxy_async_callback,
                             slot_copy);
}

void
InputStream::close_async(const SlotAsyncReady& slot, int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_input_stream_close_async(gobj(),
                             io_priority,
                             0,
                             &SignalProxy_async_callback,
                             slot_copy);
}


} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::InputStream> wrap(GInputStream* object, bool take_copy)
{
  return Glib::RefPtr<Gio::InputStream>( dynamic_cast<Gio::InputStream*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& InputStream_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &InputStream_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_input_stream_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void InputStream_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* InputStream_Class::wrap_new(GObject* object)
{
  return new InputStream((GInputStream*)object);
}


/* The implementation: */

GInputStream* InputStream::gobj_copy()
{
  reference();
  return gobj();
}

InputStream::InputStream(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

InputStream::InputStream(GInputStream* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


InputStream::~InputStream()
{}


InputStream::CppClassType InputStream::inputstream_class_; // initialize static member

GType InputStream::get_type()
{
  return inputstream_class_.init().get_type();
}


GType InputStream::get_base_type()
{
  return g_input_stream_get_type();
}


gssize InputStream::read(void* buffer, gsize count, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  gssize retvalue = g_input_stream_read(gobj(), buffer, count, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

bool InputStream::read_all(void* buffer, gsize count, gsize& bytes_read, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  bool retvalue = g_input_stream_read_all(gobj(), buffer, count, &(bytes_read), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

gssize InputStream::skip(gsize count, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  gssize retvalue = g_input_stream_skip(gobj(), count, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

bool InputStream::close(const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  bool retvalue = g_input_stream_close(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

gssize InputStream::read_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  gssize retvalue = g_input_stream_read_finish(gobj(), Glib::unwrap(result), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

gssize InputStream::skip_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  gssize retvalue = g_input_stream_skip_finish(gobj(), Glib::unwrap(result), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

gboolean InputStream::close_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  gboolean retvalue = g_input_stream_close_finish(gobj(), Glib::unwrap(result), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}


} // namespace Gio


