// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME larrecoobj_OpT0PhotonLibraryDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "PhotonLibrary.h"
#include "PhotonVisibilityService.h"
#include "PhotonVoxels.h"

// Header files passed via #pragma extra_include

namespace sim {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *sim_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("sim", 0 /*version*/, "PhotonVoxels.h", 6,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &sim_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *sim_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace phot {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *phot_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("phot", 0 /*version*/, "PhotonLibrary.h", 12,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &phot_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *phot_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *simcLcLPhotonVoxel_Dictionary();
   static void simcLcLPhotonVoxel_TClassManip(TClass*);
   static void *new_simcLcLPhotonVoxel(void *p = 0);
   static void *newArray_simcLcLPhotonVoxel(Long_t size, void *p);
   static void delete_simcLcLPhotonVoxel(void *p);
   static void deleteArray_simcLcLPhotonVoxel(void *p);
   static void destruct_simcLcLPhotonVoxel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::sim::PhotonVoxel*)
   {
      ::sim::PhotonVoxel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::sim::PhotonVoxel));
      static ::ROOT::TGenericClassInfo 
         instance("sim::PhotonVoxel", "PhotonVoxels.h", 9,
                  typeid(::sim::PhotonVoxel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &simcLcLPhotonVoxel_Dictionary, isa_proxy, 4,
                  sizeof(::sim::PhotonVoxel) );
      instance.SetNew(&new_simcLcLPhotonVoxel);
      instance.SetNewArray(&newArray_simcLcLPhotonVoxel);
      instance.SetDelete(&delete_simcLcLPhotonVoxel);
      instance.SetDeleteArray(&deleteArray_simcLcLPhotonVoxel);
      instance.SetDestructor(&destruct_simcLcLPhotonVoxel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::sim::PhotonVoxel*)
   {
      return GenerateInitInstanceLocal((::sim::PhotonVoxel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::sim::PhotonVoxel*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *simcLcLPhotonVoxel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::sim::PhotonVoxel*)0x0)->GetClass();
      simcLcLPhotonVoxel_TClassManip(theClass);
   return theClass;
   }

   static void simcLcLPhotonVoxel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *simcLcLPhotonVoxelDef_Dictionary();
   static void simcLcLPhotonVoxelDef_TClassManip(TClass*);
   static void *new_simcLcLPhotonVoxelDef(void *p = 0);
   static void *newArray_simcLcLPhotonVoxelDef(Long_t size, void *p);
   static void delete_simcLcLPhotonVoxelDef(void *p);
   static void deleteArray_simcLcLPhotonVoxelDef(void *p);
   static void destruct_simcLcLPhotonVoxelDef(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::sim::PhotonVoxelDef*)
   {
      ::sim::PhotonVoxelDef *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::sim::PhotonVoxelDef));
      static ::ROOT::TGenericClassInfo 
         instance("sim::PhotonVoxelDef", "PhotonVoxels.h", 39,
                  typeid(::sim::PhotonVoxelDef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &simcLcLPhotonVoxelDef_Dictionary, isa_proxy, 4,
                  sizeof(::sim::PhotonVoxelDef) );
      instance.SetNew(&new_simcLcLPhotonVoxelDef);
      instance.SetNewArray(&newArray_simcLcLPhotonVoxelDef);
      instance.SetDelete(&delete_simcLcLPhotonVoxelDef);
      instance.SetDeleteArray(&deleteArray_simcLcLPhotonVoxelDef);
      instance.SetDestructor(&destruct_simcLcLPhotonVoxelDef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::sim::PhotonVoxelDef*)
   {
      return GenerateInitInstanceLocal((::sim::PhotonVoxelDef*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::sim::PhotonVoxelDef*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *simcLcLPhotonVoxelDef_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::sim::PhotonVoxelDef*)0x0)->GetClass();
      simcLcLPhotonVoxelDef_TClassManip(theClass);
   return theClass;
   }

   static void simcLcLPhotonVoxelDef_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *photcLcLPhotonVisibilityService_Dictionary();
   static void photcLcLPhotonVisibilityService_TClassManip(TClass*);
   static void *new_photcLcLPhotonVisibilityService(void *p = 0);
   static void *newArray_photcLcLPhotonVisibilityService(Long_t size, void *p);
   static void delete_photcLcLPhotonVisibilityService(void *p);
   static void deleteArray_photcLcLPhotonVisibilityService(void *p);
   static void destruct_photcLcLPhotonVisibilityService(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::phot::PhotonVisibilityService*)
   {
      ::phot::PhotonVisibilityService *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::phot::PhotonVisibilityService));
      static ::ROOT::TGenericClassInfo 
         instance("phot::PhotonVisibilityService", "PhotonVisibilityService.h", 23,
                  typeid(::phot::PhotonVisibilityService), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &photcLcLPhotonVisibilityService_Dictionary, isa_proxy, 4,
                  sizeof(::phot::PhotonVisibilityService) );
      instance.SetNew(&new_photcLcLPhotonVisibilityService);
      instance.SetNewArray(&newArray_photcLcLPhotonVisibilityService);
      instance.SetDelete(&delete_photcLcLPhotonVisibilityService);
      instance.SetDeleteArray(&deleteArray_photcLcLPhotonVisibilityService);
      instance.SetDestructor(&destruct_photcLcLPhotonVisibilityService);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::phot::PhotonVisibilityService*)
   {
      return GenerateInitInstanceLocal((::phot::PhotonVisibilityService*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::phot::PhotonVisibilityService*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *photcLcLPhotonVisibilityService_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::phot::PhotonVisibilityService*)0x0)->GetClass();
      photcLcLPhotonVisibilityService_TClassManip(theClass);
   return theClass;
   }

