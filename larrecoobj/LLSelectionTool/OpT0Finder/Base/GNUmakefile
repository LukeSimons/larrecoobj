#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = larrecoobj_OpT0FinderBaseDict
SHLIB = liblarrecoobj_OpT0FinderBase.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h classes.h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                       #Include itself
#INCFLAGS += $(shell basictool-config --includes)
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larcoreobj
INCFLAGS += -I$(FHICLCPP_INC)
INCFLAGS += -I$(CETLIB_INC)

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)


#LDFLAGS += $(shell basictool-config --libs)
LDFLAGS += -L$(LARLITE_LIBDIR) -llarcoreobj_GeoAlgo
LDFLAGS += -L$(FHICLCPP_LIB)
LDFLAGS += -L$(CETLIB_LIB)

# call kernel specific compiler setup
include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

# call the common GNUmakefile
include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE
