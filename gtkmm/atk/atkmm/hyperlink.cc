// Generated by gtkmmproc -- DO NOT MODIFY!


#include <atkmm/hyperlink.h>
#include <atkmm/private/hyperlink_p.h>

// -*- c++ -*-
/* $Id: hyperlink.ccg,v 1.1 2004/01/02 09:56:43 murrayc Exp $ */

/* Copyright 2003 The gtkmm Development Team
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

#include <atkmm/object.h>
#include <atk/atkobject.h>
#include <atk/atkhyperlink.h>


namespace Atk
{

} // namespace Atk


namespace
{


static const Glib::SignalProxyInfo Hyperlink_signal_link_activated_info =
{
  "link_activated",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Atk::Hyperlink> wrap(AtkHyperlink* object, bool take_copy)
{
  return Glib::RefPtr<Atk::Hyperlink>( dynamic_cast<Atk::Hyperlink*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Atk
{


/* The *_Class implementation: */

const Glib::Class& Hyperlink_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Hyperlink_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(atk_hyperlink_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Action::add_interface(get_type());

  }

  return *this;
}

void Hyperlink_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
  klass->get_uri = &get_uri_vfunc_callback;
  klass->get_object = &get_object_vfunc_callback;
  klass->get_end_index = &get_end_index_vfunc_callback;
  klass->get_start_index = &get_start_index_vfunc_callback;
  klass->is_valid = &is_valid_vfunc_callback;
  klass->get_n_anchors = &get_n_anchors_vfunc_callback;
  klass->link_state = &link_state_vfunc_callback;
  klass->is_selected_link = &is_selected_link_vfunc_callback;
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  klass->link_activated = &link_activated_callback;
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
gchar* Hyperlink_Class::get_uri_vfunc_callback(AtkHyperlink* self, gint i)
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
        return obj->get_uri_vfunc(i
);
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
  if(base && base->get_uri)
    return (*base->get_uri)(self, i);


  typedef gchar* RType;
  return RType();
}
AtkObject* Hyperlink_Class::get_object_vfunc_callback(AtkHyperlink* self, gint i)
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
        return Glib::unwrap(obj->get_object_vfunc(i
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
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_object)
    return (*base->get_object)(self, i);


  typedef AtkObject* RType;
  return RType();
}
gint Hyperlink_Class::get_end_index_vfunc_callback(AtkHyperlink* self)
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
        return obj->get_end_index_vfunc();
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
  if(base && base->get_end_index)
    return (*base->get_end_index)(self);


  typedef gint RType;
  return RType();
}
gint Hyperlink_Class::get_start_index_vfunc_callback(AtkHyperlink* self)
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
        return obj->get_start_index_vfunc();
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
  if(base && base->get_start_index)
    return (*base->get_start_index)(self);


  typedef gint RType;
  return RType();
}
gboolean Hyperlink_Class::is_valid_vfunc_callback(AtkHyperlink* self)
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
        return static_cast<int>(obj->is_valid_vfunc());
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
  if(base && base->is_valid)
    return (*base->is_valid)(self);


  typedef gboolean RType;
  return RType();
}
gint Hyperlink_Class::get_n_anchors_vfunc_callback(AtkHyperlink* self)
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
        return obj->get_n_anchors_vfunc();
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
  if(base && base->get_n_anchors)
    return (*base->get_n_anchors)(self);


  typedef gint RType;
  return RType();
}
guint Hyperlink_Class::link_state_vfunc_callback(AtkHyperlink* self)
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
        return obj->link_state_vfunc();
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
  if(base && base->link_state)
    return (*base->link_state)(self);


  typedef guint RType;
  return RType();
}
gboolean Hyperlink_Class::is_selected_link_vfunc_callback(AtkHyperlink* self)
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
        return static_cast<int>(obj->is_selected_link_vfunc());
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
  if(base && base->is_selected_link)
    return (*base->is_selected_link)(self);


  typedef gboolean RType;
  return RType();
}
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void Hyperlink_Class::link_activated_callback(AtkHyperlink* self)
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
        obj->on_link_activated();
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
  if(base && base->link_activated)
    (*base->link_activated)(self);
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* Hyperlink_Class::wrap_new(GObject* object)
{
  return new Hyperlink((AtkHyperlink*)object);
}


/* The implementation: */

