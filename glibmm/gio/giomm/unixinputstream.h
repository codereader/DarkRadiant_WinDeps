// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_UNIXINPUTSTREAM_H
#define _GIOMM_UNIXINPUTSTREAM_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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

#include <giomm/inputstream.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GUnixInputStream GUnixInputStream;
typedef struct _GUnixInputStreamClass GUnixInputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class UnixInputStream_Class; } // namespace Gio
namespace Gio
{

/**
 * UnixInputStream implements InputStream for reading from a unix file
 * descriptor, including asynchronous operations. The file descriptor must be
 * selectable, so it doesn't work with opened files.
 *
 * @ingroup Streams
 *
 * @newin{2,16}
 */

class UnixInputStream : public Gio::InputStream
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef UnixInputStream CppObjectType;
  typedef UnixInputStream_Class CppClassType;
  typedef GUnixInputStream BaseObjectType;
  typedef GUnixInputStreamClass BaseClassType;

private:  friend class UnixInputStream_Class;
  static CppClassType unixinputstream_class_;

private:
  // noncopyable
  UnixInputStream(const UnixInputStream&);
  UnixInputStream& operator=(const UnixInputStream&);

protected:
  explicit UnixInputStream(const Glib::ConstructParams& construct_params);
  explicit UnixInputStream(GUnixInputStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~UnixInputStream();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GUnixInputStream*       gobj()       { return reinterpret_cast<GUnixInputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GUnixInputStream* gobj() const { return reinterpret_cast<GUnixInputStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GUnixInputStream* gobj_copy();

private:

  //This is not available in on Win32.
//This source file will not be compiled,
//and the class will not be registered in wrap_init.h or wrap_init.cc


protected:
  explicit UnixInputStream(int fd, bool close_fd_at_close);

public:
  
  static Glib::RefPtr<UnixInputStream> create(int fd, bool close_fd_at_close);


  void set_close_fd(bool close_fd = true);
  
  bool get_close_fd() const;
  
  int get_fd() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The file descriptor to read from.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_fd() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to close the file descriptor when the stream is closed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_close_fd() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to close the file descriptor when the stream is closed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_close_fd() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

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
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


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
   * @relates Gio::UnixInputStream
   */
  Glib::RefPtr<Gio::UnixInputStream> wrap(GUnixInputStream* object, bool take_copy = false);
}


#endif /* _GIOMM_UNIXINPUTSTREAM_H */

