// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/filechooser.h>
#include <gtkmm/private/filechooser_p.h>


// -*- c++ -*-
/* $Id: filechooser.ccg,v 1.2 2004/11/12 11:51:42 murrayc Exp $ */

/* Copyright 2003 The gtkmm Development Team
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

#include <glibmm/vectorutils.h>

#include <gtk/gtk.h>
//#include <gtk/gtkfilesystem.h> //We include this semi-private header just to get GTK_FILE_SYSTEM_ERROR.

namespace
{


static const Glib::SignalProxyInfo FileChooser_signal_current_folder_changed_info =
{
  "current_folder_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo FileChooser_signal_selection_changed_info =
{
  "selection_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo FileChooser_signal_update_preview_info =
{
  "update_preview",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo FileChooser_signal_file_activated_info =
{
  "file_activated",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static GtkFileChooserConfirmation FileChooser_signal_confirm_overwrite_callback(GtkFileChooser* self, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< FileChooserConfirmation > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return ((GtkFileChooserConfirmation)((*static_cast<SlotType*>(slot))()));
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef GtkFileChooserConfirmation RType;
  return RType();
}

static GtkFileChooserConfirmation FileChooser_signal_confirm_overwrite_notify_callback(GtkFileChooser* self,  void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))();
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef GtkFileChooserConfirmation RType;
  return RType();
}

static const Glib::SignalProxyInfo FileChooser_signal_confirm_overwrite_info =
{
  "confirm-overwrite",
  (GCallback) &FileChooser_signal_confirm_overwrite_callback,
  (GCallback) &FileChooser_signal_confirm_overwrite_notify_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::FileChooserAction>::value_type()
{
  return gtk_file_chooser_action_get_type();
}

// static
GType Glib::Value<Gtk::FileChooserConfirmation>::value_type()
{
  return gtk_file_chooser_confirmation_get_type();
}


Gtk::FileChooserError::FileChooserError(Gtk::FileChooserError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (GTK_FILE_CHOOSER_ERROR, error_code, error_message)
{}

Gtk::FileChooserError::FileChooserError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gtk::FileChooserError::Code Gtk::FileChooserError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gtk::FileChooserError::throw_func(GError* gobject)
{
  throw Gtk::FileChooserError(gobject);
}

// static
GType Glib::Value<Gtk::FileChooserError::Code>::value_type()
{
  return gtk_file_chooser_error_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::FileChooser> wrap(GtkFileChooser* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::FileChooser>( dynamic_cast<Gtk::FileChooser*> (Glib::wrap_auto_interface<Gtk::FileChooser> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& FileChooser_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &FileChooser_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_file_chooser_get_type();
  }

  return *this;
}

void FileChooser_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 


}


Glib::ObjectBase* FileChooser_Class::wrap_new(GObject* object)
{
  return new FileChooser((GtkFileChooser*)(object));
}


/* The implementation: */

FileChooser::FileChooser()
:
  Glib::Interface(filechooser_class_.init())
{}

