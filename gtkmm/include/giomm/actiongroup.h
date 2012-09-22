// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_ACTIONGROUP_H
#define _GIOMM_ACTIONGROUP_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <glibmm/interface.h>
#include <glibmm/varianttype.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GActionGroupInterface GActionGroupInterface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GActionGroup GActionGroup;
typedef struct _GActionGroupClass GActionGroupClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class ActionGroup_Class; } // namespace Gio
namespace Glib
{

class VariantBase;
class VariantContainerBase;

}

namespace Gio
{

/** ActionGroup - a group of actions.
 * ActionGroup represents a group of actions.
 *
 * Each action in the group has a unique name (which is a string). All method
 * calls, except list_actions() take the name of an action as an argument.
 *
 * The GActionGroup API is meant to be the 'public' API to the action group.
 * The calls here are exactly the interaction that 'external forces' (eg: UI,
 * incoming D-Bus messages, etc.) are supposed to have with actions.
 * 'Internal' APIs (ie: ones meant only to be accessed by the action group
 * implementation) are found on subclasses. This is why you will find -- for
 * example -- get_action_enabled() but not an equivalent @c set() call.
 *
 * Signals are emitted on the action group in response to state changes on
 * individual actions.
 */

class ActionGroup : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef ActionGroup CppObjectType;
  typedef ActionGroup_Class CppClassType;
  typedef GActionGroup BaseObjectType;
  typedef GActionGroupInterface BaseClassType;

private:
  friend class ActionGroup_Class;
  static CppClassType actiongroup_class_;

