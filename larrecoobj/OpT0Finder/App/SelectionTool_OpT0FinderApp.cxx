// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SelectionTool_OpT0FinderApp

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
#include "MCQCluster.h"
#include "PaddleUBT0Finder.h"
#include "UBT0Finder.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *larlitecLcLUBT0Finder_Dictionary();
   static void larlitecLcLUBT0Finder_TClassManip(TClass*);
   static void *new_larlitecLcLUBT0Finder(void *p = 0);
   static void *newArray_larlitecLcLUBT0Finder(Long_t size, void *p);
   static void delete_larlitecLcLUBT0Finder(void *p);
   static void deleteArray_larlitecLcLUBT0Finder(void *p);
   static void destruct_larlitecLcLUBT0Finder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::UBT0Finder*)
   {
      ::larlite::UBT0Finder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::UBT0Finder));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::UBT0Finder", "OpT0Finder/App/UBT0Finder.h", 29,
                  typeid(::larlite::UBT0Finder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLUBT0Finder_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::UBT0Finder) );
      instance.SetNew(&new_larlitecLcLUBT0Finder);
      instance.SetNewArray(&newArray_larlitecLcLUBT0Finder);
      instance.SetDelete(&delete_larlitecLcLUBT0Finder);
      instance.SetDeleteArray(&deleteArray_larlitecLcLUBT0Finder);
      instance.SetDestructor(&destruct_larlitecLcLUBT0Finder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::UBT0Finder*)
   {
      return GenerateInitInstanceLocal((::larlite::UBT0Finder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::UBT0Finder*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLUBT0Finder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::UBT0Finder*)0x0)->GetClass();
      larlitecLcLUBT0Finder_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLUBT0Finder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLPaddleUBT0Finder_Dictionary();
   static void larlitecLcLPaddleUBT0Finder_TClassManip(TClass*);
   static void *new_larlitecLcLPaddleUBT0Finder(void *p = 0);
   static void *newArray_larlitecLcLPaddleUBT0Finder(Long_t size, void *p);
   static void delete_larlitecLcLPaddleUBT0Finder(void *p);
   static void deleteArray_larlitecLcLPaddleUBT0Finder(void *p);
   static void destruct_larlitecLcLPaddleUBT0Finder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::PaddleUBT0Finder*)
   {
      ::larlite::PaddleUBT0Finder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::PaddleUBT0Finder));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::PaddleUBT0Finder", "OpT0Finder/App/PaddleUBT0Finder.h", 38,
                  typeid(::larlite::PaddleUBT0Finder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLPaddleUBT0Finder_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::PaddleUBT0Finder) );
      instance.SetNew(&new_larlitecLcLPaddleUBT0Finder);
      instance.SetNewArray(&newArray_larlitecLcLPaddleUBT0Finder);
      instance.SetDelete(&delete_larlitecLcLPaddleUBT0Finder);
      instance.SetDeleteArray(&deleteArray_larlitecLcLPaddleUBT0Finder);
      instance.SetDestructor(&destruct_larlitecLcLPaddleUBT0Finder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::PaddleUBT0Finder*)
   {
      return GenerateInitInstanceLocal((::larlite::PaddleUBT0Finder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::PaddleUBT0Finder*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLPaddleUBT0Finder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::PaddleUBT0Finder*)0x0)->GetClass();
      larlitecLcLPaddleUBT0Finder_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLPaddleUBT0Finder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLMCQCluster_Dictionary();
   static void flashanacLcLMCQCluster_TClassManip(TClass*);
   static void *new_flashanacLcLMCQCluster(void *p = 0);
   static void *newArray_flashanacLcLMCQCluster(Long_t size, void *p);
   static void delete_flashanacLcLMCQCluster(void *p);
   static void deleteArray_flashanacLcLMCQCluster(void *p);
   static void destruct_flashanacLcLMCQCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::MCQCluster*)
   {
      ::flashana::MCQCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::MCQCluster));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::MCQCluster", "OpT0Finder/App/MCQCluster.h", 32,
                  typeid(::flashana::MCQCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLMCQCluster_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::MCQCluster) );
      instance.SetNew(&new_flashanacLcLMCQCluster);
      instance.SetNewArray(&newArray_flashanacLcLMCQCluster);
      instance.SetDelete(&delete_flashanacLcLMCQCluster);
      instance.SetDeleteArray(&deleteArray_flashanacLcLMCQCluster);
      instance.SetDestructor(&destruct_flashanacLcLMCQCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::MCQCluster*)
   {
      return GenerateInitInstanceLocal((::flashana::MCQCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::MCQCluster*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLMCQCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::MCQCluster*)0x0)->GetClass();
      flashanacLcLMCQCluster_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLMCQCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLUBT0Finder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::UBT0Finder : new ::larlite::UBT0Finder;
   }
   static void *newArray_larlitecLcLUBT0Finder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::UBT0Finder[nElements] : new ::larlite::UBT0Finder[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLUBT0Finder(void *p) {
      delete ((::larlite::UBT0Finder*)p);
   }
   static void deleteArray_larlitecLcLUBT0Finder(void *p) {
      delete [] ((::larlite::UBT0Finder*)p);
   }
   static void destruct_larlitecLcLUBT0Finder(void *p) {
      typedef ::larlite::UBT0Finder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::UBT0Finder

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLPaddleUBT0Finder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::PaddleUBT0Finder : new ::larlite::PaddleUBT0Finder;
   }
   static void *newArray_larlitecLcLPaddleUBT0Finder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::PaddleUBT0Finder[nElements] : new ::larlite::PaddleUBT0Finder[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLPaddleUBT0Finder(void *p) {
      delete ((::larlite::PaddleUBT0Finder*)p);
   }
   static void deleteArray_larlitecLcLPaddleUBT0Finder(void *p) {
      delete [] ((::larlite::PaddleUBT0Finder*)p);
   }
   static void destruct_larlitecLcLPaddleUBT0Finder(void *p) {
      typedef ::larlite::PaddleUBT0Finder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::PaddleUBT0Finder

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLMCQCluster(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::MCQCluster : new ::flashana::MCQCluster;
   }
   static void *newArray_flashanacLcLMCQCluster(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::MCQCluster[nElements] : new ::flashana::MCQCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLMCQCluster(void *p) {
      delete ((::flashana::MCQCluster*)p);
   }
   static void deleteArray_flashanacLcLMCQCluster(void *p) {
      delete [] ((::flashana::MCQCluster*)p);
   }
   static void destruct_flashanacLcLMCQCluster(void *p) {
      typedef ::flashana::MCQCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::MCQCluster

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = 0);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 214,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned long>*)0x0)->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete ((vector<unsigned long>*)p);
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] ((vector<unsigned long>*)p);
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *vectorlEflashanacLcLQCluster_tgR_Dictionary();
   static void vectorlEflashanacLcLQCluster_tgR_TClassManip(TClass*);
   static void *new_vectorlEflashanacLcLQCluster_tgR(void *p = 0);
   static void *newArray_vectorlEflashanacLcLQCluster_tgR(Long_t size, void *p);
   static void delete_vectorlEflashanacLcLQCluster_tgR(void *p);
   static void deleteArray_vectorlEflashanacLcLQCluster_tgR(void *p);
   static void destruct_vectorlEflashanacLcLQCluster_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<flashana::QCluster_t>*)
   {
      vector<flashana::QCluster_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<flashana::QCluster_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<flashana::QCluster_t>", -2, "vector", 214,
                  typeid(vector<flashana::QCluster_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEflashanacLcLQCluster_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<flashana::QCluster_t>) );
      instance.SetNew(&new_vectorlEflashanacLcLQCluster_tgR);
      instance.SetNewArray(&newArray_vectorlEflashanacLcLQCluster_tgR);
      instance.SetDelete(&delete_vectorlEflashanacLcLQCluster_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEflashanacLcLQCluster_tgR);
      instance.SetDestructor(&destruct_vectorlEflashanacLcLQCluster_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<flashana::QCluster_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<flashana::QCluster_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEflashanacLcLQCluster_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<flashana::QCluster_t>*)0x0)->GetClass();
      vectorlEflashanacLcLQCluster_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEflashanacLcLQCluster_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEflashanacLcLQCluster_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::QCluster_t> : new vector<flashana::QCluster_t>;
   }
   static void *newArray_vectorlEflashanacLcLQCluster_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::QCluster_t>[nElements] : new vector<flashana::QCluster_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEflashanacLcLQCluster_tgR(void *p) {
      delete ((vector<flashana::QCluster_t>*)p);
   }
   static void deleteArray_vectorlEflashanacLcLQCluster_tgR(void *p) {
      delete [] ((vector<flashana::QCluster_t>*)p);
   }
   static void destruct_vectorlEflashanacLcLQCluster_tgR(void *p) {
      typedef vector<flashana::QCluster_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<flashana::QCluster_t>

namespace ROOT {
   static TClass *vectorlEflashanacLcLMCSource_tgR_Dictionary();
   static void vectorlEflashanacLcLMCSource_tgR_TClassManip(TClass*);
   static void *new_vectorlEflashanacLcLMCSource_tgR(void *p = 0);
   static void *newArray_vectorlEflashanacLcLMCSource_tgR(Long_t size, void *p);
   static void delete_vectorlEflashanacLcLMCSource_tgR(void *p);
   static void deleteArray_vectorlEflashanacLcLMCSource_tgR(void *p);
   static void destruct_vectorlEflashanacLcLMCSource_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<flashana::MCSource_t>*)
   {
      vector<flashana::MCSource_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<flashana::MCSource_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<flashana::MCSource_t>", -2, "vector", 214,
                  typeid(vector<flashana::MCSource_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEflashanacLcLMCSource_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<flashana::MCSource_t>) );
      instance.SetNew(&new_vectorlEflashanacLcLMCSource_tgR);
      instance.SetNewArray(&newArray_vectorlEflashanacLcLMCSource_tgR);
      instance.SetDelete(&delete_vectorlEflashanacLcLMCSource_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEflashanacLcLMCSource_tgR);
      instance.SetDestructor(&destruct_vectorlEflashanacLcLMCSource_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<flashana::MCSource_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<flashana::MCSource_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEflashanacLcLMCSource_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<flashana::MCSource_t>*)0x0)->GetClass();
      vectorlEflashanacLcLMCSource_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEflashanacLcLMCSource_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEflashanacLcLMCSource_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::MCSource_t> : new vector<flashana::MCSource_t>;
   }
   static void *newArray_vectorlEflashanacLcLMCSource_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::MCSource_t>[nElements] : new vector<flashana::MCSource_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEflashanacLcLMCSource_tgR(void *p) {
      delete ((vector<flashana::MCSource_t>*)p);
   }
   static void deleteArray_vectorlEflashanacLcLMCSource_tgR(void *p) {
      delete [] ((vector<flashana::MCSource_t>*)p);
   }
   static void destruct_vectorlEflashanacLcLMCSource_tgR(void *p) {
      typedef vector<flashana::MCSource_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<flashana::MCSource_t>

namespace {
  void TriggerDictionaryInitialization_libSelectionTool_OpT0FinderApp_Impl() {
    static const char* headers[] = {
"MCQCluster.h",
"PaddleUBT0Finder.h",
"UBT0Finder.h",
0
    };
    static const char* includePaths[] = {
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/core",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/BasicTool",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/BasicTool",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/SelectionTool",
"/products/lardataobj/v1_04_00/include",
"/products/nusimdata/v1_04_00/include",
"/products/lardata/v06_00_00/include",
"/products/larcore/v06_00_00/include",
"/products/larcoreobj/v1_04_00/include",
"/products/cetlib/v1_18_00/include",
"/products/fhiclcpp/v3_19_00/include",
"/products/clhep/v2_3_2_2/Linux64bit+2.6-2.12-e10-prof/include",
"/products/art/v2_00_03/include",
"/products/canvas/v1_03_03/include",
"/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/scratch/lsimons/LArLite_LArSoft_Int/larlite/UserDev/larrecoobj/larrecoobj/OpT0Finder/App/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libSelectionTool_OpT0FinderApp dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace larlite{class __attribute__((annotate("$clingAutoload$UBT0Finder.h")))  UBT0Finder;}
namespace larlite{class __attribute__((annotate("$clingAutoload$PaddleUBT0Finder.h")))  PaddleUBT0Finder;}
namespace flashana{class __attribute__((annotate("$clingAutoload$MCQCluster.h")))  MCQCluster;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSelectionTool_OpT0FinderApp dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "MCQCluster.h"
#include "PaddleUBT0Finder.h"
#include "UBT0Finder.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"flashana::MCQCluster", payloadCode, "@",
"larlite::PaddleUBT0Finder", payloadCode, "@",
"larlite::UBT0Finder", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSelectionTool_OpT0FinderApp",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSelectionTool_OpT0FinderApp_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSelectionTool_OpT0FinderApp_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSelectionTool_OpT0FinderApp() {
  TriggerDictionaryInitialization_libSelectionTool_OpT0FinderApp_Impl();
}
