// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_NETWORKSERVICE_H
#define _GIOMM_NETWORKSERVICE_H


#include <glibmm.h>

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

#include <glibmm/object.h>
#include <giomm/socketconnectable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GNetworkService GNetworkService;
typedef struct _GNetworkServiceClass GNetworkServiceClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class NetworkService_Class; } // namespace Gio
namespace Gio
{

/** A GSocketConnectable for resolving SRV records
 *
 * Like NetworkAddress does with hostnames, NetworkService provides an easy
 * way to resolve a SRV record, and then attempt to connect to one of the hosts
 * that implements that service, handling service priority/weighting, multiple
 * IP addresses, and multiple address families.
 *
 * See SrvTarget for more information about SRV records, and see
 * SocketConnectable for and example of using the connectable interface.
 *
 * @newin{2,24}
 * @ingroup NetworkIO
 */

class NetworkService : public Glib::Object,
    public SocketConnectable
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef NetworkService CppObjectType;
  typedef NetworkService_Class CppClassType;
  typedef GNetworkService BaseObjectType;
  typedef GNetworkServiceClass BaseClassType;

private:  friend class NetworkService_Class;
  static CppClassType networkservice_class_;

private:
  // noncopyable
  NetworkService(const NetworkService&);
  NetworkService& operator=(const NetworkService&);

protected:
  explicit NetworkService(const Glib::ConstructParams& construct_params);
  explicit NetworkService(GNetworkService* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~NetworkService();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GNetworkService*       gobj()       { return reinterpret_cast<GNetworkService*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GNetworkService* gobj() const { return reinterpret_cast<GNetworkService*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GNetworkService* gobj_copy();

private:

  
    explicit NetworkService(const Glib::ustring& service, const Glib::ustring& protocol, const Glib::ustring& domain);


public:
  
  static Glib::RefPtr<NetworkService> create(const Glib::ustring& service, const Glib::ustring& protocol, const Glib::ustring& domain);


  /** Gets @a srv's service name (eg, "ldap").
   * 
   * @newin{2,22}
   * @return  @a srv's service name.
   */
  Glib::ustring get_service() const;
  
  /** Gets @a srv's protocol name (eg, "tcp").
   * 
   * @newin{2,22}
   * @return  @a srv's protocol name.
   */
  Glib::ustring get_protocol() const;
  
  /** Gets the domain that @a srv serves. This might be either UTF-8 or
   * ASCII-encoded, depending on what @a srv was created with.
   * 
   * @newin{2,22}
   * @return  @a srv's domain name.
   */
  Glib::ustring get_domain() const;

  
  /** Get's the URI scheme used to resolve proxies. By default, the service name
   * is used as scheme.
   * 
   * @newin{2,26}
   * @return  @a srv's scheme name.
   */
  Glib::ustring get_scheme() const;
  
  /** Set's the URI scheme used to resolve proxies. By default, the service name
   * is used as scheme.
   * 
   * @newin{2,26}
   * @param scheme A URI scheme.
   */
  void set_scheme(const Glib::ustring& scheme);

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Network domain, eg, 'example.com'.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_domain() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Network protocol, eg 'tcp'.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_protocol() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Network scheme (default is to use service).
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_scheme() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Network scheme (default is to use service).
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_scheme() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Service name, eg 'ldap'.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_service() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::NetworkService
   */
  Glib::RefPtr<Gio::NetworkService> wrap(GNetworkService* object, bool take_copy = false);
}


#endif /* _GIOMM_NETWORKSERVICE_H */

