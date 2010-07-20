// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_ASSISTANT_H
#define _GTKMM_ASSISTANT_H


#include <glibmm.h>

/* $Id: assistant.hg,v 1.4 2006/06/13 17:16:26 murrayc Exp $ */

/* assistant.h
 *
 * Copyright (C) 2004 The gtkmm Development Team
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

#include <gtkmm/window.h>
#include <gdkmm/pixbuf.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkAssistant GtkAssistant;
typedef struct _GtkAssistantClass GtkAssistantClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Assistant_Class; } // namespace Gtk
namespace Gtk
{

/** @addtogroup gtkmmEnums Enums and Flags */

/**
 * @ingroup gtkmmEnums
 */
enum AssistantPageType
{
  ASSISTANT_PAGE_CONTENT,
  ASSISTANT_PAGE_INTRO,
  ASSISTANT_PAGE_CONFIRM,
  ASSISTANT_PAGE_SUMMARY,
  ASSISTANT_PAGE_PROGRESS
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::AssistantPageType> : public Glib::Value_Enum<Gtk::AssistantPageType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** A widget used to guide users through multi-step operations.
 *
 * A Gtk::Assistant is a widget used to represent a generally complex 
 * operation split into several steps, guiding the user through its
 * pages and controlling the page flow to collect the necessary data.
 *
 * @newin2p10
 * @ingroup Dialogs
 */

class Assistant : public Window
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Assistant CppObjectType;
  typedef Assistant_Class CppClassType;
  typedef GtkAssistant BaseObjectType;
  typedef GtkAssistantClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Assistant();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Assistant_Class;
  static CppClassType assistant_class_;

