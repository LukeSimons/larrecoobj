# define ROOTLIB
set( ROOTLIB -L$ENV{ROOTSYS}/lib -lCore -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lTree -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -pthread -lm -ldl)

link_libraries( ${LIB_NAME} -L$ENV{BOOST_LIB} ${ROOTLIB} )

#art_make( BASENAME_ONLY
#	INCLUDE_DIRS
#	  LIBRARY_NAME     uboonecode_uboone_BasicTool_GeoAlgo
#	  LIB_LIBRARIES
#		   ${ROOT_BASIC_LIB_LIST}
#	  DICTIONARY_LIBRARIES uboonecode_uboone_BasicTool_GeoAlgo
#		)

cet_make( LIBRARIES canvas_Persistency_Common
                    NO_DICTIONARY )

art_dictionary( DICTIONARY_LIBRARIES larrecoobj_LLBasicTool_GeoAlgo )


install_headers()
#install_fhicl()
install_source()
