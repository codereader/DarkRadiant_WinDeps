// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_MARKATTRIBUTES_P_H
#define _GTKSOURCEVIEWMM_MARKATTRIBUTES_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gsv
{

class MarkAttributes_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MarkAttributes CppObjectType;
  typedef GtkSourceMarkAttributes BaseObjectType;
  typedef GtkSourceMarkAttributesClass BaseClassType;
  typedef Glib::Object_Class CppClassParent;
  typedef GObjectClass BaseClassParent;

  friend class MarkAttributes;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gsv


#endif /* _GTKSOURCEVIEWMM_MARKATTRIBUTES_P_H */

