// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/texttag.h>
#include <gtkmm/private/texttag_p.h>

// -*- c++ -*-
/* $Id: texttag.ccg,v 1.2 2004/04/11 21:00:53 murrayc Exp $ */

/* 
 *
 * Copyright 1998-2002 The gtkmm Development Team
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

#include <gtkmm/textbuffer.h>
#include <gtkmm/textiter.h>
#include <gtk/gtk.h>

namespace
{


static gboolean TextTag_signal_event_callback(GtkTextTag* self, GObject* p0,GdkEvent* p1,const GtkTextIter* p2,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool,const Glib::RefPtr<Glib::Object>&,GdkEvent*,const TextIter& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, p1, Glib::wrap(p2)
));
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static gboolean TextTag_signal_event_notify_callback(GtkTextTag* self, GObject* p0,GdkEvent* p1,const GtkTextIter* p2, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::RefPtr<Glib::Object>&,GdkEvent*,const TextIter& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, p1, Glib::wrap(p2)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo TextTag_signal_event_info =
{
  "event",
  (GCallback) &TextTag_signal_event_callback,
  (GCallback) &TextTag_signal_event_notify_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::TextTag> wrap(GtkTextTag* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::TextTag>( dynamic_cast<Gtk::TextTag*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& TextTag_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TextTag_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_text_tag_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void TextTag_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  klass->event = &event_callback;
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
gboolean TextTag_Class::event_callback(GtkTextTag* self, GObject* p0, GdkEvent* p1, const GtkTextIter* p2)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        return static_cast<int>(obj->on_event(Glib::wrap(p0, true)
, p1, Glib::wrap(p2)
));
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->event)
    return (*base->event)(self, p0, p1, p2);

  typedef gboolean RType;
  return RType();
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* TextTag_Class::wrap_new(GObject* object)
{
  return new TextTag((GtkTextTag*)object);
}


/* The implementation: */

GtkTextTag* TextTag::gobj_copy()
{
  reference();
  return gobj();
}

TextTag::TextTag(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

TextTag::TextTag(GtkTextTag* castitem)
:
  Glib::Object((GObject*)(castitem))
{}

TextTag::~TextTag()
{}


TextTag::CppClassType TextTag::texttag_class_; // initialize static member

GType TextTag::get_type()
{
  return texttag_class_.init().get_type();
}

GType TextTag::get_base_type()
{
  return gtk_text_tag_get_type();
}


TextTag::TextTag()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(texttag_class_.init()))
{
  

}

