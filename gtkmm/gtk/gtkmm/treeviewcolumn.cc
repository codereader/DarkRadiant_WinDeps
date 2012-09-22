// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/treeviewcolumn.h>
#include <gtkmm/private/treeviewcolumn_p.h>

#include <gtk/gtk.h>

// -*- c++ -*-
/* $Id: treeviewcolumn.ccg,v 1.6 2006/05/10 20:59:28 murrayc Exp $ */

/* Copyright 2002 The gtkmm Development Team
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
#include <gtkmm/treeview_private.h>

namespace Gtk
{

// Only necessary because of the templated ctor, see .hg file.
const Glib::Class& TreeViewColumn::class_init_()
{
  return treeviewcolumn_class_.init();
}

TreeViewColumn::TreeViewColumn(const Glib::ustring& title)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Object(Glib::ConstructParams(treeviewcolumn_class_.init(), "title",title.c_str(), static_cast<char*>(0)))
{}

TreeViewColumn::TreeViewColumn(const Glib::ustring& title, Gtk::CellRenderer& cell)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Object(Glib::ConstructParams(treeviewcolumn_class_.init(), "title",title.c_str(), static_cast<char*>(0)))
{
  //This is equivalent to _gtk_tree_view_column_new_with_attributes().
  //You will also need to call add_atrribute(), or set_renderer() a few times.

  pack_start(cell, true);
}

void TreeViewColumn::add_attribute(Gtk::CellRenderer& cell, const Glib::ustring& property_name,
                                   const TreeModelColumnBase& column)
{
  gtk_tree_view_column_add_attribute(gobj(),
      (GtkCellRenderer*) cell.gobj(), property_name.c_str(), column.index());
}

void TreeViewColumn::add_attribute(const Glib::PropertyProxy_Base& property,
                                   const TreeModelColumnBase& column)
{
  gtk_tree_view_column_add_attribute(gobj(),
      (GtkCellRenderer*) property.get_object()->gobj(), property.get_name(), column.index());
}

void TreeViewColumn::set_renderer(Gtk::CellRenderer& renderer, const TreeModelColumnBase& column)
{
  add_attribute(renderer._property_renderable(), column);
}


void TreeViewColumn::set_cell_data_func(CellRenderer& cell_renderer, const SlotCellData& slot)
{
  //Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  //It will be deleted when TreeView_Private::SignalProxy_CellData_gtk_callback_destroy() is called.
  SlotCellData* slot_copy = new SlotCellData(slot);

  gtk_tree_view_column_set_cell_data_func(
      gobj(), cell_renderer.gobj(),
      &TreeView_Private::SignalProxy_CellData_gtk_callback, slot_copy,
      &TreeView_Private::SignalProxy_CellData_gtk_callback_destroy);
}

void TreeViewColumn::unset_cell_data_func(CellRenderer& cell_renderer)
{
  gtk_tree_view_column_set_cell_data_func(gobj(), cell_renderer.gobj(), 0, 0, 0);
}


} // namespace Gtk

namespace
{


static const Glib::SignalProxyInfo TreeViewColumn_signal_clicked_info =
{
  "clicked",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::TreeViewColumnSizing>::value_type()
{
  return gtk_tree_view_column_sizing_get_type();
}


namespace Glib
{

Gtk::TreeViewColumn* wrap(GtkTreeViewColumn* object, bool take_copy)
{
  return dynamic_cast<Gtk::TreeViewColumn *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& TreeViewColumn_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TreeViewColumn_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_tree_view_column_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  CellLayout::add_interface(get_type());

  }

  return *this;
}


void TreeViewColumn_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->clicked = &clicked_callback;
}


void TreeViewColumn_Class::clicked_callback(GtkTreeViewColumn* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_clicked();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->clicked)
    (*base->clicked)(self);
}


Glib::ObjectBase* TreeViewColumn_Class::wrap_new(GObject* o)
{
  return manage(new TreeViewColumn((GtkTreeViewColumn*)(o)));

}


/* The implementation: */

TreeViewColumn::TreeViewColumn(const Glib::ConstructParams& construct_params)
:
  Object(construct_params)
{
  }

