// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_CREDENTIALS_H
#define _GIOMM_CREDENTIALS_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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

#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GCredentials GCredentials;
typedef struct _GCredentialsClass GCredentialsClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class Credentials_Class; } // namespace Gio
namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/**
 * @ingroup giommEnums
 */
enum CredentialsType
{
  CREDENTIALS_TYPE_INVALID,
  CREDENTIALS_TYPE_LINUX_UCRED,
  CREDENTIALS_TYPE_FREEBSD_CMSGCRED
};


/** An object containing credentials.
 * The Credentials type is a reference-counted wrapper for native credentials.
 * This information is typically used for identifying, authenticating and
 * authorizing other processes.
 *
 * Some operating systems supports looking up the credentials of the remote
 * peer of a communication endpoint - see e.g. Gio::Socket::get_credentials().
 *
 * Some operating systems supports securely sending and receiving credentials
 * over a Unix Domain Socket, see UnixCredentialsMessage,
 * Gio::UnixConnection::send_credentials() and
 * Gio::UnixConnection::receive_credentials() for details.
 *
 * On Linux, the native credential type is a struct ucred - see the unix(7)
 * man page for details. This corresponds to
 * Gio::CREDENTIALS_TYPE_LINUX_UCRED.
 *
 * On FreeBSD, the native credential type is a struct cmsgcred. This
 * corresponds to Gio::CREDENTIALS_TYPE_FREEBSD_CMSGCRED.
 *
 * @newin{2,28}
 */

class Credentials : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Credentials CppObjectType;
  typedef Credentials_Class CppClassType;
  typedef GCredentials BaseObjectType;
  typedef GCredentialsClass BaseClassType;

private:  friend class Credentials_Class;
  static CppClassType credentials_class_;

private:
  // noncopyable
  Credentials(const Credentials&);
  Credentials& operator=(const Credentials&);

protected:
  explicit Credentials(const Glib::ConstructParams& construct_params);
  explicit Credentials(GCredentials* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Credentials();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GCredentials*       gobj()       { return reinterpret_cast<GCredentials*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GCredentials* gobj() const { return reinterpret_cast<GCredentials*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GCredentials* gobj_copy();

private:


protected:
  Credentials();
  

public:
  
  static Glib::RefPtr<Credentials> create();


  /** Creates a human-readable textual representation of @a credentials
   * that can be used in logging and debug messages. The format of the
   * returned string may change in future GLib release.
   * 
   * @newin{2,26}
   * @return A string that should be freed with Glib::free().
   */
  Glib::ustring to_string() const;

  
  /** Gets a pointer to native credentials of type @a native_type from
   *  @a credentials.
   * 
   * It is a programming error (which will cause an warning to be
   * logged) to use this method if there is no Credentials support for
   * the OS or if @a native_type isn't supported by the OS.
   * 
   * @newin{2,26}
   * @param native_type The type of native credentials to get.
   * @return The pointer to native credentials or <tt>0</tt> if the
   * operation there is no Credentials support for the OS or if
   *  @a native_type isn't supported by the OS. Do not free the returned
   * data, it is owned by @a credentials.
   */
  gpointer get_native(CredentialsType native_type);
  
  /** Copies the native credentials of type @a native_type from @a native
   * into @a credentials.
   * 
   * It is a programming error (which will cause an warning to be
   * logged) to use this method if there is no Credentials support for
   * the OS or if @a native_type isn't supported by the OS.
   * 
   * @newin{2,26}
   * @param native_type The type of native credentials to set.
   * @param native A pointer to native credentials.
   */
  void set_native(CredentialsType native_type, gpointer native);
  
  /** Checks if @a credentials and @a other_credentials is the same user.
   * 
   * This operation can fail if Credentials is not supported on the
   * the OS.
   * 
   * @newin{2,26}
   * @param other_credentials A Credentials.
   * @return <tt>true</tt> if @a credentials and @a other_credentials has the same
   * user, <tt>false</tt> otherwise or if @a error is set.
   */
  bool is_same_user(const Glib::RefPtr<const Credentials>& other_credentials);

  
  /** Tries to get the UNIX user identifier from @a credentials. This
   * method is only available on UNIX platforms.
   * 
   * This operation can fail if Credentials is not supported on the
   * OS or if the native credentials type does not contain information
   * about the UNIX user.
   * 
   * @newin{2,26}
   * @return The UNIX user identifier or -1 if @a error is set.
   */

#ifdef  G_OS_UNX
  uid_t get_unix_user();
#endif //  G_OS_UNX

  
  /** Tries to set the UNIX user identifier on @a credentials. This method
   * is only available on UNIX platforms.
   * 
   * This operation can fail if Credentials is not supported on the
   * OS or if the native credentials type does not contain information
   * about the UNIX user.
   * 
   * @newin{2,26}
   * @param uid The UNIX user identifier to set.
   * @return <tt>true</tt> if @a uid was set, <tt>false</tt> if error is set.
   */

#ifdef  G_OS_UNIX
  bool set_unix_user(uid_t uid);
#endif //  G_OS_UNIX


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};


} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::Credentials
   */
  Glib::RefPtr<Gio::Credentials> wrap(GCredentials* object, bool take_copy = false);
}


#endif /* _GIOMM_CREDENTIALS_H */

