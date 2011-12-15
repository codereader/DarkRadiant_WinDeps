// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <pangomm/fontmetrics.h>
#include <pangomm/private/fontmetrics_p.h>


// -*- c++ -*-
/* $Id: fontmetrics.ccg,v 1.1 2003/01/21 13:41:04 murrayc Exp $ */

/*
 *
 * Copyright 1998-1999 The Gtk-- Development Team
 * Copyright 2001      Free Software Foundation
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

namespace
{
} // anonymous namespace


namespace Glib
{

Pango::FontMetrics wrap(PangoFontMetrics* object, bool take_copy)
{
  return Pango::FontMetrics(object, take_copy);
}

} // namespace Glib


namespace Pango
{


// static
GType FontMetrics::get_type()
{
  return pango_font_metrics_get_type();
}

FontMetrics::FontMetrics()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

FontMetrics::FontMetrics(const FontMetrics& other)
:
  gobject_ ((other.gobject_) ? pango_font_metrics_ref(other.gobject_) : 0)
{}

FontMetrics::FontMetrics(PangoFontMetrics* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? pango_font_metrics_ref(gobject) : gobject)
{}

FontMetrics& FontMetrics::operator=(const FontMetrics& other)
{
  FontMetrics temp (other);
  swap(temp);
  return *this;
}

FontMetrics::~FontMetrics()
{
  if(gobject_)
    pango_font_metrics_unref(gobject_);
}

void FontMetrics::swap(FontMetrics& other)
{
  PangoFontMetrics *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

PangoFontMetrics* FontMetrics::gobj_copy() const
{
  return pango_font_metrics_ref(gobject_);
}


int FontMetrics::get_ascent() const
{
  return pango_font_metrics_get_ascent(const_cast<PangoFontMetrics*>(gobj()));
}

int FontMetrics::get_descent() const
{
  return pango_font_metrics_get_descent(const_cast<PangoFontMetrics*>(gobj()));
}

int FontMetrics::get_approximate_char_width() const
{
  return pango_font_metrics_get_approximate_char_width(const_cast<PangoFontMetrics*>(gobj()));
}

int FontMetrics::get_approximate_digit_width() const
{
  return pango_font_metrics_get_approximate_digit_width(const_cast<PangoFontMetrics*>(gobj()));
}

int FontMetrics::get_underline_position() const
{
  return pango_font_metrics_get_underline_position(const_cast<PangoFontMetrics*>(gobj()));
}

int FontMetrics::get_underline_thickness() const
{
  return pango_font_metrics_get_underline_thickness(const_cast<PangoFontMetrics*>(gobj()));
}

int FontMetrics::get_strikethrough_position() const
{
  return pango_font_metrics_get_strikethrough_position(const_cast<PangoFontMetrics*>(gobj()));
}

int FontMetrics::get_strikethrough_thickness() const
{
  return pango_font_metrics_get_strikethrough_thickness(const_cast<PangoFontMetrics*>(gobj()));
}


} // namespace Pango


