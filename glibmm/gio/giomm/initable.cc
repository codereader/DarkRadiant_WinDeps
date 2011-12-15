// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/initable.h>
#include <giomm/private/initable_p.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2009 Jonathon Jongsma
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

#include <gio/gio.h>

namespace Gio
{

void Initable::init()
{
  GError *gerror = 0;
  g_initable_init(gobj(), 0, &gerror);
  if (gerror)
    ::Glib::Error::throw_exception(gerror);
}

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Initable> wrap(GInitable* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Initable>( dynamic_cast<Gio::Initable*> (Glib::wrap_auto_interface<Gio::Initable> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{


/* The *_Class implementation: */

const Glib::Interface_Class& Initable_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Initable_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_initable_get_type();
  }

  return *this;
}

void Initable_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 

  klass->init = &init_vfunc_callback;

}

gboolean Initable_Class::init_vfunc_callback(GInitable* self, GCancellable* cancellable, GError** error)
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
        return static_cast<int>(obj->init_vfunc(Glib::wrap(cancellable)
, error));
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
  if(base && base->init)
    return (*base->init)(self, cancellable, error);


  typedef gboolean RType;
  return RType();
}


Glib::ObjectBase* Initable_Class::wrap_new(GObject* object)
{
  return new Initable((GInitable*)(object));
}


/* The implementation: */

Initable::Initable()
:
  Glib::Interface(initable_class_.init())
{}

Initable::Initable(GInitable* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Initable::Initable(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Initable::~Initable()
{}

// static
void Initable::add_interface(GType gtype_implementer)
{
  initable_class_.init().add_interface(gtype_implementer);
}

Initable::CppClassType Initable::initable_class_; // initialize static member

GType Initable::get_type()
{
  return initable_class_.init().get_type();
}


GType Initable::get_base_type()
{
  return g_initable_get_type();
}


void Initable::init(const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  g_initable_init(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);


}


bool Gio::Initable::init_vfunc(const Glib::RefPtr<Cancellable>& cancellable, GError** error) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->init)
    return (*base->init)(gobj(),const_cast<GCancellable*>(Glib::unwrap(cancellable)),error);

  typedef bool RType;
  return RType();
}


} // namespace Gio