  // noncopyable
  ActionGroup(const ActionGroup&);
  ActionGroup& operator=(const ActionGroup&);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  ActionGroup();
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit ActionGroup(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit ActionGroup(GActionGroup* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~ActionGroup();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GActionGroup*       gobj()       { return reinterpret_cast<GActionGroup*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GActionGroup* gobj() const { return reinterpret_cast<GActionGroup*>(gobject_); }

private:


public:
  
  /** Checks if the named action exists within @a action_group.
   * 
   * @newin{2,28}
   * @param action_name The name of the action to check for.
   * @return Whether the named action exists.
   */
  bool has_action(const Glib::ustring& action_name) const;

 
  /** Lists the actions contained within @a action_group.
   * 
   * The caller is responsible for freeing the list with Glib::strfreev() when
   * it is no longer required.
   * 
   * @newin{2,28}
   * @return A <tt>0</tt>-terminated array of the names of the
   * actions in the groupb.
   */
  std::vector<Glib::ustring> list_actions() const;

  
  /** Checks if the named action within @a action_group is currently enabled.
   * 
   * An action must be enabled in order to be activated or in order to
   * have its state changed from outside callers.
   * 
   * @newin{2,28}
   * @param action_name The name of the action to query.
   * @return Whether or not the action is currently enabled.
   */
  bool get_action_enabled(const Glib::ustring& action_name) const;

  
  /** Queries the type of the parameter that must be given when activating
   * the named action within @a action_group.
   * 
   * When activating the action using g_action_group_activate_action(),
   * the Variant given to that function must be of the type returned
   * by this function.
   * 
   * In the case that this function returns <tt>0</tt>, you must not give any
   * Variant, but <tt>0</tt> instead.
   * 
   * The parameter type of a particular action will never change but it is
   * possible for an action to be removed and for a new action to be added
   * with the same name but a different parameter type.
   * 
   * @newin{2,28}
   * @param action_name The name of the action to query.
   * @return The parameter type.
   */
  Glib::VariantType get_action_parameter_type(const Glib::ustring& action_name) const;
  
  /** Queries the type of the state of the named action within
   *  @a action_group.
   * 
   * If the action is stateful then this function returns the
   * VariantType of the state.  All calls to
   * g_action_group_change_action_state() must give a Variant of this
   * type and g_action_group_get_action_state() will return a Variant
   * of the same type.
   * 
   * If the action is not stateful then this function will return <tt>0</tt>.
   * In that case, g_action_group_get_action_state() will return <tt>0</tt>
   * and you must not call g_action_group_change_action_state().
   * 
   * The state type of a particular action will never change but it is
   * possible for an action to be removed and for a new action to be added
   * with the same name but a different state type.
   * 
   * @newin{2,28}
   * @param action_name The name of the action to query.
   * @return The state type, if the action is stateful.
   */
  Glib::VariantType get_action_state_type(const Glib::ustring& action_name) const;

  
  /** Requests a hint about the valid range of values for the state of the
   * named action within @a action_group.
   * 
   * If <tt>0</tt> is returned it either means that the action is not stateful
   * or that there is no hint about the valid range of values for the
   * state of the action.
   * 
   * If a Variant array is returned then each item in the array is a
   * possible value for the state.  If a Variant pair (ie: two-tuple) is
   * returned then the tuple specifies the inclusive lower and upper bound
   * of valid values for the state.
   * 
   * In any case, the information is merely a hint.  It may be possible to
   * have a state value outside of the hinted range and setting a value
   * within the range may fail.
   * 
   * The return value (if non-<tt>0</tt>) should be freed with
   * Glib::variant_unref() when it is no longer required.
   * 
   * @newin{2,28}
   * @param action_name The name of the action to query.
   * @return The state range hint.
   */
  Glib::VariantContainerBase get_action_state_hint(const Glib::ustring& action_name) const;
  
  /** Queries the current state of the named action within @a action_group.
   * 
   * If the action is not stateful then <tt>0</tt> will be returned.  If the
   * action is stateful then the type of the return value is the type
   * given by g_action_group_get_action_state_type().
   * 
   * The return value (if non-<tt>0</tt>) should be freed with
   * Glib::variant_unref() when it is no longer required.
   * 
   * @newin{2,28}
   * @param action_name The name of the action to query.
   * @return The current state of the action.
   */
  Glib::VariantBase get_action_state(const Glib::ustring& action_name) const;

  
  /** Request for the state of the named action within @a action_group to be
   * changed to @a value.
   * 
   * The action must be stateful and @a value must be of the correct type.
   * See g_action_group_get_action_state_type().
   * 
   * This call merely requests a change.  The action may refuse to change
   * its state or may change its state to something other than @a value.
   * See g_action_group_get_action_state_hint().
   * 
   * If the @a value GVariant is floating, it is consumed.
   * 
   * @newin{2,28}
   * @param action_name The name of the action to request the change on.
   * @param value The new state.
   */
  void change_action_state(const Glib::ustring& action_name, const Glib::VariantBase& value);
  
  /** Activate the named action within @a action_group.
   * 
   * If the action is expecting a parameter, then the correct type of
   * parameter must be given as @parameter.  If the action is expecting no
   * parameters then @parameter must be <tt>0</tt>.  See
   * g_action_group_get_action_parameter_type().
   * 
   * @newin{2,28}
   * @param action_name The name of the action to activate.
   * @param parameter Parameters to the activation.
   */
  void activate_action(const Glib::ustring& action_name, const Glib::VariantBase& parameter);
  
  /** Emits the ActionGroup::signal_action_added() signal on @a action_group.
   * 
   * This function should only be called by ActionGroup implementations.
   * 
   * @newin{2,28}
   * @param action_name The name of an action in the group.
   */
  void action_added(const Glib::ustring& action_name);
  
  /** Emits the ActionGroup::signal_action_removed() signal on @a action_group.
   * 
   * This function should only be called by ActionGroup implementations.
   * 
   * @newin{2,28}
   * @param action_name The name of an action in the group.
   */
  void action_removed(const Glib::ustring& action_name);
  
  /** Emits the ActionGroup::signal_action_enabled_changed() signal on @a action_group.
   * 
   * This function should only be called by ActionGroup implementations.
   * 
   * @newin{2,28}
   * @param action_name The name of an action in the group.
   * @param enabled Whether or not the action is now enabled.
   */
  void action_enabled_changed(const Glib::ustring& action_name, bool enabled);
  
  /** Emits the ActionGroup::signal_action_state_changed() signal on @a action_group.
   * 
   * This function should only be called by ActionGroup implementations.
   * 
   * @newin{2,28}
   * @param action_name The name of an action in the group.
   * @param state The new state of the named action.
   */
  void action_state_changed(const Glib::ustring& action_name, const Glib::VariantBase& state);

  
/**
   * @par Slot Prototype:
   * <tt>void on_my_%action_added(const Glib::ustring& action_name)</tt>
   *
   * Signals that a new action was just added to the group.
   * This signal is emitted after the action has been added
   * and is now visible.
   * 
   * @newin{2,28}
   * @param action_name The name of the action in @a action_group.
   */

  Glib::SignalProxy1< void,const Glib::ustring& > signal_action_added();

  
/**
   * @par Slot Prototype:
   * <tt>void on_my_%action_enabled_changed(const Glib::ustring& action_name, bool enabled)</tt>
   *
   * Signals that the enabled status of the named action has changed.
   * 
   * @newin{2,28}
   * @param action_name The name of the action in @a action_group.
   * @param enabled Whether the action is enabled or not.
   */

  Glib::SignalProxy2< void,const Glib::ustring&,bool > signal_action_enabled_changed();

  
/**
   * @par Slot Prototype:
   * <tt>void on_my_%action_removed(const Glib::ustring& action_name)</tt>
   *
   * Signals that an action is just about to be removed from the group.
   * This signal is emitted before the action is removed, so the action
   * is still visible and can be queried from the signal handler.
   * 
   * @newin{2,28}
   * @param action_name The name of the action in @a action_group.
   */

  Glib::SignalProxy1< void,const Glib::ustring& > signal_action_removed();


/**
   * @par Slot Prototype:
   * <tt>void on_my_%action_state_changed(const Glib::ustring& action_name, const Glib::VariantBase& value)</tt>
   *
   * Signals that the state of the named action has changed.
   * 
   * @newin{2,28}
   * @param action_name The name of the action in @a action_group.
   * @param value The new value of the state.
   */

  Glib::SignalProxy2< void,const Glib::ustring&,const Glib::VariantBase& > signal_action_state_changed();


    virtual bool has_action_vfunc(const Glib::ustring& name) const;


    virtual std::vector<Glib::ustring> list_actions_vfunc() const;


    virtual bool get_action_enabled_vfunc(const Glib::ustring& name) const;


    virtual Glib::VariantType get_action_parameter_type_vfunc(const Glib::ustring& name) const;

    virtual Glib::VariantType get_action_state_type_vfunc(const Glib::ustring& name) const;


    virtual Glib::VariantBase get_action_state_hint_vfunc(const Glib::ustring& name) const;

    virtual Glib::VariantBase get_action_state_vfunc(const Glib::ustring& name) const;


    virtual void change_action_state_vfunc(const Glib::ustring& name, const Glib::VariantBase& value);

    virtual void activate_action_vfunc(const Glib::ustring& name, const Glib::VariantBase& parameter);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_action_added().
  virtual void on_action_added(const Glib::ustring& action_name);
  /// This is a default handler for the signal signal_action_enabled_changed().
  virtual void on_action_enabled_changed(const Glib::ustring& action_name, bool enabled);
  /// This is a default handler for the signal signal_action_removed().
  virtual void on_action_removed(const Glib::ustring& action_name);
  /// This is a default handler for the signal signal_action_state_changed().
  virtual void on_action_state_changed(const Glib::ustring& action_name, const Glib::VariantBase& value);


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
   * @relates Gio::ActionGroup
   */
  Glib::RefPtr<Gio::ActionGroup> wrap(GActionGroup* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_ACTIONGROUP_H */

