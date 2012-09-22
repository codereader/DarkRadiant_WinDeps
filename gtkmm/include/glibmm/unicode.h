// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GLIBMM_UNICODE_H
#define _GLIBMM_UNICODE_H


/* $Id: unicode.hg,v 1.2 2003/08/20 10:31:23 murrayc Exp $ */

/* Copyright (C) 2002 The gtkmm Development Team
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


#include <glib.h>

// Not used, but we want to get rid of possible <ctype.h> macros.
#include <cctype>

#undef isalnum
#undef isalpha
#undef iscntrl
#undef isdigit
#undef isgraph
#undef islower
#undef isprint
#undef ispunct
#undef isspace
#undef isupper
#undef isxdigit
#undef istitle
#undef isdefined
#undef iswide
#undef toupper
#undef tolower
#undef totitle


namespace Glib
{

/** @addtogroup glibmmEnums glibmm Enums and Flags */

/**
 * @ingroup glibmmEnums
 */
enum UnicodeType
{
  UNICODE_CONTROL,
  UNICODE_FORMAT,
  UNICODE_UNASSIGNED,
  UNICODE_PRIVATE_USE,
  UNICODE_SURROGATE,
  UNICODE_LOWERCASE_LETTER,
  UNICODE_MODIFIER_LETTER,
  UNICODE_OTHER_LETTER,
  UNICODE_TITLECASE_LETTER,
  UNICODE_UPPERCASE_LETTER,
  UNICODE_SPACING_MARK,
  UNICODE_ENCLOSING_MARK,
  UNICODE_NON_SPACING_MARK,
  UNICODE_DECIMAL_NUMBER,
  UNICODE_LETTER_NUMBER,
  UNICODE_OTHER_NUMBER,
  UNICODE_CONNECT_PUNCTUATION,
  UNICODE_DASH_PUNCTUATION,
  UNICODE_CLOSE_PUNCTUATION,
  UNICODE_FINAL_PUNCTUATION,
  UNICODE_INITIAL_PUNCTUATION,
  UNICODE_OTHER_PUNCTUATION,
  UNICODE_OPEN_PUNCTUATION,
  UNICODE_CURRENCY_SYMBOL,
  UNICODE_MODIFIER_SYMBOL,
  UNICODE_MATH_SYMBOL,
  UNICODE_OTHER_SYMBOL,
  UNICODE_LINE_SEPARATOR,
  UNICODE_PARAGRAPH_SEPARATOR,
  UNICODE_SPACE_SEPARATOR
};


/**
 * @ingroup glibmmEnums
 */
enum UnicodeBreakType
{
  UNICODE_BREAK_MANDATORY,
  UNICODE_BREAK_CARRIAGE_RETURN,
  UNICODE_BREAK_LINE_FEED,
  UNICODE_BREAK_COMBINING_MARK,
  UNICODE_BREAK_SURROGATE,
  UNICODE_BREAK_ZERO_WIDTH_SPACE,
  UNICODE_BREAK_INSEPARABLE,
  UNICODE_BREAK_NON_BREAKING_GLUE,
  UNICODE_BREAK_CONTINGENT,
  UNICODE_BREAK_SPACE,
  UNICODE_BREAK_AFTER,
  UNICODE_BREAK_BEFORE,
  UNICODE_BREAK_BEFORE_AND_AFTER,
  UNICODE_BREAK_HYPHEN,
  UNICODE_BREAK_NON_STARTER,
  UNICODE_BREAK_OPEN_PUNCTUATION,
  UNICODE_BREAK_CLOSE_PUNCTUATION,
  UNICODE_BREAK_QUOTATION,
  UNICODE_BREAK_EXCLAMATION,
  UNICODE_BREAK_IDEOGRAPHIC,
  UNICODE_BREAK_NUMERIC,
  UNICODE_BREAK_INFIX_SEPARATOR,
  UNICODE_BREAK_SYMBOL,
  UNICODE_BREAK_ALPHABETIC,
  UNICODE_BREAK_PREFIX,
  UNICODE_BREAK_POSTFIX,
  UNICODE_BREAK_COMPLEX_CONTEXT,
  UNICODE_BREAK_AMBIGUOUS,
  UNICODE_BREAK_UNKNOWN,
  UNICODE_BREAK_NEXT_LINE,
  UNICODE_BREAK_WORD_JOINER,
  UNICODE_BREAK_HANGUL_L_JAMO,
  UNICODE_BREAK_HANGUL_V_JAMO,
  UNICODE_BREAK_HANGUL_T_JAMO,
  UNICODE_BREAK_HANGUL_LV_SYLLABLE,
  UNICODE_BREAK_HANGUL_LVT_SYLLABLE,
  UNICODE_BREAK_CLOSE_PARANTHESIS,
  UNICODE_BREAK_CONDITIONAL_JAPANESE_STARTER,
  UNICODE_BREAK_HEBREW_LETTER
};


