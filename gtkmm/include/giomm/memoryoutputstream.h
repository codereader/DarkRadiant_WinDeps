// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_MEMORYOUTPUTSTREAM_H
#define _GIOMM_MEMORYOUTPUTSTREAM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2008 The gtkmm Development Team
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

#include <giomm/outputstream.h>
#include <giomm/seekable.h>
#include <glibmm/object.h>
// TODO: remove this if possible -- it's here for the GReallocFunc definition
#include <gio/gio.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GMemoryOutputStream GMemoryOutputStream;
typedef struct _GMemoryOutputStreamClass GMemoryOutputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class MemoryOutputStream_Class; } // namespace Gio
namespace Gio
{

/** Streaming output operations on memory chunks
 *
 * This class uses arbitrary memory chunks as output for GIO streaming output operations. 
 *
 * @ingroup Streams
 *
 * @newin{2,20}
 */

class MemoryOutputStream :
    public OutputStream,
    public Seekable
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef MemoryOutputStream CppObjectType;
  typedef MemoryOutputStream_Class CppClassType;
  typedef GMemoryOutputStream BaseObjectType;
  typedef GMemoryOutputStreamClass BaseClassType;

private:  friend class MemoryOutputStream_Class;
  static CppClassType memoryoutputstream_class_;

private:
  // noncopyable
  MemoryOutputStream(const MemoryOutputStream&);
  MemoryOutputStream& operator=(const MemoryOutputStream&);

protected:
  explicit MemoryOutputStream(const Glib::ConstructParams& construct_params);
  explicit MemoryOutputStream(GMemoryOutputStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~MemoryOutputStream();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GMemoryOutputStream*       gobj()       { return reinterpret_cast<GMemoryOutputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GMemoryOutputStream* gobj() const { return reinterpret_cast<GMemoryOutputStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GMemoryOutputStream* gobj_copy();

private:

  
protected:
  // TODO: more C++-like interface using sigc++
    explicit MemoryOutputStream(void* data, gsize size, GReallocFunc realloc_function, GDestroyNotify destroy_function);


public:
  // TODO: more C++-like interface using sigc++
  
  static Glib::RefPtr<MemoryOutputStream> create(void* data, gsize size, GReallocFunc realloc_function, GDestroyNotify destroy_function);


  /** Gets any loaded data from the @a ostream.
   * 
   * Note that the returned pointer may become invalid on the next
   * write or truncate operation on the stream.
   * @return Pointer to the stream's data.
   */
  void* get_data();
  
  /** Gets any loaded data from the @a ostream.
   * 
   * Note that the returned pointer may become invalid on the next
   * write or truncate operation on the stream.
   * @return Pointer to the stream's data.
   */
  const void* get_data() const;
  
  /** Gets any loaded data from the @a ostream. Ownership of the data
   * is transferred to the caller; when no longer needed it must be
   * freed using the free function set in @a ostream's
   * MemoryOutputStream::property_destroy_function() property.
   * 
   *  @a ostream must be closed before calling this function.
   * 
   * @newin{2,26}
   * @return The stream's data.
   */
  void* steal_data();

  
  /** Gets the size of the currently allocated data area (available from
   * g_memory_output_stream_get_data()). If the stream isn't
   * growable (no realloc was passed to g_memory_output_stream_new()) then
   * this is the maximum size of the stream and further writes
   * will return IO_ERROR_NO_SPACE.
   * 
   * Note that for growable streams the returned size may become invalid on
   * the next write or truncate operation on the stream.
   * 
   * If you want the number of bytes currently written to the stream, use
   * g_memory_output_stream_get_data_size().
   * @return The number of bytes allocated for the data buffer.
   */
  gsize get_size() const;
  
  /** Returns the number of bytes from the start up
   * to including the last byte written in the stream
   * that has not been truncated away.
   * 
   * @newin{2,18}
   * @return The number of bytes written to the stream.
   */
  gsize get_data_size() const;
  
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Pointer to buffer where data will be written.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< void* > property_data() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Size of data written to the buffer.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< gulong > property_data_size() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  //Too C-like:   _WRAP_PROPERTY("destroy-function", void*)
  //Too C-like:   _WRAP_PROPERTY("realloc-function"         gpointer              : Read / Write / Construct Only
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Current size of the data buffer.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< gulong > property_size() const;
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
   * @relates Gio::MemoryOutputStream
   */
  Glib::RefPtr<Gio::MemoryOutputStream> wrap(GMemoryOutputStream* object, bool take_copy = false);
}


#endif /* _GIOMM_MEMORYOUTPUTSTREAM_H */

