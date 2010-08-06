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

#include <gdk/gdkgldrawable.h>
#include <gdk/gdkglpixmap.h>

#include "pixmapext.h"

namespace Gdk
{
  namespace GL
  {

    Glib::RefPtr<Pixmap> PixmapExtProxy::set_gl_capability(const Glib::RefPtr<const Config>& glconfig,
                                                           const int* attrib_list)
    {
      Glib::RefPtr<Pixmap> retvalue =
        Glib::wrap((GdkGLPixmap*)(gdk_pixmap_set_gl_capability(Glib::unwrap(pixmap_),
                                                               const_cast<GdkGLConfig*>(Glib::unwrap(glconfig)),
                                                               attrib_list)));

      if(retvalue)
        retvalue->reference();

      return retvalue;
    }

    void PixmapExtProxy::unset_gl_capability()
    {
      gdk_pixmap_unset_gl_capability(Glib::unwrap(pixmap_));
    }

    bool PixmapExtProxy::is_gl_capable() const
    {
      return gdk_pixmap_is_gl_capable(const_cast<GdkPixmap*>(Glib::unwrap<Gdk::Pixmap>(pixmap_)));
    }

    Glib::RefPtr<Pixmap> PixmapExtProxy::get_gl_pixmap() const
    {
      Glib::RefPtr<Pixmap> retvalue =
        Glib::wrap((GdkGLPixmap*)(gdk_pixmap_get_gl_pixmap(const_cast<GdkPixmap*>(Glib::unwrap<Gdk::Pixmap>(pixmap_)))));

      if(retvalue)
        retvalue->reference();

      return retvalue;
    }

    Glib::RefPtr<Gdk::GL::Drawable> PixmapExtProxy::get_gl_drawable() const
    {
      Glib::RefPtr<Gdk::GL::Drawable> retvalue =
        Glib::wrap((GdkGLDrawable*)(gdk_pixmap_get_gl_drawable(const_cast<GdkPixmap*>(Glib::unwrap<Gdk::Pixmap>(pixmap_)))));

      if(retvalue)
        retvalue->reference();

      return retvalue;
    }

  } // namespace GL
} // namespace Gdk
