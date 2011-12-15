// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/printsettings.h>
#include <gtkmm/private/printsettings_p.h>

/* Copyright (C) 2006 The gtkmm Development Team
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

#include <vector>

#include <glib.h>

namespace // anonymous
{

static void proxy_foreach_callback(const gchar* key, const gchar* value, void* data)
{
  typedef Gtk::PrintSettings::SlotForeach SlotType;
  SlotType& slot = *static_cast<SlotType*>(data);

  try
  {
    slot(Glib::convert_const_gchar_ptr_to_ustring(key), Glib::convert_const_gchar_ptr_to_ustring(value));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

} // anonymous namespace

namespace Gtk
{

//Initialize static members:
const Glib::ustring PrintSettings::Keys::PRINTER = GTK_PRINT_SETTINGS_PRINTER;
const Glib::ustring PrintSettings::Keys::ORIENTATION = GTK_PRINT_SETTINGS_ORIENTATION;
const Glib::ustring PrintSettings::Keys::PAPER_FORMAT = GTK_PRINT_SETTINGS_PAPER_FORMAT;
const Glib::ustring PrintSettings::Keys::PAPER_WIDTH = GTK_PRINT_SETTINGS_PAPER_WIDTH;
const Glib::ustring PrintSettings::Keys::PAPER_HEIGHT = GTK_PRINT_SETTINGS_PAPER_HEIGHT;
const Glib::ustring PrintSettings::Keys::NUM_COPIES = GTK_PRINT_SETTINGS_N_COPIES;
const Glib::ustring PrintSettings::Keys::DEFAULT_SOURCE = GTK_PRINT_SETTINGS_DEFAULT_SOURCE;
const Glib::ustring PrintSettings::Keys::QUALITY = GTK_PRINT_SETTINGS_QUALITY;
const Glib::ustring PrintSettings::Keys::RESOLUTION = GTK_PRINT_SETTINGS_RESOLUTION;
const Glib::ustring PrintSettings::Keys::USE_COLOR = GTK_PRINT_SETTINGS_USE_COLOR;
const Glib::ustring PrintSettings::Keys::DUPLEX = GTK_PRINT_SETTINGS_DUPLEX;
const Glib::ustring PrintSettings::Keys::COLLATE = GTK_PRINT_SETTINGS_COLLATE;
const Glib::ustring PrintSettings::Keys::REVERSE = GTK_PRINT_SETTINGS_REVERSE;
const Glib::ustring PrintSettings::Keys::MEDIA_TYPE = GTK_PRINT_SETTINGS_MEDIA_TYPE;
const Glib::ustring PrintSettings::Keys::DITHER = GTK_PRINT_SETTINGS_DITHER;
const Glib::ustring PrintSettings::Keys::SCALE = GTK_PRINT_SETTINGS_SCALE;
const Glib::ustring PrintSettings::Keys::PRINT_PAGES = GTK_PRINT_SETTINGS_PRINT_PAGES;
const Glib::ustring PrintSettings::Keys::PAGE_RANGES = GTK_PRINT_SETTINGS_PAGE_RANGES;
const Glib::ustring PrintSettings::Keys::PAGE_SET = GTK_PRINT_SETTINGS_PAGE_SET;
const Glib::ustring PrintSettings::Keys::FINISHINGS = GTK_PRINT_SETTINGS_FINISHINGS;
const Glib::ustring PrintSettings::Keys::NUMBER_UP = GTK_PRINT_SETTINGS_NUMBER_UP;
const Glib::ustring PrintSettings::Keys::OUTPUT_BIN = GTK_PRINT_SETTINGS_OUTPUT_BIN;

const Glib::ustring PrintSettings::Keys::OUTPUT_FILE_FORMAT = GTK_PRINT_SETTINGS_OUTPUT_FILE_FORMAT;
const Glib::ustring PrintSettings::Keys::OUTPUT_URI = GTK_PRINT_SETTINGS_OUTPUT_URI;

const Glib::ustring PrintSettings::Keys::WIN32_DRIVER_VERSION = GTK_PRINT_SETTINGS_WIN32_DRIVER_VERSION;
const Glib::ustring PrintSettings::Keys::WIN32_DRIVER_EXTRA = GTK_PRINT_SETTINGS_WIN32_DRIVER_EXTRA;

Glib::RefPtr<PrintSettings> PrintSettings::create_from_key_file(const Glib::KeyFile& key_file)
{
  Glib::RefPtr<PrintSettings> result = PrintSettings::create();

  result->load_from_key_file(key_file);

  return result;
}

Glib::RefPtr<PrintSettings> PrintSettings::create_from_key_file(const Glib::KeyFile& key_file, const Glib::ustring& group_name)
{
  Glib::RefPtr<PrintSettings> result = PrintSettings::create();

  result->load_from_key_file(key_file, group_name);

  return result;
}

Glib::RefPtr<PrintSettings> PrintSettings::create_from_file(const std::string& file_name)
{
  Glib::RefPtr<PrintSettings> result = PrintSettings::create();

  result->load_from_file(file_name);

  return result;
}

void PrintSettings::setting_foreach(const SlotForeach& slot)
{
  SlotForeach slot_copy(slot);
  gtk_print_settings_foreach(const_cast<GtkPrintSettings*>(gobj()), &proxy_foreach_callback, &slot_copy);
}

PrintSettings::PageRange::PageRange()
:
  start(0),
  end(0)
{}

PrintSettings::PageRange::PageRange(int start_, int end_)
:
  start(start_),
  end(end_)
{}

Glib::ArrayHandle<PrintSettings::PageRange> PrintSettings::get_page_ranges() const
{
  int num_ranges;
  GtkPageRange* page_ranges =
    gtk_print_settings_get_page_ranges(const_cast<GtkPrintSettings*>(gobj()), &num_ranges);
  std::vector<PrintSettings::PageRange> v(num_ranges);

  for (int i = 0; i < num_ranges; ++i)
  {
    v.push_back(PrintSettings::PageRange(page_ranges[i].start, page_ranges[i].end));
  }

  g_free(page_ranges);

  Glib::ArrayHandle<PrintSettings::PageRange> ah(v);

  return ah;
}

void PrintSettings::set_page_ranges(const Glib::ArrayHandle<PrintSettings::PageRange>& page_ranges)
{
  int n = page_ranges.size();
  GtkPageRange* ranges = g_new0(GtkPageRange, n);
  std::vector<PrintSettings::PageRange> v_ranges(page_ranges);

  for (int i = 0; i < n; ++i)
  {
    ranges[i].start = v_ranges[i].start;
    ranges[i].end = v_ranges[i].end;
  }

  gtk_print_settings_set_page_ranges(const_cast<GtkPrintSettings*>(gobj()), ranges, n);
  g_free(ranges);
}


bool PrintSettings::load_from_key_file(const Glib::KeyFile& key_file)
{
  GError* gerror = 0;
  bool retvalue = gtk_print_settings_load_key_file(gobj(), const_cast<GKeyFile*>((key_file).gobj()), NULL, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}


#ifndef GTKMM_DISABLE_DEPRECATED
void PrintSettings::save_to_key_file(Glib::KeyFile& key_file)
{
  gtk_print_settings_to_key_file(gobj(), (key_file).gobj(), 0); 
}
#endif //GTKMM_DISABLE_DEPRECATED

void PrintSettings::save_to_key_file(Glib::KeyFile& key_file) const
{
  gtk_print_settings_to_key_file(const_cast<GtkPrintSettings*>(gobj()), (key_file).gobj(), 0); 
}

} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::PrintDuplex>::value_type()
{
  return gtk_print_duplex_get_type();
}

// static
GType Glib::Value<Gtk::PrintQuality>::value_type()
{
  return gtk_print_quality_get_type();
}

// static
GType Glib::Value<Gtk::PrintPages>::value_type()
{
  return gtk_print_pages_get_type();
}

// static
GType Glib::Value<Gtk::PageSet>::value_type()
{
  return gtk_page_set_get_type();
}

// static
GType Glib::Value<Gtk::NumberUpLayout>::value_type()
{
  return gtk_number_up_layout_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::PrintSettings> wrap(GtkPrintSettings* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::PrintSettings>( dynamic_cast<Gtk::PrintSettings*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& PrintSettings_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PrintSettings_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_print_settings_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void PrintSettings_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* PrintSettings_Class::wrap_new(GObject* object)
{
  return new PrintSettings((GtkPrintSettings*)object);
}


/* The implementation: */

