// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/treesortable.h>
#include <gtkmm/private/treesortable_p.h>


// -*- c++ -*-
/* $Id: treesortable.ccg,v 1.7 2006/05/11 11:40:24 murrayc Exp $ */

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

static int SignalProxy_Compare_gtk_callback(GtkTreeModel* model, GtkTreeIter* lhs, GtkTreeIter* rhs, void* data)
{
  Gtk::TreeSortable::SlotCompare* the_slot = static_cast<Gtk::TreeSortable::SlotCompare*>(data);

  try
  {
    // use Slot::operator()
    return (*the_slot)(Gtk::TreeIter(model, lhs), Gtk::TreeIter(model, rhs));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return 0;
}

static void SignalProxy_Compare_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::TreeSortable::SlotCompare*>(data);
}

namespace Gtk
{

void TreeSortable::set_sort_func(int sort_column_id, const SlotCompare& slot)
{
  SlotCompare* slot_copy = new SlotCompare(slot);

  gtk_tree_sortable_set_sort_func(
      gobj(), sort_column_id,
      &SignalProxy_Compare_gtk_callback, slot_copy,
      &SignalProxy_Compare_gtk_callback_destroy);
}

void TreeSortable::set_sort_func(const Gtk::TreeModelColumnBase& sort_column, const SlotCompare& slot)
{
  set_sort_func(sort_column.index(), slot);
}

void TreeSortable::set_default_sort_func(const SlotCompare& slot)
{
  SlotCompare* slot_copy = new SlotCompare(slot);

  gtk_tree_sortable_set_default_sort_func(
      gobj(),
      &SignalProxy_Compare_gtk_callback, slot_copy,
      &SignalProxy_Compare_gtk_callback_destroy);
}

void TreeSortable::unset_default_sort_func()
{
  gtk_tree_sortable_set_default_sort_func(
      gobj(), 0, 0, 0); /* See GTK+ docs about the 0s. */
}

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo TreeSortable_signal_sort_column_changed_info =
{
  "sort_column_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::TreeSortable> wrap(GtkTreeSortable* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::TreeSortable>( dynamic_cast<Gtk::TreeSortable*> (Glib::wrap_auto_interface<Gtk::TreeSortable> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& TreeSortable_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &TreeSortable_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_tree_sortable_get_type();
  }

  return *this;
}

void TreeSortable_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 

  klass->get_sort_column_id = &get_sort_column_id_vfunc_callback;
  klass->set_sort_column_id = &set_sort_column_id_vfunc_callback;
  klass->set_sort_func = &set_sort_func_vfunc_callback;
  klass->set_default_sort_func = &set_default_sort_func_vfunc_callback;
  klass->has_default_sort_func = &has_default_sort_func_vfunc_callback;
  klass->sort_column_changed = &sort_column_changed_vfunc_callback;

  klass->sort_column_changed = &sort_column_changed_callback;
}

gboolean TreeSortable_Class::get_sort_column_id_vfunc_callback(GtkTreeSortable* self, int* sort_column_id, GtkSortType* order)
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
        return static_cast<int>(obj->get_sort_column_id_vfunc(sort_column_id, ((SortType*) (order))
));
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
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_sort_column_id)
    return (*base->get_sort_column_id)(self, sort_column_id, order);


  typedef gboolean RType;
  return RType();
}
void TreeSortable_Class::set_sort_column_id_vfunc_callback(GtkTreeSortable* self, int sort_column_id, GtkSortType order)
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
        obj->set_sort_column_id_vfunc(sort_column_id, ((SortType)(order))
);
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
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->set_sort_column_id)
    (*base->set_sort_column_id)(self, sort_column_id, order);

}
void TreeSortable_Class::set_sort_func_vfunc_callback(GtkTreeSortable* self, int sort_column_id, GtkTreeIterCompareFunc func, gpointer data, GDestroyNotify destroy)
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
        obj->set_sort_func_vfunc(sort_column_id, func, data
, destroy);
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
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->set_sort_func)
    (*base->set_sort_func)(self, sort_column_id, func, data, destroy);

}
void TreeSortable_Class::set_default_sort_func_vfunc_callback(GtkTreeSortable* self, GtkTreeIterCompareFunc func, gpointer data, GDestroyNotify destroy)
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
        obj->set_default_sort_func_vfunc(func, data
, destroy);
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
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->set_default_sort_func)
    (*base->set_default_sort_func)(self, func, data, destroy);

}
gboolean TreeSortable_Class::has_default_sort_func_vfunc_callback(GtkTreeSortable* self)
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
        return static_cast<int>(obj->has_default_sort_func_vfunc());
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
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->has_default_sort_func)
    return (*base->has_default_sort_func)(self);


  typedef gboolean RType;
  return RType();
}
void TreeSortable_Class::sort_column_changed_vfunc_callback(GtkTreeSortable* self)
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
        obj->sort_column_changed_vfunc();
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
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->sort_column_changed)
    (*base->sort_column_changed)(self);

}

