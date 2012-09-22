// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/fileattributeinfolist.h>
#include <giomm/private/fileattributeinfolist_p.h>


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

namespace Gio
{

FileAttributeInfoList::operator bool() const
{
  return !empty();
}

bool FileAttributeInfoList::empty() const
{
  return gobj() == 0;
}

FileAttributeInfo
FileAttributeInfoList::lookup(const std::string& name) const
{
  GFileAttributeInfoList* cobject = const_cast<GFileAttributeInfoList*>(gobj());
  const GFileAttributeInfo* cinfo =
    g_file_attribute_info_list_lookup (cobject, name.c_str());

  FileAttributeInfo info(cinfo);
  return info;
}

} // namespace Gio

namespace
{
} // anonymous namespace


/* Why reinterpret_cast<FileAttributeInfoList*>(gobject) is needed:
 *
 * A FileAttributeInfoList instance is in fact always a GFileAttributeInfoList instance.
 * Unfortunately, GFileAttributeInfoList cannot be a member of FileAttributeInfoList,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because FileAttributeInfoList does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Gio::FileAttributeInfoList> wrap(GFileAttributeInfoList* object, bool take_copy)
{
  if(take_copy && object)
    g_file_attribute_info_list_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gio::FileAttributeInfoList>(reinterpret_cast<Gio::FileAttributeInfoList*>(object));
}

} // namespace Glib


namespace Gio
{


// static
Glib::RefPtr<FileAttributeInfoList> FileAttributeInfoList::create()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<FileAttributeInfoList>(reinterpret_cast<FileAttributeInfoList*>(g_file_attribute_info_list_new()));
}

void FileAttributeInfoList::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_file_attribute_info_list_ref(reinterpret_cast<GFileAttributeInfoList*>(const_cast<FileAttributeInfoList*>(this)));
}

void FileAttributeInfoList::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_file_attribute_info_list_unref(reinterpret_cast<GFileAttributeInfoList*>(const_cast<FileAttributeInfoList*>(this)));
}

GFileAttributeInfoList* FileAttributeInfoList::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GFileAttributeInfoList*>(this);
}

const GFileAttributeInfoList* FileAttributeInfoList::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GFileAttributeInfoList*>(this);
}

GFileAttributeInfoList* FileAttributeInfoList::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GFileAttributeInfoList *const gobject = reinterpret_cast<GFileAttributeInfoList*>(const_cast<FileAttributeInfoList*>(this));
  g_file_attribute_info_list_ref(gobject);
  return gobject;
}


Glib::RefPtr<FileAttributeInfoList> FileAttributeInfoList::dup() const
{
  return Glib::wrap(g_file_attribute_info_list_dup(const_cast<GFileAttributeInfoList*>(gobj())));
}

void FileAttributeInfoList::add(const std::string& name, FileAttributeType type, FileAttributeInfoFlags flags)
{
  g_file_attribute_info_list_add(gobj(), name.c_str(), ((GFileAttributeType)(type)), ((GFileAttributeInfoFlags)(flags))); 
}


} // namespace Gio


