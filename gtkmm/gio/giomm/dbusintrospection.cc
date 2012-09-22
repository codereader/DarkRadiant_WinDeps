// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusintrospection.h>
#include <giomm/private/dbusintrospection_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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

#include <glibmm/error.h>
#include <glibmm/utility.h>

namespace Gio
{

namespace DBus
{

//We hand-code this because g_dbus_node_info_lookup_interface() doesn't 
//do this when it takes a NULL.
//See bug https://bugzilla.gnome.org/show_bug.cgi?id=646417
Glib::RefPtr<InterfaceInfo> NodeInfo::lookup_interface()
{
  Glib::RefPtr<InterfaceInfo> retvalue;
  
  if(!gobj() || !(gobj()->interfaces))
    return retvalue;

  retvalue = Glib::wrap(gobj()->interfaces[0]);
  
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.

  return retvalue;
}

Glib::RefPtr<const InterfaceInfo> NodeInfo::lookup_interface() const
{
  return const_cast<NodeInfo*>(this)->lookup_interface();
}
 
} //namespace DBus
 
} // namespace Gio

namespace
{
} // anonymous namespace


/* Why reinterpret_cast<AnnotationInfo*>(gobject) is needed:
 *
 * A AnnotationInfo instance is in fact always a GDBusAnnotationInfo instance.
 * Unfortunately, GDBusAnnotationInfo cannot be a member of AnnotationInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because AnnotationInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gio::DBus::AnnotationInfo> wrap(GDBusAnnotationInfo* object, bool take_copy)
{
  if(take_copy && object)
    g_dbus_annotation_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::DBus::AnnotationInfo>(reinterpret_cast<Gio::DBus::AnnotationInfo*>(object));
}

} // namespace Glib


namespace Gio
{

namespace DBus
{


void AnnotationInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_annotation_info_ref(reinterpret_cast<GDBusAnnotationInfo*>(const_cast<AnnotationInfo*>(this)));
}

void AnnotationInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_annotation_info_unref(reinterpret_cast<GDBusAnnotationInfo*>(const_cast<AnnotationInfo*>(this)));
}

GDBusAnnotationInfo* AnnotationInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GDBusAnnotationInfo*>(this);
}

const GDBusAnnotationInfo* AnnotationInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GDBusAnnotationInfo*>(this);
}

GDBusAnnotationInfo* AnnotationInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GDBusAnnotationInfo *const gobject = reinterpret_cast<GDBusAnnotationInfo*>(const_cast<AnnotationInfo*>(this));
  g_dbus_annotation_info_ref(gobject);
  return gobject;
}


Glib::ustring AnnotationInfo::info_lookup(const Glib::ArrayHandle< Glib::RefPtr<AnnotationInfo> >& annotations, const Glib::ustring& name)
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_annotation_info_lookup(const_cast<GDBusAnnotationInfo**>(annotations.data()), name.c_str()));
}


} // namespace DBus

} // namespace Gio


/* Why reinterpret_cast<ArgInfo*>(gobject) is needed:
 *
 * A ArgInfo instance is in fact always a GDBusArgInfo instance.
 * Unfortunately, GDBusArgInfo cannot be a member of ArgInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because ArgInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gio::DBus::ArgInfo> wrap(GDBusArgInfo* object, bool take_copy)
{
  if(take_copy && object)
    g_dbus_arg_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::DBus::ArgInfo>(reinterpret_cast<Gio::DBus::ArgInfo*>(object));
}

} // namespace Glib


namespace Gio
{

namespace DBus
{


void ArgInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_arg_info_ref(reinterpret_cast<GDBusArgInfo*>(const_cast<ArgInfo*>(this)));
}

void ArgInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_arg_info_unref(reinterpret_cast<GDBusArgInfo*>(const_cast<ArgInfo*>(this)));
}

GDBusArgInfo* ArgInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GDBusArgInfo*>(this);
}

const GDBusArgInfo* ArgInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GDBusArgInfo*>(this);
}

GDBusArgInfo* ArgInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GDBusArgInfo *const gobject = reinterpret_cast<GDBusArgInfo*>(const_cast<ArgInfo*>(this));
  g_dbus_arg_info_ref(gobject);
  return gobject;
}


} // namespace DBus

} // namespace Gio


/* Why reinterpret_cast<MethodInfo*>(gobject) is needed:
 *
 * A MethodInfo instance is in fact always a GDBusMethodInfo instance.
 * Unfortunately, GDBusMethodInfo cannot be a member of MethodInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because MethodInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gio::DBus::MethodInfo> wrap(GDBusMethodInfo* object, bool take_copy)
{
  if(take_copy && object)
    g_dbus_method_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::DBus::MethodInfo>(reinterpret_cast<Gio::DBus::MethodInfo*>(object));
}

} // namespace Glib


namespace Gio
{

namespace DBus
{


void MethodInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_method_info_ref(reinterpret_cast<GDBusMethodInfo*>(const_cast<MethodInfo*>(this)));
}

void MethodInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_method_info_unref(reinterpret_cast<GDBusMethodInfo*>(const_cast<MethodInfo*>(this)));
}

GDBusMethodInfo* MethodInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GDBusMethodInfo*>(this);
}

const GDBusMethodInfo* MethodInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GDBusMethodInfo*>(this);
}

GDBusMethodInfo* MethodInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GDBusMethodInfo *const gobject = reinterpret_cast<GDBusMethodInfo*>(const_cast<MethodInfo*>(this));
  g_dbus_method_info_ref(gobject);
  return gobject;
}


} // namespace DBus

} // namespace Gio


/* Why reinterpret_cast<SignalInfo*>(gobject) is needed:
 *
 * A SignalInfo instance is in fact always a GDBusSignalInfo instance.
 * Unfortunately, GDBusSignalInfo cannot be a member of SignalInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because SignalInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gio::DBus::SignalInfo> wrap(GDBusSignalInfo* object, bool take_copy)
{
  if(take_copy && object)
    g_dbus_signal_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::DBus::SignalInfo>(reinterpret_cast<Gio::DBus::SignalInfo*>(object));
}

} // namespace Glib


namespace Gio
{

namespace DBus
{


void SignalInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_signal_info_ref(reinterpret_cast<GDBusSignalInfo*>(const_cast<SignalInfo*>(this)));
}

void SignalInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_signal_info_unref(reinterpret_cast<GDBusSignalInfo*>(const_cast<SignalInfo*>(this)));
}

GDBusSignalInfo* SignalInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GDBusSignalInfo*>(this);
}

const GDBusSignalInfo* SignalInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GDBusSignalInfo*>(this);
}

GDBusSignalInfo* SignalInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GDBusSignalInfo *const gobject = reinterpret_cast<GDBusSignalInfo*>(const_cast<SignalInfo*>(this));
  g_dbus_signal_info_ref(gobject);
  return gobject;
}


} // namespace DBus

} // namespace Gio


/* Why reinterpret_cast<PropertyInfo*>(gobject) is needed:
 *
 * A PropertyInfo instance is in fact always a GDBusPropertyInfo instance.
 * Unfortunately, GDBusPropertyInfo cannot be a member of PropertyInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because PropertyInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gio::DBus::PropertyInfo> wrap(GDBusPropertyInfo* object, bool take_copy)
{
  if(take_copy && object)
    g_dbus_property_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::DBus::PropertyInfo>(reinterpret_cast<Gio::DBus::PropertyInfo*>(object));
}

} // namespace Glib


namespace Gio
{

namespace DBus
{


void PropertyInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_property_info_ref(reinterpret_cast<GDBusPropertyInfo*>(const_cast<PropertyInfo*>(this)));
}

void PropertyInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_property_info_unref(reinterpret_cast<GDBusPropertyInfo*>(const_cast<PropertyInfo*>(this)));
}

GDBusPropertyInfo* PropertyInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GDBusPropertyInfo*>(this);
}

const GDBusPropertyInfo* PropertyInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GDBusPropertyInfo*>(this);
}

GDBusPropertyInfo* PropertyInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GDBusPropertyInfo *const gobject = reinterpret_cast<GDBusPropertyInfo*>(const_cast<PropertyInfo*>(this));
  g_dbus_property_info_ref(gobject);
  return gobject;
}


} // namespace DBus

} // namespace Gio


/* Why reinterpret_cast<InterfaceInfo*>(gobject) is needed:
 *
 * A InterfaceInfo instance is in fact always a GDBusInterfaceInfo instance.
 * Unfortunately, GDBusInterfaceInfo cannot be a member of InterfaceInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because InterfaceInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gio::DBus::InterfaceInfo> wrap(GDBusInterfaceInfo* object, bool take_copy)
{
  if(take_copy && object)
    g_dbus_interface_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::DBus::InterfaceInfo>(reinterpret_cast<Gio::DBus::InterfaceInfo*>(object));
}

} // namespace Glib


namespace Gio
{

namespace DBus
{


void InterfaceInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_interface_info_ref(reinterpret_cast<GDBusInterfaceInfo*>(const_cast<InterfaceInfo*>(this)));
}

void InterfaceInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_interface_info_unref(reinterpret_cast<GDBusInterfaceInfo*>(const_cast<InterfaceInfo*>(this)));
}

GDBusInterfaceInfo* InterfaceInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GDBusInterfaceInfo*>(this);
}

const GDBusInterfaceInfo* InterfaceInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GDBusInterfaceInfo*>(this);
}

GDBusInterfaceInfo* InterfaceInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GDBusInterfaceInfo *const gobject = reinterpret_cast<GDBusInterfaceInfo*>(const_cast<InterfaceInfo*>(this));
  g_dbus_interface_info_ref(gobject);
  return gobject;
}

Glib::RefPtr<MethodInfo> InterfaceInfo::lookup_method(const Glib::ustring& name)
{

  Glib::RefPtr<MethodInfo> retvalue = Glib::wrap(g_dbus_interface_info_lookup_method(gobj(), name.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const MethodInfo> InterfaceInfo::lookup_method(const Glib::ustring& name) const
{
  return const_cast<InterfaceInfo*>(this)->lookup_method(name);
}

Glib::RefPtr<SignalInfo> InterfaceInfo::lookup_signal(const Glib::ustring& name)
{

  Glib::RefPtr<SignalInfo> retvalue = Glib::wrap(g_dbus_interface_info_lookup_signal(gobj(), name.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const SignalInfo> InterfaceInfo::lookup_signal(const Glib::ustring& name) const
{
  return const_cast<InterfaceInfo*>(this)->lookup_signal(name);
}

Glib::RefPtr<PropertyInfo> InterfaceInfo::lookup_property(const Glib::ustring& name)
{

  Glib::RefPtr<PropertyInfo> retvalue = Glib::wrap(g_dbus_interface_info_lookup_property(gobj(), name.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const PropertyInfo> InterfaceInfo::lookup_property(const Glib::ustring& name) const
{
  return const_cast<InterfaceInfo*>(this)->lookup_property(name);
}


} // namespace DBus

} // namespace Gio


/* Why reinterpret_cast<NodeInfo*>(gobject) is needed:
 *
 * A NodeInfo instance is in fact always a GDBusNodeInfo instance.
 * Unfortunately, GDBusNodeInfo cannot be a member of NodeInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because NodeInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gio::DBus::NodeInfo> wrap(GDBusNodeInfo* object, bool take_copy)
{
  if(take_copy && object)
    g_dbus_node_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::DBus::NodeInfo>(reinterpret_cast<Gio::DBus::NodeInfo*>(object));
}

} // namespace Glib


namespace Gio
{

namespace DBus
{


void NodeInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_node_info_ref(reinterpret_cast<GDBusNodeInfo*>(const_cast<NodeInfo*>(this)));
}

void NodeInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_dbus_node_info_unref(reinterpret_cast<GDBusNodeInfo*>(const_cast<NodeInfo*>(this)));
}

GDBusNodeInfo* NodeInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GDBusNodeInfo*>(this);
}

const GDBusNodeInfo* NodeInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GDBusNodeInfo*>(this);
}

GDBusNodeInfo* NodeInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GDBusNodeInfo *const gobject = reinterpret_cast<GDBusNodeInfo*>(const_cast<NodeInfo*>(this));
  g_dbus_node_info_ref(gobject);
  return gobject;
}

Glib::RefPtr<NodeInfo> NodeInfo::create_for_xml(const Glib::ustring& xml_data)
{
  GError* gerror = 0;
  Glib::RefPtr<NodeInfo> retvalue = Glib::wrap(g_dbus_node_info_new_for_xml(xml_data.c_str(), &(gerror)));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}


Glib::RefPtr<InterfaceInfo> NodeInfo::lookup_interface(const Glib::ustring& name)
{

  Glib::RefPtr<InterfaceInfo> retvalue = Glib::wrap(g_dbus_node_info_lookup_interface(gobj(), name.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const InterfaceInfo> NodeInfo::lookup_interface(const Glib::ustring& name) const
{
  return const_cast<NodeInfo*>(this)->lookup_interface(name);
}


} // namespace DBus

} // namespace Gio


