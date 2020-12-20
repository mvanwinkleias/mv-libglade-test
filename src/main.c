/*
  Adopted from code originally written into the public domain by
  Keith Sharp <kms passback co uk>, as Public Domain software.
  Original post:
    http://mail.gnome.org/archives/gnome-love/2004-June/msg00014.html
  
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

#include <glade/glade.h>
#include <gnome.h>
#include <stdlib.h>

gint
main (gint argc, gchar * argv[])
{
  GladeXML *xml;

  gnome_program_init (PACKAGE, VERSION, LIBGNOMEUI_MODULE,
                      argc, argv,
                      GNOME_PARAM_APP_DATADIR, PACKAGE_DATA_DIR,
                      GNOME_PARAM_NONE); /* GNOME_PARAM_NONE terminates list */

  xml = glade_xml_new ("libgladeTest.glade", NULL, NULL);
  if (!xml)
    g_error ("Failed to load glade file\n");

  glade_xml_signal_autoconnect (xml);

  /* xml object no longer needed, get rid of it */
  g_object_unref (G_OBJECT(xml));

  gtk_main ();
  return EXIT_SUCCESS;
}
