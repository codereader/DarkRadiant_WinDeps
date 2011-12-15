// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/socketaddressenumerator.h>
#include <giomm/private/socketaddressenumerator_p.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2009 The giomm Development Team
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
#include <giomm/socketaddress.h>
#include "slot_async.h"

namespace Gio {

    void
    SocketAddressEnumerator::next_async(const Glib::RefPtr<Cancellable>& cancellable,
                                        const SlotAsyncReady& slot)
    {
        // Create a copy of the slot.
        // A pointer to it will be passed through the callback's data parameter
        // and deleted in the callback.
        SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

        g_socket_address_enumerator_next_async(gobj(),
                                               Glib::unwrap(cancellable),
                                               &SignalProxy_async_callback,
                                               slot_copy);
    }

    Glib::RefPtr<SocketAddress>
    SocketAddressEnumerator::next()
    {
      GError* gerror = 0;
      Glib::RefPtr<SocketAddress> retvalue = Glib::wrap(g_socket_address_enumerator_next(gobj(), 0, &(gerror)));
      if(gerror)
        ::Glib::Error::throw_exception(gerror);

      return retvalue;

    }
} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::SocketAddressEnumerator> wrap(GSocketAddressEnumerator* object, bool take_copy)
{
  return Glib::RefPtr<Gio::SocketAddressEnumerator>( dynamic_cast<Gio::SocketAddressEnumerator*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& SocketAddressEnumerator_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SocketAddressEnumerator_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_socket_address_enumerator_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SocketAddressEnumerator_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SocketAddressEnumerator_Class::wrap_new(GObject* object)
{
  return new SocketAddressEnumerator((GSocketAddressEnumerator*)object);
}


/* The implementation: */

GSocketAddressEnumerator* SocketAddressEnumerator::gobj_copy()
{
  reference();
  return gobj();
}

SocketAddressEnumerator::SocketAddressEnumerator(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

SocketAddressEnumerator::SocketAddressEnumerator(GSocketAddressEnumerator* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


SocketAddressEnumerator::~SocketAddressEnumerator()
{}


SocketAddressEnumerator::CppClassType SocketAddressEnumerator::socketaddressenumerator_class_; // initialize static member

GType SocketAddressEnumerator::get_type()
{
  return socketaddressenumerator_class_.init().get_type();
}


GType SocketAddressEnumerator::get_base_type()
{
  return g_socket_address_enumerator_get_type();
}


Glib::RefPtr<SocketAddress> SocketAddressEnumerator::next(const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketAddress> retvalue = Glib::wrap(g_socket_address_enumerator_next(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

Glib::RefPtr<SocketAddress> SocketAddressEnumerator::next_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketAddress> retvalue = Glib::wrap(g_socket_address_enumerator_next_finish(gobj(), Glib::unwrap(result), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}


} // namespace Gio


