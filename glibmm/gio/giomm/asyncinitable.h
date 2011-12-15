// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_ASYNCINITABLE_H
#define _GIOMM_ASYNCINITABLE_H


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

#include <glibmm/interface.h>
#include <giomm/asyncresult.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GAsyncInitableIface GAsyncInitableIface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GAsyncInitable GAsyncInitable;
typedef struct _GAsyncInitableClass GAsyncInitableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class AsyncInitable_Class; } // namespace Gio
namespace Gio
{

class Cancellable;

/** AsyncInitable - Asynchronously failable object initialization interface.
 * This is the asynchronous version of Initable; it behaves the same in all
 * ways except that initialization is asynchronous. For more details see the
 * descriptions on Initable.
 *
 * A class may implement both the Initable and AsyncInitable interfaces.
 *
 * Users of objects implementing this are not intended to use the interface
 * method directly; instead it will be used automatically in various ways. For
 * C applications you generally just call g_async_initable_new_async()
 * directly, or indirectly via a foo_thing_new_async() wrapper. This will call
 * g_async_initable_init_async() under the cover, calling back with NULL and a
 * set GError on failure. 
 */

class AsyncInitable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef AsyncInitable CppObjectType;
  typedef AsyncInitable_Class CppClassType;
  typedef GAsyncInitable BaseObjectType;
  typedef GAsyncInitableIface BaseClassType;

private:
  friend class AsyncInitable_Class;
  static CppClassType asyncinitable_class_;

  // noncopyable
  AsyncInitable(const AsyncInitable&);
  AsyncInitable& operator=(const AsyncInitable&);

protected:
  AsyncInitable(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit AsyncInitable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit AsyncInitable(GAsyncInitable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~AsyncInitable();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GAsyncInitable*       gobj()       { return reinterpret_cast<GAsyncInitable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GAsyncInitable* gobj() const { return reinterpret_cast<GAsyncInitable*>(gobject_); }

private:


protected:
  /** Starts asynchronous initialization of the object implementing the
   * interface. This must be done before any real use of the object after
   * initial construction. If the object also implements Initable you can
   * optionally call Gio::Initable::init() instead.
   *
   * When the initialization is finished, @a slot will be called. You can
   * then call init_finish() to get the result of the initialization.
   *
   * Implementations may also support cancellation. Initialization can be
   * cancelled by triggering the @a cancellable object from another thread. If
   * the operation was cancelled, the error Gio::IO_ERROR_CANCELLED will be
   * returned. If the object doesn't support cancellable initialization, the
   * error Gio::IO_ERROR_NOT_SUPPORTED will be returned.
   *
   * If this function is not called, or returns with an error, then all
   * operations on the object should fail, generally returning the error
   * Gio::IO_ERROR_NOT_INITIALIZED.
   *
   * Implementations of this method must be idempotent: i.e. multiple calls to
   * this function with the same argument should return the same results. Only
   * the first call initializes the object; further calls return the result of
   * the first call. This is so that it's safe to implement the singleton
   * pattern in the GObject constructor function.
   *
   * For classes that also support the Initable interface, the default
   * implementation of this method will run the Gio::Initable::init() method
   * in a thread, so if you want to support asynchronous initialization via
   * threads, just implement the AsyncInitable interface without overriding
   * any interface methods.
   *
   * @param io_priority The I/O priority of the operation.
   * @param cancellable Cancellable object to make cancellation possible.
   * @param slot a SlotAsyncReady to call when the request is satisfied.
   *
   * @newin{2,28}
   */
  void init_async(const SlotAsyncReady& slot,
    const Glib::RefPtr<Cancellable>& cancellable,
    int io_priority = Glib::PRIORITY_DEFAULT);
  

  /// Non-cancellable version of init_async().
  void init_async(const SlotAsyncReady& slot,
    int io_priority = Glib::PRIORITY_DEFAULT);

  
  /** Finishes asynchronous initialization and returns the result.
   * See g_async_initable_init_async().
   * 
   * @newin{2,22}
   * @param res A AsyncResult.
   * @return <tt>true</tt> if successful. If an error has occurred, this function
   * will return <tt>false</tt> and set @a error appropriately if present.
   */
  bool init_finish(const Glib::RefPtr<AsyncResult>& result);

  
  /** Finishes the async construction for the various g_async_initable_new calls,
   * returning the created object or <tt>0</tt> on error.
   * 
   * @newin{2,22}
   * @param res The AsyncResult.from the callback.
   * @return A newly created Object, or <tt>0</tt> on error. Free with
   * Glib::object_unref().
   */
  Glib::RefPtr<Glib::Object> create_finish(const Glib::RefPtr<AsyncResult>& res);

  virtual void init_async_vfunc(const SlotAsyncReady& slot,
    const Glib::RefPtr<Cancellable>& cancellable,
    int io_priority = Glib::PRIORITY_DEFAULT);

  /** @throw Glib::Errror.
   */
    virtual bool init_finish_vfunc(const Glib::RefPtr<AsyncResult>& res);
  
protected:

  
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
   * @relates Gio::AsyncInitable
   */
  Glib::RefPtr<Gio::AsyncInitable> wrap(GAsyncInitable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_ASYNCINITABLE_H */

