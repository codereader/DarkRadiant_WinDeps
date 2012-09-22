// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/error.h>
#include <giomm/private/error_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The giomm Development Team
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

} // namespace Gio

namespace
{
} // anonymous namespace


Gio::Error::Error(Gio::Error::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (G_IO_ERROR, error_code, error_message)
{}

Gio::Error::Error(GError* gobject)
:
  Glib::Error (gobject)
{}

Gio::Error::Code Gio::Error::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gio::Error::throw_func(GError* gobject)
{
  throw Gio::Error(gobject);
}


Gio::ResolverError::ResolverError(Gio::ResolverError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (G_RESOLVER_ERROR, error_code, error_message)
{}

Gio::ResolverError::ResolverError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gio::ResolverError::Code Gio::ResolverError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gio::ResolverError::throw_func(GError* gobject)
{
  throw Gio::ResolverError(gobject);
}


