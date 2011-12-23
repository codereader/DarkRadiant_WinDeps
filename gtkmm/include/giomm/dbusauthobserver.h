// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSAUTHOBSERVER_H
#define _GIOMM_DBUSAUTHOBSERVER_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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
#include <giomm/credentials.h>
#include <giomm/iostream.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GDBusAuthObserver GDBusAuthObserver;
typedef struct _GDBusAuthObserverClass GDBusAuthObserverClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{

namespace DBus
{ class AuthObserver_Class; } // namespace DBus

} // namespace Gio
namespace Gio
{

namespace DBus
{


//TODO: Add example from the C API docs in class docs.
/** Ah object used for authenticating connections.
 * The AuthObserver type provides a mechanism for participating in how a
 * Server (or a Connection) authenticates remote peers.  Simply
 * instantiate an AuthObserver and connect to the signals you are
 * interested in. Note that new signals may be added in the future.
 *
 * @newin{2,28}
 * @ingroup DBus
 */

class AuthObserver : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef AuthObserver CppObjectType;
  typedef AuthObserver_Class CppClassType;
  typedef GDBusAuthObserver BaseObjectType;
  typedef GDBusAuthObserverClass BaseClassType;

private:  friend class AuthObserver_Class;
  static CppClassType authobserver_class_;

private:
  // noncopyable
  AuthObserver(const AuthObserver&);
  AuthObserver& operator=(const AuthObserver&);

protected:
  explicit AuthObserver(const Glib::ConstructParams& construct_params);
  explicit AuthObserver(GDBusAuthObserver* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~AuthObserver();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GDBusAuthObserver*       gobj()       { return reinterpret_cast<GDBusAuthObserver*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GDBusAuthObserver* gobj() const { return reinterpret_cast<GDBusAuthObserver*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusAuthObserver* gobj_copy();

private:


protected:
  AuthObserver();
  

public:
  
  static Glib::RefPtr<AuthObserver> create();


  /** Emits the DBusAuthObserver::authorize-authenticated-peer signal on @a observer.
   * 
   * @newin{2,26}
   * @param stream A IOStream for the DBusConnection.
   * @param credentials Credentials received from the peer or <tt>0</tt>.
   * @return <tt>true</tt> if the peer is authorized, <tt>false</tt> if not.
   */
  bool authorize_authenticated_peer(const Glib::RefPtr<const IOStream>& stream, const Glib::RefPtr<const Credentials>& credentials);

 
  /**
   * @par Prototype:
   * <tt>bool on_my_%authorize_authenticated_peer(const Glib::RefPtr<const IOStream>& stream, const Glib::RefPtr<const Credentials>& credentials)</tt>
   */

  Glib::SignalProxy2< bool,const Glib::RefPtr<const IOStream>&,const Glib::RefPtr<const Credentials>& > signal_authorize_authenticated_peer();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} //namespace DBus

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::DBus::AuthObserver
   */
  Glib::RefPtr<Gio::DBus::AuthObserver> wrap(GDBusAuthObserver* object, bool take_copy = false);
}


#endif /* _GIOMM_DBUSAUTHOBSERVER_H */

