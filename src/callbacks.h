#ifndef CALLBACKS_H
#define CALLBACKS_H
#include <gtk/gtk.h>

gboolean on_main_win_delete_event (GtkWidget * widget, GdkEvent * event,
                                   gpointer user_data);
void on_name_entry_activate (GtkEntry * entry, gpointer user_data);

#endif /* #ifndef CALLBACKS_H */
