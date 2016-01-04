#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([chap9], [0.01], [shengyushen@icloud.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_SRCDIR([step2_nodef/step2_nodef.lpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_YACC
AM_PROG_LEX

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lasmrun':
AC_CHECK_LIB([asmrun], [main])

# Checks for header files.
AC_CHECK_HEADERS([inttypes.h limits.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT8_T
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([memset strchr strstr])

AC_CONFIG_FILES([Makefile
                 checker/Makefile
                 step1_noinc_comment/Makefile
                 step2_nodef/Makefile])
AC_OUTPUT
