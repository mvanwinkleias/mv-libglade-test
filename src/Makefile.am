EXTRA_DIST = libgladeTest.gladep
dist_data_DATA = libgladeTest.glade
AM_CPPFLAGS = @PACKAGE_CFLAGS@ -DPACKAGE_DATA_DIR=\""$(datadir)"\"
bin_PROGRAMS = libgladeTest
libgladeTest_SOURCES = main.c callbacks.c callbacks.h
libgladeTest_LDADD = @PACKAGE_LIBS@
