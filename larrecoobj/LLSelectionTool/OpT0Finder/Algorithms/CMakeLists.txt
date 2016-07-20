# define ROOTLIB
set( ROOTLIB -L$ENV{ROOTSYS}/lib -lCore -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lTree -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMinuit -pthread -lm -ldl)

link_libraries( ${LIB_NAME} -L$ENV{BOOST_LIB} -lboost_system ${ROOTLIB} )

cet_make( LIBRARIES canvas_Persistency_Common
		    larsim_PhotonPropagation
                    larsim_PhotonPropagation_PhotonVisibilityService_service
                    larsim_Simulation
		    larcoreobj_GeoAlgo
		    larrecoobj_LLSelectionTool_OpT0Finder_Base
                    ${SIMULATIONBASE}
                    ${ART_FRAMEWORK_CORE}
                    ${ART_FRAMEWORK_PRINCIPAL}
                    ${ART_FRAMEWORK_BASIC}
                    ${ART_FRAMEWORK_SERVICES_REGISTRY}
                    ${ART_FRAMEWORK_SERVICES_OPTIONAL}
                    ${ART_FRAMEWORK_SERVICES_OPTIONAL_TFILESERVICE_SERVICE}
                    ${ART_PERSISTENCY_COMMON}
                    ${ART_PERSISTENCY_PROVENANCE}
                    ${ART_UTILITIES}
                    ${CANVAS_UTILITIES}
		    ${ROOT_BASIC_LIB_LIST}
		    ${FHICLCPP}
                    ${CETLIB}
                    NO_DICTIONARY
                 )

art_dictionary( DICTIONARY_LIBRARIES larrecoobj_LLSelectionTool_OpT0Finder_Algorithms )


install_headers()
#install_fhicl()
install_source()
