// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <glibmm/timezone.h>
#include <glibmm/private/timezone_p.h>


/* Copyright (C) 2011 The glibmm Development Team
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

namespace Glib
{

}// namespace Glib

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::TimeZone wrap(GTimeZone* object, bool take_copy /* = false */)
{
  return Glib::TimeZone(object, take_copy);
}

} // namespace Glib


namespace Glib
{


TimeZone::TimeZone()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

TimeZone::TimeZone(const TimeZone& src)
:
  gobject_ ((src.gobject_) ? g_time_zone_ref(src.gobject_) : 0)
{}

TimeZone::TimeZone(GTimeZone* castitem, bool make_a_copy /* = false */)
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
      gobject_ = g_time_zone_ref(castitem);
    else
      gobject_ = 0;
  }
}

TimeZone& TimeZone::operator=(const TimeZone& src)
{
  GTimeZone *const new_gobject = (src.gobject_) ? g_time_zone_ref(src.gobject_) : 0;

  if(gobject_)
    g_time_zone_unref(gobject_);

  gobject_ = new_gobject;

  return *this;
}

TimeZone::~TimeZone()
{
  if(gobject_)
    g_time_zone_unref(gobject_);
}

GTimeZone* TimeZone::gobj_copy() const
{
  return g_time_zone_ref(gobject_);
}


TimeZone TimeZone::create(const Glib::ustring& identifier)
{
  return Glib::wrap(g_time_zone_new(identifier.c_str()));
}


TimeZone TimeZone::create_local()
{
  return Glib::wrap(g_time_zone_new_local());
}


TimeZone TimeZone::create_utc()
{
  return Glib::wrap(g_time_zone_new_utc());
}


int TimeZone::find_interval(TimeType type, gint64 time) const
{
  return g_time_zone_find_interval(const_cast<GTimeZone*>(gobj()), ((GTimeType)(type)), time);
}

int TimeZone::adjust_time(TimeType type, gint64& time) const
{
  return g_time_zone_adjust_time(const_cast<GTimeZone*>(gobj()), ((GTimeType)(type)), &(time));
}

Glib::ustring TimeZone::get_abbreviation(int interval) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_time_zone_get_abbreviation(const_cast<GTimeZone*>(gobj()), interval));
}

gint32 TimeZone::get_offset(int interval) const
{
  return g_time_zone_get_offset(const_cast<GTimeZone*>(gobj()), interval);
}

bool TimeZone::is_dst(int interval) const
{
  return g_time_zone_is_dst(const_cast<GTimeZone*>(gobj()), interval);
}


} // namespace Glib


