#
# This is an example GNUmakefile for my packages
#

# specific names for this package
DICT  = larrecoobj_OpT0FinderApp
SHLIB = liblarrecoobj_OpT0FinderApp.so
SOURCES = $(filter-out $(DICT).cxx, $(wildcard *.cxx))
FMWK_HEADERS = LinkDef.h $(DICT).h classes.h
HEADERS = $(filter-out $(FMWK_HEADERS), $(wildcard *.h))
OBJECTS = $(SOURCES:.cxx=.o)

# include options for this package
INCFLAGS  = -I.                       #Include itself
INCFLAGS += $(shell larlite-config --includes)
INCFLAGS += $(shell basictool-config --includes)
INCFLAGS += $(shell seltool-config --includes)
INCFLAGS += -I$(LARDATAOBJ_INC)
INCFLAGS += -I$(NUSIMDATA_INC)
INCFLAGS += -I$(LARLITE_USERDEVDIR)/larcoreobj # TEMPORARY FIX

INCFLAGS += -I$(LARDATA_INC) #lardata/DetectorInfo/LArProperties.h
INCFLAGS += -I$(LARCORE_INC) #larcore/Geometry/GeometryCore.h 
INCFLAGS += -I$(LARCOREOBJ_INC) # larcoreobj/SimpleTypesAndConstants/geo_types.h
INCFLAGS += -I$(CETLIB_INC) # cetlib/exception.h
INCFLAGS += -I$(FHICLCPP_INC) # fhiclcpp/ParameterSet.h
INCFLAGS += -I$(CLHEP_INC) #CLHEP/Geometry/Transform3D.h
INCFLAGS += -I$(ART_INC) # art/Framework/Services/Registry/ServiceHandle.h
INCFLAGS += -I$(CANVAS_INC) # canvas/Utilities/TypeID.h

# platform-specific options
OSNAME          = $(shell uname -s)
HOST            = $(shell uname -n)
OSNAMEMODE      = $(OSNAME)

# call kernel specific compiler setup
include $(LARLITE_BASEDIR)/Makefile/Makefile.${OSNAME}

# call the common GNUmakefile
LDFLAGS += $(shell larlite-config --libs)
#LDFLAGS += $(shell basictool-config --libs)
LDFLAGS += -L$(LARLITE_LIBDIR) -lBasicTool_LArPyBackend -lBasicTool_EMShowerTools -llarcoreobj_GeoAlgo -lBasicTool_FhiclLite -BasicTool_TreeGraph # THIS NEEDS TO BE CHANGED TO $(LARCOREOBJ_LIB) ONCE ENVIRONMENT VARIABLE IS CORRECTLY SET
LDFLAGS += -L$(LARLITE_LIBDIR) -llarrecoobj_OpT0FinderBase -llarrecoobj_OpT0FinderAlgorithms 
LDFLAGS += -L$(LARLITE_LIBDIR) -llarliteobj_OpT0PhotonLibrary
LDFLAGS += -L$(LARDATAOBJ_LIB)

LDFLAGS += -L$(LARDATA_LIB) -llardata_DetectorInfoServices_LArPropertiesServiceStandard_service # lardata/DetectorInfo/LArProperties.h
LDFLAGS += -L$(LARCORE_LIB) # larcore/Geometry/GeometryCore.h
LDFLAGS += -L$(LARCOREOBJ_LIB) # larcoreobj/SimpleTypesAndConstants/geo_types.h
LDFLAGS += -L$(CETLIB_LIB) # cetlib/exception.h 
LDFLAGS += -L$(FHICLCPP_LIB) # fhiclcpp/ParameterSet.h
LDFLAGS += -L$(CLHEP_LIB) # CLHEP/Geometry/Transform3D.h
LDFLAGS += -L$(ART_LIB) # art/Framework/Services/Registry/ServiceHandle.h
LDFLAGS += -L$(CANVAS_LIB) # canvas/Utilities/TypeID.h
LDFLAGS += -L$(BOOST_LIB) -lboost_system -lboost_thread-mt -lboost_system-mt -lboost_program_options-mt # not necessary, removes error message.

include $(LARLITE_BASEDIR)/Makefile/GNUmakefile.CORE


