// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/stockitem.h>
#include <gtkmm/private/stockitem_p.h>


// -*- c++ -*-
/* $Id: stockitem.ccg,v 1.3 2004/06/20 22:41:14 daniel Exp $ */

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtk/gtk.h>
 
namespace Gtk
{

StockItem::StockItem(const Gtk::StockID&  stock_id,
                     const Glib::ustring& label,
                     Gdk::ModifierType    modifier,
                     unsigned int         keyval,
                     const Glib::ustring& translation_domain)
{
  const GtkStockItem stock_item =
  {
    const_cast<char*>(stock_id.get_c_str()),
    const_cast<char*>(label.c_str()),
    static_cast<GdkModifierType>(unsigned(modifier)),
    keyval,
    (translation_domain.empty()) ? 0 : const_cast<char*>(translation_domain.c_str())
  };

  gobject_ = gtk_stock_item_copy(&stock_item);
}

// static
bool StockItem::lookup(const Gtk::StockID& stock_id, Gtk::StockItem& item)
{
  GtkStockItem item_gobj = { 0, 0, GdkModifierType(0), 0, 0, };
  const bool known_id = gtk_stock_lookup(stock_id.get_c_str(), &item_gobj);

  if(item.gobject_)
    gtk_stock_item_free(item.gobject_);

  item.gobject_ = (known_id) ? gtk_stock_item_copy(&item_gobj) : 0;

  return known_id;
}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::StockItem wrap(GtkStockItem* object, bool take_copy /* = false */)
{
  return Gtk::StockItem(object, take_copy);
}

} // namespace Glib


namespace Gtk
{


StockItem::StockItem()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

StockItem::StockItem(const StockItem& src)
:
  gobject_ ((src.gobject_) ? gtk_stock_item_copy(src.gobject_) : 0)
{}

StockItem::StockItem(GtkStockItem* castitem, bool make_a_copy /* = false */)
{
  if(!make_a_copy)
  {
    // It was given to us by a function which has already made a copy for us to keep.
    gobject_ = castitem;
  }
  else
  {
    // We are probably getting it via direct access to a struct,
    // so we can not just take it - we have to take a copy of it.
    if(castitem)
      gobject_ = gtk_stock_item_copy(castitem);
    else
      gobject_ = 0;
  }
}


StockItem& StockItem::operator=(const StockItem& src)
{
  GtkStockItem *const new_gobject = (src.gobject_) ? gtk_stock_item_copy(src.gobject_) : 0;

  if(gobject_)
    gtk_stock_item_free(gobject_);

  gobject_ = new_gobject;

  return *this;
}

StockItem::~StockItem()
{
  if(gobject_)
    gtk_stock_item_free(gobject_);
}

GtkStockItem* StockItem::gobj_copy() const
{
  return gtk_stock_item_copy(gobject_);
}


 StockID StockItem::get_stock_id() const
{
  return StockID(gobj()->stock_id);
}
 
 Glib::ustring StockItem::get_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gobj()->label);
}
 
 Gdk::ModifierType StockItem::get_modifier() const
{
  return ((Gdk::ModifierType)(gobj()->modifier));
}
 
 guint StockItem::get_keyval() const
{
  return gobj()->keyval;
}
 
 Glib::ustring StockItem::get_translation_domain() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gobj()->translation_domain);
}
 

} // namespace Gtk


