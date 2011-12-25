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

#include <Windows.h>
#undef max 

#include <gdk/gdkgldrawable.h>
#include <gdk/gdkglwindow.h>

#include "windowext.h"

namespace Gdk
{
  namespace GL
  {

    Glib::RefPtr<Window> WindowExtProxy::set_gl_capability(const Glib::RefPtr<const Config>& glconfig,
                                                           const int* attrib_list)
    {
      Glib::RefPtr<Window> retvalue =
        Glib::wrap((GdkGLWindow*)(gdk_window_set_gl_capability(Glib::unwrap(window_),
                                                               const_cast<GdkGLConfig*>(Glib::unwrap(glconfig)),
                                                               attrib_list)));

      if(retvalue)
        retvalue->reference();

      return retvalue;
    }

    void WindowExtProxy::unset_gl_capability()
    {
      gdk_window_unset_gl_capability(Glib::unwrap(window_));
    }

    bool WindowExtProxy::is_gl_capable() const
    {
      return gdk_window_is_gl_capable(const_cast<GdkWindow*>(Glib::unwrap<Gdk::Window>(window_)));
    }

    Glib::RefPtr<Window> WindowExtProxy::get_gl_window() const
    {
      Glib::RefPtr<Window> retvalue =
        Glib::wrap((GdkGLWindow*)(gdk_window_get_gl_window(const_cast<GdkWindow*>(Glib::unwrap<Gdk::Window>(window_)))));

      if(retvalue)
        retvalue->reference();

      return retvalue;
    }

    Glib::RefPtr<Gdk::GL::Drawable> WindowExtProxy::get_gl_drawable() const
    {
      Glib::RefPtr<Gdk::GL::Drawable> retvalue =
        Glib::wrap((GdkGLDrawable*)(gdk_window_get_gl_drawable(const_cast<GdkWindow*>(Glib::unwrap<Gdk::Window>(window_)))));

      if(retvalue)
        retvalue->reference();

      return retvalue;
    }

  } // namespace GL
} // namespace Gdk
