#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = larrecoobj_OpT0FinderAlgorithmsDict
SHLIB = liblarrecoobj_OpT0FinderAlgorithms.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                       #Include itself
INCFLAGS += $(shell larlite-config --includes)
INCFLAGS += $(shell basictool-config --includes)
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larrecoobj
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larliteobj # TEMPORARY FIX - FOR PHOTON VISIBILITY SERVICE
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larcoreobj # TEMPORARY FIX

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

# call kernel specific compiler setup
include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

LDFLAGS += $(shell larlite-config --libs)
#LDFLAGS += $(shell basictool-config --libs) 
LDFLAGS += -L$(LARLITE_LIBDIR) -lBasicTool_LArPyBackend -lBasicTool_EMShowerTools -llarcoreobj_GeoAlgo -lBasicTool_FhiclLite -BasicTool_TreeGraph # THIS NEEDS TO BE CHANGED TO $(LARCOREOBJ_LIB) ONCE ENVIRONMENT VARIABLE IS CORRECTLY SET
LDFLAGS += -L$(LARLITE_LIBDIR) -llarrecoobj_OpT0FinderBase
LDFLAGS += -L$(LARLITE_LIBDIR) -llarliteobj_OpT0PhotonLibrary
LDFLAGS += -L$(shell root-config --libdir) -lMinuit #-lMinuit2

# call the common GNUmakefile
include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE
