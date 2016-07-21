#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = larrecoobj_OpT0FinderAlgorithmsDict
SHLIB = liblarrecoobj_OpT0FinderAlgorithms.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h classes.h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                       #Include itself
INCFLAGS += $(shell larlite-config --includes)
INCFLAGS += -I$(FHICLCPP_INC)
INCFLAGS += -I$(CETLIB_INC)
INCFLAGS += -I$(LARSIM_INC)
INCFLAGS += -I$(ART_INC)
INCFLAGS += -I$(CANVAS_INC)
#INCFLAGS += $(shell basictool-config --includes)
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larcoreobj
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larrecoobj

LDFLAGS += $(shell larlite-config --libs)
LDFLAGS += -L$(LARLITE_LIBDIR) -llarcoreobj_GeoAlgo
LDFLAGS += -L$(FHICLCPP_LIB)
LDFLAGS += -L$(CETLIB_LIB)
LDFLAGS += -L$(LARSIM_LIB)
LDFLAGS += -L$(ART_LIB)
LDFLAGS += -L$(CANVAS_LIB)
#LDFLAGS += $(shell basictool-config --libdir) -l************
LDFLAGS += -L$(LARLITE_LIBDIR) -llarrecoobj_OpT0FinderBase
#LDFLAGS += -L$(LARLITE_LIBDIR) -lSelectionTool_OpT0PhotonLibrary
LDFLAGS += -L$(shell root-config --libdir) -lMinuit #-lMinuit2

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

# call kernel specific compiler setup
include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

# call the common GNUmakefile
include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE
