// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/inetsocketaddress.h>
#include <giomm/private/inetsocketaddress_p.h>


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

} //namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::InetSocketAddress> wrap(GInetSocketAddress* object, bool take_copy)
{
  return Glib::RefPtr<Gio::InetSocketAddress>( dynamic_cast<Gio::InetSocketAddress*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& InetSocketAddress_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &InetSocketAddress_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_inet_socket_address_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void InetSocketAddress_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* InetSocketAddress_Class::wrap_new(GObject* object)
{
  return new InetSocketAddress((GInetSocketAddress*)object);
}


/* The implementation: */

GInetSocketAddress* InetSocketAddress::gobj_copy()
{
  reference();
  return gobj();
}

InetSocketAddress::InetSocketAddress(const Glib::ConstructParams& construct_params)
:
  SocketAddress(construct_params)
{

}

InetSocketAddress::InetSocketAddress(GInetSocketAddress* castitem)
:
  SocketAddress((GSocketAddress*)(castitem))
{}


InetSocketAddress::~InetSocketAddress()
{}


InetSocketAddress::CppClassType InetSocketAddress::inetsocketaddress_class_; // initialize static member

GType InetSocketAddress::get_type()
{
  return inetsocketaddress_class_.init().get_type();
}


GType InetSocketAddress::get_base_type()
{
  return g_inet_socket_address_get_type();
}


InetSocketAddress::InetSocketAddress(const Glib::RefPtr<InetAddress>& address, guint16 port)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  SocketAddress(Glib::ConstructParams(inetsocketaddress_class_.init(), "address", const_cast<GInetAddress*>(Glib::unwrap(address)), "port", port, static_cast<char*>(0)))
{
  

}

Glib::RefPtr<InetSocketAddress> InetSocketAddress::create(const Glib::RefPtr<InetAddress>& address, guint16 port)
{
  return Glib::RefPtr<InetSocketAddress>( new InetSocketAddress(address, port) );
}

Glib::RefPtr<InetAddress> InetSocketAddress::get_address()
{

  Glib::RefPtr<InetAddress> retvalue = Glib::wrap(g_inet_socket_address_get_address(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const InetAddress> InetSocketAddress::get_address() const
{
  return const_cast<InetSocketAddress*>(this)->get_address();
}

guint16 InetSocketAddress::get_port() const
{
  return g_inet_socket_address_get_port(const_cast<GInetSocketAddress*>(gobj()));
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<InetAddress> > InetSocketAddress::property_address() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<InetAddress> >(this, "address");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< guint16 > InetSocketAddress::property_port() const
{
  return Glib::PropertyProxy_ReadOnly< guint16 >(this, "port");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gio


