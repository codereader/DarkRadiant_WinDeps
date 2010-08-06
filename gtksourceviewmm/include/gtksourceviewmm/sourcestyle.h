// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_SOURCESTYLE_H
#define _GTKSOURCEVIEWMM_SOURCESTYLE_H


#include <glibmm.h>

/* sourcestyle.hg
 * 
 * Copyright (C) 2007 The gtksourceviewmm team.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceStyle GtkSourceStyle;
typedef struct _GtkSourceStyleClass GtkSourceStyleClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace gtksourceview
{ class SourceStyle_Class; } // namespace gtksourceview
namespace gtksourceview
{


class SourceStyle : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef SourceStyle CppObjectType;
  typedef SourceStyle_Class CppClassType;
  typedef GtkSourceStyle BaseObjectType;
  typedef GtkSourceStyleClass BaseClassType;

private:  friend class SourceStyle_Class;
  static CppClassType sourcestyle_class_;

private:
  // noncopyable
  SourceStyle(const SourceStyle&);
  SourceStyle& operator=(const SourceStyle&);

protected:
  explicit SourceStyle(const Glib::ConstructParams& construct_params);
  explicit SourceStyle(GtkSourceStyle* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~SourceStyle();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSourceStyle*       gobj()       { return reinterpret_cast<GtkSourceStyle*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSourceStyle* gobj() const { return reinterpret_cast<GtkSourceStyle*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkSourceStyle* gobj_copy();

private:


public:

  
  /** Creates a copy of @a style, that is a new Gtk::SourceStyle instance which
   * has the same attributes set.
   * @return Copy of @a style, call Glib::object_unref() when you are done with it.
   * 
   * Since: 2.0.
   */
  Glib::RefPtr<SourceStyle> copy() const;;


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

}//end namespace gtksourceview


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates gtksourceview::SourceStyle
   */
  Glib::RefPtr<gtksourceview::SourceStyle> wrap(GtkSourceStyle* object, bool take_copy = false);
}


#endif /* _GTKSOURCEVIEWMM_SOURCESTYLE_H */

