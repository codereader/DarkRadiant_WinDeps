// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <pangomm/attributes.h>
#include <pangomm/private/attributes_p.h>

#include <pango/pango-enum-types.h>

/*
 *
 * Copyright 2002 Free Software Foundation
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

namespace Pango
{

Attribute::Attribute()
:
  gobject_(0)
{}

Attribute::Attribute(const Attribute& src)
:
  gobject_(src.gobject_ ? pango_attribute_copy(src.gobject_) : 0)
{}

Attribute::Attribute(PangoAttribute* castitem, bool take_copy)
{
  if(take_copy)
  {
    if(castitem)
      gobject_ = pango_attribute_copy(castitem);
    else
      gobject_ = 0;
  }
  else
  {
    // It was given to us by a function which has already made a copy for us to keep.
    gobject_ = castitem;
  }
}

Attribute::~Attribute()
{
  if(gobject_)
    pango_attribute_destroy(gobject_);
  gobject_ = 0;
}

Attribute& Attribute::operator=(const Attribute& src)
{
  PangoAttribute *const new_gobject = (src.gobject_ ? pango_attribute_copy(src.gobject_) : 0);

  if(gobject_)
    pango_attribute_destroy(gobject_);
  gobject_ = new_gobject;

  return *this;
}

AttrType Attribute::get_type() const
{
  return (AttrType) ((gobject_) ? gobj()->klass->type : PANGO_ATTR_INVALID);
}

AttrType Attribute::register_type(const Glib::ustring& name)
{
  return (AttrType)pango_attr_type_register(name.c_str());
}

AttrString Attribute::create_attr_family(const Glib::ustring& family)
{
  return Glib::wrap((PangoAttrString*)pango_attr_family_new(family.c_str()));
}

AttrLanguage Attribute::create_attr_language(const Language& language)
{
  return Glib::wrap((PangoAttrLanguage*)pango_attr_language_new(const_cast<PangoLanguage*>(language.gobj())));
}

AttrColor Attribute::create_attr_foreground(guint16 red, guint16 green, guint16 blue)
{
  return Glib::wrap((PangoAttrColor*)pango_attr_foreground_new(red, green, blue));
}

AttrColor Attribute::create_attr_background(guint16 red, guint16 green, guint16 blue)
{
  return Glib::wrap((PangoAttrColor*)pango_attr_background_new(red, green, blue));
}

AttrInt Attribute::create_attr_size(int size)
{
  return Glib::wrap((PangoAttrInt*)pango_attr_size_new(size));
}

AttrInt Attribute::create_attr_style(Style style)
{
  return Glib::wrap((PangoAttrInt*)pango_attr_style_new((PangoStyle)style));
}

AttrInt Attribute::create_attr_weight(Weight weight)
{
  return Glib::wrap((PangoAttrInt*)pango_attr_weight_new((PangoWeight)weight));
}

AttrInt Attribute::create_attr_variant(Variant variant)
{
  return Glib::wrap((PangoAttrInt*)pango_attr_variant_new((PangoVariant)variant));
}

AttrInt Attribute::create_attr_stretch(Stretch stretch)
{
  return Glib::wrap((PangoAttrInt*)pango_attr_stretch_new((PangoStretch)stretch));
}

AttrFontDesc Attribute::create_attr_font_desc(const FontDescription& desc)
{
  return Glib::wrap((PangoAttrFontDesc*)pango_attr_font_desc_new(desc.gobj()));
}

AttrInt Attribute::create_attr_underline(Underline underline)
{
  return Glib::wrap((PangoAttrInt*)pango_attr_underline_new((PangoUnderline)underline));
}

AttrInt Attribute::create_attr_strikethrough(bool strikethrough)
{
  return Glib::wrap((PangoAttrInt*)pango_attr_strikethrough_new(strikethrough));
}

AttrInt Attribute::create_attr_rise(int rise)
{
  return Glib::wrap((PangoAttrInt*)pango_attr_rise_new(rise));
}

AttrFloat Attribute::create_attr_scale(double scale_factor)
{
  return Glib::wrap((PangoAttrFloat*)pango_attr_scale_new(scale_factor));
}

AttrShape Attribute::create_attr_shape(const Rectangle& ink_rect, const Rectangle& logical_rect)
{
  return Glib::wrap((PangoAttrShape*)pango_attr_shape_new(ink_rect.gobj(), logical_rect.gobj()));
}


AttrString::AttrString()
{}

AttrString::AttrString(const AttrString& src)
:
  Attribute(src)
{}

AttrString::AttrString(PangoAttrString* castitem, bool take_copy)
:
  Attribute((PangoAttribute*)castitem, take_copy)
{}

AttrString& AttrString::operator=(const AttrString& src)
{
  Attribute::operator=(src);
  return *this;
}

void AttrString::set_string(const Glib::ustring& str)
{
  g_free(gobj()->value);
  gobj()->value = g_strdup(str.c_str());
}


AttrLanguage::AttrLanguage()
{}

AttrLanguage::AttrLanguage(const AttrLanguage& src)
:
  Attribute(src)
{}

AttrLanguage::AttrLanguage(PangoAttrLanguage* castitem, bool take_copy)
:
  Attribute((PangoAttribute*)castitem, take_copy)
{}

AttrLanguage& AttrLanguage::operator=(const AttrLanguage& src)
{
  Attribute::operator=(src);
  return *this;
}


AttrColor::AttrColor()
{}

AttrColor::AttrColor(const AttrColor& src)
:
  Attribute(src)
{}

AttrColor::AttrColor(PangoAttrColor* castitem, bool take_copy)
:
  Attribute((PangoAttribute*)castitem, take_copy)
{}

AttrColor& AttrColor::operator=(const AttrColor& src)
{
  Attribute::operator=(src);
  return *this;
}


AttrInt::AttrInt()
{}

AttrInt::AttrInt(const AttrInt& src)
:
  Attribute(src)
{}

AttrInt::AttrInt(PangoAttrInt* castitem, bool take_copy)
:
  Attribute((PangoAttribute*)castitem, take_copy)
{}

AttrInt& AttrInt::operator=(const AttrInt& src)
{
  Attribute::operator=(src);
  return *this;
}


AttrFloat::AttrFloat()
{}

AttrFloat::AttrFloat(const AttrFloat& src)
:
  Attribute(src)
{}

AttrFloat::AttrFloat(PangoAttrFloat* castitem, bool take_copy)
:
  Attribute((PangoAttribute*)castitem, take_copy)
{}

AttrFloat& AttrFloat::operator=(const AttrFloat& src)
{
  Attribute::operator=(src);
  return *this;
}


AttrFontDesc::AttrFontDesc()
{}

AttrFontDesc::AttrFontDesc(const AttrFontDesc& src)
:
  Attribute(src)
{}

AttrFontDesc::AttrFontDesc(PangoAttrFontDesc* castitem, bool take_copy)
:
  Attribute((PangoAttribute*)castitem, take_copy)
{}

AttrFontDesc& AttrFontDesc::operator=(const AttrFontDesc& src)
{
  Attribute::operator=(src);
  return *this;
}

void AttrFontDesc::set_desc(const FontDescription& desc)
{
  pango_font_description_free(gobj()->desc);
  gobj()->desc = pango_font_description_copy(desc.gobj());
}


AttrShape::AttrShape()
{}

AttrShape::AttrShape(const AttrShape& src)
:
  Attribute(src)
{}

AttrShape::AttrShape(PangoAttrShape* castitem, bool take_copy)
:
  Attribute((PangoAttribute*)castitem, take_copy)
{}

AttrShape& AttrShape::operator=(const AttrShape& src)
{
  Attribute::operator=(src);
  return *this;
}

} //namespace Pango


namespace Glib
{

Pango::Attribute wrap(PangoAttribute* object, bool take_copy)
{
  return Pango::Attribute(object, take_copy);
}

Pango::AttrString wrap(PangoAttrString* object, bool take_copy)
{
  return Pango::AttrString(object, take_copy);
}

Pango::AttrLanguage wrap(PangoAttrLanguage* object, bool take_copy)
{
  return Pango::AttrLanguage(object, take_copy);
}

Pango::AttrColor wrap(PangoAttrColor* object, bool take_copy)
{
  return Pango::AttrColor(object, take_copy);
}

Pango::AttrInt wrap(PangoAttrInt* object, bool take_copy)
{
  return Pango::AttrInt(object, take_copy);
}

Pango::AttrFloat wrap(PangoAttrFloat* object, bool take_copy)
{
  return Pango::AttrFloat(object, take_copy);
}

Pango::AttrFontDesc wrap(PangoAttrFontDesc* object, bool take_copy)
{
  return Pango::AttrFontDesc(object, take_copy);
}

Pango::AttrShape wrap(PangoAttrShape* object, bool take_copy)
{
  return Pango::AttrShape(object, take_copy);
}

} //namespace Glib


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Pango::AttrType>::value_type()
{
  return pango_attr_type_get_type();
}

// static
GType Glib::Value<Pango::Underline>::value_type()
{
  return pango_underline_get_type();
}


namespace Pango
{


 unsigned int Attribute::get_start_index() const
{
  return gobj()->start_index;
}
 
 unsigned int Attribute::get_end_index() const
{
  return gobj()->end_index;
}
 
 void Attribute::set_start_index(const unsigned int& value)
{
  gobj()->start_index = value;
}
 
 void Attribute::set_end_index(const unsigned int& value)
{
  gobj()->end_index = value;
}
 
bool Attribute::equal(const Attribute& attr2) const
{
  return pango_attribute_equal(const_cast<PangoAttribute*>(gobj()), (attr2).gobj());
}


} // namespace Pango


namespace Pango
{


 Glib::ustring AttrString::get_string() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gobj()->value);
}
 

} // namespace Pango


namespace Pango
{


 Language AttrLanguage::get_language() const
{
  return Language(gobj()->value);
}
 
 void AttrLanguage::set_language(const Language& value)
{
  gobj()->value = const_cast<PangoLanguage*>((value).gobj());
}
 

} // namespace Pango


namespace Pango
{


 Color AttrColor::get_color() const
{
  return Color(&(gobj()->color));
}
 
 void AttrColor::set_color(const Color& value)
{
  gobj()->color = *(value).gobj();
}
 

} // namespace Pango


namespace Pango
{


 int AttrInt::get_value() const
{
  return gobj()->value;
}
 
 void AttrInt::set_value(const int& value)
{
  gobj()->value = value;
}
 

} // namespace Pango


namespace Pango
{


 double AttrFloat::get_value() const
{
  return gobj()->value;
}
 
 void AttrFloat::set_value(const double& value)
{
  gobj()->value = value;
}
 

} // namespace Pango


namespace Pango
{


 FontDescription AttrFontDesc::get_desc() const
{
  return FontDescription((gobj()->desc));
}
 

} // namespace Pango


namespace Pango
{


 Rectangle AttrShape::get_ink_rect() const
{
  return Rectangle(&(gobj()->ink_rect));
}
 
 Rectangle AttrShape::get_logical_rect() const
{
  return Rectangle(&(gobj()->logical_rect));
}
 
 void AttrShape::set_ink_rect(const Rectangle& value)
{
  gobj()->ink_rect = *(value).gobj();
}
 
 void AttrShape::set_logical_rect(const Rectangle& value)
{
  gobj()->logical_rect = *(value).gobj();
}
 

} // namespace Pango


