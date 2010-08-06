// -*- C++ -*-
/* gtkglextmm - C++ Wrapper for GtkGLExt
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

#include <cstdlib>

#include <gtk/gtkglinit.h>

#include <gdkmm/gl/init.h>

#include "init.h"

namespace Gtk
{
  namespace GL
  {

    static bool _init_check(int* argc, char*** argv)
    {
      static bool init_done = false;
      static bool result = false;

      if (!init_done)
        {
          result = gtk_gl_init_check(argc, argv);

          result &= Gdk::GL::init_check(argc, argv);

          init_done = true;
        }

      return result;
    }

    bool init_check(int& argc, char**& argv)
    {
      return _init_check(&argc, &argv);
    }

    bool init_check(int* argc, char*** argv)
    {
      return _init_check(argc, argv);
    }

    void init(int& argc, char**& argv)
    {
      if (!_init_check(&argc, &argv))
        std::exit(1);
    }

    void init(int* argc, char*** argv)
    {
      if (!_init_check(argc, argv))
        std::exit(1);
    }

  } // namespace GL
} // namespace Gtk
