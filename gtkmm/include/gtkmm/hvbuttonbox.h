// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_HVBUTTONBOX_H
#define _GTKMM_HVBUTTONBOX_H


#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2011 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/buttonbox.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkVButtonBox GtkVButtonBox;
typedef struct _GtkVButtonBoxClass GtkVButtonBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class VButtonBox_Class; } // namespace Gtk
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkHButtonBox GtkHButtonBox;
typedef struct _GtkHButtonBoxClass GtkHButtonBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class HButtonBox_Class; } // namespace Gtk
namespace Gtk
{

/** A container for arranging buttons vertically.
 *
 * A button box should be used to provide a consistent layout of buttons
 * throughout your application. There is one default layout and a default spacing
 * value that are persistant across all Gtk::VButtonBox widgets.
 *
 * The layout/spacing can then be altered by the programmer, or if desired,
 * by the user to alter the 'feel' of a program to a small degree.
 *
 * @ingroup Widgets
 * @ingroup Containers
 *
 * @deprecated Use ButtonBox instead.
 */

class VButtonBox : public ButtonBox
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef VButtonBox CppObjectType;
  typedef VButtonBox_Class CppClassType;
  typedef GtkVButtonBox BaseObjectType;
  typedef GtkVButtonBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~VButtonBox();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class VButtonBox_Class;
  static CppClassType vbuttonbox_class_;

  // noncopyable
  VButtonBox(const VButtonBox&);
  VButtonBox& operator=(const VButtonBox&);

protected:
  explicit VButtonBox(const Glib::ConstructParams& construct_params);
  explicit VButtonBox(GtkVButtonBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkVButtonBox*       gobj()       { return reinterpret_cast<GtkVButtonBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkVButtonBox* gobj() const { return reinterpret_cast<GtkVButtonBox*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  explicit VButtonBox(ButtonBoxStyle layout = BUTTONBOX_EDGE, int spacing = BUTTONBOX_DEFAULT_SPACING);


};

/** A container for arranging buttons horizontally.
 *
 * A button box should be used to provide a consistent layout of buttons
 * throughout your application. There is one default layout and a default spacing
 * value that are persistant across all Gtk::HButtonBox widgets.
 *
 * The layout/spacing can then be altered by the programmer, or if desired,
 * by the user to alter the 'feel' of a program to a small degree.
 *
 * The HButtonBox widget looks like this:
 * @image html hbuttonbox1.png
 *
 * @ingroup Widgets
 * @ingroup Containers
 *
 * @deprecated Use ButtonBox instead.
 */

class HButtonBox : public ButtonBox
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef HButtonBox CppObjectType;
  typedef HButtonBox_Class CppClassType;
  typedef GtkHButtonBox BaseObjectType;
  typedef GtkHButtonBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~HButtonBox();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class HButtonBox_Class;
  static CppClassType hbuttonbox_class_;

  // noncopyable
  HButtonBox(const HButtonBox&);
  HButtonBox& operator=(const HButtonBox&);

protected:
  explicit HButtonBox(const Glib::ConstructParams& construct_params);
  explicit HButtonBox(GtkHButtonBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkHButtonBox*       gobj()       { return reinterpret_cast<GtkHButtonBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkHButtonBox* gobj() const { return reinterpret_cast<GtkHButtonBox*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  explicit HButtonBox(ButtonBoxStyle layout = BUTTONBOX_EDGE, int spacing = BUTTONBOX_DEFAULT_SPACING);


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
   * @relates Gtk::VButtonBox
   */
  Gtk::VButtonBox* wrap(GtkVButtonBox* object, bool take_copy = false);
} //namespace Glib


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::HButtonBox
   */
  Gtk::HButtonBox* wrap(GtkHButtonBox* object, bool take_copy = false);
} //namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_HVBUTTONBOX_H */