TextTag::TextTag(const Glib::ustring& name)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(texttag_class_.init(), "name", name.c_str(), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<TextTag> TextTag::create()
{
  return Glib::RefPtr<TextTag>( new TextTag() );
}
Glib::RefPtr<TextTag> TextTag::create(const Glib::ustring& name)
{
  return Glib::RefPtr<TextTag>( new TextTag(name) );
}
int TextTag::get_priority() const
{
  return gtk_text_tag_get_priority(const_cast<GtkTextTag*>(gobj()));
}

void TextTag::set_priority(int priority)
{
gtk_text_tag_set_priority(gobj(), priority); 
}

bool TextTag::event(const Glib::RefPtr<Glib::Object>& event_object, GdkEvent* event, const TextIter& iter)
{
  return gtk_text_tag_event(gobj(), Glib::unwrap(event_object), event, (iter).gobj());
}


Glib::SignalProxy3< bool,const Glib::RefPtr<Glib::Object>&,GdkEvent*,const TextIter& > TextTag::signal_event()
{
  return Glib::SignalProxy3< bool,const Glib::RefPtr<Glib::Object>&,GdkEvent*,const TextIter& >(this, &TextTag_signal_event_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> TextTag::property_name() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Glib::ustring> TextTag::property_background() 
{
  return Glib::PropertyProxy_WriteOnly<Glib::ustring>(this, "background");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Glib::ustring> TextTag::property_foreground() 
{
  return Glib::PropertyProxy_WriteOnly<Glib::ustring>(this, "foreground");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Gdk::Color> TextTag::property_background_gdk() 
{
  return Glib::PropertyProxy<Gdk::Color>(this, "background-gdk");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Gdk::Color> TextTag::property_background_gdk() const
{
  return Glib::PropertyProxy_ReadOnly<Gdk::Color>(this, "background-gdk");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Gdk::Color> TextTag::property_foreground_gdk() 
{
  return Glib::PropertyProxy<Gdk::Color>(this, "foreground-gdk");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Gdk::Color> TextTag::property_foreground_gdk() const
{
  return Glib::PropertyProxy_ReadOnly<Gdk::Color>(this, "foreground-gdk");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<Gdk::Bitmap> > TextTag::property_background_stipple() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Bitmap> >(this, "background-stipple");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Bitmap> > TextTag::property_background_stipple() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Bitmap> >(this, "background-stipple");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<Gdk::Bitmap> > TextTag::property_foreground_stipple() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Bitmap> >(this, "foreground-stipple");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Bitmap> > TextTag::property_foreground_stipple() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Bitmap> >(this, "foreground-stipple");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> TextTag::property_font() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "font");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> TextTag::property_font() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "font");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::FontDescription> TextTag::property_font_desc() 
{
  return Glib::PropertyProxy<Pango::FontDescription>(this, "font-desc");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::FontDescription> TextTag::property_font_desc() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::FontDescription>(this, "font-desc");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> TextTag::property_family() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "family");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> TextTag::property_family() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "family");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::Style> TextTag::property_style() 
{
  return Glib::PropertyProxy<Pango::Style>(this, "style");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::Style> TextTag::property_style() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::Style>(this, "style");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::Variant> TextTag::property_variant() 
{
  return Glib::PropertyProxy<Pango::Variant>(this, "variant");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::Variant> TextTag::property_variant() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::Variant>(this, "variant");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_weight() 
{
  return Glib::PropertyProxy<int>(this, "weight");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_weight() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "weight");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::Stretch> TextTag::property_stretch() 
{
  return Glib::PropertyProxy<Pango::Stretch>(this, "stretch");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::Stretch> TextTag::property_stretch() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::Stretch>(this, "stretch");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_size() 
{
  return Glib::PropertyProxy<int>(this, "size");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_size() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "size");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> TextTag::property_size_points() 
{
  return Glib::PropertyProxy<double>(this, "size-points");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> TextTag::property_size_points() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "size-points");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> TextTag::property_scale() 
{
  return Glib::PropertyProxy<double>(this, "scale");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> TextTag::property_scale() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "scale");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_pixels_above_lines() 
{
  return Glib::PropertyProxy<int>(this, "pixels-above-lines");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_pixels_above_lines() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "pixels-above-lines");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_pixels_below_lines() 
{
  return Glib::PropertyProxy<int>(this, "pixels-below-lines");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_pixels_below_lines() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "pixels-below-lines");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_pixels_inside_wrap() 
{
  return Glib::PropertyProxy<int>(this, "pixels-inside-wrap");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_pixels_inside_wrap() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "pixels-inside-wrap");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_editable() 
{
  return Glib::PropertyProxy<bool>(this, "editable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_editable() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "editable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<WrapMode> TextTag::property_wrap_mode() 
{
  return Glib::PropertyProxy<WrapMode>(this, "wrap-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<WrapMode> TextTag::property_wrap_mode() const
{
  return Glib::PropertyProxy_ReadOnly<WrapMode>(this, "wrap-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Justification> TextTag::property_justification() 
{
  return Glib::PropertyProxy<Justification>(this, "justification");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Justification> TextTag::property_justification() const
{
  return Glib::PropertyProxy_ReadOnly<Justification>(this, "justification");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<TextDirection> TextTag::property_direction() 
{
  return Glib::PropertyProxy<TextDirection>(this, "direction");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<TextDirection> TextTag::property_direction() const
{
  return Glib::PropertyProxy_ReadOnly<TextDirection>(this, "direction");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_left_margin() 
{
  return Glib::PropertyProxy<int>(this, "left-margin");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_left_margin() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "left-margin");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_indent() 
{
  return Glib::PropertyProxy<int>(this, "indent");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_indent() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "indent");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_strikethrough() 
{
  return Glib::PropertyProxy<bool>(this, "strikethrough");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_strikethrough() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "strikethrough");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_right_margin() 
{
  return Glib::PropertyProxy<int>(this, "right-margin");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_right_margin() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "right-margin");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::Underline> TextTag::property_underline() 
{
  return Glib::PropertyProxy<Pango::Underline>(this, "underline");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::Underline> TextTag::property_underline() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::Underline>(this, "underline");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> TextTag::property_rise() 
{
  return Glib::PropertyProxy<int>(this, "rise");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> TextTag::property_rise() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "rise");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_background_full_height() 
{
  return Glib::PropertyProxy<bool>(this, "background-full-height");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_background_full_height() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "background-full-height");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> TextTag::property_language() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "language");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> TextTag::property_language() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "language");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::TabArray> TextTag::property_tabs() 
{
  return Glib::PropertyProxy<Pango::TabArray>(this, "tabs");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::TabArray> TextTag::property_tabs() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::TabArray>(this, "tabs");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_invisible() 
{
  return Glib::PropertyProxy<bool>(this, "invisible");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_invisible() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "invisible");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Glib::ustring> TextTag::property_paragraph_background() 
{
  return Glib::PropertyProxy_WriteOnly<Glib::ustring>(this, "paragraph-background");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Gdk::Color> TextTag::property_paragraph_background_gdk() 
{
  return Glib::PropertyProxy<Gdk::Color>(this, "paragraph-background-gdk");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Gdk::Color> TextTag::property_paragraph_background_gdk() const
{
  return Glib::PropertyProxy_ReadOnly<Gdk::Color>(this, "paragraph-background-gdk");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_accumulative_margin() 
{
  return Glib::PropertyProxy<bool>(this, "accumulative-margin");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_accumulative_margin() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "accumulative-margin");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_background_set() 
{
  return Glib::PropertyProxy<bool>(this, "background-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_background_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "background-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_foreground_set() 
{
  return Glib::PropertyProxy<bool>(this, "foreground-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_foreground_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "foreground-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_background_stipple_set() 
{
  return Glib::PropertyProxy<bool>(this, "background-stipple-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_background_stipple_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "background-stipple-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_foreground_stipple_set() 
{
  return Glib::PropertyProxy<bool>(this, "foreground-stipple-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_foreground_stipple_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "foreground-stipple-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_family_set() 
{
  return Glib::PropertyProxy<bool>(this, "family-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_family_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "family-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_style_set() 
{
  return Glib::PropertyProxy<bool>(this, "style-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_style_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "style-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_variant_set() 
{
  return Glib::PropertyProxy<bool>(this, "variant-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_variant_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "variant-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_weight_set() 
{
  return Glib::PropertyProxy<bool>(this, "weight-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_weight_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "weight-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_stretch_set() 
{
  return Glib::PropertyProxy<bool>(this, "stretch-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_stretch_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "stretch-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_size_set() 
{
  return Glib::PropertyProxy<bool>(this, "size-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_size_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "size-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_scale_set() 
{
  return Glib::PropertyProxy<bool>(this, "scale-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_scale_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "scale-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_pixels_above_lines_set() 
{
  return Glib::PropertyProxy<bool>(this, "pixels-above-lines-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_pixels_above_lines_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "pixels-above-lines-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_pixels_below_lines_set() 
{
  return Glib::PropertyProxy<bool>(this, "pixels-below-lines-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_pixels_below_lines_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "pixels-below-lines-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_pixels_inside_wrap_set() 
{
  return Glib::PropertyProxy<bool>(this, "pixels-inside-wrap-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_pixels_inside_wrap_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "pixels-inside-wrap-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_editable_set() 
{
  return Glib::PropertyProxy<bool>(this, "editable-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_editable_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "editable-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_wrap_mode_set() 
{
  return Glib::PropertyProxy<bool>(this, "wrap-mode-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_wrap_mode_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "wrap-mode-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_justification_set() 
{
  return Glib::PropertyProxy<bool>(this, "justification-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_justification_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "justification-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_left_margin_set() 
{
  return Glib::PropertyProxy<bool>(this, "left-margin-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_left_margin_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "left-margin-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_indent_set() 
{
  return Glib::PropertyProxy<bool>(this, "indent-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_indent_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "indent-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_strikethrough_set() 
{
  return Glib::PropertyProxy<bool>(this, "strikethrough-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_strikethrough_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "strikethrough-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_right_margin_set() 
{
  return Glib::PropertyProxy<bool>(this, "right-margin-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_right_margin_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "right-margin-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_underline_set() 
{
  return Glib::PropertyProxy<bool>(this, "underline-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_underline_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "underline-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_rise_set() 
{
  return Glib::PropertyProxy<bool>(this, "rise-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_rise_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "rise-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_background_full_height_set() 
{
  return Glib::PropertyProxy<bool>(this, "background-full-height-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_background_full_height_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "background-full-height-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_language_set() 
{
  return Glib::PropertyProxy<bool>(this, "language-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_language_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "language-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_tabs_set() 
{
  return Glib::PropertyProxy<bool>(this, "tabs-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_tabs_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "tabs-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_invisible_set() 
{
  return Glib::PropertyProxy<bool>(this, "invisible-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_invisible_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "invisible-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> TextTag::property_paragraph_background_set() 
{
  return Glib::PropertyProxy<bool>(this, "paragraph-background-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> TextTag::property_paragraph_background_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "paragraph-background-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
bool Gtk::TextTag::on_event(const Glib::RefPtr<Glib::Object>& event_object, GdkEvent* event, const TextIter& iter)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->event)
    return (*base->event)(gobj(),Glib::unwrap(event_object),event,(iter).gobj());

  typedef bool RType;
  return RType();
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


