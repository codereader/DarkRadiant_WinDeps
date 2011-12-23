// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_SOCKETSERVICE_H
#define _GIOMM_SOCKETSERVICE_H


#include <glibmm.h>

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

#include <giomm/socketlistener.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GSocketService GSocketService;
typedef struct _GSocketServiceClass GSocketServiceClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class SocketService_Class; } // namespace Gio
namespace Gio
{

/**
 * Make it easy to implement a network service
 *
 * @see ThreadedSocketService, SocketListener.
 *
 * A SocketService is an object that represents a service that is
 * provided to the network or over local sockets.  When a new
 * connection is made to the service the SocketService:incoming
 * signal is emitted.
 *
 * A SocketService is a subclass of SocketListener and you need
 * to add the addresses you want to accept connections on to the
 * with the SocketListener APIs.
 *
 * There are two options for implementing a network service based on
 * SocketService. The first is to create the service using
 * g_socket_service_new() and to connect to the SocketService:incoming
 * signal. The second is to subclass SocketService and override the
 * default signal handler implementation.
 *
 * In either case, the handler must immediately return, or else it
 * will block additional incoming connections from being serviced.
 * If you are interested in writing connection handlers that contain
 * blocking code then see ThreadedSocketService.
 *
 * The socket service runs on the main loop in the main thread, and is
 * not threadsafe in general. However, the calls to start and stop
 * the service are threadsafe so these can be used from threads that
 * handle incoming clients.
 *
 * @newin{2,24}
 * @ingroup NetworkIO
 */

class SocketService : public Gio::SocketListener
{
    
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef SocketService CppObjectType;
  typedef SocketService_Class CppClassType;
  typedef GSocketService BaseObjectType;
  typedef GSocketServiceClass BaseClassType;

private:  friend class SocketService_Class;
  static CppClassType socketservice_class_;

private:
  // noncopyable
  SocketService(const SocketService&);
  SocketService& operator=(const SocketService&);

protected:
  explicit SocketService(const Glib::ConstructParams& construct_params);
  explicit SocketService(GSocketService* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~SocketService();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GSocketService*       gobj()       { return reinterpret_cast<GSocketService*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GSocketService* gobj() const { return reinterpret_cast<GSocketService*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GSocketService* gobj_copy();

private:


protected:
    SocketService();

public:
    
  static Glib::RefPtr<SocketService> create();

    
  /** Starts the service, i.e.\ start accepting connections
   * from the added sockets when the mainloop runs.
   * 
   * This call is threadsafe, so it may be called from a thread
   * handling an incomming client request.
   * 
   * @newin{2,22}
   */
  void start();
    
  /** Stops the service, i.e.\ stops accepting connections
   * from the added sockets when the mainloop runs.
   * 
   * This call is threadsafe, so it may be called from a thread
   * handling an incomming client request.
   * 
   * @newin{2,22}
   */
  void stop();
    
  /** Check whether the service is active or not. An active
   * service will accept new clients that connect, while
   * a non-active service will let connecting clients queue
   * up until the service is started.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if the service is active, <tt>false</tt> otherwise.
   */
  bool is_active();

 
  /**
   * @par Prototype:
   * <tt>bool on_my_%incoming(const Glib::RefPtr<SocketConnection>& connection, const Glib::RefPtr<Glib::Object>& source_object)</tt>
   */

  Glib::SignalProxy2< bool,const Glib::RefPtr<SocketConnection>&,const Glib::RefPtr<Glib::Object>& > signal_incoming();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual bool on_incoming(const Glib::RefPtr<SocketConnection>& connection, const Glib::RefPtr<Glib::Object>& source_object);


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
   * @relates Gio::SocketService
   */
  Glib::RefPtr<Gio::SocketService> wrap(GSocketService* object, bool take_copy = false);
}


#endif /* _GIOMM_SOCKETSERVICE_H */

