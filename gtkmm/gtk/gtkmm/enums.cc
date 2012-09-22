// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/enums.h>
#include <gtkmm/private/enums_p.h>

#include <gtk/gtk.h>

// -*- c++ -*-
/* $Id: enums.ccg,v 1.1 2003/01/21 13:38:48 murrayc Exp $ */

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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/enums.h>

// static
GType Glib::Value<Gtk::IconSize>::value_type()
{
  return gtk_icon_size_get_type();
}

namespace Gtk
{

float _gtkmm_align_float_from_enum(Align value)
{
  //Choose the float alignment value appropriate for this human-readable enum value:
  switch(value)
  {
    case ALIGN_START:
      return 0.0; break;
    case ALIGN_CENTER:
      return 0.5; break;
    case ALIGN_END:
      return 1.0; break;
    default:
      return _gtkmm_align_float_from_enum(ALIGN_START); break;
  }
}

} //namespace Gtk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::AccelFlags>::value_type()
{
  return gtk_accel_flags_get_type();
}

// static
GType Glib::Value<Gtk::Align>::value_type()
{
  return gtk_align_get_type();
}

// static
GType Glib::Value<Gtk::ArrowType>::value_type()
{
  return gtk_arrow_type_get_type();
}

// static
GType Glib::Value<Gtk::AttachOptions>::value_type()
{
  return gtk_attach_options_get_type();
}

// static
GType Glib::Value<Gtk::ButtonBoxStyle>::value_type()
{
  return gtk_button_box_style_get_type();
}

// static
GType Glib::Value<Gtk::DeleteType>::value_type()
{
  return gtk_delete_type_get_type();
}

// static
GType Glib::Value<Gtk::DirectionType>::value_type()
{
  return gtk_direction_type_get_type();
}

// static
GType Glib::Value<Gtk::ExpanderStyle>::value_type()
{
  return gtk_expander_style_get_type();
}

// static
GType Glib::Value<Gtk::BuiltinIconSize>::value_type()
{
  return gtk_icon_size_get_type();
}

// static
GType Glib::Value<Gtk::TextDirection>::value_type()
{
  return gtk_text_direction_get_type();
}

// static
GType Glib::Value<Gtk::Justification>::value_type()
{
  return gtk_justification_get_type();
}

// static
GType Glib::Value<Gtk::MenuDirectionType>::value_type()
{
  return gtk_menu_direction_type_get_type();
}

// static
GType Glib::Value<Gtk::MessageType>::value_type()
{
  return gtk_message_type_get_type();
}

// static
GType Glib::Value<Gtk::MovementStep>::value_type()
{
  return gtk_movement_step_get_type();
}

// static
GType Glib::Value<Gtk::Orientation>::value_type()
{
  return gtk_orientation_get_type();
}

// static
GType Glib::Value<Gtk::CornerType>::value_type()
{
  return gtk_corner_type_get_type();
}

// static
GType Glib::Value<Gtk::PackType>::value_type()
{
  return gtk_pack_type_get_type();
}

// static
GType Glib::Value<Gtk::PathPriorityType>::value_type()
{
  return gtk_path_priority_type_get_type();
}

// static
GType Glib::Value<Gtk::PathType>::value_type()
{
  return gtk_path_type_get_type();
}

// static
GType Glib::Value<Gtk::PolicyType>::value_type()
{
  return gtk_policy_type_get_type();
}

// static
GType Glib::Value<Gtk::PositionType>::value_type()
{
  return gtk_position_type_get_type();
}

// static
GType Glib::Value<Gtk::ReliefStyle>::value_type()
{
  return gtk_relief_style_get_type();
}

// static
GType Glib::Value<Gtk::ResizeMode>::value_type()
{
  return gtk_resize_mode_get_type();
}

// static
GType Glib::Value<Gtk::ScrollType>::value_type()
{
  return gtk_scroll_type_get_type();
}

// static
GType Glib::Value<Gtk::SelectionMode>::value_type()
{
  return gtk_selection_mode_get_type();
}

// static
GType Glib::Value<Gtk::ShadowType>::value_type()
{
  return gtk_shadow_type_get_type();
}

// static
GType Glib::Value<Gtk::StateType>::value_type()
{
  return gtk_state_type_get_type();
}

// static
GType Glib::Value<Gtk::TargetFlags>::value_type()
{
  return gtk_target_flags_get_type();
}

// static
GType Glib::Value<Gtk::ToolbarStyle>::value_type()
{
  return gtk_toolbar_style_get_type();
}

// static
GType Glib::Value<Gtk::WindowPosition>::value_type()
{
  return gtk_window_position_get_type();
}

// static
GType Glib::Value<Gtk::WindowType>::value_type()
{
  return gtk_window_type_get_type();
}

// static
GType Glib::Value<Gtk::WrapMode>::value_type()
{
  return gtk_wrap_mode_get_type();
}

// static
GType Glib::Value<Gtk::SortType>::value_type()
{
  return gtk_sort_type_get_type();
}

// static
GType Glib::Value<Gtk::PageOrientation>::value_type()
{
  return gtk_page_orientation_get_type();
}

// static
GType Glib::Value<Gtk::SensitivityType>::value_type()
{
  return gtk_sensitivity_type_get_type();
}

// static
GType Glib::Value<Gtk::SizeRequestMode>::value_type()
{
  return gtk_size_request_mode_get_type();
}

// static
GType Glib::Value<Gtk::RegionFlags>::value_type()
{
  return gtk_region_flags_get_type();
}

// static
GType Glib::Value<Gtk::JunctionSides>::value_type()
{
  return gtk_junction_sides_get_type();
}

// static
GType Glib::Value<Gtk::StateFlags>::value_type()
{
  return gtk_state_flags_get_type();
}


