# define ROOTLIB
set( ROOTLIB -L$ENV{ROOTSYS}/lib -lCore -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lTree -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -pthread -lm -ldl)

link_libraries( ${LIB_NAME} -L$ENV{BOOST_LIB} ${ROOTLIB} )

#art_make( BASENAME_ONLY
#	  LIBRARY_NAME     larrecoobj_LLSelectionTool_OpT0FinderBase
#	  LIB_LIBRARIES
#		   larrecoobj_LLBasicTool_GeoAlgo
#		   ${ROOT_BASIC_LIB_LIST}
#		   ${FHICLCPP}
#                   ${CETLIB}
#		)

cet_make( LIBRARIES canvas_Persistency_Common 
                    larcoreobj_GeoAlgo
                    ${ROOT_BASIC_LIB_LIST}
                    ${FHICLCPP}
                    ${CETLIB}
                    NO_DICTIONARY )

art_dictionary( DICTIONARY_LIBRARIES larrecoobj_LLSelectionTool_OpT0Finder_Base )


install_headers()
#install_fhicl()
install_source()
