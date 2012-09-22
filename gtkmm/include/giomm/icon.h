// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_ICON_H
#define _GIOMM_ICON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GIconIface GIconIface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GIcon GIcon;
typedef struct _GIconClass GIconClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class Icon_Class; } // namespace Gio
namespace Gio
{

/** This is a very minimal interface for icons. It provides functions for checking the equality of two icons and hashing of icons.
 * Glib::Icon does not provide the actual pixmap for the icon as this is out of GIO's scope. However implementations of Icon may contain the name of an 
 * icon (see ThemedIcon), or the path to an icon (see LoadableIcon).
 *
 * To obtain a hash of an Icon instance, see hash().
 *
 * To check if two Icon instances are equal, see equal().
 *
 * @newin{2,16}
 */

class Icon : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Icon CppObjectType;
  typedef Icon_Class CppClassType;
  typedef GIcon BaseObjectType;
  typedef GIconIface BaseClassType;

private:
  friend class Icon_Class;
  static CppClassType icon_class_;

  // noncopyable
  Icon(const Icon&);
  Icon& operator=(const Icon&);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Icon();
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Icon(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Icon(GIcon* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Icon();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GIcon*       gobj()       { return reinterpret_cast<GIcon*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GIcon* gobj() const { return reinterpret_cast<GIcon*>(gobject_); }

private:


public:
  // We can't just use a _WRAP_CREATE macro here since this is an abstract
  // interface class, so implement it by hand
  static Glib::RefPtr<Icon> create(const std::string& str);
  
  
  /** Gets a hash for an icon.
   * 
   * Virtual: hash
   * @param icon #gconstpointer to an icon object.
   * @return A <tt>unsigned int</tt> containing a hash for the @a icon, suitable for 
   * use in a HashTable or similar data structure.
   */
  guint hash() const;
  
  /** Generates a textual representation of @a icon that can be used for
   * serialization such as when passing @a icon to a different process or
   * saving it to persistent storage. Use g_icon_new_for_string() to
   * get @a icon back from the returned string.
   * 
   * The encoding of the returned string is proprietary to Icon except
   * in the following two cases
   * 
   * - 
   * If @a icon is a FileIcon, the returned string is a native path
   * (such as <tt>/path/to/my icon.png</tt>) without escaping
   * if the File for @a icon is a native file.  If the file is not
   * native, the returned string is the result of g_file_get_uri()
   * (such as <tt>sftp://path/to/my%20icon.png</tt>).
   * - 
   * If @a icon is a ThemedIcon with exactly one name, the encoding is
   * simply the name (such as <tt>network-server</tt>).
   * 
   * Virtual: to_tokens
   * @newin{2,20}
   * @return An allocated NUL-terminated UTF8 string or <tt>0</tt> if @a icon can't
   * be serialized. Use Glib::free() to free.
   */
  std::string to_string() const;

  
  // TODO: should this, and File's equal(), be virtual, in order to
  // be available to derived classes?
  bool equal(const Glib::RefPtr<Icon>& other) const;


  //_WRAP_VFUNC(guint hash() const, "hash")

  // TODO: also kind of related to equal() being virtual or not,
  // do we need to have equal_vfunc()? Or rather, why would we want
  // to have it generally...


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
   * @relates Gio::Icon
   */
  Glib::RefPtr<Gio::Icon> wrap(GIcon* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_ICON_H */

