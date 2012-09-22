// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/socketconnection.h>
#include <giomm/private/socketconnection_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 Jonathon Jongsma
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
} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::SocketConnection> wrap(GSocketConnection* object, bool take_copy)
{
  return Glib::RefPtr<Gio::SocketConnection>( dynamic_cast<Gio::SocketConnection*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& SocketConnection_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SocketConnection_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_socket_connection_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SocketConnection_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SocketConnection_Class::wrap_new(GObject* object)
{
  return new SocketConnection((GSocketConnection*)object);
}


/* The implementation: */

GSocketConnection* SocketConnection::gobj_copy()
{
  reference();
  return gobj();
}

SocketConnection::SocketConnection(const Glib::ConstructParams& construct_params)
:
  Gio::IOStream(construct_params)
{

}

SocketConnection::SocketConnection(GSocketConnection* castitem)
:
  Gio::IOStream((GIOStream*)(castitem))
{}


SocketConnection::~SocketConnection()
{}


SocketConnection::CppClassType SocketConnection::socketconnection_class_; // initialize static member

GType SocketConnection::get_type()
{
  return socketconnection_class_.init().get_type();
}


GType SocketConnection::get_base_type()
{
  return g_socket_connection_get_type();
}


Glib::RefPtr<Socket> SocketConnection::get_socket()
{

  Glib::RefPtr<Socket> retvalue = Glib::wrap(g_socket_connection_get_socket(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Socket> SocketConnection::get_socket() const
{
  return const_cast<SocketConnection*>(this)->get_socket();
}

Glib::RefPtr<SocketAddress> SocketConnection::get_local_address()
{
  GError* gerror = 0;
  Glib::RefPtr<SocketAddress> retvalue = Glib::wrap(g_socket_connection_get_local_address(gobj(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

Glib::RefPtr<const SocketAddress> SocketConnection::get_local_address() const
{
  return const_cast<SocketConnection*>(this)->get_local_address();
}

Glib::RefPtr<SocketAddress> SocketConnection::get_remote_address()
{
  GError* gerror = 0;
  Glib::RefPtr<SocketAddress> retvalue = Glib::wrap(g_socket_connection_get_remote_address(gobj(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

Glib::RefPtr<const SocketAddress> SocketConnection::get_remote_address() const
{
  return const_cast<SocketConnection*>(this)->get_remote_address();
}

Glib::RefPtr<SocketConnection> SocketConnection::create(const Glib::RefPtr<Socket>& socket)
{
  return Glib::wrap(g_socket_connection_factory_create_connection(const_cast<GSocket*>(Glib::unwrap(socket))));
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Socket> > SocketConnection::property_socket() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Socket> >(this, "socket");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gio


