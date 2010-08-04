// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm/uriutils.h>
#include <glibmm/private/uriutils_p.h>

// -*- c++ -*-
/* $Id: fileutils.ccg,v 1.1 2003/01/07 16:58:25 murrayc Exp $ */

/* Copyright (C) 2002 The gtkmm Development Team
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

#include <glib.h>
#include <glibmm/utility.h>

namespace Glib
{

std::string uri_unescape_string(const std::string& escaped_string, const std::string& illegal_characters)
{
  gchar* cresult = g_uri_unescape_string(escaped_string.c_str(), illegal_characters.c_str());
  return Glib::convert_return_gchar_ptr_to_stdstring(cresult);
}

std::string uri_parse_scheme(const std::string& uri)
{
  return Glib::convert_return_gchar_ptr_to_stdstring( g_uri_parse_scheme(uri.c_str()) );
}

std::string uri_escape_string(const std::string& unescaped, const std::string& reserved_chars_allowed, bool allow_utf8)
{
  gchar* cresult = g_uri_escape_string(unescaped.c_str(), reserved_chars_allowed.c_str(), allow_utf8);
  return Glib::convert_return_gchar_ptr_to_stdstring(cresult);
}

} // namespace Glib


namespace
{
} // anonymous namespace


