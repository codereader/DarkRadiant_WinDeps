// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _ATKMM_HYPERTEXT_H
#define _ATKMM_HYPERTEXT_H


#include <glibmm.h>

/* $Id: hypertext.hg,v 1.3 2006/04/12 11:11:24 murrayc Exp $ */

/* Copyright (C) 2003 The gtkmm Development Team
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


#include <atkmm/hyperlink.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
  typedef struct _AtkHypertextIface AtkHypertextIface;
  typedef struct _AtkHypertext      AtkHypertext;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

/** The ATK interface which provides standard mechanism for manipulating hyperlinks.
 */
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _AtkHypertext AtkHypertext;
typedef struct _AtkHypertextClass AtkHypertextClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{ class Hypertext_Class; } // namespace Atk
namespace Atk
{

class Object;


class Hypertext : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Hypertext CppObjectType;
  typedef Hypertext_Class CppClassType;
  typedef AtkHypertext BaseObjectType;
  typedef AtkHypertextIface BaseClassType;

private:
  friend class Hypertext_Class;
  static CppClassType hypertext_class_;

  // noncopyable
  Hypertext(const Hypertext&);
  Hypertext& operator=(const Hypertext&);

protected:
  Hypertext(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Hypertext(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Hypertext(AtkHypertext* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Hypertext();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkHypertext*       gobj()       { return reinterpret_cast<AtkHypertext*>(gobject_); }

  ///Provides access to the underlying C GObject.  
  const AtkHypertext* gobj() const { return reinterpret_cast<AtkHypertext*>(gobject_); }

private:

public:

  
  /** Gets the link in this hypertext document at index 
   *  @a link_index
   * @param link_index An integer specifying the desired link.
   * @return The link in this hypertext document at
   * index @a link_index.
   */
  Glib::RefPtr<Hyperlink> get_link(int link_index);
  
  /** Gets the link in this hypertext document at index 
   *  @a link_index
   * @param link_index An integer specifying the desired link.
   * @return The link in this hypertext document at
   * index @a link_index.
   */
  Glib::RefPtr<const Hyperlink> get_link(int link_index) const;
  
  /** Gets the number of links within this hypertext document.
   * @return The number of links within this hypertext document.
   */
  int get_n_links() const;
  
  /** Gets the index into the array of hyperlinks that is associated with
   * the character specified by @a char_index, or -1 if there is no hyperlink
   * associated with this character.
   * @param char_index A character index.
   * @return An index into the array of hyperlinks in @a hypertext.
   */
  int get_link_index(int char_index) const;

  
  /**
   * @par Prototype:
   * <tt>void on_my_%link_selected(int link_index)</tt>
   */

  Glib::SignalProxy1< void,int > signal_link_selected();


  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual Glib::RefPtr<Hyperlink> get_link_vfunc(int link_index);
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual int get_n_links_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual int get_link_index_vfunc(int char_index) const;
#endif //GLIBMM_VFUNCS_ENABLED


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
  virtual void on_link_selected(int link_index);
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} // namespace Atk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Atk::Hypertext
   */
  Glib::RefPtr<Atk::Hypertext> wrap(AtkHypertext* object, bool take_copy = false);

} // namespace Glib


#endif /* _ATKMM_HYPERTEXT_H */

