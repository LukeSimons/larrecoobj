// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SelectionTool_OpT0FinderAnaDict

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
#include "CosmicRateAna.h"
#include "PEDistAna.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *larlitecLcLCosmicRateAna_Dictionary();
   static void larlitecLcLCosmicRateAna_TClassManip(TClass*);
   static void *new_larlitecLcLCosmicRateAna(void *p = 0);
   static void *newArray_larlitecLcLCosmicRateAna(Long_t size, void *p);
   static void delete_larlitecLcLCosmicRateAna(void *p);
   static void deleteArray_larlitecLcLCosmicRateAna(void *p);
   static void destruct_larlitecLcLCosmicRateAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::CosmicRateAna*)
   {
      ::larlite::CosmicRateAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::CosmicRateAna));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::CosmicRateAna", "CosmicRateAna.h", 25,
                  typeid(::larlite::CosmicRateAna), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLCosmicRateAna_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::CosmicRateAna) );
      instance.SetNew(&new_larlitecLcLCosmicRateAna);
      instance.SetNewArray(&newArray_larlitecLcLCosmicRateAna);
      instance.SetDelete(&delete_larlitecLcLCosmicRateAna);
      instance.SetDeleteArray(&deleteArray_larlitecLcLCosmicRateAna);
      instance.SetDestructor(&destruct_larlitecLcLCosmicRateAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::CosmicRateAna*)
   {
      return GenerateInitInstanceLocal((::larlite::CosmicRateAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::CosmicRateAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLCosmicRateAna_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::CosmicRateAna*)0x0)->GetClass();
      larlitecLcLCosmicRateAna_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLCosmicRateAna_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLPEDistAna_Dictionary();
   static void larlitecLcLPEDistAna_TClassManip(TClass*);
   static void *new_larlitecLcLPEDistAna(void *p = 0);
   static void *newArray_larlitecLcLPEDistAna(Long_t size, void *p);
   static void delete_larlitecLcLPEDistAna(void *p);
   static void deleteArray_larlitecLcLPEDistAna(void *p);
   static void destruct_larlitecLcLPEDistAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::PEDistAna*)
   {
      ::larlite::PEDistAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::PEDistAna));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::PEDistAna", "PEDistAna.h", 25,
                  typeid(::larlite::PEDistAna), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLPEDistAna_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::PEDistAna) );
      instance.SetNew(&new_larlitecLcLPEDistAna);
      instance.SetNewArray(&newArray_larlitecLcLPEDistAna);
      instance.SetDelete(&delete_larlitecLcLPEDistAna);
      instance.SetDeleteArray(&deleteArray_larlitecLcLPEDistAna);
      instance.SetDestructor(&destruct_larlitecLcLPEDistAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::PEDistAna*)
   {
      return GenerateInitInstanceLocal((::larlite::PEDistAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::PEDistAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLPEDistAna_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::PEDistAna*)0x0)->GetClass();
      larlitecLcLPEDistAna_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLPEDistAna_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLCosmicRateAna(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::CosmicRateAna : new ::larlite::CosmicRateAna;
   }
   static void *newArray_larlitecLcLCosmicRateAna(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::CosmicRateAna[nElements] : new ::larlite::CosmicRateAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLCosmicRateAna(void *p) {
      delete ((::larlite::CosmicRateAna*)p);
   }
   static void deleteArray_larlitecLcLCosmicRateAna(void *p) {
      delete [] ((::larlite::CosmicRateAna*)p);
   }
   static void destruct_larlitecLcLCosmicRateAna(void *p) {
      typedef ::larlite::CosmicRateAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::CosmicRateAna

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLPEDistAna(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::PEDistAna : new ::larlite::PEDistAna;
   }
   static void *newArray_larlitecLcLPEDistAna(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::PEDistAna[nElements] : new ::larlite::PEDistAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLPEDistAna(void *p) {
      delete ((::larlite::PEDistAna*)p);
   }
   static void deleteArray_larlitecLcLPEDistAna(void *p) {
      delete [] ((::larlite::PEDistAna*)p);
   }
   static void destruct_larlitecLcLPEDistAna(void *p) {
      typedef ::larlite::PEDistAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::PEDistAna

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "vector", 214,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<double> >*)0x0)->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete ((vector<vector<double> >*)p);
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] ((vector<vector<double> >*)p);
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 214,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 214,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAna_Impl() {
    static const char* headers[] = {
"CosmicRateAna.h",
"PEDistAna.h",
0
    };
    static const char* includePaths[] = {
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/core",
"/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/scratch/lsimons/LArLite_LArSoft_Int/larlite/UserDev/larrecoobj/larrecoobj/OpT0Finder/Ana/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libSelectionTool_OpT0FinderAna dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace larlite{class __attribute__((annotate("$clingAutoload$CosmicRateAna.h")))  CosmicRateAna;}
namespace larlite{class __attribute__((annotate("$clingAutoload$PEDistAna.h")))  PEDistAna;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSelectionTool_OpT0FinderAna dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "CosmicRateAna.h"
#include "PEDistAna.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"larlite::CosmicRateAna", payloadCode, "@",
"larlite::PEDistAna", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSelectionTool_OpT0FinderAna",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAna_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAna_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAna() {
  TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAna_Impl();
}
