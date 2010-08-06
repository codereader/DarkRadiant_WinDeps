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

#include <gdk/gdkglfont.h>

#include "font.h"

namespace Gdk
{
  namespace GL
  {

    Font::~Font()
    {}
 
    Glib::RefPtr<Pango::Font> Font::use_pango_font(const Pango::FontDescription& desc,
                                                   int first,
                                                   int count,
                                                   int list_base)
    {
      Glib::RefPtr<Pango::Font> retvalue =
        Glib::wrap(gdk_gl_font_use_pango_font(desc.gobj(),
                                              first, count, list_base));

      if (retvalue)
        retvalue->reference();

      return retvalue;
    }
 
#ifdef GDKGLEXTMM_MULTIHEAD_SUPPORT
    Glib::RefPtr<Pango::Font> Font::use_pango_font(const Glib::RefPtr<const Gdk::Display>& display,
                                                   const Pango::FontDescription& desc,
                                                   int first,
                                                   int count,
                                                   int list_base)
    {
      Glib::RefPtr<Pango::Font> retvalue =
        Glib::wrap(gdk_gl_font_use_pango_font_for_display(const_cast<GdkDisplay*>(Glib::unwrap<Gdk::Display>(display)),
                                                          desc.gobj(),
                                                          first, count, list_base));

      if (retvalue)
        retvalue->reference();

      return retvalue;
    }
#endif // GDKGLEXTMM_MULTIHEAD_SUPPORT

  } // namespace GL
} // namespace Gdk
