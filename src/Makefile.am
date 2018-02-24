## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = eac_pc

eac_pc_SOURCES = \
	main.cc \
	staff.h \
	fileman.cc \
	fileman.h \
	debugman.cc \
	debugman.h \
	eacman.cc \
	eacman.h

eac_pc_LDFLAGS = 

eac_pc_LDADD = 


if NATIVE_WIN32
eac_pc_LDFLAGS += -mwindows
endif