FileChooser::FileChooser(GtkFileChooser* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

FileChooser::FileChooser(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

FileChooser::~FileChooser()
{}

// static
void FileChooser::add_interface(GType gtype_implementer)
{
  filechooser_class_.init().add_interface(gtype_implementer);
}

FileChooser::CppClassType FileChooser::filechooser_class_; // initialize static member

GType FileChooser::get_type()
{
  return filechooser_class_.init().get_type();
}


GType FileChooser::get_base_type()
{
  return gtk_file_chooser_get_type();
}


void FileChooser::set_action(FileChooserAction action)
{
  gtk_file_chooser_set_action(gobj(), ((GtkFileChooserAction)(action))); 
}

FileChooserAction FileChooser::get_action() const
{
  return ((FileChooserAction)(gtk_file_chooser_get_action(const_cast<GtkFileChooser*>(gobj()))));
}

void FileChooser::set_local_only(bool local_only)
{
  gtk_file_chooser_set_local_only(gobj(), static_cast<int>(local_only)); 
}

bool FileChooser::get_local_only() const
{
  return gtk_file_chooser_get_local_only(const_cast<GtkFileChooser*>(gobj()));
}

void FileChooser::set_select_multiple(bool select_multiple)
{
  gtk_file_chooser_set_select_multiple(gobj(), static_cast<int>(select_multiple)); 
}

bool FileChooser::get_select_multiple() const
{
  return gtk_file_chooser_get_select_multiple(const_cast<GtkFileChooser*>(gobj()));
}

void FileChooser::set_show_hidden(bool show_hidden)
{
  gtk_file_chooser_set_show_hidden(gobj(), static_cast<int>(show_hidden)); 
}

bool FileChooser::get_show_hidden() const
{
  return gtk_file_chooser_get_show_hidden(const_cast<GtkFileChooser*>(gobj()));
}

void FileChooser::set_do_overwrite_confirmation(bool do_overwrite_confirmation)
{
  gtk_file_chooser_set_do_overwrite_confirmation(gobj(), static_cast<int>(do_overwrite_confirmation)); 
}

bool FileChooser::get_do_overwrite_confirmation() const
{
  return gtk_file_chooser_get_do_overwrite_confirmation(const_cast<GtkFileChooser*>(gobj()));
}

void FileChooser::set_create_folders(bool create_folders)
{
  gtk_file_chooser_set_create_folders(gobj(), static_cast<int>(create_folders)); 
}

bool FileChooser::get_create_folders() const
{
  return gtk_file_chooser_get_create_folders(const_cast<GtkFileChooser*>(gobj()));
}

void FileChooser::set_current_name(const Glib::ustring& name)
{
  gtk_file_chooser_set_current_name(gobj(), name.c_str()); 
}

std::string FileChooser::get_filename() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(gtk_file_chooser_get_filename(const_cast<GtkFileChooser*>(gobj())));
}

bool FileChooser::set_filename(const std::string& filename)
{
  return gtk_file_chooser_set_filename(gobj(), filename.c_str());
}

bool FileChooser::select_filename(const std::string& filename)
{
  return gtk_file_chooser_select_filename(gobj(), filename.c_str());
}

void FileChooser::unselect_filename(const std::string& filename)
{
  gtk_file_chooser_unselect_filename(gobj(), filename.c_str()); 
}

void FileChooser::select_all()
{
  gtk_file_chooser_select_all(gobj()); 
}

void FileChooser::unselect_all()
{
  gtk_file_chooser_unselect_all(gobj()); 
}

std::vector<std::string> FileChooser::get_filenames() const
{
  return Glib::SListHandler<std::string>::slist_to_vector(gtk_file_chooser_get_filenames(const_cast<GtkFileChooser*>(gobj())), Glib::OWNERSHIP_DEEP);
}

bool FileChooser::set_current_folder(const std::string& filename)
{
  return gtk_file_chooser_set_current_folder(gobj(), filename.c_str());
}

std::string FileChooser::get_current_folder() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(gtk_file_chooser_get_current_folder(const_cast<GtkFileChooser*>(gobj())));
}

Glib::ustring FileChooser::get_uri() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_file_chooser_get_uri(const_cast<GtkFileChooser*>(gobj())));
}

bool FileChooser::set_uri(const Glib::ustring& uri)
{
  return gtk_file_chooser_set_uri(gobj(), uri.c_str());
}

bool FileChooser::select_uri(const Glib::ustring& uri)
{
  return gtk_file_chooser_select_uri(gobj(), uri.c_str());
}

void FileChooser::unselect_uri(const Glib::ustring& uri)
{
  gtk_file_chooser_unselect_uri(gobj(), uri.c_str()); 
}

std::vector<Glib::ustring> FileChooser::get_uris() const
{
  return Glib::SListHandler<Glib::ustring>::slist_to_vector(gtk_file_chooser_get_uris(const_cast<GtkFileChooser*>(gobj())), Glib::OWNERSHIP_DEEP);
}

bool FileChooser::set_current_folder_uri(const Glib::ustring& uri)
{
  return gtk_file_chooser_set_current_folder_uri(gobj(), uri.c_str());
}

Glib::ustring FileChooser::get_current_folder_uri() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_file_chooser_get_current_folder_uri(const_cast<GtkFileChooser*>(gobj())));
}