void TreeSortable_Class::sort_column_changed_callback(GtkTreeSortable* self)
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
        obj->on_sort_column_changed();
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
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->sort_column_changed)
    (*base->sort_column_changed)(self);
}


Glib::ObjectBase* TreeSortable_Class::wrap_new(GObject* object)
{
  return new TreeSortable((GtkTreeSortable*)(object));
}


/* The implementation: */

TreeSortable::TreeSortable()
:
  Glib::Interface(treesortable_class_.init())
{}

TreeSortable::TreeSortable(GtkTreeSortable* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

TreeSortable::TreeSortable(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

TreeSortable::~TreeSortable()
{}

// static
void TreeSortable::add_interface(GType gtype_implementer)
{
  treesortable_class_.init().add_interface(gtype_implementer);
}

TreeSortable::CppClassType TreeSortable::treesortable_class_; // initialize static member

GType TreeSortable::get_type()
{
  return treesortable_class_.init().get_type();
}


GType TreeSortable::get_base_type()
{
  return gtk_tree_sortable_get_type();
}


bool TreeSortable::get_sort_column_id(int& sort_column_id, SortType& order) const
{
  return gtk_tree_sortable_get_sort_column_id(const_cast<GtkTreeSortable*>(gobj()), &(sort_column_id), ((GtkSortType*) &(order)));
}

void TreeSortable::set_sort_column(const TreeModelColumnBase& sort_column_id, SortType order)
{
  gtk_tree_sortable_set_sort_column_id(gobj(), (sort_column_id).index(), ((GtkSortType)(order))); 
}

void TreeSortable::set_sort_column(int sort_column_id, SortType order)
{
  gtk_tree_sortable_set_sort_column_id(gobj(), sort_column_id, ((GtkSortType)(order))); 
}

bool TreeSortable::has_default_sort_func() const
{
  return gtk_tree_sortable_has_default_sort_func(const_cast<GtkTreeSortable*>(gobj()));
}

void TreeSortable::sort_column_changed()
{
  gtk_tree_sortable_sort_column_changed(gobj()); 
}


Glib::SignalProxy0< void > TreeSortable::signal_sort_column_changed()
{
  return Glib::SignalProxy0< void >(this, &TreeSortable_signal_sort_column_changed_info);
}


void Gtk::TreeSortable::on_sort_column_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->sort_column_changed)
    (*base->sort_column_changed)(gobj());
}

bool Gtk::TreeSortable::get_sort_column_id_vfunc(int* sort_column_id, SortType* order) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_sort_column_id)
    return (*base->get_sort_column_id)(const_cast<GtkTreeSortable*>(gobj()),sort_column_id,((GtkSortType*) (order)));

  typedef bool RType;
  return RType();
}
void Gtk::TreeSortable::set_sort_column_id_vfunc(int sort_column_id, SortType order) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_sort_column_id)
    (*base->set_sort_column_id)(gobj(),sort_column_id,((GtkSortType)(order)));
}
void Gtk::TreeSortable::set_sort_func_vfunc(int sort_column_id, GtkTreeIterCompareFunc func, void* data, GDestroyNotify destroy) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_sort_func)
    (*base->set_sort_func)(gobj(),sort_column_id,func,data,destroy);
}
void Gtk::TreeSortable::set_default_sort_func_vfunc(GtkTreeIterCompareFunc func, void* data, GDestroyNotify destroy) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_default_sort_func)
    (*base->set_default_sort_func)(gobj(),func,data,destroy);
}
bool Gtk::TreeSortable::has_default_sort_func_vfunc() const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->has_default_sort_func)
    return (*base->has_default_sort_func)(const_cast<GtkTreeSortable*>(gobj()));

  typedef bool RType;
  return RType();
}
void Gtk::TreeSortable::sort_column_changed_vfunc() const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->sort_column_changed)
    (*base->sort_column_changed)(const_cast<GtkTreeSortable*>(gobj()));
}


} // namespace Gtk


