// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_INPUTDIALOG_H
#define _GTKMM_INPUTDIALOG_H

#include <gtkmmconfig.h>


#include <glibmm.h>

/* $Id: inputdialog.hg,v 1.4 2005/11/29 16:38:10 murrayc Exp $ */

/* inputdialog.h
 * 
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

// This is for including the config header before any code (such as
// the #ifndef GTKMM_DISABLE_DEPRECATED in deprecated classes) is generated:


#include <gtkmm/dialog.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkInputDialog GtkInputDialog;
typedef struct _GtkInputDialogClass GtkInputDialogClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class InputDialog_Class; } // namespace Gtk
namespace Gtk
{

class Button;
class Table;

#ifndef GTKMM_DISABLE_DEPRECATED

class OptionMenu;
#endif // GTKMM_DISABLE_DEPRECATED


class ScrolledWindow;

// Don't list this in the documentation's Dialogs group because it isn't really useful
// - see the GTK+ docs.

class InputDialog : public Dialog
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef InputDialog CppObjectType;
  typedef InputDialog_Class CppClassType;
  typedef GtkInputDialog BaseObjectType;
  typedef GtkInputDialogClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~InputDialog();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class InputDialog_Class;
  static CppClassType inputdialog_class_;

  // noncopyable
  InputDialog(const InputDialog&);
  InputDialog& operator=(const InputDialog&);

protected:
  explicit InputDialog(const Glib::ConstructParams& construct_params);
  explicit InputDialog(GtkInputDialog* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkInputDialog*       gobj()       { return reinterpret_cast<GtkInputDialog*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkInputDialog* gobj() const { return reinterpret_cast<GtkInputDialog*>(gobject_); }


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
  virtual void on_enable_device(const Glib::RefPtr<Gdk::Device>& device);
  virtual void on_disable_device(const Glib::RefPtr<Gdk::Device>& device);
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

  
public:

  InputDialog();
  

   Table* get_axis_list();
  const Table* get_axis_list() const;
    ScrolledWindow* get_axis_box();
  const ScrolledWindow* get_axis_box() const;
   #ifndef GTKMM_DISABLE_DEPRECATED
   OptionMenu* get_mode_optionmenu();
  const OptionMenu* get_mode_optionmenu() const;
#endif // GTKMM_DISABLE_DEPRECATED
   
   Button* get_close_button();
  const Button* get_close_button() const;
    Button* get_save_button();
  const Button* get_save_button() const;
 
  //GtkWidget *axis_items[GDK_AXIS_LAST];

   Glib::RefPtr<Gdk::Device> get_current_device();
  Glib::RefPtr<const Gdk::Device> get_current_device() const;
 
   Table* get_keys_list();
  const Table* get_keys_list() const;
    ScrolledWindow* get_keys_box();
  const ScrolledWindow* get_keys_box() const;
 
 
  /**
   * @par Prototype:
   * <tt>void on_my_%enable_device(const Glib::RefPtr<Gdk::Device>& device)</tt>
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Gdk::Device>& > signal_enable_device();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%disable_device(const Glib::RefPtr<Gdk::Device>& device)</tt>
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Gdk::Device>& > signal_disable_device();


};

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::InputDialog
   */
  Gtk::InputDialog* wrap(GtkInputDialog* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_INPUTDIALOG_H */

