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

#include <Windows.h>
#undef max

#include <gtk/gtkglwidget.h>

#include "widget.h"

namespace Gtk
{
  namespace GL
  {

    bool widget_set_gl_capability(Gtk::Widget& widget,
                                  const Glib::RefPtr<const Gdk::GL::Config>& glconfig,
                                  const Glib::RefPtr<const Gdk::GL::Context>& share_list,
                                  bool direct,
                                  int render_type)
    {
      return gtk_widget_set_gl_capability(widget.gobj(),
                                          const_cast<GdkGLConfig*>(Glib::unwrap<Gdk::GL::Config>(glconfig)),
                                          const_cast<GdkGLContext*>(Glib::unwrap<Gdk::GL::Context>(share_list)),
                                          direct,
                                          render_type);
    }

    bool widget_set_gl_capability(Gtk::Widget& widget,
                                  const Glib::RefPtr<const Gdk::GL::Config>& glconfig,
                                  bool direct,
                                  int render_type)
    {
      return gtk_widget_set_gl_capability(widget.gobj(),
                                          const_cast<GdkGLConfig*>(Glib::unwrap<Gdk::GL::Config>(glconfig)),
                                          0,
                                          direct,
                                          render_type);
    }

    bool widget_is_gl_capable(const Gtk::Widget& widget)
    {
      return gtk_widget_is_gl_capable(const_cast<GtkWidget*>(widget.gobj()));
    }

    Glib::RefPtr<Gdk::GL::Config> widget_get_gl_config(const Gtk::Widget& widget)
    {
      Glib::RefPtr<Gdk::GL::Config> retvalue =
        Glib::wrap(gtk_widget_get_gl_config(const_cast<GtkWidget*>(widget.gobj())));

      if (retvalue)
        retvalue->reference();

      return retvalue;
    }

    Glib::RefPtr<Gdk::GL::Context> widget_create_gl_context(const Gtk::Widget& widget,
                                                            const Glib::RefPtr<const Gdk::GL::Context>& share_list,
                                                            bool direct,
                                                            int render_type)
    {
      return Glib::wrap(gtk_widget_create_gl_context(const_cast<GtkWidget*>(widget.gobj()),
                                                     const_cast<GdkGLContext*>(Glib::unwrap<Gdk::GL::Context>(share_list)),
                                                     direct,
                                                     render_type));
    }

    Glib::RefPtr<Gdk::GL::Context> widget_create_gl_context(const Gtk::Widget& widget,
                                                            bool direct,
                                                            int render_type)
    {
      return Glib::wrap(gtk_widget_create_gl_context(const_cast<GtkWidget*>(widget.gobj()),
                                                     0,
                                                     direct,
                                                     render_type));
    }

    Glib::RefPtr<Gdk::GL::Context> widget_get_gl_context(const Gtk::Widget& widget)
    {
      Glib::RefPtr<Gdk::GL::Context> retvalue =
        Glib::wrap(gtk_widget_get_gl_context(const_cast<GtkWidget*>(widget.gobj())));

      if (retvalue)
        retvalue->reference();

      return retvalue;
    }

    Glib::RefPtr<Gdk::GL::Window> widget_get_gl_window(const Gtk::Widget& widget)
    {
      Glib::RefPtr<Gdk::GL::Window> retvalue =
        Glib::wrap(gtk_widget_get_gl_window(const_cast<GtkWidget*>(widget.gobj())));

      if (retvalue)
        retvalue->reference();

      return retvalue;
    }

    Glib::RefPtr<Gdk::GL::Drawable> widget_get_gl_drawable(const Gtk::Widget& widget)
    {
      Glib::RefPtr<Gdk::GL::Drawable> retvalue =
        Glib::wrap(gtk_widget_get_gl_drawable(const_cast<GtkWidget*>(widget.gobj())));

      if (retvalue)
        retvalue->reference();

      return retvalue;
    }

  } // namespace GL
} // namespace Gtk
