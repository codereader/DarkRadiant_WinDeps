// Generated by generate_wrap_init.pl -- DO NOT MODIFY!

#include <glibmm.h>

// Disable the 'const' function attribute of the get_type() functions.
// GCC would optimize them out because we don't use the return value.
#undef  G_GNUC_CONST
#define G_GNUC_CONST /* empty */

#include <glibmm/wrap_init.h>
#include <glibmm/error.h>
#include <glibmm/object.h>

// #include the widget headers so that we can call the get_type() static methods:
#include "balancedtree.h"
#include "checksum.h"
#include "convert.h"
#include "date.h"
#include "datetime.h"
#include "fileutils.h"
#include "iochannel.h"
#include "keyfile.h"
#include "markup.h"
#include "module.h"
#include "nodetree.h"
#include "optioncontext.h"
#include "optionentry.h"
#include "optiongroup.h"
#include "regex.h"
#include "shell.h"
#include "spawn.h"
#ifndef GLIBMM_DISABLE_DEPRECATED
#include "thread.h"
#endif // *_DISABLE_DEPRECATED
#include "threads.h"
#include "timezone.h"
#include "unicode.h"
#include "uriutils.h"
#include "valuearray.h"
#include "variant.h"
#include "variantiter.h"
#include "varianttype.h"

extern "C"
{
//Declarations of the *_get_type() functions:


//Declarations of the *_error_quark() functions:

GQuark g_convert_error_quark(void);
GQuark g_file_error_quark(void);
GQuark g_io_channel_error_quark(void);
GQuark g_key_file_error_quark(void);
GQuark g_markup_error_quark(void);
GQuark g_option_error_quark(void);
GQuark g_regex_error_quark(void);
GQuark g_shell_error_quark(void);
GQuark g_spawn_error_quark(void);
#ifndef GLIBMM_DISABLE_DEPRECATED
GQuark g_thread_error_quark(void);
#endif // *_DISABLE_DEPRECATED
GQuark g_thread_error_quark(void);
} // extern "C"

namespace Glib {

//Declarations of the *_Class::wrap_new() methods, instead of including all the private headers:


// Register Error domains in sub-namespaces:

namespace Threads {

void wrap_init()
{
  Glib::Error::register_domain(g_thread_error_quark(), &Threads::ThreadError::throw_func);

} // wrap_init()

} // Threads

void wrap_init()
{
  // Register Error domains in the main namespace:
  Glib::Error::register_domain(g_convert_error_quark(), &ConvertError::throw_func);
  Glib::Error::register_domain(g_file_error_quark(), &FileError::throw_func);
  Glib::Error::register_domain(g_io_channel_error_quark(), &IOChannelError::throw_func);
  Glib::Error::register_domain(g_key_file_error_quark(), &KeyFileError::throw_func);
  Glib::Error::register_domain(g_markup_error_quark(), &MarkupError::throw_func);
  Glib::Error::register_domain(g_option_error_quark(), &OptionError::throw_func);
  Glib::Error::register_domain(g_regex_error_quark(), &RegexError::throw_func);
  Glib::Error::register_domain(g_shell_error_quark(), &ShellError::throw_func);
  Glib::Error::register_domain(g_spawn_error_quark(), &SpawnError::throw_func);
#ifndef GLIBMM_DISABLE_DEPRECATED
  Glib::Error::register_domain(g_thread_error_quark(), &ThreadError::throw_func);
#endif // *_DISABLE_DEPRECATED

  // Call the wrap_init() functions in sub-namespaces:
  Threads::wrap_init();

  // Map gtypes to gtkmm wrapper-creation functions:

  // Register the gtkmm gtypes:

} // wrap_init()

} // Glib

