// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_MEMORYINPUTSTREAM_H
#define _GIOMM_MEMORYINPUTSTREAM_H


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
#include <giomm/seekable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GMemoryInputStream GMemoryInputStream;
typedef struct _GMemoryInputStreamClass GMemoryInputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class MemoryInputStream_Class; } // namespace Gio
namespace Gio
{

/** MemoryInputStream implements InputStream for arbitrary memory chunks.
 *
 * @ingroup Streams
 *
 * @newin{2,16}
 */

class MemoryInputStream 
: public Gio::InputStream, 
  public Seekable
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef MemoryInputStream CppObjectType;
  typedef MemoryInputStream_Class CppClassType;
  typedef GMemoryInputStream BaseObjectType;
  typedef GMemoryInputStreamClass BaseClassType;

private:  friend class MemoryInputStream_Class;
  static CppClassType memoryinputstream_class_;

private:
  // noncopyable
  MemoryInputStream(const MemoryInputStream&);
  MemoryInputStream& operator=(const MemoryInputStream&);

protected:
  explicit MemoryInputStream(const Glib::ConstructParams& construct_params);
  explicit MemoryInputStream(GMemoryInputStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~MemoryInputStream();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GMemoryInputStream*       gobj()       { return reinterpret_cast<GMemoryInputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GMemoryInputStream* gobj() const { return reinterpret_cast<GMemoryInputStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GMemoryInputStream* gobj_copy();

private:

  
protected:
  MemoryInputStream();
  // TODO: *_new_from_data constructor needs to be fixed?

public:
  
  static Glib::RefPtr<MemoryInputStream> create();


  /** Appends to data that can be read from the input stream.
   *
   * @param data Input data.
   */
  void add_data(const std::string& data);

  /** Appends to data that can be read from the input stream.
   *
   * @param data Input data.
   * @param len Length of the data, may be -1 if data is a null-terminated string.
   */
  void add_data(const void* data, gssize len);


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
   * @relates Gio::MemoryInputStream
   */
  Glib::RefPtr<Gio::MemoryInputStream> wrap(GMemoryInputStream* object, bool take_copy = false);
}


#endif /* _GIOMM_MEMORYINPUTSTREAM_H */

