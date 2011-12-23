// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_MOUNTOPERATION_H
#define _GIOMM_MOUNTOPERATION_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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
typedef struct _GMountOperation GMountOperation;
typedef struct _GMountOperationClass GMountOperationClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class MountOperation_Class; } // namespace Gio
namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/**
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>%AskPasswordFlags operator|(AskPasswordFlags, AskPasswordFlags)</tt><br>
 * <tt>%AskPasswordFlags operator&(AskPasswordFlags, AskPasswordFlags)</tt><br>
 * <tt>%AskPasswordFlags operator^(AskPasswordFlags, AskPasswordFlags)</tt><br>
 * <tt>%AskPasswordFlags operator~(AskPasswordFlags)</tt><br>
 * <tt>%AskPasswordFlags& operator|=(AskPasswordFlags&, AskPasswordFlags)</tt><br>
 * <tt>%AskPasswordFlags& operator&=(AskPasswordFlags&, AskPasswordFlags)</tt><br>
 * <tt>%AskPasswordFlags& operator^=(AskPasswordFlags&, AskPasswordFlags)</tt><br>
 */
enum AskPasswordFlags
{
  ASK_PASSWORD_NEED_PASSWORD = (1 << 0),
  ASK_PASSWORD_NEED_USERNAME = (1 << 1),
  ASK_PASSWORD_NEED_DOMAIN = (1 << 2),
  ASK_PASSWORD_SAVING_SUPPORTED = (1 << 3),
  ASK_PASSWORD_ANONYMOUS_SUPPORTED = (1 << 4)
};

