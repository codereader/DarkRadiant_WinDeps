// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <glibmm/checksum.h>
#include <glibmm/private/checksum_p.h>


/* $Id$ */

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

#include <glibmm/utility.h>
#include <glibmm/checksum.h>

namespace Glib
{

Checksum::Checksum(ChecksumType type)
: gobject_(g_checksum_new((GChecksumType)type))
{
}

Checksum::operator bool() const
{
  return gobject_ != 0;
}

gssize Checksum::get_length(ChecksumType checksum_type)
{
  return g_checksum_type_get_length((GChecksumType)checksum_type);
}

std::string Checksum::compute_checksum(ChecksumType type, const std::string& data)
{
  return Glib::convert_return_gchar_ptr_to_ustring(g_compute_checksum_for_string(((GChecksumType)type), data.c_str(), data.size()));
}

void Checksum::update(const std::string& data)
{
  g_checksum_update(gobj(), (const guchar*)data.c_str(), data.size()); 
}

} // Glib namespace


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::Checksum wrap(GChecksum* object, bool take_copy /* = false */)
{
  return Glib::Checksum(object, take_copy);
}

} // namespace Glib


namespace Glib
{


Checksum::Checksum()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

Checksum::Checksum(const Checksum& src)
:
  gobject_ ((src.gobject_) ? g_checksum_copy(src.gobject_) : 0)
{}

Checksum::Checksum(GChecksum* castitem, bool make_a_copy /* = false */)
{
  if(!make_a_copy)
  {
    // It was given to us by a function which has already made a copy for us to keep.
    gobject_ = castitem;
  }
  else
  {
    // We are probably getting it via direct access to a struct,
    // so we can not just take it - we have to take a copy of it.
    if(castitem)
      gobject_ = g_checksum_copy(castitem);
    else
      gobject_ = 0;
  }
}

Checksum& Checksum::operator=(const Checksum& src)
{
  GChecksum *const new_gobject = (src.gobject_) ? g_checksum_copy(src.gobject_) : 0;

  if(gobject_)
    g_checksum_free(gobject_);

  gobject_ = new_gobject;

  return *this;
}

Checksum::~Checksum()
{
  if(gobject_)
    g_checksum_free(gobject_);
}

GChecksum* Checksum::gobj_copy() const
{
  return g_checksum_copy(gobject_);
}


void Checksum::reset()
{
  g_checksum_reset(gobj()); 
}

void Checksum::update(const guchar* data, gsize length)
{
  g_checksum_update(gobj(), data, (gssize)(length)); 
}

void Checksum::get_digest(guint8 * buffer, gsize * digest_len) const
{
  g_checksum_get_digest(const_cast<GChecksum*>(gobj()), buffer, digest_len); 
}

std::string Checksum::get_string() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_checksum_get_string(const_cast<GChecksum*>(gobj())));
}

std::string Checksum::compute_checksum(ChecksumType type, const guchar* data, gsize length)
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_compute_checksum_for_data(((GChecksumType)type), data, length));
}


} // namespace Glib


