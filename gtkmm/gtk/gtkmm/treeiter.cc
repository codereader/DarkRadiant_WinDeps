// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/treeiter.h>
#include <gtkmm/private/treeiter_p.h>


// -*- c++ -*-
/* $Id: treeiter.ccg,v 1.10 2006/04/12 08:23:29 murrayc Exp $ */

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtkmm/treemodel.h>
#include <gtk/gtk.h>


namespace Gtk
{

/**** Gtk::TreeIter ********************************************************/

TreeIter::TreeIter()
:
  TreeIterBase(),
  model_      (0),
  is_end_     (false)
{}

TreeIter::TreeIter(TreeModel* model)
:
  TreeIterBase(),
  model_      (model),
  is_end_     (false)
{}

TreeIter::TreeIter(GtkTreeModel* model, const GtkTreeIter* iter)
:
  TreeIterBase(iter),
  model_      (dynamic_cast<TreeModel*>(Glib::wrap_auto((GObject*) model))),
  is_end_     (iter == 0)
{}

TreeIter& TreeIter::operator++()
{
  g_assert(!is_end_);

  GtkTreeIter previous = gobject_;

  if(!gtk_tree_model_iter_next(model_->gobj(), &gobject_))
  {
    is_end_ = true;
    gtk_tree_model_iter_parent(Glib::unwrap(model_), &gobject_, &previous);
  }

  return *this;
}

const TreeIter TreeIter::operator++(int)
{
  g_assert(!is_end_);

  TreeIter previous (*this);

  if(!gtk_tree_model_iter_next(model_->gobj(), &gobject_))
  {
    is_end_ = true;
    gtk_tree_model_iter_parent(Glib::unwrap(model_), &gobject_, &previous.gobject_);
  }

  return previous;
}

TreeIter& TreeIter::operator--()
{
  if(!is_end_)
  {
    gtk_tree_model_iter_previous(Glib::unwrap(model_), &gobject_);
  }
  else // --end yields last
  {
    GtkTreeIter next = gobject_;
    GtkTreeIter *const parent = (next.stamp != 0) ? &next : 0;

    const int index = gtk_tree_model_iter_n_children(Glib::unwrap(model_), parent) - 1;
    is_end_ = !gtk_tree_model_iter_nth_child(Glib::unwrap(model_), &gobject_, parent, index);

    g_assert(!is_end_);
  }

  return *this;
}

const TreeIter TreeIter::operator--(int)
{
  TreeIter next (*this);

  if(!is_end_)
  {
    gtk_tree_model_iter_previous(Glib::unwrap(model_), &gobject_);
  }
  else // --end yields last
  {
    GtkTreeIter *const parent = (next.gobject_.stamp != 0) ? &next.gobject_ : 0;

    const int index = gtk_tree_model_iter_n_children(model_->gobj(), parent) - 1;
    is_end_ = !gtk_tree_model_iter_nth_child(model_->gobj(), &gobject_, parent, index);

    g_assert(!is_end_);
  }

  return next;
}

/* There is no public gtk_tree_iter_equal(), so we must write our own.
 */
bool TreeIter::equal(const TreeIter& other) const
{
  g_assert(model_ == other.model_);

  // A GtkTreeIter has the same stamp value as its model.
  g_assert(gobject_.stamp == other.gobject_.stamp || is_end_ || other.is_end_);

  // If all user_data pointers are equal we can assume the iterators to be
  // equal.  This should be safe since GtkTreeIter lacks destroy notification,
  // thus there is no way to attach more data fields to the iterator.
  return (is_end_ == other.is_end_) &&
         (gobject_.user_data  == other.gobject_.user_data)  &&
         (gobject_.user_data2 == other.gobject_.user_data2) &&
         (gobject_.user_data3 == other.gobject_.user_data3);
}

TreeIter::operator const void*() const
{
  // Test whether the GtkTreeIter is valid and not an end iterator.  This check
  // is almost the same as the private VALID_ITER() macro in gtkliststore.c and
  // gtktreestore.c.
  return (!is_end_ && gobject_.stamp) ? GINT_TO_POINTER(1) : 0;
}

void TreeIter::setup_end_iterator(const TreeIter& last_valid)
{
  g_assert(model_ == last_valid.model_);

  if(last_valid.is_end_)
    gobject_ = last_valid.gobject_;
  else
    gtk_tree_model_iter_parent(model_->gobj(), &gobject_, const_cast<GtkTreeIter*>(&last_valid.gobject_));

  is_end_ = true;
}

void TreeIter::set_model_refptr(const Glib::RefPtr<TreeModel>& model)
{
  model_ = model.operator->();
}

void TreeIter::set_model_gobject(GtkTreeModel* model)
{
  model_ = dynamic_cast<TreeModel*>(Glib::wrap_auto((GObject*) model));
}

GtkTreeModel* TreeIter::get_model_gobject() const
{
  return (model_) ? model_->gobj() : 0;
}


int TreeIter::get_stamp() const
{
  return gobj()->stamp;
}

void TreeIter::set_stamp(int stamp)
{
  gobj()->stamp = stamp;
} 


/**** Gtk::TreeRow *********************************************************/

const TreeNodeChildren& TreeRow::children() const
{
  g_assert(!is_end_);

  return static_cast<const TreeNodeChildren&>(static_cast<const TreeIter&>(*this));
}

TreeIter TreeRow::parent() const
{
  TreeIter iter (model_);

  if(is_end_)
    iter.gobject_ = gobject_;
  else
    gtk_tree_model_iter_parent(model_->gobj(), iter.gobj(), const_cast<GtkTreeIter*>(&gobject_));

  return iter;
}

void TreeRow::set_value_impl(int column, const Glib::ValueBase& value) const
{
  model_->set_value_impl(*this, column, value);
}

void TreeRow::get_value_impl(int column, Glib::ValueBase& value) const
{
  model_->get_value_impl(*this, column, value);
}

TreeRow::operator const void*() const
{
  return TreeIter::operator const void*();
}


/**** Gtk::TreeNodeChildren ************************************************/

TreeNodeChildren::iterator TreeNodeChildren::begin()
{
  iterator iter (model_);

  // If the iterator is invalid (stamp == 0), assume a 'virtual' toplevel
  // node.  This behaviour is needed to implement Gtk::TreeModel::children().

  if(gobject_.stamp != 0)
  {
    if(!gtk_tree_model_iter_children(model_->gobj(), iter.gobj(), const_cast<GtkTreeIter*>(&gobject_)))
    {
      // Assign the already known parent, in order to create an end iterator.
      iter.gobject_ = gobject_;
      iter.is_end_ = true;
    }
  }
  else
  {
    if(!gtk_tree_model_get_iter_first(model_->gobj(), iter.gobj()))
    {
      // No need to copy the GtkTreeIter, since iter.gobject_ is already empty.
      iter.is_end_ = true;
    }
  }

  return iter;
}

TreeNodeChildren::const_iterator TreeNodeChildren::begin() const
{
  //TODO: Reduce the copy/paste from the non-const begin()?
  
  const_iterator iter (model_);

  // If the iterator is invalid (stamp == 0), assume a 'virtual' toplevel
  // node.  This behaviour is needed to implement Gtk::TreeModel::children().

  if(gobject_.stamp != 0)
  {
    if(!gtk_tree_model_iter_children(model_->gobj(), iter.gobj(), const_cast<GtkTreeIter*>(&gobject_)))
    {
      // Assign the already known parent, in order to create an end iterator.
      iter.gobject_ = gobject_;
      iter.is_end_ = true;
    }
  }
  else
  {
    if(!gtk_tree_model_get_iter_first(model_->gobj(), iter.gobj()))
    {
      // No need to copy the GtkTreeIter, since iter.gobject_ is already empty.
      iter.is_end_ = true;
    }
  }

  return iter;
}

TreeNodeChildren::iterator TreeNodeChildren::end()
{
  // Just copy the parent, and turn it into an end iterator.
  iterator iter (*this);
  iter.is_end_ = true;
  return iter;
}

TreeNodeChildren::const_iterator TreeNodeChildren::end() const
{
  // Just copy the parent, and turn it into an end iterator.
  const_iterator iter (*this);
  iter.is_end_ = true;
  return iter;
}

TreeNodeChildren::value_type TreeNodeChildren::operator[](TreeNodeChildren::size_type index) const
{
  iterator iter (model_);

  GtkTreeIter *const parent = const_cast<GtkTreeIter*>(get_parent_gobject());

  if(!gtk_tree_model_iter_nth_child(model_->gobj(), iter.gobj(), parent, index))
  {
    // Assign the already known parent, in order to create an end iterator.
    iter.gobject_ = gobject_;
    iter.is_end_ = true;
  }

  return *iter;
}

TreeNodeChildren::size_type TreeNodeChildren::size() const
{
  GtkTreeIter *const parent = const_cast<GtkTreeIter*>(get_parent_gobject());

  return gtk_tree_model_iter_n_children(model_->gobj(), parent);
}

bool TreeNodeChildren::empty() const
{
  // If the iterator is invalid (stamp == 0), assume a 'virtual' toplevel
  // node.  This behaviour is needed to implement Gtk::TreeModel::children().

  if(gobject_.stamp == 0)
  {
    GtkTreeIter dummy;
    return !gtk_tree_model_get_iter_first(model_->gobj(), &dummy);
  }

  return !gtk_tree_model_iter_has_child(model_->gobj(), const_cast<GtkTreeIter*>(&gobject_));
}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Gtk
{


// static
GType TreeIterBase::get_type()
{
  return gtk_tree_iter_get_type();
}

TreeIterBase::TreeIterBase()
{
  GLIBMM_INITIALIZE_STRUCT(gobject_, GtkTreeIter);
}

TreeIterBase::TreeIterBase(const GtkTreeIter* gobject)
{
  if(gobject)
    gobject_ = *gobject;
  else
    GLIBMM_INITIALIZE_STRUCT(gobject_, GtkTreeIter);
}


} // namespace Gtk


