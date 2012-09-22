// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_CLIPBOARD_H
#define _GTKMM_CLIPBOARD_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: clipboard.hg,v 1.17 2006/06/13 17:16:26 murrayc Exp $ */

/* clipboard.h
 * 
 * Copyright (C) 2002 The gtkmm Development Team
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

#include <vector>

#include <gdkmm/display.h> 
#include <gdkmm/pixbuf.h>
#include <gtkmm/targetentry.h>
#include <gtkmm/selectiondata.h>
#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkClipboard GtkClipboard;
typedef struct _GtkClipboardClass GtkClipboardClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Clipboard_Class; } // namespace Gtk
namespace Gtk
{

#ifndef DOXYGEN_SHOULD_SKIP_THIS
class TextBuffer;
#endif //DOXYGEN_SHOULD_SKIP_THIS

/** The Clipboard object represents a clipboard of data shared between different processes or between 
 * different widgets in the same process. Each clipboard is identified by a name encoded as a GdkAtom. *
 * (Conversion to and from strings can be done with gdk_atom_intern() and gdk_atom_name().) The default 
 * clipboard corresponds to the "CLIPBOARD" atom; another commonly used clipboard is the "PRIMARY" clipboard, 
 * which, in X, traditionally contains the currently selected text.
 *
 * To support having a number of different formats on the clipboard at the same time, the clipboard mechanism 
 * allows providing callbacks instead of the actual data. When you set the contents of the clipboard, you can 
 * either supply the data directly (via functions like set_text()), or you can supply a callback 
 * to be called at a later time when the data is needed (via set().) Providing a callback also avoids having to 
 * make copies of the data when it is not needed.
 *
 * Requesting the data from the clipboard is essentially asynchronous. If the contents of the clipboard are 
 * provided within the same process, then a direct function call will be made to retrieve the data, but if they 
 * are provided by another process, then the data needs to be retrieved from the other process, which may take 
 * some time. To avoid blocking the user interface, the call to request the selection, request_contents() takes 
 * a callback that will be called when the contents are received (or when the request fails.) If you don't want 
 * to deal with providing a separate callback, you can also use wait_for_contents(). This runs the 
 * GLib main loop recursively waiting for the contents. This can simplify the code flow, but you still have to 
 * be aware that other callbacks in your program can be called while this recursive mainloop is running.
 *
 * Along with the functions to get the clipboard contents as an arbitrary data chunk, there are also functions 
 * to retrieve it as text, request_text() and wait_for_text(). These functions take 
 * care of determining which formats are advertised by the clipboard provider, asking for the clipboard in the 
 * best available format and converting the results into the UTF-8 encoding.
 */

class Clipboard : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Clipboard CppObjectType;
  typedef Clipboard_Class CppClassType;
  typedef GtkClipboard BaseObjectType;
  typedef GtkClipboardClass BaseClassType;

private:  friend class Clipboard_Class;
  static CppClassType clipboard_class_;

private:
  // noncopyable
  Clipboard(const Clipboard&);
  Clipboard& operator=(const Clipboard&);

