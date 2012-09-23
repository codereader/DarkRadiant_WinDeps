
#include <glib.h>

// Disable the 'const' function attribute of the get_type() functions.
// GCC would optimize them out because we don't use the return value.
#undef  G_GNUC_CONST
#define G_GNUC_CONST /* empty */

#include <gtksourceviewmm/wrap_init.h>
#include <glibmm/error.h>
#include <glibmm/object.h>

// #include the widget headers so that we can call the get_type() static methods:

#include "buffer.h"
#include "completion.h"
#include "completionactivation.h"
#include "completioncontext.h"
#include "completioninfo.h"
#include "completionitem.h"
#include "completionproposal.h"
#include "completionprovider.h"
#include "completionwords.h"
#include "gutter.h"
#include "gutterrenderer.h"
#include "gutterrendererpixbuf.h"
#include "gutterrenderertext.h"
#include "language.h"
#include "languagemanager.h"
#include "mark.h"
#include "markattributes.h"
#include "printcompositor.h"
#include "style.h"
#include "stylescheme.h"
#include "styleschememanager.h"
#include "undomanager.h"
#include "view.h"

extern "C"
{

//Declarations of the *_get_type() functions:

GType gtk_source_buffer_get_type(void);
GType gtk_source_completion_get_type(void);
GType gtk_source_completion_context_get_type(void);
GType gtk_source_completion_info_get_type(void);
GType gtk_source_completion_item_get_type(void);
GType gtk_source_completion_words_get_type(void);
GType gtk_source_gutter_get_type(void);
GType gtk_source_gutter_renderer_get_type(void);
GType gtk_source_gutter_renderer_pixbuf_get_type(void);
GType gtk_source_gutter_renderer_text_get_type(void);
GType gtk_source_language_get_type(void);
GType gtk_source_language_manager_get_type(void);
GType gtk_source_mark_get_type(void);
GType gtk_source_mark_attributes_get_type(void);
GType gtk_source_print_compositor_get_type(void);
GType gtk_source_style_get_type(void);
GType gtk_source_style_scheme_get_type(void);
GType gtk_source_style_scheme_manager_get_type(void);
GType gtk_source_view_get_type(void);

//Declarations of the *_error_quark() functions:

GQuark gtk_source_completion_error_quark(void);
} // extern "C"


//Declarations of the *_Class::wrap_new() methods, instead of including all the private headers:

namespace Gsv {  class Buffer_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class Completion_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class CompletionContext_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class CompletionInfo_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class CompletionItem_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class CompletionWords_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class Gutter_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class GutterRenderer_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class GutterRendererPixbuf_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class GutterRendererText_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class Language_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class LanguageManager_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class Mark_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class MarkAttributes_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class PrintCompositor_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class Style_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class StyleScheme_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class StyleSchemeManager_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }
namespace Gsv {  class View_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  }

namespace Gsv { 

void wrap_init()
{
  // Register Error domains:
  Glib::Error::register_domain(gtk_source_completion_error_quark(), &::Gsv::SourceCompletionError::throw_func);

// Map gtypes to gtkmm wrapper-creation functions:
  Glib::wrap_register(gtk_source_buffer_get_type(), &Gsv::Buffer_Class::wrap_new);
  Glib::wrap_register(gtk_source_completion_get_type(), &Gsv::Completion_Class::wrap_new);
  Glib::wrap_register(gtk_source_completion_context_get_type(), &Gsv::CompletionContext_Class::wrap_new);
  Glib::wrap_register(gtk_source_completion_info_get_type(), &Gsv::CompletionInfo_Class::wrap_new);
  Glib::wrap_register(gtk_source_completion_item_get_type(), &Gsv::CompletionItem_Class::wrap_new);
  Glib::wrap_register(gtk_source_completion_words_get_type(), &Gsv::CompletionWords_Class::wrap_new);
  Glib::wrap_register(gtk_source_gutter_get_type(), &Gsv::Gutter_Class::wrap_new);
  Glib::wrap_register(gtk_source_gutter_renderer_get_type(), &Gsv::GutterRenderer_Class::wrap_new);
  Glib::wrap_register(gtk_source_gutter_renderer_pixbuf_get_type(), &Gsv::GutterRendererPixbuf_Class::wrap_new);
  Glib::wrap_register(gtk_source_gutter_renderer_text_get_type(), &Gsv::GutterRendererText_Class::wrap_new);
  Glib::wrap_register(gtk_source_language_get_type(), &Gsv::Language_Class::wrap_new);
  Glib::wrap_register(gtk_source_language_manager_get_type(), &Gsv::LanguageManager_Class::wrap_new);
  Glib::wrap_register(gtk_source_mark_get_type(), &Gsv::Mark_Class::wrap_new);
  Glib::wrap_register(gtk_source_mark_attributes_get_type(), &Gsv::MarkAttributes_Class::wrap_new);
  Glib::wrap_register(gtk_source_print_compositor_get_type(), &Gsv::PrintCompositor_Class::wrap_new);
  Glib::wrap_register(gtk_source_style_get_type(), &Gsv::Style_Class::wrap_new);
  Glib::wrap_register(gtk_source_style_scheme_get_type(), &Gsv::StyleScheme_Class::wrap_new);
  Glib::wrap_register(gtk_source_style_scheme_manager_get_type(), &Gsv::StyleSchemeManager_Class::wrap_new);
  Glib::wrap_register(gtk_source_view_get_type(), &Gsv::View_Class::wrap_new);

  // Register the gtkmm gtypes:
  Gsv::Buffer::get_type();
  Gsv::Completion::get_type();
  Gsv::CompletionContext::get_type();
  Gsv::CompletionInfo::get_type();
  Gsv::CompletionItem::get_type();
  Gsv::CompletionWords::get_type();
  Gsv::Gutter::get_type();
  Gsv::GutterRenderer::get_type();
  Gsv::GutterRendererPixbuf::get_type();
  Gsv::GutterRendererText::get_type();
  Gsv::Language::get_type();
  Gsv::LanguageManager::get_type();
  Gsv::Mark::get_type();
  Gsv::MarkAttributes::get_type();
  Gsv::PrintCompositor::get_type();
  Gsv::Style::get_type();
  Gsv::StyleScheme::get_type();
  Gsv::StyleSchemeManager::get_type();
  Gsv::View::get_type();

} // wrap_init()

} //Gsv