TreeViewColumn::TreeViewColumn(GtkTreeViewColumn* castitem)
:
  Object((GObject*)(castitem))
{
  }

TreeViewColumn::~TreeViewColumn()
{
  destroy_();
}

TreeViewColumn::CppClassType TreeViewColumn::treeviewcolumn_class_; // initialize static member

GType TreeViewColumn::get_type()
{
  return treeviewcolumn_class_.init().get_type();
}


GType TreeViewColumn::get_base_type()
{
  return gtk_tree_view_column_get_type();
}


TreeViewColumn::TreeViewColumn()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Object(Glib::ConstructParams(treeviewcolumn_class_.init()))
{
  

}

void TreeViewColumn::pack_start(CellRenderer& cell, bool expand)
{
  gtk_tree_view_column_pack_start(gobj(), (cell).gobj(), static_cast<int>(expand)); 
}

void TreeViewColumn::pack_end(CellRenderer& cell, bool expand)
{
  gtk_tree_view_column_pack_end(gobj(), (cell).gobj(), static_cast<int>(expand)); 
}

void TreeViewColumn::clear()
{
  gtk_tree_view_column_clear(gobj()); 
}

void TreeViewColumn::add_attribute(CellRenderer& cell_renderer, const Glib::ustring& attribute, int column)
{
  gtk_tree_view_column_add_attribute(gobj(), (cell_renderer).gobj(), attribute.c_str(), column); 
}

void TreeViewColumn::clear_attributes(CellRenderer& cell_renderer)
{
  gtk_tree_view_column_clear_attributes(gobj(), (cell_renderer).gobj()); 
}

void TreeViewColumn::set_spacing(int spacing)
{
  gtk_tree_view_column_set_spacing(gobj(), spacing); 
}

