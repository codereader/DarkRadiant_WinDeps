// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/drive.h>
#include <giomm/private/drive_p.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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
#include <glibmm/error.h>
#include <glibmm/exceptionhandler.h>
#include "slot_async.h"

namespace Gio
{

void Drive::eject(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_drive_eject(gobj(),
                static_cast<GMountUnmountFlags>(flags), 
                cancellable->gobj(),
                &SignalProxy_async_callback,
                slot_copy);
}

void Drive::eject(const SlotAsyncReady& slot, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_drive_eject(gobj(),
                static_cast<GMountUnmountFlags>(flags), 
                NULL, // cancellable
                &SignalProxy_async_callback,
                slot_copy);
}

void Drive::eject(MountUnmountFlags flags)
{
  g_drive_eject(gobj(),
                static_cast<GMountUnmountFlags>(flags), 
                NULL, // cancellable
                NULL,
                NULL);
}

void Drive::poll_for_media(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_drive_poll_for_media(gobj(),
                         cancellable->gobj(),
                         &SignalProxy_async_callback,
                         slot_copy);
}

void Drive::poll_for_media(const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_drive_poll_for_media(gobj(),
                         NULL, // cancellable
                         &SignalProxy_async_callback,
                         slot_copy);
}

void Drive::poll_for_media()
{
  g_drive_poll_for_media(gobj(),
                         NULL, // cancellable
                         NULL,
                         NULL);
}

} // namespace Gio


namespace
{


static const Glib::SignalProxyInfo Drive_signal_changed_info =
{
  "changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Drive_signal_disconnected_info =
{
  "disconnected",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Drive_signal_eject_button_info =
{
  "eject_button",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Drive> wrap(GDrive* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Drive>( dynamic_cast<Gio::Drive*> (Glib::wrap_auto_interface<Gio::Drive> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{


/* The *_Class implementation: */

const Glib::Interface_Class& Drive_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Drive_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_drive_get_type();
  }

  return *this;
}

void Drive_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* Drive_Class::wrap_new(GObject* object)
{
  return new Drive((GDrive*)(object));
}


/* The implementation: */

Drive::Drive()
:
  Glib::Interface(drive_class_.init())
{}

Drive::Drive(GDrive* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Drive::Drive(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Drive::~Drive()
{}

// static
void Drive::add_interface(GType gtype_implementer)
{
  drive_class_.init().add_interface(gtype_implementer);
}

Drive::CppClassType Drive::drive_class_; // initialize static member

GType Drive::get_type()
{
  return drive_class_.init().get_type();
}


GType Drive::get_base_type()
{
  return g_drive_get_type();
}


Glib::ustring Drive::get_name() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(g_drive_get_name(const_cast<GDrive*>(gobj())));
}

Glib::RefPtr<Icon> Drive::get_icon()
{

  Glib::RefPtr<Icon> retvalue = Glib::wrap(g_drive_get_icon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Icon> Drive::get_icon() const
{
  return const_cast<Drive*>(this)->get_icon();
}

bool Drive::has_volumes() const
{
  return g_drive_has_volumes(const_cast<GDrive*>(gobj()));
}

Glib::ListHandle< Glib::RefPtr<Volume> > Drive::get_volumes()
{
  return Glib::ListHandle< Glib::RefPtr<Volume> >(g_drive_get_volumes(gobj()), Glib::OWNERSHIP_SHALLOW);
}

bool Drive::is_media_removable() const
{
  return g_drive_is_media_removable(const_cast<GDrive*>(gobj()));
}

bool Drive::has_media() const
{
  return g_drive_has_media(const_cast<GDrive*>(gobj()));
}

bool Drive::is_media_check_automatic() const
{
  return g_drive_is_media_check_automatic(const_cast<GDrive*>(gobj()));
}

bool Drive::can_poll_for_media() const
{
  return g_drive_can_poll_for_media(const_cast<GDrive*>(gobj()));
}

bool Drive::can_eject() const
{
  return g_drive_can_eject(const_cast<GDrive*>(gobj()));
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool Drive::eject_finish(const Glib::RefPtr<AsyncResult>& result)
#else
bool Drive::eject_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  bool retvalue = g_drive_eject_finish(gobj(), Glib::unwrap(result), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool Drive::poll_for_media_finish(const Glib::RefPtr<AsyncResult>& result)
#else
bool Drive::poll_for_media_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  bool retvalue = g_drive_poll_for_media_finish(gobj(), Glib::unwrap(result), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

std::string Drive::get_identifier(const std::string& kind) const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_drive_get_identifier(const_cast<GDrive*>(gobj()), kind.c_str()));
}

Glib::StringArrayHandle Drive::enumerate_identifiers() const
{
  return Glib::StringArrayHandle(g_drive_enumerate_identifiers(const_cast<GDrive*>(gobj())));
}


Glib::SignalProxy0< void > Drive::signal_changed()
{
  return Glib::SignalProxy0< void >(this, &Drive_signal_changed_info);
}


Glib::SignalProxy0< void > Drive::signal_disconnected()
{
  return Glib::SignalProxy0< void >(this, &Drive_signal_disconnected_info);
}


Glib::SignalProxy0< void > Drive::signal_eject_button()
{
  return Glib::SignalProxy0< void >(this, &Drive_signal_eject_button_info);
}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gio


