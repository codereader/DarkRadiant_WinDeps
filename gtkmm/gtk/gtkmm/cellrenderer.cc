// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/cellrenderer.h>
#include <gtkmm/private/cellrenderer_p.h>

// -*- c++ -*-
/* $Id: cellrenderer.ccg,v 1.2 2006/05/10 20:59:27 murrayc Exp $ */

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtk/gtk.h>

namespace Gtk
{

void CellRenderer::get_size(Widget& widget, int& x_offset, int& y_offset, int& width, int& height) const
{
  gtk_cell_renderer_get_size(const_cast<GtkCellRenderer*>(gobj()), widget.gobj(), 0, &x_offset, &y_offset, &width, &height);
}

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_Base CellRenderer::_property_renderable()
{
  g_assert_not_reached();
  return Glib::PropertyProxy<int>(0, 0); // shut up warnings
}
#else
Glib::ustring CellRenderer::_property_renderable()
{
  g_assert_not_reached();
  return Glib::ustring();
}
#endif //GLIBMM_PROPERTIES_ENABLED

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo CellRenderer_signal_editing_canceled_info =
{
  "editing_canceled",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static void CellRenderer_signal_editing_started_callback(GtkCellRenderer* self, GtkCellEditable* p0,const gchar* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,CellEditable*,const Glib::ustring& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(dynamic_cast<CellEditable*>(Glib::wrap_auto((GObject*)(p0), false))
, Glib::convert_const_gchar_ptr_to_ustring(p1)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo CellRenderer_signal_editing_started_info =
{
  "editing_started",
  (GCallback) &CellRenderer_signal_editing_started_callback,
  (GCallback) &CellRenderer_signal_editing_started_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::CellRendererState>::value_type()
{
  return gtk_cell_renderer_state_get_type();
}

// static
GType Glib::Value<Gtk::CellRendererMode>::value_type()
{
  return gtk_cell_renderer_mode_get_type();
}


namespace Glib
{

Gtk::CellRenderer* wrap(GtkCellRenderer* object, bool take_copy)
{
  return dynamic_cast<Gtk::CellRenderer *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CellRenderer_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CellRenderer_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_cell_renderer_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}

void CellRenderer_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
  klass->get_size = &get_size_vfunc_callback;
  klass->render = &render_vfunc_callback;
  klass->activate = &activate_vfunc_callback;
  klass->start_editing = &start_editing_vfunc_callback;
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  klass->editing_canceled = &editing_canceled_callback;
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
void CellRenderer_Class::get_size_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height)
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
        obj->get_size_vfunc(*Glib::wrap(widget)
, &Glib::wrap(cell_area)
, x_offset
, y_offset
, width
, height
);
        return;
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
  if(base && base->get_size)
    (*base->get_size)(self, widget, cell_area, x_offset, y_offset, width, height);

}
void CellRenderer_Class::render_vfunc_callback(GtkCellRenderer* self, GdkDrawable* window, GtkWidget* widget, GdkRectangle* background_area, GdkRectangle* cell_area, GdkRectangle* expose_area, GtkCellRendererState flags)
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
        obj->render_vfunc(Glib::wrap(window, true)
, *Glib::wrap(widget)
, Glib::wrap(background_area)
, Glib::wrap(cell_area)
, Glib::wrap(expose_area)
, ((CellRendererState)(flags))
);
        return;
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
  if(base && base->render)
    (*base->render)(self, window, widget, background_area, cell_area, expose_area, flags);

}
gboolean CellRenderer_Class::activate_vfunc_callback(GtkCellRenderer* self, GdkEvent* event, GtkWidget* widget, const gchar* path, GdkRectangle* background_area, GdkRectangle* cell_area, GtkCellRendererState flags)
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
        return static_cast<int>(obj->activate_vfunc(event, *Glib::wrap(widget)
, Glib::convert_const_gchar_ptr_to_ustring(path)
, Glib::wrap(background_area)
, Glib::wrap(cell_area)
, ((CellRendererState)(flags))
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
  if(base && base->activate)
    return (*base->activate)(self, event, widget, path, background_area, cell_area, flags);


  typedef gboolean RType;
  return RType();
}
GtkCellEditable* CellRenderer_Class::start_editing_vfunc_callback(GtkCellRenderer* self, GdkEvent* event, GtkWidget* widget, const gchar* path, GdkRectangle* background_area, GdkRectangle* cell_area, GtkCellRendererState flags)
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
        return Glib::unwrap(obj->start_editing_vfunc(event, *Glib::wrap(widget)
, Glib::convert_const_gchar_ptr_to_ustring(path)
, Glib::wrap(background_area)
, Glib::wrap(cell_area)
, ((CellRendererState)(flags))
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
  if(base && base->start_editing)
    return (*base->start_editing)(self, event, widget, path, background_area, cell_area, flags);


  typedef GtkCellEditable* RType;
  return RType();
}
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void CellRenderer_Class::editing_canceled_callback(GtkCellRenderer* self)
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
        obj->on_editing_canceled();
        return;
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
  if(base && base->editing_canceled)
    (*base->editing_canceled)(self);
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* CellRenderer_Class::wrap_new(GObject* o)
{
  return manage(new CellRenderer((GtkCellRenderer*)(o)));

}


/* The implementation: */

CellRenderer::CellRenderer(const Glib::ConstructParams& construct_params)
:
  Gtk::Object(construct_params)
{
  }

CellRenderer::CellRenderer(GtkCellRenderer* castitem)
:
  Gtk::Object((GtkObject*)(castitem))
{
  }

CellRenderer::~CellRenderer()
{
  destroy_();
}

CellRenderer::CppClassType CellRenderer::cellrenderer_class_; // initialize static member

GType CellRenderer::get_type()
{
  return cellrenderer_class_.init().get_type();
}

GType CellRenderer::get_base_type()
{
  return gtk_cell_renderer_get_type();
}


void CellRenderer::get_size(Widget& widget, const Gdk::Rectangle& cell_area, int& x_offset, int& y_offset, int& width, int& height) const
{
gtk_cell_renderer_get_size(const_cast<GtkCellRenderer*>(gobj()), (widget).gobj(), (cell_area).gobj(), &x_offset, &y_offset, &width, &height); 
}

void CellRenderer::render(const Glib::RefPtr<Gdk::Window>& window, Widget& widget, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, const Gdk::Rectangle& expose_area, CellRendererState flags)
{
gtk_cell_renderer_render(gobj(), Glib::unwrap(window), (widget).gobj(), (background_area).gobj(), (cell_area).gobj(), (expose_area).gobj(), ((GtkCellRendererState)(flags))); 
}

bool CellRenderer::activate(GdkEvent* event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags)
{
  return gtk_cell_renderer_activate(gobj(), event, (widget).gobj(), path.c_str(), (background_area).gobj(), (cell_area).gobj(), ((GtkCellRendererState)(flags)));
}

CellEditable* CellRenderer::start_editing(GdkEvent* event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags)
{
  return dynamic_cast<CellEditable*>(Glib::wrap_auto((GObject*)(gtk_cell_renderer_start_editing(gobj(), event, (widget).gobj(), path.c_str(), (background_area).gobj(), (cell_area).gobj(), ((GtkCellRendererState)(flags)))), false));
}

void CellRenderer::set_fixed_size(int width, int height)
{
gtk_cell_renderer_set_fixed_size(gobj(), width, height); 
}

void CellRenderer::get_fixed_size(int& width, int& height) const
{
gtk_cell_renderer_get_fixed_size(const_cast<GtkCellRenderer*>(gobj()), &width, &height); 
}

#ifndef GTKMM_DISABLE_DEPRECATED

void CellRenderer::editing_canceled()
{
gtk_cell_renderer_editing_canceled(gobj()); 
}

#endif // GTKMM_DISABLE_DEPRECATED

void CellRenderer::stop_editing(bool canceled)
{
gtk_cell_renderer_stop_editing(gobj(), static_cast<int>(canceled)); 
}

CellRenderer::CellRenderer()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Object(Glib::ConstructParams(cellrenderer_class_.init()))
{
  

}


Glib::SignalProxy0< void > CellRenderer::signal_editing_canceled()
{
  return Glib::SignalProxy0< void >(this, &CellRenderer_signal_editing_canceled_info);
}


Glib::SignalProxy2< void,CellEditable*,const Glib::ustring& > CellRenderer::signal_editing_started()
{
  return Glib::SignalProxy2< void,CellEditable*,const Glib::ustring& >(this, &CellRenderer_signal_editing_started_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<CellRendererMode> CellRenderer::property_mode() 
{
  return Glib::PropertyProxy<CellRendererMode>(this, "mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<CellRendererMode> CellRenderer::property_mode() const
{
  return Glib::PropertyProxy_ReadOnly<CellRendererMode>(this, "mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> CellRenderer::property_visible() 
{
  return Glib::PropertyProxy<bool>(this, "visible");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> CellRenderer::property_visible() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "visible");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> CellRenderer::property_sensitive() 
{
  return Glib::PropertyProxy<bool>(this, "sensitive");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> CellRenderer::property_sensitive() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "sensitive");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<float> CellRenderer::property_xalign() 
{
  return Glib::PropertyProxy<float>(this, "xalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<float> CellRenderer::property_xalign() const
{
  return Glib::PropertyProxy_ReadOnly<float>(this, "xalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<float> CellRenderer::property_yalign() 
{
  return Glib::PropertyProxy<float>(this, "yalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<float> CellRenderer::property_yalign() const
{
  return Glib::PropertyProxy_ReadOnly<float>(this, "yalign");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<unsigned int> CellRenderer::property_xpad() 
{
  return Glib::PropertyProxy<unsigned int>(this, "xpad");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<unsigned int> CellRenderer::property_xpad() const
{
  return Glib::PropertyProxy_ReadOnly<unsigned int>(this, "xpad");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<unsigned int> CellRenderer::property_ypad() 
{
  return Glib::PropertyProxy<unsigned int>(this, "ypad");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<unsigned int> CellRenderer::property_ypad() const
{
  return Glib::PropertyProxy_ReadOnly<unsigned int>(this, "ypad");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> CellRenderer::property_width() 
{
  return Glib::PropertyProxy<int>(this, "width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> CellRenderer::property_width() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> CellRenderer::property_height() 
{
  return Glib::PropertyProxy<int>(this, "height");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> CellRenderer::property_height() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "height");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> CellRenderer::property_is_expander() 
{
  return Glib::PropertyProxy<bool>(this, "is-expander");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> CellRenderer::property_is_expander() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "is-expander");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> CellRenderer::property_is_expanded() 
{
  return Glib::PropertyProxy<bool>(this, "is-expanded");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> CellRenderer::property_is_expanded() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "is-expanded");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Glib::ustring> CellRenderer::property_cell_background() 
{
  return Glib::PropertyProxy_WriteOnly<Glib::ustring>(this, "cell-background");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Gdk::Color> CellRenderer::property_cell_background_gdk() 
{
  return Glib::PropertyProxy<Gdk::Color>(this, "cell-background-gdk");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Gdk::Color> CellRenderer::property_cell_background_gdk() const
{
  return Glib::PropertyProxy_ReadOnly<Gdk::Color>(this, "cell-background-gdk");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> CellRenderer::property_cell_background_set() 
{
  return Glib::PropertyProxy<bool>(this, "cell-background-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> CellRenderer::property_cell_background_set() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "cell-background-set");
}
#endif //GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void Gtk::CellRenderer::on_editing_canceled()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->editing_canceled)
    (*base->editing_canceled)(gobj());
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
void Gtk::CellRenderer::get_size_vfunc(Widget& widget, const Gdk::Rectangle* cell_area, int* x_offset, int* y_offset, int* width, int* height) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_size)
    (*base->get_size)(const_cast<GtkCellRenderer*>(gobj()),(widget).gobj(),Glib::unwrap(const_cast<Gdk::Rectangle*>(cell_area)),x_offset,y_offset,width,height);
}
void Gtk::CellRenderer::render_vfunc(const Glib::RefPtr<Gdk::Drawable>& window, Widget& widget, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, const Gdk::Rectangle& expose_area, CellRendererState flags) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->render)
    (*base->render)(gobj(),Glib::unwrap(window),(widget).gobj(),const_cast<GdkRectangle*>(background_area.gobj()),const_cast<GdkRectangle*>(cell_area.gobj()),const_cast<GdkRectangle*>(expose_area.gobj()),((GtkCellRendererState)(flags)));
}
bool Gtk::CellRenderer::activate_vfunc(GdkEvent* event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->activate)
    return (*base->activate)(gobj(),event,(widget).gobj(),path.c_str(),const_cast<GdkRectangle*>(background_area.gobj()),const_cast<GdkRectangle*>(cell_area.gobj()),((GtkCellRendererState)(flags)));

  typedef bool RType;
  return RType();
}
CellEditable* Gtk::CellRenderer::start_editing_vfunc(GdkEvent* event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->start_editing)
    return dynamic_cast<CellEditable*>(Glib::wrap_auto((GObject*)((*base->start_editing)(gobj(),event,(widget).gobj(),path.c_str(),const_cast<GdkRectangle*>(background_area.gobj()),const_cast<GdkRectangle*>(cell_area.gobj()),((GtkCellRendererState)(flags)))), false));

  typedef CellEditable* RType;
  return RType();
}
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


