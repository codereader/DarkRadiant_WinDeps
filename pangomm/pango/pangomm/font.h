// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _PANGOMM_FONT_H
#define _PANGOMM_FONT_H


#include <glibmm.h>

/* $Id: font.hg,v 1.2 2006/06/08 20:39:39 murrayc Exp $ */

/* font.h
 * 
 * Copyright (C) 1998-1999 The gtkmm Development Team 
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <glibmm/object.h>
#include <pangomm/rectangle.h>
#include <pangomm/language.h>
#include <pangomm/glyph.h>
#include <pangomm/fontdescription.h>
#include <pangomm/fontmetrics.h>
#include <pangomm/coverage.h>
#include <pango/pango-font.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _PangoFont PangoFont;
typedef struct _PangoFontClass PangoFontClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Pango
{ class Font_Class; } // namespace Pango
namespace Pango
{

const int    SCALE          = 1024;
const double SCALE_XX_SMALL = 0.5787037037037;
const double SCALE_X_SMALL  = 0.6444444444444;
const double SCALE_SMALL    = 0.8333333333333;
const double SCALE_MEDIUM   = 1.0;
const double SCALE_LARGE    = 1.2;
const double SCALE_X_LARGE  = 1.4399999999999;
const double SCALE_XX_LARGE = 1.728;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
class FontMap;
#endif //DOXYGEN_SHOULD_SKIP_THIS

/** A Pango::Font is used to represent a font in a rendering-system-independent matter.
 */

class Font : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Font CppObjectType;
  typedef Font_Class CppClassType;
  typedef PangoFont BaseObjectType;
  typedef PangoFontClass BaseClassType;

private:  friend class Font_Class;
  static CppClassType font_class_;

private:
  // noncopyable
  Font(const Font&);
  Font& operator=(const Font&);

protected:
  explicit Font(const Glib::ConstructParams& construct_params);
  explicit Font(PangoFont* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Font();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  PangoFont*       gobj()       { return reinterpret_cast<PangoFont*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const PangoFont* gobj() const { return reinterpret_cast<PangoFont*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  PangoFont* gobj_copy();

private:

   //This would return a PangoEngineShape* but the definition of the struct is surrounded by #define PANGO_ENABLE_BACKEND [...] #endif. So don't wrap it.

public:
  
  /** Return value: a newly-allocated Pango::FontDescription object.
   * @return A newly-allocated Pango::FontDescription object.
   */
  FontDescription describe() const;
  
  /** Return value: a newly-allocated Pango::FontDescription object.
   * @return A newly-allocated Pango::FontDescription object.
   * 
   * Since: 1.14.
   */
  FontDescription describe_with_absolute_size() const;
  
  /** Computes the coverage map for a given font and language tag.
   * @param language The language tag.
   * @return A newly-allocated Pango::Coverage object.
   */
  Glib::RefPtr<Coverage> get_coverage(const Language& language) const;

  /** Gets overall metric information for a font.
   * The metrics may be substantially different for different scripts.
   * However, this function overload returns the metrics for the entire font.
   */
  FontMetrics get_metrics() const;
  
  /** Gets overall metric information for a font. Since the metrics may be
   * substantially different for different scripts, a language tag can
   * be provided to indicate that the metrics should be retrieved that
   * correspond to the script(s) used by that language.
   * @param language Language tag used to determine which script to get the metrics
   * for.
   * @return A Pango::Metrics object.
   */
  FontMetrics get_metrics(const Language& language) const;

  
  /** Gets the logical and ink extents of a glyph within a font. The
   * coordinate system for each rectangle has its origin at the
   * base line and horizontal origin of the character with increasing
   * coordinates extending to the right and down. The macros PANGO_ASCENT(),
   * PANGO_DESCENT(), PANGO_LBEARING(), and PANGO_RBEARING can be used to convert
   * from the extents rectangle to more traditional font metrics. The units
   * of the rectangles are in 1/PANGO_SCALE of a device unit.
   * @param glyph The glyph index.
   * @param ink_rect Rectangle used to store the extents of the glyph as drawn.
   * @param logical_rect Rectangle used to store the logical extents of the glyph.
   */
  void get_glyph_extents(Glyph glyph, Rectangle& ink_rect, Rectangle& logical_rect) const;

  
  /** Gets the font map for which the font was created.
   * @return The Pango::FontMap for the font, or <tt>0</tt> if @a font is <tt>0</tt>.
   * 
   * Since: 1.10.
   */
  Glib::RefPtr<FontMap> get_font_map();
  
  /** Gets the font map for which the font was created.
   * @return The Pango::FontMap for the font, or <tt>0</tt> if @a font is <tt>0</tt>.
   * 
   * Since: 1.10.
   */
  Glib::RefPtr<const FontMap> get_font_map() const;

  /** Get the ink extents of a glyph within the font.
   * @param glyph The glyph index.
   * @return The extents of the glyph as drawn.
   */
  Rectangle get_glyph_ink_extents(Glyph glyph) const;

  /** Gets the logical extents of a glyph within the font.
   * @param glyph The glyph index.
   * @return The logical extents of the glyph.
   */
  Rectangle get_glyph_logical_extents(Glyph glyph) const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} /* namespace Pango */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Pango::Font
   */
  Glib::RefPtr<Pango::Font> wrap(PangoFont* object, bool take_copy = false);
}


#endif /* _PANGOMM_FONT_H */

