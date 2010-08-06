
#include <glib.h>

// Disable the 'const' function attribute of the get_type() functions.
// GCC would optimize them out because we don't use the return value.
#undef  G_GNUC_CONST
#define G_GNUC_CONST /* empty */

#include <gdkmm/gl/wrap_init.h>
#include <glibmm/error.h>
#include <glibmm/object.h>

// #include the widget headers so that we can call the get_type() static methods:

#include "tokens.h"
#include "config.h"
#include "context.h"
#include "drawable.h"
#include "pixmap.h"
#include "window.h"

extern "C"
{

//Declarations of the *_get_type() functions:

GType gdk_gl_config_get_type(void);
GType gdk_gl_context_get_type(void);
GType gdk_gl_pixmap_get_type(void);
GType gdk_gl_window_get_type(void);

//Declarations of the *_error_quark() functions:

} // extern "C"


//Declarations of the *_Class::wrap_new() methods, instead of including all the private headers:

namespace Gdk { namespace GL {  class Config_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }
namespace Gdk { namespace GL {  class Context_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }
namespace Gdk { namespace GL {  class Pixmap_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }
namespace Gdk { namespace GL {  class Window_Class { public: static Glib::ObjectBase* wrap_new(GObject*); };  } }

namespace Gdk { namespace GL { 

void wrap_init()
{
  // Register Error domains:

// Map gtypes to gtkmm wrapper-creation functions:
  Glib::wrap_register(gdk_gl_config_get_type(), &Gdk::GL::Config_Class::wrap_new);
  Glib::wrap_register(gdk_gl_context_get_type(), &Gdk::GL::Context_Class::wrap_new);
  Glib::wrap_register(gdk_gl_pixmap_get_type(), &Gdk::GL::Pixmap_Class::wrap_new);
  Glib::wrap_register(gdk_gl_window_get_type(), &Gdk::GL::Window_Class::wrap_new);

  // Register the gtkmm gtypes:
  Gdk::GL::Config::get_type();
  Gdk::GL::Context::get_type();
  Gdk::GL::Pixmap::get_type();
  Gdk::GL::Window::get_type();

} // wrap_init()

} //GL
} //Gdk