AtkHyperlink* Hyperlink::gobj_copy()
{
  reference();
  return gobj();
}

Hyperlink::Hyperlink(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Hyperlink::Hyperlink(AtkHyperlink* castitem)
:
  Glib::Object((GObject*)(castitem))
{}

Hyperlink::~Hyperlink()
{}


Hyperlink::CppClassType Hyperlink::hyperlink_class_; // initialize static member

GType Hyperlink::get_type()
{
  return hyperlink_class_.init().get_type();
}

GType Hyperlink::get_base_type()
{
  return atk_hyperlink_get_type();
}


Glib::ustring Hyperlink::get_uri(int i) const
{
  return Glib::convert_return_gchar_ptr_to_ustring(atk_hyperlink_get_uri(const_cast<AtkHyperlink*>(gobj()), i));
}

Glib::RefPtr<Atk::Object> Hyperlink::get_object(int i)
{

  Glib::RefPtr<Atk::Object> retvalue = Glib::wrap(atk_hyperlink_get_object(gobj(), i));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Atk::Object> Hyperlink::get_object(int i) const
{
  return const_cast<Hyperlink*>(this)->get_object(i);
}

int Hyperlink::get_end_index() const
{
  return atk_hyperlink_get_end_index(const_cast<AtkHyperlink*>(gobj()));
}

int Hyperlink::get_start_index() const
{
  return atk_hyperlink_get_start_index(const_cast<AtkHyperlink*>(gobj()));
}

bool Hyperlink::is_valid() const
{
  return atk_hyperlink_is_valid(const_cast<AtkHyperlink*>(gobj()));
}

bool Hyperlink::is_inline() const
{
  return atk_hyperlink_is_inline(const_cast<AtkHyperlink*>(gobj()));
}

int Hyperlink::get_n_anchors() const
{
  return atk_hyperlink_get_n_anchors(const_cast<AtkHyperlink*>(gobj()));
}

bool Hyperlink::is_selected_link() const
{
  return atk_hyperlink_is_selected_link(const_cast<AtkHyperlink*>(gobj()));
}


Glib::SignalProxy0< void > Hyperlink::signal_link_activated()
{
  return Glib::SignalProxy0< void >(this, &Hyperlink_signal_link_activated_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Hyperlink::property_selected_link() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "selected-link");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Hyperlink::property_number_of_anchors() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "number-of-anchors");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Hyperlink::property_end_index() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "end-index");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Hyperlink::property_start_index() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "start-index");
}
#endif //GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void Atk::Hyperlink::on_link_activated()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->link_activated)
    (*base->link_activated)(gobj());
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
gchar* Atk::Hyperlink::get_uri_vfunc(int i) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_uri)
    return (*base->get_uri)(const_cast<AtkHyperlink*>(gobj()),i);

  typedef gchar* RType;
  return RType();
}
Glib::RefPtr<Atk::Object> Atk::Hyperlink::get_object_vfunc(int i) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_object)
    return Glib::wrap((*base->get_object)(gobj(),i));

  typedef Glib::RefPtr<Atk::Object> RType;
  return RType();
}
int Atk::Hyperlink::get_end_index_vfunc() const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_end_index)
    return (*base->get_end_index)(const_cast<AtkHyperlink*>(gobj()));

  typedef int RType;
  return RType();
}
int Atk::Hyperlink::get_start_index_vfunc() const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_start_index)
    return (*base->get_start_index)(const_cast<AtkHyperlink*>(gobj()));

  typedef int RType;
  return RType();
}
bool Atk::Hyperlink::is_valid_vfunc() const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->is_valid)
    return (*base->is_valid)(const_cast<AtkHyperlink*>(gobj()));

  typedef bool RType;
  return RType();
}
int Atk::Hyperlink::get_n_anchors_vfunc() const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_n_anchors)
    return (*base->get_n_anchors)(const_cast<AtkHyperlink*>(gobj()));

  typedef int RType;
  return RType();
}
guint Atk::Hyperlink::link_state_vfunc() const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->link_state)
    return (*base->link_state)(const_cast<AtkHyperlink*>(gobj()));

  typedef guint RType;
  return RType();
}
bool Atk::Hyperlink::is_selected_link_vfunc() const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->is_selected_link)
    return (*base->is_selected_link)(const_cast<AtkHyperlink*>(gobj()));

  typedef bool RType;
  return RType();
}
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Atk


