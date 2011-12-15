// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/dbusaddress.h>
#include <giomm/private/dbusaddress_p.h>

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

#include <gio/gio.h>
#include "slot_async.h"

namespace Gio
{

namespace DBus
{

namespace Address
{

bool is_address(const std::string& string)
{
  return static_cast<bool>(g_dbus_is_address(string.c_str()));
}

bool is_supported(const std::string& address)
{
  GError* gerror = 0;
  bool const result = g_dbus_is_supported_address(address.c_str(), &gerror);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return result;
}

void get_stream(const std::string& address, const SlotAsyncReady slot,
  const Glib::RefPtr<Cancellable>& cancellable)
{
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);
  g_dbus_address_get_stream(address.c_str(), Glib::unwrap(cancellable),
    &SignalProxy_async_callback, slot_copy);
}

void get_stream(const std::string& address, const SlotAsyncReady slot)
{
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);
  g_dbus_address_get_stream(address.c_str(), 0, &SignalProxy_async_callback,
    slot_copy);
}

Glib::RefPtr<IOStream> get_stream_finish(const Glib::RefPtr<AsyncResult>& res,
  std::string& out_guid)
{
  GError* gerror = 0;
  gchar* g_out_guid = 0;

  Glib::RefPtr<IOStream> result =
    Glib::wrap(g_dbus_address_get_stream_finish(Glib::unwrap(res),
    &g_out_guid, &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  out_guid = g_out_guid;
  return result;
}

Glib::RefPtr<IOStream> get_stream_finish(const Glib::RefPtr<AsyncResult>& res)
{
  GError* gerror = 0;

  Glib::RefPtr<IOStream> result =
    Glib::wrap(g_dbus_address_get_stream_finish(Glib::unwrap(res), 0,
    &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return result;
}

Glib::RefPtr<IOStream> get_stream_sync(const std::string& address,
  const Glib::RefPtr<Cancellable>& cancellable, std::string& out_guid)
{
  GError* gerror = 0;
  gchar* g_out_guid = 0;

  Glib::RefPtr<IOStream> result =
    Glib::wrap(g_dbus_address_get_stream_sync(address.c_str(),
    &g_out_guid, Glib::unwrap(cancellable), &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  out_guid = g_out_guid;
  return result;
}

Glib::RefPtr<IOStream> get_stream_sync(const std::string& address,
  std::string& out_guid)
{
  GError* gerror = 0;
  gchar* g_out_guid = 0;

  Glib::RefPtr<IOStream> result =
    Glib::wrap(g_dbus_address_get_stream_sync(address.c_str(),
    &g_out_guid, 0, &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  out_guid = g_out_guid;
  return result;
}

Glib::RefPtr<IOStream> get_stream_sync(const std::string& address,
  const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;

  Glib::RefPtr<IOStream> result =
    Glib::wrap(g_dbus_address_get_stream_sync(address.c_str(), 0,
    Glib::unwrap(cancellable), &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return result;
}

Glib::RefPtr<IOStream> get_stream_sync(const std::string& address)
{
  GError* gerror = 0;

  Glib::RefPtr<IOStream> result =
    Glib::wrap(g_dbus_address_get_stream_sync(address.c_str(), 0, 0, &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return result;
}

std::string get_for_bus_sync(BusType bus_type,
  const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;

  std::string result(g_dbus_address_get_for_bus_sync(
    static_cast<GBusType>(bus_type), Glib::unwrap(cancellable), &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return result;
}

std::string get_for_bus_sync(BusType bus_type)
{
  GError* gerror = 0;

  std::string result(g_dbus_address_get_for_bus_sync(
    static_cast<GBusType>(bus_type), 0, &gerror));

  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return result;
}

} // namespace Address

} // namespace DBus

} // namespace Gio

namespace
{
} // anonymous namespace