GtkPrintSettings* PrintSettings::gobj_copy()
{
  reference();
  return gobj();
}

PrintSettings::PrintSettings(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

PrintSettings::PrintSettings(GtkPrintSettings* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


PrintSettings::~PrintSettings()
{}


PrintSettings::CppClassType PrintSettings::printsettings_class_; // initialize static member

GType PrintSettings::get_type()
{
  return printsettings_class_.init().get_type();
}


GType PrintSettings::get_base_type()
{
  return gtk_print_settings_get_type();
}


PrintSettings::PrintSettings()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(printsettings_class_.init()))
{
  

}

Glib::RefPtr<PrintSettings> PrintSettings::create()
{
  return Glib::RefPtr<PrintSettings>( new PrintSettings() );
}

Glib::RefPtr<PrintSettings> PrintSettings::copy() const
{
  return Glib::wrap(gtk_print_settings_copy(const_cast<GtkPrintSettings*>(gobj())));
}

bool PrintSettings::load_from_file(const std::string& file_name)
{
  GError* gerror = 0;
  bool retvalue = gtk_print_settings_load_file(gobj(), file_name.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

bool PrintSettings::load_from_key_file(const Glib::KeyFile& key_file, const Glib::ustring& group_name)
{
  GError* gerror = 0;
  bool retvalue = gtk_print_settings_load_key_file(gobj(), const_cast<GKeyFile*>((key_file).gobj()), group_name.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

bool PrintSettings::save_to_file(const std::string& file_name) const
{
  GError* gerror = 0;
  bool retvalue = gtk_print_settings_to_file(const_cast<GtkPrintSettings*>(gobj()), file_name.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

void PrintSettings::save_to_key_file(Glib::KeyFile& key_file, const Glib::ustring& group_name) const
{
gtk_print_settings_to_key_file(const_cast<GtkPrintSettings*>(gobj()), (key_file).gobj(), group_name.c_str()); 
}

bool PrintSettings::has_key(const Glib::ustring& key) const
{
  return gtk_print_settings_has_key(const_cast<GtkPrintSettings*>(gobj()), key.c_str());
}

Glib::ustring PrintSettings::get(const Glib::ustring& key) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_print_settings_get(const_cast<GtkPrintSettings*>(gobj()), key.c_str()));
}

void PrintSettings::set(const Glib::ustring& key, const Glib::ustring& value)
{
gtk_print_settings_set(gobj(), key.c_str(), value.c_str()); 
}

void PrintSettings::unset(const Glib::ustring& key)
{
gtk_print_settings_unset(gobj(), key.c_str()); 
}

bool PrintSettings::get_bool(const Glib::ustring& key) const
{
  return gtk_print_settings_get_bool(const_cast<GtkPrintSettings*>(gobj()), key.c_str());
}

void PrintSettings::set_bool(const Glib::ustring& key, bool value)
{
gtk_print_settings_set_bool(gobj(), key.c_str(), static_cast<int>(value)); 
}

double PrintSettings::get_double(const Glib::ustring& key) const
{
  return gtk_print_settings_get_double(const_cast<GtkPrintSettings*>(gobj()), key.c_str());
}

double PrintSettings::get_double_with_default(const Glib::ustring& key, double def) const
{
  return gtk_print_settings_get_double_with_default(const_cast<GtkPrintSettings*>(gobj()), key.c_str(), def);
}

void PrintSettings::set_double(const Glib::ustring& key, double value)
{
gtk_print_settings_set_double(gobj(), key.c_str(), value); 
}

double PrintSettings::get_length(const Glib::ustring& key, Unit unit) const
{
  return gtk_print_settings_get_length(const_cast<GtkPrintSettings*>(gobj()), key.c_str(), ((GtkUnit)(unit)));
}

void PrintSettings::set_length(const Glib::ustring& key, double value, Unit unit)
{
gtk_print_settings_set_length(gobj(), key.c_str(), value, ((GtkUnit)(unit))); 
}

int PrintSettings::get_int(const Glib::ustring& key) const
{
  return gtk_print_settings_get_int(const_cast<GtkPrintSettings*>(gobj()), key.c_str());
}

int PrintSettings::get_int_with_default(const Glib::ustring& key, int def) const
{
  return gtk_print_settings_get_int_with_default(const_cast<GtkPrintSettings*>(gobj()), key.c_str(), def);
}

void PrintSettings::set_int(const Glib::ustring& key, int value)
{
gtk_print_settings_set_int(gobj(), key.c_str(), value); 
}

Glib::ustring PrintSettings::get_printer() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_print_settings_get_printer(const_cast<GtkPrintSettings*>(gobj())));
}

void PrintSettings::set_printer(const Glib::ustring& name)
{
gtk_print_settings_set_printer(gobj(), name.c_str()); 
}

PageOrientation PrintSettings::get_orientation() const
{
  return (PageOrientation)gtk_print_settings_get_orientation(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_orientation(PageOrientation orientation)
{
gtk_print_settings_set_orientation(gobj(), ((GtkPageOrientation)(orientation))); 
}

PaperSize PrintSettings::get_paper_size()
{
  return Glib::wrap(gtk_print_settings_get_paper_size(gobj()), true);
}

const PaperSize PrintSettings::get_paper_size() const
{
  return const_cast<PrintSettings*>(this)->get_paper_size();
}

void PrintSettings::set_paper_size(const PaperSize& paper_size)
{
gtk_print_settings_set_paper_size(gobj(), const_cast<GtkPaperSize*>((paper_size).gobj())); 
}

double PrintSettings::get_paper_width(Unit unit) const
{
  return gtk_print_settings_get_paper_width(const_cast<GtkPrintSettings*>(gobj()), ((GtkUnit)(unit)));
}

void PrintSettings::set_paper_width(double width, Unit unit)
{
gtk_print_settings_set_paper_width(gobj(), width, ((GtkUnit)(unit))); 
}

double PrintSettings::get_paper_height(Unit unit) const
{
  return gtk_print_settings_get_paper_height(const_cast<GtkPrintSettings*>(gobj()), ((GtkUnit)(unit)));
}

void PrintSettings::set_paper_height(double height, Unit unit)
{
gtk_print_settings_set_paper_height(gobj(), height, ((GtkUnit)(unit))); 
}

bool PrintSettings::get_use_color() const
{
  return gtk_print_settings_get_use_color(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_use_color(bool use_color)
{
gtk_print_settings_set_use_color(gobj(), static_cast<int>(use_color)); 
}

bool PrintSettings::get_collate() const
{
  return gtk_print_settings_get_collate(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_collate(bool collate)
{
gtk_print_settings_set_collate(gobj(), static_cast<int>(collate)); 
}

bool PrintSettings::get_reverse() const
{
  return gtk_print_settings_get_reverse(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_reverse(bool reverse)
{
gtk_print_settings_set_reverse(gobj(), static_cast<int>(reverse)); 
}

PrintDuplex PrintSettings::get_duplex() const
{
  return (PrintDuplex)gtk_print_settings_get_duplex(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_duplex(PrintDuplex duplex)
{
gtk_print_settings_set_duplex(gobj(), ((GtkPrintDuplex)(duplex))); 
}

PrintQuality PrintSettings::get_quality() const
{
  return (PrintQuality)gtk_print_settings_get_quality(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_quality(PrintQuality quality)
{
gtk_print_settings_set_quality(gobj(), ((GtkPrintQuality)(quality))); 
}

int PrintSettings::get_n_copies() const
{
  return gtk_print_settings_get_n_copies(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_n_copies(int num_copies)
{
gtk_print_settings_set_n_copies(gobj(), num_copies); 
}

int PrintSettings::get_number_up() const
{
  return gtk_print_settings_get_number_up(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_number_up(int number_up)
{
gtk_print_settings_set_number_up(gobj(), number_up); 
}

NumberUpLayout PrintSettings::get_number_up_layout() const
{
  return ((NumberUpLayout)(gtk_print_settings_get_number_up_layout(const_cast<GtkPrintSettings*>(gobj()))));
}

void PrintSettings::set_number_up(NumberUpLayout number_up_layout)
{
gtk_print_settings_set_number_up_layout(gobj(), ((GtkNumberUpLayout)(number_up_layout))); 
}

int PrintSettings::get_resolution() const
{
  return gtk_print_settings_get_resolution(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_resolution(int resolution)
{
gtk_print_settings_set_resolution(gobj(), resolution); 
}

int PrintSettings::get_resolution_x() const
{
  return gtk_print_settings_get_resolution_x(const_cast<GtkPrintSettings*>(gobj()));
}

int PrintSettings::get_resolution_y() const
{
  return gtk_print_settings_get_resolution_y(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_resolution_xy(int resolution_x, int resolution_y)
{
gtk_print_settings_set_resolution_xy(gobj(), resolution_x, resolution_y); 
}

double PrintSettings::get_printer_lpi() const
{
  return gtk_print_settings_get_printer_lpi(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_printer_lpi(double lpi)
{
gtk_print_settings_set_printer_lpi(gobj(), lpi); 
}

double PrintSettings::get_scale() const
{
  return gtk_print_settings_get_scale(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_scale(double scale)
{
gtk_print_settings_set_scale(gobj(), scale); 
}

PrintPages PrintSettings::get_print_pages() const
{
  return (PrintPages)gtk_print_settings_get_print_pages(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_print_pages(PrintPages print_pages)
{
gtk_print_settings_set_print_pages(gobj(), ((GtkPrintPages)(print_pages))); 
}

PageSet PrintSettings::get_page_set() const
{
  return (PageSet)gtk_print_settings_get_page_set(const_cast<GtkPrintSettings*>(gobj()));
}

void PrintSettings::set_page_set(PageSet page_set)
{
gtk_print_settings_set_page_set(gobj(), ((GtkPageSet)(page_set))); 
}

Glib::ustring PrintSettings::get_default_source() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_print_settings_get_default_source(const_cast<GtkPrintSettings*>(gobj())));
}

void PrintSettings::set_default_source(const Glib::ustring& default_source)
{
gtk_print_settings_set_default_source(gobj(), default_source.c_str()); 
}

Glib::ustring PrintSettings::get_media_type() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_print_settings_get_media_type(const_cast<GtkPrintSettings*>(gobj())));
}

void PrintSettings::set_media_type(const Glib::ustring& media_type)
{
gtk_print_settings_set_media_type(gobj(), media_type.c_str()); 
}

Glib::ustring PrintSettings::get_dither() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_print_settings_get_dither(const_cast<GtkPrintSettings*>(gobj())));
}

void PrintSettings::set_dither(const Glib::ustring& dither)
{
gtk_print_settings_set_dither(gobj(), dither.c_str()); 
}

Glib::ustring PrintSettings::get_finishings() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_print_settings_get_finishings(const_cast<GtkPrintSettings*>(gobj())));
}

void PrintSettings::set_finishings(const Glib::ustring& finishings)
{
gtk_print_settings_set_finishings(gobj(), finishings.c_str()); 
}

Glib::ustring PrintSettings::get_output_bin() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_print_settings_get_output_bin(const_cast<GtkPrintSettings*>(gobj())));
}

void PrintSettings::set_output_bin(const Glib::ustring& output_bin)
{
gtk_print_settings_set_output_bin(gobj(), output_bin.c_str()); 
}


} // namespace Gtk