  // noncopyable
  Assistant(const Assistant&);
  Assistant& operator=(const Assistant&);

protected:
  explicit Assistant(const Glib::ConstructParams& construct_params);
  explicit Assistant(GtkAssistant* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkAssistant*       gobj()       { return reinterpret_cast<GtkAssistant*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkAssistant* gobj() const { return reinterpret_cast<GtkAssistant*>(gobject_); }


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
  virtual void on_prepare(Gtk::Widget* page);
  virtual void on_apply();
  virtual void on_close();
  virtual void on_cancel();
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

  
public:
  Assistant();

  
  /** Return value: The index (starting from 0) of the current page in
   * @return The index (starting from 0) of the current page in
   * the @a assistant, if the @a assistant has no pages, -1 will be returned
   * 
   * @newin2p10.
   */
  int get_current_page() const;
  
  /** Switches the page to @a page_num. Note that this will only be necessary
   * in custom buttons, as the @a assistant flow can be set with
   * set_forward_page_func().
   * 
   * @newin2p10
   * @param page_num Index of the page to switch to, starting from 0.
   * If negative, the last page will be used. If greater
   * than the number of pages in the @a assistant, nothing
   * will be done.
   */
  void set_current_page(int page_num);
  
  /** Return value: The number of pages in the @a assistant.
   * @return The number of pages in the @a assistant.
   * 
   * @newin2p10.
   */
  int get_n_pages() const;
  
  /** Return value: The child widget, or <tt>0</tt> if @a page_num is out of bounds.
   * @param page_num The index of a page in the @a assistant, or -1 to get the last page;.
   * @return The child widget, or <tt>0</tt> if @a page_num is out of bounds.
   * 
   * @newin2p10.
   */
  Widget* get_nth_page(int page_num);
  
  /** Return value: The child widget, or <tt>0</tt> if @a page_num is out of bounds.
   * @param page_num The index of a page in the @a assistant, or -1 to get the last page;.
   * @return The child widget, or <tt>0</tt> if @a page_num is out of bounds.
   * 
   * @newin2p10.
   */
  const Widget* get_nth_page(int page_num) const;
  
  /** Prepends a page to the @a assistant.
   * @param page A Gtk::Widget.
   * @return The index (starting at 0) of the inserted page
   * 
   * @newin2p10.
   */
  int prepend_page(Widget& page);
  
  /** Appends a page to the @a assistant.
   * @param page A Gtk::Widget.
   * @return The index (starting at 0) of the inserted page
   * 
   * @newin2p10.
   */
  int append_page(Widget& page);
  
  /** Inserts a page in the @a assistant at a given position.
   * @param page A Gtk::Widget.
   * @param position The index (starting at 0) at which to insert the page,
   * or -1 to append the page to the @a assistant.
   * @return The index (starting from 0) of the inserted page
   * 
   * @newin2p10.
   */
  int insert_page(Widget& page, int position);
  
  typedef sigc::slot<int, int /* current_page */> SlotForwardPage;

  void set_forward_page_func(const SlotForwardPage& slot);
  

  /** Sets the page type for @a page. The page type determines the page
   * behavior in the @a assistant.
   * 
   * @newin2p10
   * @param page A page of @a assistant.
   * @param type The new type for @a page.
   */
  void set_page_type(const Widget& page, AssistantPageType type);
  
  /** Gets the page type of @a page.
   * @param page A page of @a assistant.
   * @return The page type of @a page.
   * 
   * @newin2p10.
   */
  AssistantPageType  get_page_type(const Widget& page) const;
  
  /** Sets a title for @a page. The title is displayed in the header
   * area of the assistant when @a page is the current page.
   * 
   * @newin2p10
   * @param page A page of @a assistant.
   * @param title The new title for @a page.
   */
  void set_page_title(const Widget& page, const Glib::ustring& title);
  
  /** Gets the title for @a page.
   * @param page A page of @a assistant.
   * @return The title for @a page.
   * 
   * @newin2p10.
   */
  Glib::ustring get_page_title(const Widget& page) const;
  
  /** Sets a header image for @a page. This image is displayed in the header
   * area of the assistant when @a page is the current page.
   * 
   * @newin2p10
   * @param page A page of @a assistant.
   * @param pixbuf The new header image @a page.
   */
  void set_page_header_image(const Widget& page, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);
  
  /** Gets the header image for @a page.
   * @param page A page of @a assistant.
   * @return The header image for @a page, or <tt>0</tt>
   * if there's no header image for the page.
   * 
   * @newin2p10.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_page_header_image(const Widget& page);
  
  /** Gets the header image for @a page.
   * @param page A page of @a assistant.
   * @return The header image for @a page, or <tt>0</tt>
   * if there's no header image for the page.
   * 
   * @newin2p10.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_page_header_image(const Widget& page) const;
  
  /** Sets a header image for @a page. This image is displayed in the side
   * area of the assistant when @a page is the current page.
   * 
   * @newin2p10
   * @param page A page of @a assistant.
   * @param pixbuf The new header image @a page.
   */
  void set_page_side_image(const Widget& page, const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);
  
  /** Gets the header image for @a page.
   * @param page A page of @a assistant.
   * @return The side image for @a page, or <tt>0</tt>
   * if there's no side image for the page.
   * 
   * @newin2p10.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_page_side_image(const Widget& page);
  
  /** Gets the header image for @a page.
   * @param page A page of @a assistant.
   * @return The side image for @a page, or <tt>0</tt>
   * if there's no side image for the page.
   * 
   * @newin2p10.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_page_side_image(const Widget& page) const;
  
  /** Sets whether @a page contents are complete. This will make
   *  @a assistant update the buttons state to be able to continue the task.
   * 
   * @newin2p10
   * @param page A page of @a assistant.
   * @param complete The completeness status of the page.
   */
  void set_page_complete(const Widget& page, bool complete = true);
  
  /** Gets whether @a page is complete..
   * @param page A page of @a assistant.
   * @return <tt>true</tt> if @a page is complete.
   * 
   * @newin2p10.
   */
  bool get_page_complete(const Widget& page) const;
  
  /** Adds a widget to the action area of a Gtk::Assistant.
   * 
   * @newin2p10
   * @param child A Gtk::Widget.
   */
  void add_action_widget(Widget& child);
  
  /** Removes a widget from the action area of a Gtk::Assistant.
   * 
   * @newin2p10
   * @param child A Gtk::Widget.
   */
  void remove_action_widget(Widget& child);
  
  /** Forces @a assistant to recompute the buttons state.
   * 
   * GTK+ automatically takes care of this in most situations, 
   * e.g. when the user goes to a different page, or when the
   * visibility or completeness of a page changes.
   * 
   * One situation where it can be necessary to call this
   * function is when changing a value on the current page
   * affects the future page flow of the assistant.
   * 
   * @newin2p10
   */
  void update_buttons_state();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%prepare(Gtk::Widget* page)</tt>
   */

  Glib::SignalProxy1< void,Gtk::Widget* > signal_prepare();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%apply()</tt>
   */

  Glib::SignalProxy0< void > signal_apply();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%close()</tt>
   */

  Glib::SignalProxy0< void > signal_close();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%cancel()</tt>
   */

  Glib::SignalProxy0< void > signal_cancel();


  //TODO: Child properties?


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
   * @relates Gtk::Assistant
   */
  Gtk::Assistant* wrap(GtkAssistant* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_ASSISTANT_H */