/** @ingroup giommEnums */
inline AskPasswordFlags operator|(AskPasswordFlags lhs, AskPasswordFlags rhs)
  { return static_cast<AskPasswordFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline AskPasswordFlags operator&(AskPasswordFlags lhs, AskPasswordFlags rhs)
  { return static_cast<AskPasswordFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline AskPasswordFlags operator^(AskPasswordFlags lhs, AskPasswordFlags rhs)
  { return static_cast<AskPasswordFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline AskPasswordFlags operator~(AskPasswordFlags flags)
  { return static_cast<AskPasswordFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline AskPasswordFlags& operator|=(AskPasswordFlags& lhs, AskPasswordFlags rhs)
  { return (lhs = static_cast<AskPasswordFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline AskPasswordFlags& operator&=(AskPasswordFlags& lhs, AskPasswordFlags rhs)
  { return (lhs = static_cast<AskPasswordFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline AskPasswordFlags& operator^=(AskPasswordFlags& lhs, AskPasswordFlags rhs)
  { return (lhs = static_cast<AskPasswordFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }


/**
 * @ingroup giommEnums
 */
enum PasswordSave
{
  PASSWORD_SAVE_NEVER,
  PASSWORD_SAVE_FOR_SESSION,
  PASSWORD_SAVE_PERMANENTLY
};


/**
 * @ingroup giommEnums
 */
enum MountOperationResult
{
  MOUNT_OPERATION_HANDLED,
  MOUNT_OPERATION_ABORTED,
  MOUNT_OPERATION_UNHANDLED
};


/** Authentication methods for mountable locations.
 *
 * MountOperation provides a mechanism for authenticating mountable operations, such as loop mounting files, hard drive partitions or server locations.
 * 
 * Mounting operations are handed a MountOperation that they can use if they require any privileges or authentication for their volumes to be mounted (e.g. 
 * a hard disk partition or an encrypted filesystem), or if they are implementing a remote server protocol which requires user credentials such as FTP or 
 * WebDAV.
 *
 * Developers should instantiate a subclass of this that implements all the various callbacks to show the required dialogs.
 *
 * @newin{2,16}
 */

class MountOperation : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef MountOperation CppObjectType;
  typedef MountOperation_Class CppClassType;
  typedef GMountOperation BaseObjectType;
  typedef GMountOperationClass BaseClassType;

private:  friend class MountOperation_Class;
  static CppClassType mountoperation_class_;

private:
  // noncopyable
  MountOperation(const MountOperation&);
  MountOperation& operator=(const MountOperation&);

protected:
  explicit MountOperation(const Glib::ConstructParams& construct_params);
  explicit MountOperation(GMountOperation* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~MountOperation();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GMountOperation*       gobj()       { return reinterpret_cast<GMountOperation*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GMountOperation* gobj() const { return reinterpret_cast<GMountOperation*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GMountOperation* gobj_copy();

private:


protected:
  MountOperation();

public:
  
  static Glib::RefPtr<MountOperation> create();


  /** Get the user name from the mount operation.
   * @return A string containing the user name.
   */
  Glib::ustring get_username() const;
  
  /** Sets the user name within @a op to @a username.
   * @param username Input username.
   */
  void set_username(const Glib::ustring& username);
  
  /** Gets a password from the mount operation.
   * @return A string containing the password within @a op.
   */
  Glib::ustring get_password() const;
  
  /** Sets the mount operation's password to @a password.
   * @param password Password to set.
   */
  void set_password(const Glib::ustring& password);
  
  /** Check to see whether the mount operation is being used 
   * for an anonymous user.
   * @return <tt>true</tt> if mount operation is anonymous.
   */
  bool get_anonymous() const;
  
  /** Sets the mount operation to use an anonymous user if @a anonymous is <tt>true</tt>.
   * @param anonymous Boolean value.
   */
  void set_anonymous(bool anonymous =  true);
  
  /** Gets the domain of the mount operation.
   * @return A string set to the domain.
   */
  Glib::ustring get_domain() const;
  
  /** Sets the mount operation's domain.
   * @param domain The domain to set.
   */
  void set_domain(const Glib::ustring& domain);
  
  /** Gets the state of saving passwords for the mount operation.
   * @return A PasswordSave flag.
   */
  PasswordSave get_password_save() const;
  
  /** Sets the state of saving passwords for the mount operation.
   * @param save A set of PasswordSave flags.
   */
  void set_password_save(PasswordSave password_save);
  
  /** Gets a choice from the mount operation.
   * @return An integer containing an index of the user's choice from 
   * the choice's list, or %0.
   */
  int get_choice() const;
  
  /** Sets a default choice for the mount operation.
   * @param choice An integer.
   */
  void set_choice(int choice);
  
  /** Emits the MountOperation::reply signal.
   * @param result A MountOperationResult.
   */
  void reply(MountOperationResult result);


  /**
   * @par Prototype:
   * <tt>void on_my_%ask_password(const Glib::ustring& message, const Glib::ustring& default_user, const Glib::ustring& default_domain, AskPasswordFlags flags)</tt>
   */

  Glib::SignalProxy4< void,const Glib::ustring&,const Glib::ustring&,const Glib::ustring&,AskPasswordFlags > signal_ask_password();


  //TODO: We really need some test to make sure that our use of StringArrayHandle is correct. murrayc.
 

  /**
   * @par Prototype:
   * <tt>void on_my_%ask_question(const Glib::ustring& message, const Glib::StringArrayHandle& choices)</tt>
   */

  Glib::SignalProxy2< void,const Glib::ustring&,const Glib::StringArrayHandle& > signal_ask_question();


  /**
   * @par Prototype:
   * <tt>void on_my_%reply(MountOperationResult result)</tt>
   */

  Glib::SignalProxy1< void,MountOperationResult > signal_reply();


  //TODO: Remove no_default_handler when we can break ABI:
  
  /**
   * @par Prototype:
   * <tt>void on_my_%aborted()</tt>
   */

  Glib::SignalProxy0< void > signal_aborted();


  //TODO: The array of char* is not very pleasant to wrap:
  //_WRAP_SIGNAL( void show_processes(const Glib::ustring& message, GArray* processes, const gchar *choices[]);

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The user name.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_username() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The user name.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_username() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The password.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_password() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The password.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_password() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to use an anonymous user.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_anonymous() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to use an anonymous user.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_anonymous() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The domain of the mount operation.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_domain() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The domain of the mount operation.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_domain() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** How passwords should be saved.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<PasswordSave> property_password_save() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** How passwords should be saved.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<PasswordSave> property_password_save() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The users choice.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<int> property_choice() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The users choice.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_choice() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_ask_password(const Glib::ustring& message, const Glib::ustring& default_user, const Glib::ustring& default_domain, AskPasswordFlags flags);
  virtual void on_ask_question(const Glib::ustring& message, const Glib::StringArrayHandle& choices);
  virtual void on_reply(MountOperationResult result);


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
   * @relates Gio::MountOperation
   */
  Glib::RefPtr<Gio::MountOperation> wrap(GMountOperation* object, bool take_copy = false);
}


#endif /* _GIOMM_MOUNTOPERATION_H */