   static void photcLcLPhotonVisibilityService_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *photcLcLPhotonLibrary_Dictionary();
   static void photcLcLPhotonLibrary_TClassManip(TClass*);
   static void *new_photcLcLPhotonLibrary(void *p = 0);
   static void *newArray_photcLcLPhotonLibrary(Long_t size, void *p);
   static void delete_photcLcLPhotonLibrary(void *p);
   static void deleteArray_photcLcLPhotonLibrary(void *p);
   static void destruct_photcLcLPhotonLibrary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::phot::PhotonLibrary*)
   {
      ::phot::PhotonLibrary *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::phot::PhotonLibrary));
      static ::ROOT::TGenericClassInfo 
         instance("phot::PhotonLibrary", "PhotonLibrary.h", 14,
                  typeid(::phot::PhotonLibrary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &photcLcLPhotonLibrary_Dictionary, isa_proxy, 4,
                  sizeof(::phot::PhotonLibrary) );
      instance.SetNew(&new_photcLcLPhotonLibrary);
      instance.SetNewArray(&newArray_photcLcLPhotonLibrary);
      instance.SetDelete(&delete_photcLcLPhotonLibrary);
      instance.SetDeleteArray(&deleteArray_photcLcLPhotonLibrary);
      instance.SetDestructor(&destruct_photcLcLPhotonLibrary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::phot::PhotonLibrary*)
   {
      return GenerateInitInstanceLocal((::phot::PhotonLibrary*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::phot::PhotonLibrary*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *photcLcLPhotonLibrary_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::phot::PhotonLibrary*)0x0)->GetClass();
      photcLcLPhotonLibrary_TClassManip(theClass);
   return theClass;
   }

   static void photcLcLPhotonLibrary_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_simcLcLPhotonVoxel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::sim::PhotonVoxel : new ::sim::PhotonVoxel;
   }
   static void *newArray_simcLcLPhotonVoxel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::sim::PhotonVoxel[nElements] : new ::sim::PhotonVoxel[nElements];
   }
   // Wrapper around operator delete
   static void delete_simcLcLPhotonVoxel(void *p) {
      delete ((::sim::PhotonVoxel*)p);
   }
   static void deleteArray_simcLcLPhotonVoxel(void *p) {
      delete [] ((::sim::PhotonVoxel*)p);
   }
   static void destruct_simcLcLPhotonVoxel(void *p) {
      typedef ::sim::PhotonVoxel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::sim::PhotonVoxel

namespace ROOT {
   // Wrappers around operator new
   static void *new_simcLcLPhotonVoxelDef(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::sim::PhotonVoxelDef : new ::sim::PhotonVoxelDef;
   }
   static void *newArray_simcLcLPhotonVoxelDef(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::sim::PhotonVoxelDef[nElements] : new ::sim::PhotonVoxelDef[nElements];
   }
   // Wrapper around operator delete
   static void delete_simcLcLPhotonVoxelDef(void *p) {
      delete ((::sim::PhotonVoxelDef*)p);
   }
   static void deleteArray_simcLcLPhotonVoxelDef(void *p) {
      delete [] ((::sim::PhotonVoxelDef*)p);
   }
   static void destruct_simcLcLPhotonVoxelDef(void *p) {
      typedef ::sim::PhotonVoxelDef current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::sim::PhotonVoxelDef

namespace ROOT {
   // Wrappers around operator new
   static void *new_photcLcLPhotonVisibilityService(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::phot::PhotonVisibilityService : new ::phot::PhotonVisibilityService;
   }
   static void *newArray_photcLcLPhotonVisibilityService(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::phot::PhotonVisibilityService[nElements] : new ::phot::PhotonVisibilityService[nElements];
   }
   // Wrapper around operator delete
   static void delete_photcLcLPhotonVisibilityService(void *p) {
      delete ((::phot::PhotonVisibilityService*)p);
   }
   static void deleteArray_photcLcLPhotonVisibilityService(void *p) {
      delete [] ((::phot::PhotonVisibilityService*)p);
   }
   static void destruct_photcLcLPhotonVisibilityService(void *p) {
      typedef ::phot::PhotonVisibilityService current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::phot::PhotonVisibilityService

namespace ROOT {
   // Wrappers around operator new
   static void *new_photcLcLPhotonLibrary(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::phot::PhotonLibrary : new ::phot::PhotonLibrary;
   }
   static void *newArray_photcLcLPhotonLibrary(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::phot::PhotonLibrary[nElements] : new ::phot::PhotonLibrary[nElements];
   }
   // Wrapper around operator delete
   static void delete_photcLcLPhotonLibrary(void *p) {
      delete ((::phot::PhotonLibrary*)p);
   }
   static void deleteArray_photcLcLPhotonLibrary(void *p) {
      delete [] ((::phot::PhotonLibrary*)p);
   }
   static void destruct_photcLcLPhotonLibrary(void *p) {
      typedef ::phot::PhotonLibrary current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::phot::PhotonLibrary

namespace ROOT {
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary();
   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<float> >*)
   {
      vector<vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<float> >", -2, "vector", 214,
                  typeid(vector<vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<float> >) );
      instance.SetNew(&new_vectorlEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<float> >*)0x0)->GetClass();
      vectorlEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> > : new vector<vector<float> >;
   }
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> >[nElements] : new vector<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete ((vector<vector<float> >*)p);
   }
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete [] ((vector<vector<float> >*)p);
   }
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p) {
      typedef vector<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<float> >

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 214,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace {
  void TriggerDictionaryInitialization_liblarrecoobj_OpT0PhotonLibrary_Impl() {
    static const char* headers[] = {
"PhotonLibrary.h",
"PhotonVisibilityService.h",
"PhotonVoxels.h",
0
    };
    static const char* includePaths[] = {
"/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/scratch/lsimons/LArLite_LArSoft_Int/larlite/UserDev/larrecoobj/larrecoobj/OpT0Finder/PhotonLibrary/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "liblarrecoobj_OpT0PhotonLibrary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace sim{class __attribute__((annotate("$clingAutoload$PhotonLibrary.h")))  PhotonVoxel;}
namespace sim{class __attribute__((annotate("$clingAutoload$PhotonLibrary.h")))  PhotonVoxelDef;}
namespace phot{class __attribute__((annotate("$clingAutoload$PhotonVisibilityService.h")))  PhotonVisibilityService;}
namespace phot{class __attribute__((annotate("$clingAutoload$PhotonLibrary.h")))  PhotonLibrary;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "liblarrecoobj_OpT0PhotonLibrary dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "PhotonLibrary.h"
#include "PhotonVisibilityService.h"
#include "PhotonVoxels.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"phot::PhotonLibrary", payloadCode, "@",
"phot::PhotonVisibilityService", payloadCode, "@",
"sim::PhotonVoxel", payloadCode, "@",
"sim::PhotonVoxelDef", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("liblarrecoobj_OpT0PhotonLibrary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_liblarrecoobj_OpT0PhotonLibrary_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_liblarrecoobj_OpT0PhotonLibrary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_liblarrecoobj_OpT0PhotonLibrary() {
  TriggerDictionaryInitialization_liblarrecoobj_OpT0PhotonLibrary_Impl();
}
