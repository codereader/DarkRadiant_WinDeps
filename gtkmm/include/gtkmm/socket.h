// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_SOCKET_H
#define _GTKMM_SOCKET_H


#include <glibmm.h>

/* $Id: socket.hg,v 1.2 2004/02/10 17:35:13 mxpxpod Exp $ */

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/container.h>
#include <gdkmm/types.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSocket GtkSocket;
typedef struct _GtkSocketClass GtkSocketClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Socket_Class; } // namespace Gtk
namespace Gtk
{

/** Container for widgets from other processes.
 * Together with Gtk::Plug, Gtk::Socket provides the ability to embed
 * widgets from one process into another process in a fashion that is
 * transparent to the user. One process creates a Gtk::Socket widget and,
 * passes the that widget's window ID to the other process, which then
 * creates a Gtk::Plug with that window ID. Any widgets contained in the
 * Gtk::Plug then will appear inside the first applications window.
 *
 * The socket's window ID is obtained by using get_id(). Before using this
 * function, the socket must have been realized, and for hence, have been
 * added to its parent.
 *
 * @code
 * Gtk::Socket socket;
 * parent.add(socket);
 *
 * // The following call is only necessary if one of the ancestors of the
 * // socket is not yet visible
 * socket.realize();
 *
 * cout << "The ID of the sockets window is: " << socket.get_id() << endl;
 *
 * @endcode
 *
 * Note that if you pass the window ID of the socket to another process that
 * will create a plug in the socket, you must make sure that the socket
 * widget is not destroyed until that plug is created. Violating this rule
 * will cause unpredictable consequences, the most likely consequence being
 * that the plug will appear as a separate toplevel window. You can check if
 * the plug has been created by examining the plug_window member of the
 * GtkSocket structure returned by gobj(). If this field is non-NULL, then
 * the plug has been successfully created inside of the socket.
 *
 * When gtkmm is notified that the embedded window has been destroyed, then
 * it will destroy the socket as well. You should always, therefore, be
 * prepared for your sockets to be destroyed at any time when the main event
 * loop is running.
 *
 * The communication between a Gtk::Socket and a Gtk::Plug follows the
 * XEmbed protocol. This protocol has also been implemented in other
 * toolkits, e.g. Qt, allowing the same level of integration when embedding
 * a Qt widget in gtkmm or vice versa.
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class Socket : public Container
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Socket CppObjectType;
  typedef Socket_Class CppClassType;
  typedef GtkSocket BaseObjectType;
  typedef GtkSocketClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Socket();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Socket_Class;
  static CppClassType socket_class_;

  // noncopyable
  Socket(const Socket&);
  Socket& operator=(const Socket&);

protected:
  explicit Socket(const Glib::ConstructParams& construct_params);
  explicit Socket(GtkSocket* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkSocket*       gobj()       { return reinterpret_cast<GtkSocket*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkSocket* gobj() const { return reinterpret_cast<GtkSocket*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  virtual void on_plug_added();
  virtual bool on_plug_removed();
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

  
  //This is not available in on Win32.
//This source file will not be compiled,
//and the class will not be registered in wrap_init.h or wrap_init.cc

public:
  Socket();
  

  /** Adds an XEMBED client, such as a Gtk::Plug, to the Gtk::Socket.  The
   * client may be in the same process or in a different process. 
   * 
   * To embed a Gtk::Plug in a Gtk::Socket, you can either create the
   * Gtk::Plug with <literal>gtk_plug_new (0)</literal>, call 
   * Gtk::Plug::get_id() to get the window ID of the plug, and then pass that to the
   * add_id(), or you can call get_id() to get the
   * window ID for the socket, and call Gtk::Plug::new() passing in that
   * ID.
   * 
   * The Gtk::Socket must have already be added into a toplevel window
   * before you can make this call.
   * @param window_id The window ID of a client participating in the XEMBED protocol.
   */
  void add_id(Gdk::NativeWindow window_id);
  
  /** Gets the window ID of a Gtk::Socket widget, which can then
   * be used to create a client embedded inside the socket, for
   * instance with Gtk::Plug::new(). 
   * 
   * The Gtk::Socket must have already be added into a toplevel window 
   * before you can make this call.
   * @return The window ID for the socket.
   */
  Gdk::NativeWindow get_id() const;

  
  /** Retrieves the window of the plug. Use this to check if the plug has
   * been created inside of the socket.
   * @return The window of the plug if available, or <tt>0</tt>
   * 
   * Since:  2.14.
   */
  Glib::RefPtr<Gdk::Window> get_plug_window();
  
  /** Retrieves the window of the plug. Use this to check if the plug has
   * been created inside of the socket.
   * @return The window of the plug if available, or <tt>0</tt>
   * 
   * Since:  2.14.
   */
  Glib::RefPtr<const Gdk::Window> get_plug_window() const;

  
  /**
   * @par Prototype:
   * <tt>void on_my_%plug_added()</tt>
   */

  Glib::SignalProxy0< void > signal_plug_added();

  
  /**
   * @par Prototype:
   * <tt>bool on_my_%plug_removed()</tt>
   */

  Glib::SignalProxy0< bool > signal_plug_removed();


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Socket
   */
  Gtk::Socket* wrap(GtkSocket* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SOCKET_H */

