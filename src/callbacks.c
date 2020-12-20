/*
libgladeTest -- multi-window libglade example
Copyright (C) 2004 Adam Monsen <adamm@wazamatta.com>

<GPL>
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
</GPL>

*/

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <glade/glade.h>

#include "callbacks.h"


/* Callback for the delete-event signal, do nothing but return FALSE so
   that the destroy signal is emitted, and do the work in that callback */
gboolean
on_main_win_delete_event (GtkWidget * widget, GdkEvent * event,
                          gpointer user_data)
{
  g_print ("START on_main_win_delete_event\n");
  return FALSE;
}


/* Callback for the activate signal on the entry widget.  We connect to
   this so that we can do instant apply which is the recommendation for
   preferences in GNOME */
void
on_name_entry_activate (GtkEntry * entry, gpointer user_data)
{
  const gchar *name;
  g_print ("START on_name_entry_activate\n");

  name = gtk_entry_get_text (entry);
  g_print ("Name: %s\n", name);
}
