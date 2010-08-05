// Generated by gtkmmproc -- DO NOT MODIFY!


#include <pangomm/tabarray.h>
#include <pangomm/private/tabarray_p.h>

#include <pango/pango-enum-types.h>
// -*- c++ -*-
/* $Id: tabarray.ccg,v 1.2 2006/07/05 18:46:36 markoa Exp $ */

/*
 *
 * Copyright 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

namespace Pango
{

TabArray::TabArray(int initial_size, bool positions_in_pixels)
{
  gobject_ = pango_tab_array_new(initial_size, (gboolean)positions_in_pixels);
}

std::pair<TabAlign,int> TabArray::get_tab(int tab_index) const
{
  PangoTabAlign p_alignment;
  TabAlign alignment;
  int location;
  pango_tab_array_get_tab(const_cast<PangoTabArray*>(gobj()), tab_index, &p_alignment, &location);
  alignment = static_cast<TabAlign>(p_alignment);
  return std::pair<TabAlign,int>(alignment, location);
}

Glib::ArrayHandle< std::pair<TabAlign,int> > TabArray::get_tabs() const
{
  typedef std::pair<TabAlign,int> PairType;

  PairType* pair_buffer = 0;
  const int size = pango_tab_array_get_size(const_cast<PangoTabArray*>(gobj()));

  if(size > 0)
  {
    // Get arrays
    PangoTabAlign* pAlignments = 0;
    int*           pLocations  = 0;
    pango_tab_array_get_tabs(const_cast<PangoTabArray*>(gobj()), &pAlignments, &pLocations);

    if(pAlignments && pLocations)
    {
      // Create temporary C array.  Fortunately, the C++ type is POD,
      // so we can safely store it in the array.
      pair_buffer = g_new(PairType, size);

      for(int i = 0; i < size; ++i)
      {
        pair_buffer[i].first  = (TabAlign)(pAlignments[i]);
        pair_buffer[i].second = pLocations[i];
      }
    }

    g_free(pAlignments);
    g_free(pLocations);
  }

  return Glib::ArrayHandle<PairType>(pair_buffer, size, Glib::OWNERSHIP_SHALLOW);
}

} /* namespace Pango */


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Pango::TabAlign>::value_type()
{
  return pango_tab_align_get_type();
}


namespace Glib
{

Pango::TabArray wrap(PangoTabArray* object, bool take_copy)
{
  return Pango::TabArray(object, take_copy);
}

} // namespace Glib


namespace Pango
{


// static
GType TabArray::get_type()
{
  return pango_tab_array_get_type();
}

TabArray::TabArray()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

TabArray::TabArray(const TabArray& other)
:
  gobject_ ((other.gobject_) ? pango_tab_array_copy(other.gobject_) : 0)
{}

TabArray::TabArray(PangoTabArray* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? pango_tab_array_copy(gobject) : gobject)
{}

TabArray& TabArray::operator=(const TabArray& other)
{
  TabArray temp (other);
  swap(temp);
  return *this;
}

TabArray::~TabArray()
{
  if(gobject_)
    pango_tab_array_free(gobject_);
}

void TabArray::swap(TabArray& other)
{
  PangoTabArray *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

PangoTabArray* TabArray::gobj_copy() const
{
  return pango_tab_array_copy(gobject_);
}


int TabArray::get_size() const
{
  return pango_tab_array_get_size(const_cast<PangoTabArray*>(gobj()));
}

void TabArray::resize(int new_size)
{
pango_tab_array_resize(gobj(), new_size); 
}

void TabArray::set_tab(int tab_index, TabAlign alignment, int location)
{
pango_tab_array_set_tab(gobj(), tab_index, ((PangoTabAlign)(alignment)), location); 
}

bool TabArray::get_positions_in_pixels() const
{
  return pango_tab_array_get_positions_in_pixels(const_cast<PangoTabArray*>(gobj()));
}


} // namespace Pango


