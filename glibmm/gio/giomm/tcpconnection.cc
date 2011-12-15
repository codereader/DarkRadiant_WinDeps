// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/tcpconnection.h>
#include <giomm/private/tcpconnection_p.h>

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

Glib::RefPtr<Gio::TcpConnection> wrap(GTcpConnection* object, bool take_copy)
{
  return Glib::RefPtr<Gio::TcpConnection>( dynamic_cast<Gio::TcpConnection*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& TcpConnection_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TcpConnection_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_tcp_connection_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void TcpConnection_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TcpConnection_Class::wrap_new(GObject* object)
{
  return new TcpConnection((GTcpConnection*)object);
}


/* The implementation: */

GTcpConnection* TcpConnection::gobj_copy()
{
  reference();
  return gobj();
}

TcpConnection::TcpConnection(const Glib::ConstructParams& construct_params)
:
  Gio::SocketConnection(construct_params)
{

}

TcpConnection::TcpConnection(GTcpConnection* castitem)
:
  Gio::SocketConnection((GSocketConnection*)(castitem))
{}


TcpConnection::~TcpConnection()
{}


TcpConnection::CppClassType TcpConnection::tcpconnection_class_; // initialize static member

GType TcpConnection::get_type()
{
  return tcpconnection_class_.init().get_type();
}


GType TcpConnection::get_base_type()
{
  return g_tcp_connection_get_type();
}


void TcpConnection::set_graceful_disconnect(bool graceful_disconnect)
{
g_tcp_connection_set_graceful_disconnect(gobj(), static_cast<int>(graceful_disconnect)); 
}

bool TcpConnection::get_graceful_disconnect() const
{
  return g_tcp_connection_get_graceful_disconnect(const_cast<GTcpConnection*>(gobj()));
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TcpConnection::property_graceful_disconnect() 
{
  return Glib::PropertyProxy<bool>(this, "graceful-disconnect");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TcpConnection::property_graceful_disconnect() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "graceful-disconnect");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gio


