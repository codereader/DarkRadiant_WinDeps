// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_MENU_H
#define _GTKMM_MENU_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: menu.hg,v 1.11 2006/04/12 11:11:25 murrayc Exp $ */

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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */


//#include <gtk/gtkmenu.h>
#include <gtkmm/menushell.h>
#include <gtkmm/menuitem.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMenu GtkMenu;
typedef struct _GtkMenuClass GtkMenuClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Menu_Class; } // namespace Gtk
namespace Gtk
{

class AccelGroup;

/** @defgroup Menus Menu classes
 */

/** A drop-down menu consisting of Gtk::MenuItem objects which can be navigated and activated by the user to perform application functions.
 * Menus are normally placed inside a Gtk::MenuBar or another MenuItem as a sub menu.
 * A Menu can also be popped up, for instance as a right-click context menu, by calling the popup() method.
 * .
 * @ingroup Widgets
 * @ingroup Menus
 */

class Menu : public MenuShell
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Menu CppObjectType;
  typedef Menu_Class CppClassType;
  typedef GtkMenu BaseObjectType;
  typedef GtkMenuClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Menu();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Menu_Class;
  static CppClassType menu_class_;

  // noncopyable
  Menu(const Menu&);
  Menu& operator=(const Menu&);

protected:
  explicit Menu(const Glib::ConstructParams& construct_params);
  explicit Menu(GtkMenu* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMenu*       gobj()       { return reinterpret_cast<GtkMenu*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMenu* gobj() const { return reinterpret_cast<GtkMenu*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
   //deprecated.
public:
  Menu();

/* append, prepend, and insert are defined in MenuShell */

  /** For instance,
   * void on_popup_menu_position(int& x, int& y, bool& push_in);
   */
  typedef sigc::slot<void, int&, int&, bool&> SlotPositionCalc;
  
  void popup(MenuShell& parent_menu_shell, MenuItem& parent_menu_item, const SlotPositionCalc& slot, guint button, guint32 activate_time, const Glib::RefPtr<Gdk::Device>& device = Glib::RefPtr<Gdk::Device>());
  

  /** Displays a menu and makes it available for selection.  Applications can use
   * this function to display context-sensitive menus.
   *
   * The @a button  parameter should be the mouse button pressed to initiate
   * the menu popup. If the menu popup was initiated by something other than
   * a mouse button press, such as a mouse button release or a keypress,
   *  @a button  should be 0.
   *
   * The @a activate_time  parameter should be the time stamp of the event that
   * initiated the popup. If such an event is not available, use
   * gtk_get_current_event_time() instead.
   * @param func A position_calc_slot supplied function used to position the menu, or <tt>0</tt>.
   * @param button The mouse button which was pressed to initiate the event.
   * @param activate_time The time at which the activation event occurred.
   */
  void popup(const SlotPositionCalc& position_calc_slot, guint button, guint32 activate_time, const Glib::RefPtr<Gdk::Device>& device = Glib::RefPtr<Gdk::Device>());

  /** Displays a menu and makes it available for selection.
   * Applications can use this function to display context-sensitive menus, at the current pointer position.
   * @param button The button which was pressed to initiate the event.
   * @param activate_time The time at which the activation event occurred.
   */
  void popup(guint button, guint32 activate_time, const Glib::RefPtr<Gdk::Device>& device = Glib::RefPtr<Gdk::Device>());

  
  /** Repositions the menu according to its position function.
   */
  void reposition();

  
  /** Removes the menu from the screen.
   */
  void popdown();

  
  /** Returns the selected menu item from the menu.  This is used by the
   * Gtk::OptionMenu.
   * @return The Gtk::MenuItem that was last selected
   * in the menu.  If a selection has not yet been made, the
   * first menu item is selected.
   */
  MenuItem* get_active();
  
  /** Returns the selected menu item from the menu.  This is used by the
   * Gtk::OptionMenu.
   * @return The Gtk::MenuItem that was last selected
   * in the menu.  If a selection has not yet been made, the
   * first menu item is selected.
   */
  const MenuItem* get_active() const;
  
  /** Selects the specified menu item within the menu.  This is used by
   * the Gtk::OptionMenu and should not be used by anyone else.
   * @param index The index of the menu item to select.  Iindex values are
   * from 0 to n-1.
   */
  void set_active(guint index);

  
  /** Set the Gtk::AccelGroup which holds global accelerators for the
   * menu.  This accelerator group needs to also be added to all windows
   * that this menu is being used in with Gtk::Window::add_accel_group(),
   * in order for those windows to support all the accelerators
   * contained in this group.
   * @param accel_group The Gtk::AccelGroup to be associated
   * with the menu.
   */
  void set_accel_group(const Glib::RefPtr<AccelGroup>& accel_group);
  void unset_accel_group();
  
  /** Gets the Gtk::AccelGroup which holds global accelerators for the
   * menu. See set_accel_group().
   * @return The Gtk::AccelGroup associated with the menu.
   */
  Glib::RefPtr<AccelGroup> get_accel_group();
  
  /** Gets the Gtk::AccelGroup which holds global accelerators for the
   * menu. See set_accel_group().
   * @return The Gtk::AccelGroup associated with the menu.
   */
  Glib::RefPtr<const AccelGroup> get_accel_group() const;
  
  
  /** Sets an accelerator path for this menu from which accelerator paths
   * for its immediate children, its menu items, can be constructed.
   * The main purpose of this function is to spare the programmer the
   * inconvenience of having to call Gtk::MenuItem::set_accel_path() on
   * each menu item that should support runtime user changable accelerators.
   * Instead, by just calling set_accel_path() on their parent,
   * each menu item of this menu, that contains a label describing its
   * purpose, automatically gets an accel path assigned.
   * 
   * For example, a menu containing menu items "New" and "Exit", will, after
   * <tt>gtk_menu_set_accel_path (menu, "<Gnumeric-Sheet>/File");</tt>
   * has been called, assign its items the accel paths:
   * <tt>"<Gnumeric-Sheet>/File/New"</tt> and <tt>"<Gnumeric-Sheet>/File/Exit"</tt>.
   * 
   * Assigning accel paths to menu items then enables the user to change
   * their accelerators at runtime. More details about accelerator paths
   * and their default setups can be found at Gtk::AccelMap::add_entry().
   * 
   * Note that @a accel_path string will be stored in a Quark. Therefore,
   * if you pass a static string, you can save some memory by interning
   * it first with Glib::intern_static_string().
   * @param accel_path A valid accelerator path.
   */
  void set_accel_path(const Glib::ustring& accel_path);
  
  /** Retrieves the accelerator path set on the menu.
   * 
   * @newin{2,14}
   * @return The accelerator path set on the menu.
   */
  Glib::ustring get_accel_path() const;

  
  /** Detaches the menu from the widget to which it had been attached.
   * This function will call the callback function, @a detacher, provided
   * when the attach_to_widget() function was called.
   */
  void detach();
  
  /** Returns the Gtk::Widget that the menu is attached to.
   * @return The Gtk::Widget that the menu is attached to.
   */
  Widget* get_attach_widget();
  
  /** Returns the Gtk::Widget that the menu is attached to.
   * @return The Gtk::Widget that the menu is attached to.
   */
  const Widget* get_attach_widget() const;

  
  /** Changes the tearoff state of the menu.  A menu is normally
   * displayed as drop down menu which persists as long as the menu is
   * active.  It can also be displayed as a tearoff menu which persists
   * until it is closed or reattached.
   * @param torn_off If <tt>true</tt>, menu is displayed as a tearoff menu.
   */
  void set_tearoff_state(bool torn_off =  true);
  
  /** Returns whether the menu is torn off.
   * See set_tearoff_state().
   * @return <tt>true</tt> if the menu is currently torn off.
   */
  bool get_tearoff_state() const;

  
  /** Sets the title string for the menu.
   * 
   * The title is displayed when the menu is shown as a tearoff
   * menu. If @a title is <tt>0</tt>, the menu will see if it is attached
   * to a parent menu item, and if so it will try to use the same
   * text as that menu item's label.
   * @param title A string containing the title for the menu.
   */
  void set_title(const Glib::ustring& title);
  void unset_title();
  
  /** Returns the title of the menu. See set_title().
   * @return The title of the menu, or <tt>0</tt> if the menu
   * has no title set on it. This string is owned by GTK+
   * and should not be modified or freed.
   */
  Glib::ustring get_title() const;
  
  /** Sets the Gdk::Screen on which the menu will be displayed.
   * 
   * @newin{2,2}
   * @param screen A Gdk::Screen, or <tt>0</tt> if the screen should be
   * determined by the widget the menu is attached to.
   */
  void set_screen(const Glib::RefPtr<Gdk::Screen>& screen);

  
  /** Adds a new Gtk::MenuItem to a (table) menu. The number of 'cells' that
   * an item will occupy is specified by @a left_attach, @a right_attach,
   *  @a top_attach and @a bottom_attach. These each represent the leftmost,
   * rightmost, uppermost and lower column and row numbers of the table.
   * (Columns and rows are indexed from zero).
   * 
   * Note that this function is not related to detach().
   * 
   * @newin{2,4}
   * @param child A Gtk::MenuItem.
   * @param left_attach The column number to attach the left side of the item to.
   * @param right_attach The column number to attach the right side of the item to.
   * @param top_attach The row number to attach the top of the item to.
   * @param bottom_attach The row number to attach the bottom of the item to.
   */
  void attach(Gtk::Widget& child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach);

  
  /** Informs GTK+ on which monitor a menu should be popped up.
   * See gdk_screen_get_monitor_geometry().
   * 
   * This function should be called from a Gtk::MenuPositionFunc
   * if the menu should not appear on the same monitor as the pointer.
   * This information can't be reliably inferred from the coordinates
   * returned by a Gtk::MenuPositionFunc, since, for very long menus,
   * these coordinates may extend beyond the monitor boundaries or even
   * the screen boundaries.
   * 
   * @newin{2,4}
   * @param monitor_num The number of the monitor on which the menu should
   * be popped up.
   */
  void set_monitor(int monitor_num);
  
  /** Retrieves the number of the monitor on which to show the menu.
   * 
   * @newin{2,14}
   * @return The number of the monitor on which the menu should
   * be popped up or -1, if no monitor has been set.
   */
  int get_monitor() const;
  
  void reorder_child(const MenuItem& child, int position);
  

  /** Sets whether the menu should reserve space for drawing toggles
   * or icons, regardless of their actual presence.
   * 
   * @newin{2,18}
   * @param reserve_toggle_size Whether to reserve size for toggles.
   */
  void set_reserve_toggle_size(bool reserve_toggle_size =  true);
  
  /** Returns whether the menu reserves space for toggles and
   * icons, regardless of their actual presence.
   * 
   * @newin{2,18}
   * @return Whether the menu reserves toggle space.
   */
  bool get_reserve_toggle_size() const;

  
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The currently selected menu item.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< int > property_active() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The currently selected menu item.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_active() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The accel group holding accelerators for the menu.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<AccelGroup> > property_accel_group() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The accel group holding accelerators for the menu.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<AccelGroup> > property_accel_group() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** An accel path used to conveniently construct accel paths of child items.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_accel_path() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** An accel path used to conveniently construct accel paths of child items.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_accel_path() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The widget the menu is attached to.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_attach_widget() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The widget the menu is attached to.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_attach_widget() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** A title that may be displayed by the window manager when this menu is torn-off.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_tearoff_title() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** A title that may be displayed by the window manager when this menu is torn-off.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_tearoff_title() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** A boolean that indicates whether the menu is torn-off.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_tearoff_state() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** A boolean that indicates whether the menu is torn-off.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_tearoff_state() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The monitor the menu will be popped up on.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< int > property_monitor() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The monitor the menu will be popped up on.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_monitor() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** A boolean that indicates whether the menu reserves space for toggles and icons.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_reserve_toggle_size() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** A boolean that indicates whether the menu reserves space for toggles and icons.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_reserve_toggle_size() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


protected:

  //We can not wrap this as a slot because there is no data parameter, and no destroy callback to destroy that data.
  typedef void (*GtkMenuDetachFunc)   (GtkWidget *attach_widget, GtkMenu   *menu);
  
  /** Attaches the menu to the widget and provides a callback function
   * that will be invoked when the menu calls detach() during
   * its destruction.
   * @param attach_widget The Gtk::Widget that the menu will be attached to.
   * @param detacher The user supplied callback function
   * that will be called when the menu calls detach().
   */
  void attach_to_widget(Widget& attach_widget, GtkMenuDetachFunc detacher);

  //TODO: What does "attach" actually mean here? murrayc
  /** Attaches the menu to the widget.
   * 
   * param @attach_widget: the Widget that the menu will be attached to.
   *
   * @newin{2,10}
   */
  void attach_to_widget(Widget& attach_widget);


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
   * @relates Gtk::Menu
   */
  Gtk::Menu* wrap(GtkMenu* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MENU_H */