int TreeViewColumn::get_spacing() const
{
  return gtk_tree_view_column_get_spacing(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_visible(bool visible)
{
  gtk_tree_view_column_set_visible(gobj(), static_cast<int>(visible)); 
}

bool TreeViewColumn::get_visible() const
{
  return gtk_tree_view_column_get_visible(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_resizable(bool resizable)
{
  gtk_tree_view_column_set_resizable(gobj(), static_cast<int>(resizable)); 
}

bool TreeViewColumn::get_resizable() const
{
  return gtk_tree_view_column_get_resizable(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_sizing(TreeViewColumnSizing type)
{
  gtk_tree_view_column_set_sizing(gobj(), ((GtkTreeViewColumnSizing)(type))); 
}

TreeViewColumnSizing TreeViewColumn::get_sizing()
{
  return ((TreeViewColumnSizing)(gtk_tree_view_column_get_sizing(gobj())));
}

int TreeViewColumn::get_x_offset() const
{
  return gtk_tree_view_column_get_x_offset(const_cast<GtkTreeViewColumn*>(gobj()));
}

int TreeViewColumn::get_width() const
{
  return gtk_tree_view_column_get_width(const_cast<GtkTreeViewColumn*>(gobj()));
}

int TreeViewColumn::get_fixed_width() const
{
  return gtk_tree_view_column_get_fixed_width(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_fixed_width(int fixed_width)
{
  gtk_tree_view_column_set_fixed_width(gobj(), fixed_width); 
}

void TreeViewColumn::set_min_width(int min_width)
{
  gtk_tree_view_column_set_min_width(gobj(), min_width); 
}

int TreeViewColumn::get_min_width() const
{
  return gtk_tree_view_column_get_min_width(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_max_width(int max_width)
{
  gtk_tree_view_column_set_max_width(gobj(), max_width); 
}

int TreeViewColumn::get_max_width() const
{
  return gtk_tree_view_column_get_max_width(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::clicked()
{
  gtk_tree_view_column_clicked(gobj()); 
}

void TreeViewColumn::set_title(const Glib::ustring& title)
{
  gtk_tree_view_column_set_title(gobj(), title.c_str()); 
}

Glib::ustring TreeViewColumn::get_title() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_tree_view_column_get_title(const_cast<GtkTreeViewColumn*>(gobj())));
}

void TreeViewColumn::set_expand(bool expand)
{
  gtk_tree_view_column_set_expand(gobj(), static_cast<int>(expand)); 
}

bool TreeViewColumn::get_expand() const
{
  return gtk_tree_view_column_get_expand(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_clickable(bool clickable)
{
  gtk_tree_view_column_set_clickable(gobj(), static_cast<int>(clickable)); 
}

bool TreeViewColumn::get_clickable() const
{
  return gtk_tree_view_column_get_clickable(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_widget(Gtk::Widget& widget)
{
  gtk_tree_view_column_set_widget(gobj(), (widget).gobj()); 
}

Widget* TreeViewColumn::get_widget()
{
  return Glib::wrap(gtk_tree_view_column_get_widget(gobj()));
}

const Widget* TreeViewColumn::get_widget() const
{
  return Glib::wrap(gtk_tree_view_column_get_widget(const_cast<GtkTreeViewColumn*>(gobj())));
}

void TreeViewColumn::set_alignment(float xalign)
{
  gtk_tree_view_column_set_alignment(gobj(), xalign); 
}

void TreeViewColumn::set_alignment(Align xalign)
{
  gtk_tree_view_column_set_alignment(gobj(), _gtkmm_align_float_from_enum(xalign)); 
}

float TreeViewColumn::get_alignment() const
{
  return gtk_tree_view_column_get_alignment(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_reorderable(bool reorderable)
{
  gtk_tree_view_column_set_reorderable(gobj(), static_cast<int>(reorderable)); 
}

bool TreeViewColumn::get_reorderable() const
{
  return gtk_tree_view_column_get_reorderable(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_sort_column(const TreeModelColumnBase& sort_column_id)
{
  gtk_tree_view_column_set_sort_column_id(gobj(), (sort_column_id).index()); 
}

void TreeViewColumn::set_sort_column(int sort_column_id)
{
  gtk_tree_view_column_set_sort_column_id(gobj(), sort_column_id); 
}

int TreeViewColumn::get_sort_column_id() const
{
  return gtk_tree_view_column_get_sort_column_id(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_sort_indicator(bool setting)
{
  gtk_tree_view_column_set_sort_indicator(gobj(), static_cast<int>(setting)); 
}

bool TreeViewColumn::get_sort_indicator() const
{
  return gtk_tree_view_column_get_sort_indicator(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::set_sort_order(SortType order)
{
  gtk_tree_view_column_set_sort_order(gobj(), ((GtkSortType)(order))); 
}

SortType TreeViewColumn::get_sort_order() const
{
  return ((SortType)(gtk_tree_view_column_get_sort_order(const_cast<GtkTreeViewColumn*>(gobj()))));
}

void TreeViewColumn::cell_set_cell_data(const Glib::RefPtr<TreeModel>& tree_model, const TreeModel::iterator& iter, bool is_expander, bool is_expanded)
{
  gtk_tree_view_column_cell_set_cell_data(gobj(), Glib::unwrap(tree_model), const_cast<GtkTreeIter*>((iter).gobj()), static_cast<int>(is_expander), static_cast<int>(is_expanded)); 
}

void TreeViewColumn::cell_get_size(const Gdk::Rectangle& cell_area, int& x_offset, int& y_offset, int& width, int& height) const
{
  gtk_tree_view_column_cell_get_size(const_cast<GtkTreeViewColumn*>(gobj()), (cell_area).gobj(), &(x_offset), &(y_offset), &(width), &(height)); 
}

bool TreeViewColumn::cell_is_visible() const
{
  return gtk_tree_view_column_cell_is_visible(const_cast<GtkTreeViewColumn*>(gobj()));
}

void TreeViewColumn::focus_cell(CellRenderer& cell)
{
  gtk_tree_view_column_focus_cell(gobj(), (cell).gobj()); 
}

bool TreeViewColumn::get_cell_position(const CellRenderer& cell_renderer, int& start_pos, int& width) const
{
  return gtk_tree_view_column_cell_get_position(const_cast<GtkTreeViewColumn*>(gobj()), const_cast<GtkCellRenderer*>((cell_renderer).gobj()), &(start_pos), &(width));
}

void TreeViewColumn::queue_resize()
{
  gtk_tree_view_column_queue_resize(gobj()); 
}

TreeView* TreeViewColumn::get_tree_view()
{

  TreeView* retvalue = Glib::wrap((GtkTreeView*)(gtk_tree_view_column_get_tree_view(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

const TreeView* TreeViewColumn::get_tree_view() const
{
  return const_cast<TreeViewColumn*>(this)->get_tree_view();
}

Button* TreeViewColumn::get_button()
{

  Button* retvalue = Glib::wrap((GtkButton*)(gtk_tree_view_column_get_button(gobj())));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

const Button* TreeViewColumn::get_button() const
{
  return const_cast<TreeViewColumn*>(this)->get_button();
}


Glib::SignalProxy0< void > TreeViewColumn::signal_clicked()
{
  return Glib::SignalProxy0< void >(this, &TreeViewColumn_signal_clicked_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > TreeViewColumn::property_visible() 
{
  return Glib::PropertyProxy< bool >(this, "visible");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > TreeViewColumn::property_visible() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visible");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > TreeViewColumn::property_resizable() 
{
  return Glib::PropertyProxy< bool >(this, "resizable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > TreeViewColumn::property_resizable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "resizable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > TreeViewColumn::property_x_offset() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "x-offset");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > TreeViewColumn::property_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > TreeViewColumn::property_spacing() 
{
  return Glib::PropertyProxy< int >(this, "spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > TreeViewColumn::property_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< TreeViewColumnSizing > TreeViewColumn::property_sizing() 
{
  return Glib::PropertyProxy< TreeViewColumnSizing >(this, "sizing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< TreeViewColumnSizing > TreeViewColumn::property_sizing() const
{
  return Glib::PropertyProxy_ReadOnly< TreeViewColumnSizing >(this, "sizing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > TreeViewColumn::property_fixed_width() 
{
  return Glib::PropertyProxy< int >(this, "fixed-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > TreeViewColumn::property_fixed_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "fixed-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > TreeViewColumn::property_min_width() 
{
  return Glib::PropertyProxy< int >(this, "min-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > TreeViewColumn::property_min_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "min-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > TreeViewColumn::property_max_width() 
{
  return Glib::PropertyProxy< int >(this, "max-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > TreeViewColumn::property_max_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "max-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > TreeViewColumn::property_title() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "title");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > TreeViewColumn::property_title() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "title");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > TreeViewColumn::property_expand() 
{
  return Glib::PropertyProxy< bool >(this, "expand");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > TreeViewColumn::property_expand() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "expand");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > TreeViewColumn::property_clickable() 
{
  return Glib::PropertyProxy< bool >(this, "clickable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > TreeViewColumn::property_clickable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "clickable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Widget* > TreeViewColumn::property_widget() 
{
  return Glib::PropertyProxy< Widget* >(this, "widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Widget* > TreeViewColumn::property_widget() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< float > TreeViewColumn::property_alignment() 
{
  return Glib::PropertyProxy< float >(this, "alignment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< float > TreeViewColumn::property_alignment() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "alignment");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > TreeViewColumn::property_reorderable() 
{
  return Glib::PropertyProxy< bool >(this, "reorderable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > TreeViewColumn::property_reorderable() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "reorderable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > TreeViewColumn::property_sort_indicator() 
{
  return Glib::PropertyProxy< bool >(this, "sort-indicator");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > TreeViewColumn::property_sort_indicator() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "sort-indicator");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< SortType > TreeViewColumn::property_sort_order() 
{
  return Glib::PropertyProxy< SortType >(this, "sort-order");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< SortType > TreeViewColumn::property_sort_order() const
{
  return Glib::PropertyProxy_ReadOnly< SortType >(this, "sort-order");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > TreeViewColumn::property_sort_column_id() 
{
  return Glib::PropertyProxy< int >(this, "sort-column-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > TreeViewColumn::property_sort_column_id() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "sort-column-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> > TreeViewColumn::property_cell_area() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> >(this, "cell-area");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gtk::TreeViewColumn::on_clicked()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->clicked)
    (*base->clicked)(gobj());
}


} // namespace Gtk