bool FileChooser::set_file(const Glib::RefPtr<const Gio::File>& uri)
{
  GError* gerror = 0;
  bool retvalue = gtk_file_chooser_set_file(gobj(), const_cast<GFile*>(Glib::unwrap<Gio::File>(uri)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

bool FileChooser::select_file(const Glib::RefPtr<const Gio::File>& file)
{
  GError* gerror = 0;
  bool retvalue = gtk_file_chooser_select_file(gobj(), const_cast<GFile*>(Glib::unwrap<Gio::File>(file)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

void FileChooser::unselect_file(const Glib::RefPtr<const Gio::File>& file)
{
  gtk_file_chooser_unselect_file(gobj(), const_cast<GFile*>(Glib::unwrap<Gio::File>(file))); 
}

std::vector< Glib::RefPtr<Gio::File> > FileChooser::get_files()
{
  return Glib::SListHandler< Glib::RefPtr<Gio::File> >::slist_to_vector(gtk_file_chooser_get_files(gobj()), Glib::OWNERSHIP_DEEP);
}

bool FileChooser::set_current_folder_file(const Glib::RefPtr<const Gio::File>& file)
{
  GError* gerror = 0;
  bool retvalue = gtk_file_chooser_set_current_folder_file(gobj(), const_cast<GFile*>(Glib::unwrap<Gio::File>(file)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

Glib::RefPtr<Gio::File> FileChooser::get_current_folder_file()
{
  return Glib::wrap(gtk_file_chooser_get_current_folder_file(gobj()));
}

Glib::RefPtr<Gio::File> FileChooser::get_file()
{
  return Glib::wrap(gtk_file_chooser_get_file(gobj()));
}

Glib::RefPtr<const Gio::File> FileChooser::get_file() const
{
  return const_cast<FileChooser*>(this)->get_file();
}

void FileChooser::set_preview_widget(Gtk::Widget& preview_widget)
{
  gtk_file_chooser_set_preview_widget(gobj(), (preview_widget).gobj()); 
}

Gtk::Widget* FileChooser::get_preview_widget()
{
  return Glib::wrap(gtk_file_chooser_get_preview_widget(gobj()));
}

const Gtk::Widget* FileChooser::get_preview_widget() const
{
  return const_cast<FileChooser*>(this)->get_preview_widget();
}

void FileChooser::set_preview_widget_active(bool active)
{
  gtk_file_chooser_set_preview_widget_active(gobj(), static_cast<int>(active)); 
}

bool FileChooser::get_preview_widget_active() const
{
  return gtk_file_chooser_get_preview_widget_active(const_cast<GtkFileChooser*>(gobj()));
}

void FileChooser::set_use_preview_label(bool use_label)
{
  gtk_file_chooser_set_use_preview_label(gobj(), static_cast<int>(use_label)); 
}

bool FileChooser::get_use_preview_label() const
{
  return gtk_file_chooser_get_use_preview_label(const_cast<GtkFileChooser*>(gobj()));
}

std::string FileChooser::get_preview_filename() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(gtk_file_chooser_get_preview_filename(const_cast<GtkFileChooser*>(gobj())));
}

Glib::ustring FileChooser::get_preview_uri() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gtk_file_chooser_get_preview_uri(const_cast<GtkFileChooser*>(gobj())));
}

Glib::RefPtr<Gio::File> FileChooser::get_preview_file()
{
  return Glib::wrap(gtk_file_chooser_get_preview_file(gobj()));
}

Glib::RefPtr<const Gio::File> FileChooser::get_preview_file() const
{
  return const_cast<FileChooser*>(this)->get_preview_file();
}

void FileChooser::set_extra_widget(Gtk::Widget& extra_widget)
{
  gtk_file_chooser_set_extra_widget(gobj(), (extra_widget).gobj()); 
}

Gtk::Widget* FileChooser::get_extra_widget()
{
  return Glib::wrap(gtk_file_chooser_get_extra_widget(gobj()));
}

const Gtk::Widget* FileChooser::get_extra_widget() const
{
  return const_cast<FileChooser*>(this)->get_extra_widget();
}

void FileChooser::add_filter(const Glib::RefPtr<FileFilter>& filter)
{
  gtk_file_chooser_add_filter(gobj(), const_cast<GtkFileFilter*>(Glib::unwrap(filter))); 
}

void FileChooser::remove_filter(const Glib::RefPtr<FileFilter>& filter)
{
  gtk_file_chooser_remove_filter(gobj(), const_cast<GtkFileFilter*>(Glib::unwrap(filter))); 
}

std::vector< Glib::RefPtr<FileFilter> > FileChooser::list_filters()
{
  return Glib::SListHandler< Glib::RefPtr<FileFilter> >::slist_to_vector(gtk_file_chooser_list_filters(gobj()), Glib::OWNERSHIP_SHALLOW);
}

std::vector< Glib::RefPtr<const FileFilter> > FileChooser::list_filters() const
{
  return Glib::SListHandler< Glib::RefPtr<const FileFilter> >::slist_to_vector(gtk_file_chooser_list_filters(const_cast<GtkFileChooser*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

void FileChooser::set_filter(const Glib::RefPtr<FileFilter>& filter)
{
  gtk_file_chooser_set_filter(gobj(), const_cast<GtkFileFilter*>(Glib::unwrap(filter))); 
}

Glib::RefPtr<FileFilter> FileChooser::get_filter()
{

  Glib::RefPtr<FileFilter> retvalue = Glib::wrap(gtk_file_chooser_get_filter(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const FileFilter> FileChooser::get_filter() const
{
  return const_cast<FileChooser*>(this)->get_filter();
}

bool FileChooser::add_shortcut_folder(const std::string& folder)
{
  GError* gerror = 0;
  bool retvalue = gtk_file_chooser_add_shortcut_folder(gobj(), folder.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

bool FileChooser::remove_shortcut_folder(const std::string& folder)
{
  GError* gerror = 0;
  bool retvalue = gtk_file_chooser_remove_shortcut_folder(gobj(), folder.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

std::vector<std::string> FileChooser::list_shortcut_folders() const
{
  return Glib::SListHandler<std::string>::slist_to_vector(gtk_file_chooser_list_shortcut_folders(const_cast<GtkFileChooser*>(gobj())), Glib::OWNERSHIP_DEEP);
}

bool FileChooser::add_shortcut_folder_uri(const Glib::ustring& uri)
{
  GError* gerror = 0;
  bool retvalue = gtk_file_chooser_add_shortcut_folder_uri(gobj(), uri.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

bool FileChooser::remove_shortcut_folder_uri(const Glib::ustring& uri)
{
  GError* gerror = 0;
  bool retvalue = gtk_file_chooser_remove_shortcut_folder_uri(gobj(), uri.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;

}

std::vector<Glib::ustring> FileChooser::list_shortcut_folder_uris() const
{
  return Glib::SListHandler<Glib::ustring>::slist_to_vector(gtk_file_chooser_list_shortcut_folder_uris(const_cast<GtkFileChooser*>(gobj())), Glib::OWNERSHIP_DEEP);
}


Glib::SignalProxy0< void > FileChooser::signal_current_folder_changed()
{
  return Glib::SignalProxy0< void >(this, &FileChooser_signal_current_folder_changed_info);
}


Glib::SignalProxy0< void > FileChooser::signal_selection_changed()
{
  return Glib::SignalProxy0< void >(this, &FileChooser_signal_selection_changed_info);
}


Glib::SignalProxy0< void > FileChooser::signal_update_preview()
{
  return Glib::SignalProxy0< void >(this, &FileChooser_signal_update_preview_info);
}


Glib::SignalProxy0< void > FileChooser::signal_file_activated()
{
  return Glib::SignalProxy0< void >(this, &FileChooser_signal_file_activated_info);
}


Glib::SignalProxy0< FileChooserConfirmation > FileChooser::signal_confirm_overwrite()
{
  return Glib::SignalProxy0< FileChooserConfirmation >(this, &FileChooser_signal_confirm_overwrite_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< FileChooserAction > FileChooser::property_action() 
{
  return Glib::PropertyProxy< FileChooserAction >(this, "action");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< FileChooserAction > FileChooser::property_action() const
{
  return Glib::PropertyProxy_ReadOnly< FileChooserAction >(this, "action");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<FileFilter> > FileChooser::property_filter() 
{
  return Glib::PropertyProxy< Glib::RefPtr<FileFilter> >(this, "filter");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FileFilter> > FileChooser::property_filter() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FileFilter> >(this, "filter");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > FileChooser::property_local_only() 
{
  return Glib::PropertyProxy< bool >(this, "local-only");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > FileChooser::property_local_only() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "local-only");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Widget* > FileChooser::property_preview_widget() 
{
  return Glib::PropertyProxy< Widget* >(this, "preview-widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Widget* > FileChooser::property_preview_widget() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "preview-widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > FileChooser::property_preview_widget_active() 
{
  return Glib::PropertyProxy< bool >(this, "preview-widget-active");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > FileChooser::property_preview_widget_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "preview-widget-active");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > FileChooser::property_use_preview_label() 
{
  return Glib::PropertyProxy< bool >(this, "use-preview-label");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > FileChooser::property_use_preview_label() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-preview-label");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Widget* > FileChooser::property_extra_widget() 
{
  return Glib::PropertyProxy< Widget* >(this, "extra-widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Widget* > FileChooser::property_extra_widget() const
{
  return Glib::PropertyProxy_ReadOnly< Widget* >(this, "extra-widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > FileChooser::property_select_multiple() 
{
  return Glib::PropertyProxy< bool >(this, "select-multiple");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > FileChooser::property_select_multiple() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "select-multiple");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > FileChooser::property_show_hidden() 
{
  return Glib::PropertyProxy< bool >(this, "show-hidden");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > FileChooser::property_show_hidden() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-hidden");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > FileChooser::property_do_overwrite_confirmation() 
{
  return Glib::PropertyProxy< bool >(this, "do-overwrite-confirmation");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > FileChooser::property_do_overwrite_confirmation() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "do-overwrite-confirmation");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > FileChooser::property_create_folders() 
{
  return Glib::PropertyProxy< bool >(this, "create-folders");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > FileChooser::property_create_folders() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "create-folders");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gtk


