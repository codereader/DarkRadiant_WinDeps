// -*- C++ -*-
/* gdkglextmm - C++ Wrapper for GdkGLExt
 * Copyright (C) 2002-2003  Naofumi Yasufuku
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA.
 */

#include <gdk/gdkglquery.h>

#include "query.h"

namespace Gdk
{
  namespace GL
  {

    bool query_extension()
    {
      return gdk_gl_query_extension();
    }

#ifdef GDKGLEXTMM_MULTIHEAD_SUPPORT
    bool query_extension(const Glib::RefPtr<const Gdk::Display>& display)
    {
      return gdk_gl_query_extension_for_display(const_cast<GdkDisplay*>(Glib::unwrap<Gdk::Display>(display)));
    }
#endif // GDKGLEXTMM_MULTIHEAD_SUPPORT

    bool query_version(int& major, int& minor)
    {
      return gdk_gl_query_version(&major, &minor);
    }

#ifdef GDKGLEXTMM_MULTIHEAD_SUPPORT
    bool query_version(const Glib::RefPtr<const Gdk::Display>& display,
                       int& major, int& minor)
    {
      return gdk_gl_query_version_for_display(const_cast<GdkDisplay*>(Glib::unwrap<Gdk::Display>(display)),
                                              &major, &minor);
    }
#endif // GDKGLEXTMM_MULTIHEAD_SUPPORT

    bool query_gl_extension(const char* extension)
    {
      return gdk_gl_query_gl_extension(extension);
    }

    bool query_gl_extension(const Glib::ustring& extension)
    {
      return gdk_gl_query_gl_extension(extension.c_str());
    }

    GdkGLProc get_proc_address(const char* proc_name)
    {
      return gdk_gl_get_proc_address(proc_name);
    }

    GdkGLProc get_proc_address(const Glib::ustring& proc_name)
    {
      return gdk_gl_get_proc_address(proc_name.c_str());
    }

  } // namespace GL
} // namespace Gdk
