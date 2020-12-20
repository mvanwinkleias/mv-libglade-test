AC_PREREQ(2.59)
AC_INIT([LibgladeTest], [1.02], [adamm@wazamatta.com])
AM_MAINTAINER_MODE
AC_CONFIG_HEADER(config.h)
AM_INIT_AUTOMAKE(AC_PACKAGE_NAME, AC_PACKAGE_VERSION)
AC_ISC_POSIX
AC_HEADER_STDC
AC_PROG_CC
AC_PROG_RANLIB
if test "$CC" = "gcc"; then
  CFLAGS="$CFLAGS -Wall -pedantic -ansi -g"
fi
AC_SUBST(CFLAGS)
PKG_CHECK_MODULES(PACKAGE, gtk+-2.0 libglade-2.0 libgnomeui-2.0)
AC_C_CONST
AC_CONFIG_FILES(Makefile src/Makefile)
AC_OUTPUT

echo
echo $PACKAGE $VERSION is configured
echo
