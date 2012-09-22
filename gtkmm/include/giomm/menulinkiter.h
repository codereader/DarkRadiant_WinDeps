// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_MENULINKITER_H
#define _GIOMM_MENULINKITER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
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

#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GMenuLinkIter GMenuLinkIter;
typedef struct _GMenuLinkIterClass GMenuLinkIterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class MenuLinkIter_Class; } // namespace Gio
namespace Gio
{

class MenuModel;

/** MenuLinkIter - A menu link iterator.
 * @newin{2,32}
 */

class MenuLinkIter : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef MenuLinkIter CppObjectType;
  typedef MenuLinkIter_Class CppClassType;
  typedef GMenuLinkIter BaseObjectType;
  typedef GMenuLinkIterClass BaseClassType;

private:  friend class MenuLinkIter_Class;
  static CppClassType menulinkiter_class_;

private:
  // noncopyable
  MenuLinkIter(const MenuLinkIter&);
  MenuLinkIter& operator=(const MenuLinkIter&);

protected:
  explicit MenuLinkIter(const Glib::ConstructParams& construct_params);
  explicit MenuLinkIter(GMenuLinkIter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~MenuLinkIter();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GMenuLinkIter*       gobj()       { return reinterpret_cast<GMenuLinkIter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GMenuLinkIter* gobj() const { return reinterpret_cast<GMenuLinkIter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GMenuLinkIter* gobj_copy();

private:


protected:
  MenuLinkIter();

public:
  
  /** Gets the name of the link at the current iterator position.
   * 
   * The iterator is not advanced.
   * 
   * @newin{2,32}
   * @return The type of the link.
   */
  Glib::ustring get_name() const;

  
  /** This function combines g_menu_link_iter_next() with
   * g_menu_link_iter_get_name() and g_menu_link_iter_get_value().
   * 
   * First the iterator is advanced to the next (possibly first) link.
   * If that fails, then <tt>false</tt> is returned and there are no other effects.
   * 
   * If successful, @a out_link and @a value are set to the name and MenuModel
   * of the link that has just been advanced to.  At this point,
   * g_menu_link_iter_get_name() and g_menu_link_iter_get_value() will return the
   * same values again.
   * 
   * The value returned in @a out_link remains valid for as long as the iterator
   * remains at the current position.  The value returned in @a value must
   * be unreffed using Glib::object_unref() when it is no longer in use.
   * 
   * @newin{2,32}
   * @param out_link The name of the link.
   * @param value The linked MenuModel.
   * @return <tt>true</tt> on success, or <tt>false</tt> if there is no additional link.
   */

  bool get_next(Glib::ustring& out_link, Glib::RefPtr<MenuModel>& value);

  
  /** Gets the linked MenuModel at the current iterator position.
   * 
   * The iterator is not advanced.
   * 
   * @newin{2,32}
   * @return The MenuModel that is linked to.
   */
  Glib::RefPtr<MenuModel> get_value();
  
  /** Gets the linked MenuModel at the current iterator position.
   * 
   * The iterator is not advanced.
   * 
   * @newin{2,32}
   * @return The MenuModel that is linked to.
   */
  Glib::RefPtr<const MenuModel> get_value() const;

  
  /** Attempts to advance the iterator to the next (possibly first)
   * link.
   * 
   * <tt>true</tt> is returned on success, or <tt>false</tt> if there are no more links.
   * 
   * You must call this function when you first acquire the iterator to
   * advance it to the first link (and determine if the first link exists
   * at all).
   * 
   * @newin{2,32}
   * @return <tt>true</tt> on success, or <tt>false</tt> when there are no more links.
   */
  bool next();


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
   * @relates Gio::MenuLinkIter
   */
  Glib::RefPtr<Gio::MenuLinkIter> wrap(GMenuLinkIter* object, bool take_copy = false);
}


#endif /* _GIOMM_MENULINKITER_H */

