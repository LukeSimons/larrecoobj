#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = larrecoobj_OpT0FinderAnaDict
SHLIB = liblarrecoobj_OpT0FinderAna.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                       #Include itself
INCFLAGS += $(shell larlite-config --includes)
INCFLAGS += -I$(LARDATAOBJ_INC) # OpFlash.h, OpHit.h & OpDetWaveform.h
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larcoreobj #Temporary fix

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

# call kernel specific compiler setup
include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

# call the common GNUmakefile
LDFLAGS += $(shell larlite-config --libs)
LDFLAGS += -L$(LARLITE_LIBDIR) -llarrecoobj_OpT0FinderBase -llarrecoobj_OpT0FinderAlgorithms
LDFLAGS += -L$(LARDATAOBJ_LIB) # OpFlash.h, OpHit.h & OpDetWaveform.h 
LDFLAGS += -L$(LARLITE_LIBDIR) -llarcoreobj_GeoAlgo #Temporary fix

include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE


