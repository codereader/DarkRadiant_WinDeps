// Generated by gtkmmproc -- DO NOT MODIFY!


#include <pangomm/fontdescription.h>
#include <pangomm/private/fontdescription_p.h>

#include <pango/pango-enum-types.h>
// -*- c++ -*-
/* $Id: fontdescription.ccg,v 1.1 2003/01/21 13:41:03 murrayc Exp $ */

/*
 *
 * Copyright 1998-2002 The gtkmm Development Team
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

#include <glibmm/utility.h>


namespace Pango
{

FontDescription::FontDescription(const Glib::ustring& font_name)
{
  gobject_ = pango_font_description_from_string(font_name.c_str());
}

} // namespace Pango


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Pango::Style>::value_type()
{
  return pango_style_get_type();
}

// static
GType Glib::Value<Pango::Variant>::value_type()
{
  return pango_variant_get_type();
}

// static
GType Glib::Value<Pango::Stretch>::value_type()
{
  return pango_stretch_get_type();
}

// static
GType Glib::Value<Pango::Weight>::value_type()
{
  return pango_weight_get_type();
}

// static
GType Glib::Value<Pango::FontMask>::value_type()
{
  return pango_font_mask_get_type();
}

// static
GType Glib::Value<Pango::Gravity>::value_type()
{
  return pango_gravity_get_type();
}


namespace Glib
{

Pango::FontDescription wrap(PangoFontDescription* object, bool take_copy)
{
  return Pango::FontDescription(object, take_copy);
}

} // namespace Glib


namespace Pango
{


// static
GType FontDescription::get_type()
{
  return pango_font_description_get_type();
}

FontDescription::FontDescription()
:
  gobject_ (pango_font_description_new())
{}

FontDescription::FontDescription(const FontDescription& other)
:
  gobject_ ((other.gobject_) ? pango_font_description_copy(other.gobject_) : 0)
{}

FontDescription::FontDescription(PangoFontDescription* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? pango_font_description_copy(gobject) : gobject)
{}

FontDescription& FontDescription::operator=(const FontDescription& other)
{
  FontDescription temp (other);
  swap(temp);
  return *this;
}

FontDescription::~FontDescription()
{
  if(gobject_)
    pango_font_description_free(gobject_);
}

void FontDescription::swap(FontDescription& other)
{
  PangoFontDescription *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

PangoFontDescription* FontDescription::gobj_copy() const
{
  return pango_font_description_copy(gobject_);
}


guint FontDescription::hash() const
{
  return pango_font_description_hash(const_cast<PangoFontDescription*>(gobj()));
}

void FontDescription::set_family(const Glib::ustring& family)
{
pango_font_description_set_family(gobj(), family.c_str()); 
}

Glib::ustring FontDescription::get_family() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(pango_font_description_get_family(const_cast<PangoFontDescription*>(gobj())));
}

void FontDescription::set_style(Style style)
{
pango_font_description_set_style(gobj(), ((PangoStyle)(style))); 
}

Style FontDescription::get_style() const
{
  return ((Style)(pango_font_description_get_style(const_cast<PangoFontDescription*>(gobj()))));
}

void FontDescription::set_variant(Variant variant)
{
pango_font_description_set_variant(gobj(), ((PangoVariant)(variant))); 
}

Variant FontDescription::get_variant() const
{
  return ((Variant)(pango_font_description_get_variant(const_cast<PangoFontDescription*>(gobj()))));
}

void FontDescription::set_weight(Weight weight)
{
pango_font_description_set_weight(gobj(), ((PangoWeight)(weight))); 
}

Weight FontDescription::get_weight() const
{
  return ((Weight)(pango_font_description_get_weight(const_cast<PangoFontDescription*>(gobj()))));
}

void FontDescription::set_stretch(Stretch stretch)
{
pango_font_description_set_stretch(gobj(), ((PangoStretch)(stretch))); 
}

Stretch FontDescription::get_stretch() const
{
  return ((Stretch)(pango_font_description_get_stretch(const_cast<PangoFontDescription*>(gobj()))));
}

void FontDescription::set_size(int size)
{
pango_font_description_set_size(gobj(), size); 
}

int FontDescription::get_size() const
{
  return pango_font_description_get_size(const_cast<PangoFontDescription*>(gobj()));
}

void FontDescription::set_absolute_size(double size)
{
pango_font_description_set_absolute_size(gobj(), size); 
}

bool FontDescription::get_size_is_absolute() const
{
  return pango_font_description_get_size_is_absolute(const_cast<PangoFontDescription*>(gobj()));
}

void FontDescription::set_gravity(Gravity gravity)
{
pango_font_description_set_gravity(gobj(), ((PangoGravity)(gravity))); 
}

Gravity FontDescription::get_gravity() const
{
  return ((Gravity)(pango_font_description_get_gravity(const_cast<PangoFontDescription*>(gobj()))));
}

FontMask FontDescription::get_set_fields() const
{
  return ((FontMask)(pango_font_description_get_set_fields(const_cast<PangoFontDescription*>(gobj()))));
}

void FontDescription::unset_fields(FontMask to_unset)
{
pango_font_description_unset_fields(gobj(), ((PangoFontMask)(to_unset))); 
}

void FontDescription::merge(const FontDescription& desc_to_merge, bool replace_existing)
{
pango_font_description_merge(gobj(), (desc_to_merge).gobj(), static_cast<int>(replace_existing)); 
}

bool FontDescription::better_match(const FontDescription& old_match, const FontDescription& new_match) const
{
  return pango_font_description_better_match(const_cast<PangoFontDescription*>(gobj()), (old_match).gobj(), (new_match).gobj());
}

Glib::ustring FontDescription::to_string() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(pango_font_description_to_string(const_cast<PangoFontDescription*>(gobj())));
}

Glib::ustring FontDescription::to_filename() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(pango_font_description_to_filename(const_cast<PangoFontDescription*>(gobj())));
}


bool operator==(const FontDescription& lhs, const FontDescription& rhs)
{
  return (pango_font_description_equal(lhs.gobj(), rhs.gobj()) != 0);
}

bool operator!=(const FontDescription& lhs, const FontDescription& rhs)
{
  return (pango_font_description_equal(lhs.gobj(), rhs.gobj()) == 0);
}


} // namespace Pango