/**
 * @ingroup glibmmEnums
 * @par Bitwise operators:
 * <tt>%AsciiType operator|(AsciiType, AsciiType)</tt><br>
 * <tt>%AsciiType operator&(AsciiType, AsciiType)</tt><br>
 * <tt>%AsciiType operator^(AsciiType, AsciiType)</tt><br>
 * <tt>%AsciiType operator~(AsciiType)</tt><br>
 * <tt>%AsciiType& operator|=(AsciiType&, AsciiType)</tt><br>
 * <tt>%AsciiType& operator&=(AsciiType&, AsciiType)</tt><br>
 * <tt>%AsciiType& operator^=(AsciiType&, AsciiType)</tt><br>
 */
enum AsciiType
{
  ASCII_ALNUM = 1 << 0,
  ASCII_ALPHA = 1 << 1,
  ASCII_CNTRL = 1 << 2,
  ASCII_DIGIT = 1 << 3,
  ASCII_GRAPH = 1 << 4,
  ASCII_LOWER = 1 << 5,
  ASCII_PRINT = 1 << 6,
  ASCII_PUNCT = 1 << 7,
  ASCII_SPACE = 1 << 8,
  ASCII_UPPER = 1 << 9,
  ASCII_XDIGIT = 1 << 10
};

/** @ingroup glibmmEnums */
inline AsciiType operator|(AsciiType lhs, AsciiType rhs)
  { return static_cast<AsciiType>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline AsciiType operator&(AsciiType lhs, AsciiType rhs)
  { return static_cast<AsciiType>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline AsciiType operator^(AsciiType lhs, AsciiType rhs)
  { return static_cast<AsciiType>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup glibmmEnums */
inline AsciiType operator~(AsciiType flags)
  { return static_cast<AsciiType>(~static_cast<unsigned>(flags)); }

/** @ingroup glibmmEnums */
inline AsciiType& operator|=(AsciiType& lhs, AsciiType rhs)
  { return (lhs = static_cast<AsciiType>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup glibmmEnums */
inline AsciiType& operator&=(AsciiType& lhs, AsciiType rhs)
  { return (lhs = static_cast<AsciiType>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup glibmmEnums */
inline AsciiType& operator^=(AsciiType& lhs, AsciiType rhs)
  { return (lhs = static_cast<AsciiType>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }


/**
 * @ingroup glibmmEnums
 */
enum NormalizeMode
{
  NORMALIZE_DEFAULT,
  NORMALIZE_NFD = NORMALIZE_DEFAULT,
  NORMALIZE_DEFAULT_COMPOSE,
  NORMALIZE_NFC = NORMALIZE_DEFAULT_COMPOSE,
  NORMALIZE_ALL,
  NORMALIZE_NFKD = NORMALIZE_ALL,
  NORMALIZE_ALL_COMPOSE,
  NORMALIZE_NFKC = NORMALIZE_ALL_COMPOSE
};


/** @defgroup Unicode Unicode Manipulation
 * Functions operating on Unicode characters and UTF-8 strings.
 * @{
 */

namespace Unicode
{

inline bool validate(gunichar uc)
  { return (g_unichar_validate(uc) != 0); }
inline bool isalnum(gunichar uc)
  { return (g_unichar_isalnum(uc) != 0); }
inline bool isalpha(gunichar uc)
  { return (g_unichar_isalpha(uc) != 0); }
inline bool iscntrl(gunichar uc)
  { return (g_unichar_iscntrl(uc) != 0); }
inline bool isdigit(gunichar uc)
  { return (g_unichar_isdigit(uc) != 0); }
inline bool isgraph(gunichar uc)
  { return (g_unichar_isgraph(uc) != 0); }
inline bool islower(gunichar uc)
  { return (g_unichar_islower(uc) != 0); }
inline bool isprint(gunichar uc)
  { return (g_unichar_isprint(uc) != 0); }
inline bool ispunct(gunichar uc)
  { return (g_unichar_ispunct(uc) != 0); }
inline bool isspace(gunichar uc)
  { return (g_unichar_isspace(uc) != 0); }
inline bool isupper(gunichar uc)
  { return (g_unichar_isupper(uc) != 0); }
inline bool isxdigit(gunichar uc)
  { return (g_unichar_isxdigit(uc) != 0); }
inline bool istitle(gunichar uc)
  { return (g_unichar_istitle(uc) != 0); }
inline bool isdefined(gunichar uc)
  { return (g_unichar_isdefined(uc) != 0); }
inline bool iswide(gunichar uc)
  { return (g_unichar_iswide(uc) != 0); }

inline gunichar toupper(gunichar uc)
  { return g_unichar_toupper(uc); }
inline gunichar tolower(gunichar uc)
  { return g_unichar_tolower(uc); }
inline gunichar totitle(gunichar uc)
  { return g_unichar_totitle(uc); }

inline int digit_value(gunichar uc)
  { return g_unichar_digit_value(uc); }
inline int xdigit_value(gunichar uc)
  { return g_unichar_xdigit_value(uc); }

inline Glib::UnicodeType type(gunichar uc)
  { return static_cast<Glib::UnicodeType>(static_cast<int>(g_unichar_type(uc))); }

inline Glib::UnicodeBreakType break_type(gunichar uc)
  { return static_cast<Glib::UnicodeBreakType>(static_cast<int>(g_unichar_break_type(uc))); }

} // namespace Unicode


namespace Ascii
{

inline bool isalnum(char c)
  { return g_ascii_isalnum(c); }
inline bool isalpha(char c)
  { return g_ascii_isalpha(c); }
inline bool iscntrl(char c)
  { return g_ascii_iscntrl(c); }
inline bool isdigit(char c)
  { return g_ascii_isdigit(c); }
inline bool isgraph(char c)
  { return g_ascii_isgraph(c); }
inline bool islower(char c)
  { return g_ascii_islower(c); }
inline bool isprint(char c)
  { return g_ascii_isprint(c); }
inline bool ispunct(char c)
  { return g_ascii_ispunct(c); }
inline bool isspace(char c)
  { return g_ascii_isspace(c); }
inline bool isupper(char c)
  { return g_ascii_isupper(c); }
inline bool isxdigit(char c)
  { return g_ascii_isxdigit(c); }

inline char tolower(char c)
  { return g_ascii_tolower(c); }
inline char toupper(char c)
  { return g_ascii_toupper(c); }

inline int digit_value(char c)
  { return g_ascii_digit_value(c); }
inline int xdigit_value(char c)
  { return g_ascii_xdigit_value(c); }

} // namespace Ascii


/** @} group Unicode */

// For some reason gmmproc thinks that g_iconv should be wrapped here.


} // namespace Glib


#endif /* _GLIBMM_UNICODE_H */

