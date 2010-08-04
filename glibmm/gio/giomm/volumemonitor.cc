// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/volumemonitor.h>
#include <giomm/private/volumemonitor_p.h>

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

namespace Gio {


} // namespace Gio

namespace
{


static void VolumeMonitor_signal_volume_added_callback(GVolumeMonitor* self, GVolume* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Volume>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_volume_added_info =
{
  "volume_added",
  (GCallback) &VolumeMonitor_signal_volume_added_callback,
  (GCallback) &VolumeMonitor_signal_volume_added_callback
};


static void VolumeMonitor_signal_volume_removed_callback(GVolumeMonitor* self, GVolume* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Volume>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_volume_removed_info =
{
  "volume_removed",
  (GCallback) &VolumeMonitor_signal_volume_removed_callback,
  (GCallback) &VolumeMonitor_signal_volume_removed_callback
};


static void VolumeMonitor_signal_volume_changed_callback(GVolumeMonitor* self, GVolume* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Volume>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_volume_changed_info =
{
  "volume_changed",
  (GCallback) &VolumeMonitor_signal_volume_changed_callback,
  (GCallback) &VolumeMonitor_signal_volume_changed_callback
};


static void VolumeMonitor_signal_mount_added_callback(GVolumeMonitor* self, GMount* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Mount>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_mount_added_info =
{
  "mount_added",
  (GCallback) &VolumeMonitor_signal_mount_added_callback,
  (GCallback) &VolumeMonitor_signal_mount_added_callback
};


static void VolumeMonitor_signal_mount_removed_callback(GVolumeMonitor* self, GMount* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Mount>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_mount_removed_info =
{
  "mount_removed",
  (GCallback) &VolumeMonitor_signal_mount_removed_callback,
  (GCallback) &VolumeMonitor_signal_mount_removed_callback
};


static void VolumeMonitor_signal_mount_pre_unmount_callback(GVolumeMonitor* self, GMount* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Mount>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_mount_pre_unmount_info =
{
  "mount_pre_unmount",
  (GCallback) &VolumeMonitor_signal_mount_pre_unmount_callback,
  (GCallback) &VolumeMonitor_signal_mount_pre_unmount_callback
};


static void VolumeMonitor_signal_mount_changed_callback(GVolumeMonitor* self, GMount* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Mount>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_mount_changed_info =
{
  "mount_changed",
  (GCallback) &VolumeMonitor_signal_mount_changed_callback,
  (GCallback) &VolumeMonitor_signal_mount_changed_callback
};


static void VolumeMonitor_signal_drive_connected_callback(GVolumeMonitor* self, GDrive* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Drive>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_drive_connected_info =
{
  "drive_connected",
  (GCallback) &VolumeMonitor_signal_drive_connected_callback,
  (GCallback) &VolumeMonitor_signal_drive_connected_callback
};


static void VolumeMonitor_signal_drive_disconnected_callback(GVolumeMonitor* self, GDrive* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Drive>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_drive_disconnected_info =
{
  "drive_disconnected",
  (GCallback) &VolumeMonitor_signal_drive_disconnected_callback,
  (GCallback) &VolumeMonitor_signal_drive_disconnected_callback
};


static void VolumeMonitor_signal_drive_changed_callback(GVolumeMonitor* self, GDrive* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Drive>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_drive_changed_info =
{
  "drive_changed",
  (GCallback) &VolumeMonitor_signal_drive_changed_callback,
  (GCallback) &VolumeMonitor_signal_drive_changed_callback
};


static void VolumeMonitor_signal_drive_eject_button_callback(GVolumeMonitor* self, GDrive* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<Drive>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
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

static const Glib::SignalProxyInfo VolumeMonitor_signal_drive_eject_button_info =
{
  "drive_eject_button",
  (GCallback) &VolumeMonitor_signal_drive_eject_button_callback,
  (GCallback) &VolumeMonitor_signal_drive_eject_button_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::VolumeMonitor> wrap(GVolumeMonitor* object, bool take_copy)
{
  return Glib::RefPtr<Gio::VolumeMonitor>( dynamic_cast<Gio::VolumeMonitor*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& VolumeMonitor_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &VolumeMonitor_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_volume_monitor_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void VolumeMonitor_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  klass->volume_added = &volume_added_callback;
  klass->volume_removed = &volume_removed_callback;
  klass->volume_changed = &volume_changed_callback;
  klass->mount_added = &mount_added_callback;
  klass->mount_removed = &mount_removed_callback;
  klass->mount_pre_unmount = &mount_pre_unmount_callback;
  klass->mount_changed = &mount_changed_callback;
  klass->drive_connected = &drive_connected_callback;
  klass->drive_disconnected = &drive_disconnected_callback;
  klass->drive_changed = &drive_changed_callback;
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void VolumeMonitor_Class::volume_added_callback(GVolumeMonitor* self, GVolume* p0)
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
        obj->on_volume_added(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->volume_added)
    (*base->volume_added)(self, p0);
}
void VolumeMonitor_Class::volume_removed_callback(GVolumeMonitor* self, GVolume* p0)
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
        obj->on_volume_removed(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->volume_removed)
    (*base->volume_removed)(self, p0);
}
void VolumeMonitor_Class::volume_changed_callback(GVolumeMonitor* self, GVolume* p0)
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
        obj->on_volume_changed(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->volume_changed)
    (*base->volume_changed)(self, p0);
}
void VolumeMonitor_Class::mount_added_callback(GVolumeMonitor* self, GMount* p0)
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
        obj->on_mount_added(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->mount_added)
    (*base->mount_added)(self, p0);
}
void VolumeMonitor_Class::mount_removed_callback(GVolumeMonitor* self, GMount* p0)
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
        obj->on_mount_removed(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->mount_removed)
    (*base->mount_removed)(self, p0);
}
void VolumeMonitor_Class::mount_pre_unmount_callback(GVolumeMonitor* self, GMount* p0)
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
        obj->on_mount_pre_unmount(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->mount_pre_unmount)
    (*base->mount_pre_unmount)(self, p0);
}
void VolumeMonitor_Class::mount_changed_callback(GVolumeMonitor* self, GMount* p0)
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
        obj->on_mount_changed(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->mount_changed)
    (*base->mount_changed)(self, p0);
}
void VolumeMonitor_Class::drive_connected_callback(GVolumeMonitor* self, GDrive* p0)
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
        obj->on_drive_connected(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->drive_connected)
    (*base->drive_connected)(self, p0);
}
void VolumeMonitor_Class::drive_disconnected_callback(GVolumeMonitor* self, GDrive* p0)
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
        obj->on_drive_disconnected(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->drive_disconnected)
    (*base->drive_disconnected)(self, p0);
}
void VolumeMonitor_Class::drive_changed_callback(GVolumeMonitor* self, GDrive* p0)
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
        obj->on_drive_changed(Glib::wrap(p0, true)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->drive_changed)
    (*base->drive_changed)(self, p0);
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* VolumeMonitor_Class::wrap_new(GObject* object)
{
  return new VolumeMonitor((GVolumeMonitor*)object);
}


/* The implementation: */

GVolumeMonitor* VolumeMonitor::gobj_copy()
{
  reference();
  return gobj();
}

VolumeMonitor::VolumeMonitor(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

VolumeMonitor::VolumeMonitor(GVolumeMonitor* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


VolumeMonitor::~VolumeMonitor()
{}


VolumeMonitor::CppClassType VolumeMonitor::volumemonitor_class_; // initialize static member

GType VolumeMonitor::get_type()
{
  return volumemonitor_class_.init().get_type();
}


GType VolumeMonitor::get_base_type()
{
  return g_volume_monitor_get_type();
}


Glib::RefPtr<VolumeMonitor> VolumeMonitor::get()
{
  return Glib::wrap(g_volume_monitor_get());
}


Glib::ListHandle< Glib::RefPtr<Drive> > VolumeMonitor::get_connected_drives()
{
  return Glib::ListHandle< Glib::RefPtr<Drive> >(g_volume_monitor_get_connected_drives(gobj()), Glib::OWNERSHIP_SHALLOW);
}

Glib::ListHandle< Glib::RefPtr<Volume> > VolumeMonitor::get_volumes()
{
  return Glib::ListHandle< Glib::RefPtr<Volume> >(g_volume_monitor_get_volumes(gobj()), Glib::OWNERSHIP_SHALLOW);
}

Glib::ListHandle< Glib::RefPtr<Mount> > VolumeMonitor::get_mounts()
{
  return Glib::ListHandle< Glib::RefPtr<Mount> >(g_volume_monitor_get_mounts(gobj()), Glib::OWNERSHIP_SHALLOW);
}

Glib::RefPtr<Volume> VolumeMonitor::get_volume_for_uuid(const std::string& uuid)
{

  Glib::RefPtr<Volume> retvalue = Glib::wrap(g_volume_monitor_get_volume_for_uuid(gobj(), uuid.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<Mount> VolumeMonitor::get_mount_for_uuid(const std::string& uuid)
{

  Glib::RefPtr<Mount> retvalue = Glib::wrap(g_volume_monitor_get_mount_for_uuid(gobj(), uuid.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<Volume> VolumeMonitor::adopt_orphan_mount(const Glib::RefPtr<Mount>& mount)
{
  return Glib::wrap(g_volume_monitor_adopt_orphan_mount(const_cast<GMount*>(Glib::unwrap(mount))));
}


Glib::SignalProxy1< void,const Glib::RefPtr<Volume>& > VolumeMonitor::signal_volume_added()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Volume>& >(this, &VolumeMonitor_signal_volume_added_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Volume>& > VolumeMonitor::signal_volume_removed()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Volume>& >(this, &VolumeMonitor_signal_volume_removed_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Volume>& > VolumeMonitor::signal_volume_changed()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Volume>& >(this, &VolumeMonitor_signal_volume_changed_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Mount>& > VolumeMonitor::signal_mount_added()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Mount>& >(this, &VolumeMonitor_signal_mount_added_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Mount>& > VolumeMonitor::signal_mount_removed()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Mount>& >(this, &VolumeMonitor_signal_mount_removed_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Mount>& > VolumeMonitor::signal_mount_pre_unmount()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Mount>& >(this, &VolumeMonitor_signal_mount_pre_unmount_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Mount>& > VolumeMonitor::signal_mount_changed()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Mount>& >(this, &VolumeMonitor_signal_mount_changed_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Drive>& > VolumeMonitor::signal_drive_connected()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Drive>& >(this, &VolumeMonitor_signal_drive_connected_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Drive>& > VolumeMonitor::signal_drive_disconnected()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Drive>& >(this, &VolumeMonitor_signal_drive_disconnected_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Drive>& > VolumeMonitor::signal_drive_changed()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Drive>& >(this, &VolumeMonitor_signal_drive_changed_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Drive>& > VolumeMonitor::signal_drive_eject_button()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Drive>& >(this, &VolumeMonitor_signal_drive_eject_button_info);
}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void Gio::VolumeMonitor::on_volume_added(const Glib::RefPtr<Volume>& volume)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->volume_added)
    (*base->volume_added)(gobj(),const_cast<GVolume*>(Glib::unwrap(volume)));
}
void Gio::VolumeMonitor::on_volume_removed(const Glib::RefPtr<Volume>& volume)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->volume_removed)
    (*base->volume_removed)(gobj(),const_cast<GVolume*>(Glib::unwrap(volume)));
}
void Gio::VolumeMonitor::on_volume_changed(const Glib::RefPtr<Volume>& volume)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->volume_changed)
    (*base->volume_changed)(gobj(),const_cast<GVolume*>(Glib::unwrap(volume)));
}
void Gio::VolumeMonitor::on_mount_added(const Glib::RefPtr<Mount>& mount)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->mount_added)
    (*base->mount_added)(gobj(),const_cast<GMount*>(Glib::unwrap(mount)));
}
void Gio::VolumeMonitor::on_mount_removed(const Glib::RefPtr<Mount>& mount)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->mount_removed)
    (*base->mount_removed)(gobj(),const_cast<GMount*>(Glib::unwrap(mount)));
}
void Gio::VolumeMonitor::on_mount_pre_unmount(const Glib::RefPtr<Mount>& mount)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->mount_pre_unmount)
    (*base->mount_pre_unmount)(gobj(),const_cast<GMount*>(Glib::unwrap(mount)));
}
void Gio::VolumeMonitor::on_mount_changed(const Glib::RefPtr<Mount>& mount)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->mount_changed)
    (*base->mount_changed)(gobj(),const_cast<GMount*>(Glib::unwrap(mount)));
}
void Gio::VolumeMonitor::on_drive_connected(const Glib::RefPtr<Drive>& drive)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->drive_connected)
    (*base->drive_connected)(gobj(),const_cast<GDrive*>(Glib::unwrap(drive)));
}
void Gio::VolumeMonitor::on_drive_disconnected(const Glib::RefPtr<Drive>& drive)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->drive_disconnected)
    (*base->drive_disconnected)(gobj(),const_cast<GDrive*>(Glib::unwrap(drive)));
}
void Gio::VolumeMonitor::on_drive_changed(const Glib::RefPtr<Drive>& drive)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->drive_changed)
    (*base->drive_changed)(gobj(),const_cast<GDrive*>(Glib::unwrap(drive)));
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gio