protected:
  explicit Clipboard(const Glib::ConstructParams& construct_params);
  explicit Clipboard(GtkClipboard* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Clipboard();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkClipboard*       gobj()       { return reinterpret_cast<GtkClipboard*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkClipboard* gobj() const { return reinterpret_cast<GtkClipboard*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkClipboard* gobj_copy();

private:

public:

  
  /** Returns the clipboard object for the given selection.
   * See get_for_display() for complete details.
   * @param selection A Gdk::Atom which identifies the clipboard to use.
   * @return The appropriate clipboard object. If no clipboard
   * already exists, a new one will be created. Once a clipboard
   * object has been created, it is persistent and, since it is
   * owned by GTK+, must not be freed or unreffed.
   */
  static Glib::RefPtr<Clipboard> get(GdkAtom selection =  GDK_SELECTION_CLIPBOARD);
  
  /** Returns the clipboard object for the given selection.
   * Cut/copy/paste menu items and keyboard shortcuts should use
   * the default clipboard, returned by passing Gdk::SELECTION_CLIPBOARD for @a selection.
   * (Gdk::NONE is supported as a synonym for GDK_SELECTION_CLIPBOARD
   * for backwards compatibility reasons.)
   * The currently-selected object or text should be provided on the clipboard
   * identified by Gdk::SELECTION_PRIMARY. Cut/copy/paste menu items
   * conceptually copy the contents of the Gdk::SELECTION_PRIMARY clipboard
   * to the default clipboard, i.e. they copy the selection to what the
   * user sees as the clipboard.
   * 
   * (Passing Gdk::NONE is the same as using <tt>gdk_atom_intern
   * ("CLIPBOARD", <tt>false</tt>)</tt>. See 
   * http://www.freedesktop.org/Standards/clipboards-spec
   * for a detailed discussion of the "CLIPBOARD" vs. "PRIMARY"
   * selections under the X window system. On Win32 the
   * Gdk::SELECTION_PRIMARY clipboard is essentially ignored.)
   * 
   * It's possible to have arbitrary named clipboards; if you do invent
   * new clipboards, you should prefix the selection name with an
   * underscore (because the ICCCM requires that nonstandard atoms are
   * underscore-prefixed), and namespace it as well. For example,
   * if your application called "Foo" has a special-purpose
   * clipboard, you might call it "_FOO_SPECIAL_CLIPBOARD".
   * 
   * @newin{2,2}
   * @param display The display for which the clipboard is to be retrieved or created.
   * @param selection A Gdk::Atom which identifies the clipboard to use.
   * @return The appropriate clipboard object. If no
   * clipboard already exists, a new one will be created. Once a clipboard
   * object has been created, it is persistent and, since it is owned by
   * GTK+, must not be freed or unrefd.
   */
  static Glib::RefPtr<Clipboard> get_for_display(const Glib::RefPtr<Gdk::Display>& display, GdkAtom selection =  GDK_SELECTION_CLIPBOARD);

  
  /** Gets the Gdk::Display associated with @a clipboard
   * 
   * @newin{2,2}
   * @return The Gdk::Display associated with @a clipboard.
   */
  Glib::RefPtr<Gdk::Display> get_display();
  
  /** Gets the Gdk::Display associated with @a clipboard
   * 
   * @newin{2,2}
   * @return The Gdk::Display associated with @a clipboard.
   */
  Glib::RefPtr<const Gdk::Display> get_display() const;

  /// For instance: void on_get(Gtk::SelectionData& selection_data, guint info);
  typedef sigc::slot<void, SelectionData&, guint> SlotGet;

  /// For instance: void on_clear();
  typedef sigc::slot<void> SlotClear;

 /** Virtually sets the contents of the specified clipboard by providing
  * a list of supported formats for the clipboard data and a function
  * to call to get the actual data when it is requested.
  *
  * @param targets Information about the available forms for the clipboard data.
  * @param slot_get method to call to get the actual clipboard data.
  * @param slot_clear When the clipboard contents are set again, this method will
  *              be called, and slot_get will not be subsequently called.
  *
  * @return true if setting the clipboard data succeeded. If setting
  *               the clipboard data failed then the provided callback methods
  *               will be ignored.
  */
  bool set(const std::vector<TargetEntry>& targets, const SlotGet& slot_get, const SlotClear& slot_clear);
  
  
  /** If the clipboard contents callbacks were set with
   * set_with_owner(), and the set_with_data() or
   * clear() has not subsequently called, returns the owner set
   * by set_with_owner().
   * @return The owner of the clipboard, if any;
   * otherwise <tt>0</tt>.
   */
  Glib::RefPtr<Glib::Object> get_owner();
  
  /** If the clipboard contents callbacks were set with
   * set_with_owner(), and the set_with_data() or
   * clear() has not subsequently called, returns the owner set
   * by set_with_owner().
   * @return The owner of the clipboard, if any;
   * otherwise <tt>0</tt>.
   */
  Glib::RefPtr<const Glib::Object> get_owner() const;

  
  /**
   * Clears the contents of the clipboard. Generally this should only
   * be called between the time you call set()
   * and when the slot_clear you supplied is called. Otherwise, the
   * clipboard may be owned by someone else.
   */
  void clear();

  /**
   * Sets the contents of the clipboard to the given UTF-8 string. GTK+ will
   * make a copy of the text and take responsibility for responding
   * for requests for the text, and for converting the text into
   * the requested format.
   *
   * @param text  A UTF-8 string.
   *
   */
  void set_text(const Glib::ustring& text);
  
  
  /** Sets the contents of the clipboard to the given Gdk::Pixbuf. 
   * GTK+ will take responsibility for responding for requests 
   * for the image, and for converting the image into the 
   * requested format.
   * 
   * @newin{2,6}
   * @param pixbuf A Gdk::Pixbuf.
   */
  void set_image(const Glib::RefPtr<Gdk::Pixbuf>& pixbuf);

  /// For instance: void on_received(const SelectionData& selection_data);
  typedef sigc::slot<void, const SelectionData&> SlotReceived;

  /** Requests the contents of clipboard as the given target.
   * When the results of the result are later received the supplied callback
   * will be called.
   *
   * @param target The form into which the clipboard
   *             owner should convert the selection.
   * @param slot  A function to call when the results are received
   *             (or the retrieval fails). If the retrieval fails
   *             the length field of selection_data will be
   *             negative.
   **/
  void request_contents(const Glib::ustring& target, const SlotReceived& slot);
  
  
  /// For instance: void on_text_received(const Glib::ustring& text);
  typedef sigc::slot<void, const Glib::ustring&> SlotTextReceived;

  /** Requests the contents of the clipboard as text. When the text is
   * later received, it will be converted to UTF-8 if necessary, and
   * slot will be called.
   *
   * The text parameter to slot will contain the resulting text if
   * the request succeeded, or will be empty if it failed. This could happen for
   * various reasons, in particular if the clipboard was empty or if the
   * contents of the clipboard could not be converted into text form.
   *
   * @param slot:  a function to call when the text is received,
   *             or the retrieval fails. (It will always be called
   *             one way or the other.)
   */
  void request_text(const SlotTextReceived& slot);
  

  /// For instance: void on_rich_text_received(const Glib::ustring& format, const std::string& text);
  typedef sigc::slot<void, const Glib::ustring&, const std::string&> SlotRichTextReceived;

  /** Requests the contents of the clipboard as rich text. When the rich text is later received, 
   * callback will be called.
   *
   * The text parameter to the callback will contain the resulting rich text if the request succeeded, or 
   * an empty string if it failed. This function can fail for various reasons, in particular if the 
   * clipboard was empty or if the contents of the clipboard could not be converted into rich text form.
   *
   *
   * @param slot:  a function to call when the text is received,
   *             or the retrieval fails. (It will always be called
   *             one way or the other.)
   */
  void request_rich_text(const Glib::RefPtr<TextBuffer>& buffer, const SlotRichTextReceived& slot);
  

  /// For instance: void on_uris_received(const std::vector<Glib::ustring>& uris);
  typedef sigc::slot<void, const std::vector<Glib::ustring>&> SlotUrisReceived;

 /** Requests the contents of the clipboard as URIs. When the URIs are
  * later received @a slot will be called.
  *
  * The uris parameter to @a slot will contain the resulting array of
  * URIs if the request succeeded, or an empty list if it failed. This could happen
  * for various reasons, in particular if the clipboard was empty or if the
  * contents of the clipboard could not be converted into URI form.
  *
  * @param slot A slot to call when the URIs are received, or the retrieval fails. (It will always be called one way or the other.)
  *
  * @newin{2,14}
  */
  void request_uris(const SlotUrisReceived& slot);
  
  
  /// For instance: void on_image_received(const Glib::RefPtr<Gdk::Pixbuf>& text);
  typedef sigc::slot<void, const Glib::RefPtr<Gdk::Pixbuf>&> SlotImageReceived;
  
  /** Requests the contents of the clipboard as image. When the image is
   * later received, it will be converted to a Gdk::Pixbuf. 
   * This function waits for
   * the data to be received using the main loop, so events,
   * timeouts, etc, may be dispatched during the wait.
   *
   * The pixbuf parameter to slot will contain the resulting pixbuf if
   * the request succeeded, or will be empty if it failed. This could happen for
   * various reasons, in particular if the clipboard was empty or if the
   * contents of the clipboard could not be converted into image form.
   *
   * @param slot:  a function to call when the text is received,
   *             or the retrieval fails. (It will always be called
   *             one way or the other.)
   */
  void request_image(const SlotImageReceived& slot);
  

  /// For instance: void on_targets_received(const std::vector<Glib::ustring>& targets);
  typedef sigc::slot<void, const std::vector<Glib::ustring>&> SlotTargetsReceived;

  /** Requests the contents of the clipboard as list of supported targets.
   * When the list is later received, callback will be called.
   *
   * The targets parameter to slot will contain the resulting targets if
   * the request succeeded.
   *
   * @param slot a function to call when the targets are received,
   *             or the retrieval fails. (It will always be called
   *             one way or the other.)
   *
   * @newin{2,4}
   */
  void request_targets(const SlotTargetsReceived& slot);
  
               
  /**
   * Requests the contents of the clipboard using the given target.
   * This function waits for the data to be received using the main
   * loop, so events, timeouts, etc, may be dispatched during the wait.
   *
   * @param target The form into which the clipboard owner should convert the selection.
   *
   * @return A SelectionData object, which will be invalid if retrieving the given target failed. 
   */
  SelectionData wait_for_contents(const Glib::ustring& target) const;
  

  /** Requests the contents of the clipboard as text and converts
   * the result to UTF-8 if necessary. This function waits for
   * the data to be received using the main loop, so events,
   * timeouts, etc, may be dispatched during the wait.
   * @return A UTF-8 string, which is empty if retrieving
   * the selection data failed. (This could happen
   * for various reasons, in particular if the
   * clipboard was empty or if the contents of the
   * clipboard could not be converted into text form.).
   */
  Glib::ustring wait_for_text() const;

  std::string wait_for_rich_text(const Glib::RefPtr<TextBuffer>& buffer, std::string& format);
  
  
  //Maybe the result should be const, but constness is not so clear-cut here. murrayc
  
  /** Requests the contents of the clipboard as image and converts
   * the result to a Gdk::Pixbuf. This function waits for
   * the data to be received using the main loop, so events,
   * timeouts, etc, may be dispatched during the wait.
   * 
   * @newin{2,6}
   * @return A newly-allocated Gdk::Pixbuf
   * object which must be disposed with Glib::object_unref(), or
   * <tt>0</tt> if retrieving the selection data failed. (This could
   * happen for various reasons, in particular if the clipboard
   * was empty or if the contents of the clipboard could not be
   * converted into an image.).
   */
  Glib::RefPtr<Gdk::Pixbuf> wait_for_image() const;
  
  
  /** Test to see if there is text available to be pasted
   * This is done by requesting the TARGETS atom and checking
   * if it contains any of the supported text targets. This function 
   * waits for the data to be received using the main loop, so events, 
   * timeouts, etc, may be dispatched during the wait.
   * 
   * This function is a little faster than calling
   * wait_for_text() since it doesn't need to retrieve
   * the actual text.
   * @return <tt>true</tt> is there is text available, <tt>false</tt> otherwise.
   */
  bool wait_is_text_available() const;
  
  /** Test to see if there is rich text available to be pasted
   * This is done by requesting the TARGETS atom and checking
   * if it contains any of the supported rich text targets. This function
   * waits for the data to be received using the main loop, so events,
   * timeouts, etc, may be dispatched during the wait.
   * 
   * This function is a little faster than calling
   * wait_for_rich_text() since it doesn't need to retrieve
   * the actual text.
   * 
   * @newin{2,10}
   * @param buffer A Gtk::TextBuffer.
   * @return <tt>true</tt> is there is rich text available, <tt>false</tt> otherwise.
   */
  bool wait_is_rich_text_available(const Glib::RefPtr<TextBuffer>& buffer) const;
  
  /** Test to see if there is an image available to be pasted
   * This is done by requesting the TARGETS atom and checking
   * if it contains any of the supported image targets. This function 
   * waits for the data to be received using the main loop, so events, 
   * timeouts, etc, may be dispatched during the wait.
   * 
   * This function is a little faster than calling
   * wait_for_image() since it doesn't need to retrieve
   * the actual image data.
   * 
   * @newin{2,6}
   * @return <tt>true</tt> is there is an image available, <tt>false</tt> otherwise.
   */
  bool wait_is_image_available() const;
  
  /** Test to see if there is a list of URIs available to be pasted
   * This is done by requesting the TARGETS atom and checking
   * if it contains the URI targets. This function
   * waits for the data to be received using the main loop, so events, 
   * timeouts, etc, may be dispatched during the wait.
   * 
   * This function is a little faster than calling
   * wait_for_uris() since it doesn't need to retrieve
   * the actual URI data.
   * 
   * @newin{2,14}
   * @return <tt>true</tt> is there is an URI list available, <tt>false</tt> otherwise.
   */
  bool wait_is_uris_available() const;
  
  /** Checks if a clipboard supports pasting data of a given type. This
   * function can be used to determine if a "Paste" menu item should be
   * insensitive or not.
   * 
   * If you want to see if there's text available on the clipboard, use
   * wait_is_text_available() instead.
   * 
   * @newin{2,6}
   * @param target A Gdk::Atom indicating which target to look for.
   * @return <tt>true</tt> if the target is available, <tt>false</tt> otherwise.
   */
  bool wait_is_target_available(const Glib::ustring& target);

  /** Returns a list of targets that are present on the clipboard.
   * This function waits for the data to be received using the main
   * loop, so events, timeouts, etc, may be dispatched during the wait.
   *
   * @result targets: The targets.
   *
   * @newin{2,4}
   */
  std::vector<Glib::ustring> wait_for_targets() const;
  

  /** Requests the contents of the clipboard as URIs. This function waits
   * for the data to be received using the main loop, so events,
   * timeouts, etc, may be dispatched during the wait.
   * 
   * @newin{2,14}
   * @return A newly-allocated
   * <tt>0</tt>-terminated array of strings which must
   * be freed with Glib::strfreev(), or <tt>0</tt> if
   * retrieving the selection data failed. (This
   * could happen for various reasons, in particular
   * if the clipboard was empty or if the contents of
   * the clipboard could not be converted into URI form.).
   */
  std::vector<Glib::ustring> wait_for_uris() const;

  /** Hints that the clipboard data should be stored somewhere when the application exits or when store() 
   * is called.
   * 
   * This value is reset when the clipboard owner changes. Where the clipboard data is stored is platform 
   * dependent, see Gdk::Display::store_clipboard() for more information.
   *
   * @param targets Array containing information about which forms should be stored.
   */
  void set_can_store(const std::vector<TargetEntry>& targets);
  
  /** Hints that all forms of clipboard data should be stored somewhere when the application exits or when store() 
   * is called.
   * 
   * This value is reset when the clipboard owner changes. Where the clipboard data is stored is platform 
   * dependent, see Gdk::Display::store_clipboard() for more information.
   */
  void set_can_store();
  

  /** Stores the current clipboard data somewhere so that it will stay
   * around after the application has quit.
   * 
   * @newin{2,6}
   */
  void store();

  
/**
   * @par Slot Prototype:
   * <tt>void on_my_%owner_change(GdkEventOwnerChange* event)</tt>
   *
   * The signal_owner_change() signal is emitted when GTK+ receives an
   * event that indicates that the ownership of the selection
   * associated with @a clipboard has changed.
   * 
   * @newin{2,6}
   * @param event The @a GdkEventOwnerChange event.
   */

  Glib::SignalProxy1< void,GdkEventOwnerChange* > signal_owner_change();

           
public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Clipboard
   */
  Glib::RefPtr<Gtk::Clipboard> wrap(GtkClipboard* object, bool take_copy = false);
}


#endif /* _GTKMM_CLIPBOARD_H */

