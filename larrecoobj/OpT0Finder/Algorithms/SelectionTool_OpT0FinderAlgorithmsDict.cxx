// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SelectionTool_OpT0FinderAlgorithmsDict

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
#include "ChargeAnalytical.h"
#include "CommonAmps.h"
#include "LightPath.h"
#include "MaxNPEWindow.h"
#include "NPtFilter.h"
#include "PhotonLibHypothesis.h"
#include "QLLMatch.h"
#include "QWeightPoint.h"
#include "TimeCompatMatch.h"
#include "TimeRange.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *flashanacLcLQWeightPoint_Dictionary();
   static void flashanacLcLQWeightPoint_TClassManip(TClass*);
   static void *new_flashanacLcLQWeightPoint(void *p = 0);
   static void *newArray_flashanacLcLQWeightPoint(Long_t size, void *p);
   static void delete_flashanacLcLQWeightPoint(void *p);
   static void deleteArray_flashanacLcLQWeightPoint(void *p);
   static void destruct_flashanacLcLQWeightPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::QWeightPoint*)
   {
      ::flashana::QWeightPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::QWeightPoint));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::QWeightPoint", "OpT0Finder/Algorithms/QWeightPoint.h", 32,
                  typeid(::flashana::QWeightPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLQWeightPoint_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::QWeightPoint) );
      instance.SetNew(&new_flashanacLcLQWeightPoint);
      instance.SetNewArray(&newArray_flashanacLcLQWeightPoint);
      instance.SetDelete(&delete_flashanacLcLQWeightPoint);
      instance.SetDeleteArray(&deleteArray_flashanacLcLQWeightPoint);
      instance.SetDestructor(&destruct_flashanacLcLQWeightPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::QWeightPoint*)
   {
      return GenerateInitInstanceLocal((::flashana::QWeightPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::QWeightPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLQWeightPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::QWeightPoint*)0x0)->GetClass();
      flashanacLcLQWeightPoint_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLQWeightPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLCommonAmps_Dictionary();
   static void flashanacLcLCommonAmps_TClassManip(TClass*);
   static void *new_flashanacLcLCommonAmps(void *p = 0);
   static void *newArray_flashanacLcLCommonAmps(Long_t size, void *p);
   static void delete_flashanacLcLCommonAmps(void *p);
   static void deleteArray_flashanacLcLCommonAmps(void *p);
   static void destruct_flashanacLcLCommonAmps(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::CommonAmps*)
   {
      ::flashana::CommonAmps *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::CommonAmps));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::CommonAmps", "OpT0Finder/Algorithms/CommonAmps.h", 31,
                  typeid(::flashana::CommonAmps), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLCommonAmps_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::CommonAmps) );
      instance.SetNew(&new_flashanacLcLCommonAmps);
      instance.SetNewArray(&newArray_flashanacLcLCommonAmps);
      instance.SetDelete(&delete_flashanacLcLCommonAmps);
      instance.SetDeleteArray(&deleteArray_flashanacLcLCommonAmps);
      instance.SetDestructor(&destruct_flashanacLcLCommonAmps);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::CommonAmps*)
   {
      return GenerateInitInstanceLocal((::flashana::CommonAmps*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::CommonAmps*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLCommonAmps_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::CommonAmps*)0x0)->GetClass();
      flashanacLcLCommonAmps_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLCommonAmps_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLTimeCompatMatch_Dictionary();
   static void flashanacLcLTimeCompatMatch_TClassManip(TClass*);
   static void *new_flashanacLcLTimeCompatMatch(void *p = 0);
   static void *newArray_flashanacLcLTimeCompatMatch(Long_t size, void *p);
   static void delete_flashanacLcLTimeCompatMatch(void *p);
   static void deleteArray_flashanacLcLTimeCompatMatch(void *p);
   static void destruct_flashanacLcLTimeCompatMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::TimeCompatMatch*)
   {
      ::flashana::TimeCompatMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::TimeCompatMatch));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::TimeCompatMatch", "OpT0Finder/Algorithms/TimeCompatMatch.h", 27,
                  typeid(::flashana::TimeCompatMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLTimeCompatMatch_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::TimeCompatMatch) );
      instance.SetNew(&new_flashanacLcLTimeCompatMatch);
      instance.SetNewArray(&newArray_flashanacLcLTimeCompatMatch);
      instance.SetDelete(&delete_flashanacLcLTimeCompatMatch);
      instance.SetDeleteArray(&deleteArray_flashanacLcLTimeCompatMatch);
      instance.SetDestructor(&destruct_flashanacLcLTimeCompatMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::TimeCompatMatch*)
   {
      return GenerateInitInstanceLocal((::flashana::TimeCompatMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::TimeCompatMatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLTimeCompatMatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::TimeCompatMatch*)0x0)->GetClass();
      flashanacLcLTimeCompatMatch_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLTimeCompatMatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLMaxNPEWindow_Dictionary();
   static void flashanacLcLMaxNPEWindow_TClassManip(TClass*);
   static void *new_flashanacLcLMaxNPEWindow(void *p = 0);
   static void *newArray_flashanacLcLMaxNPEWindow(Long_t size, void *p);
   static void delete_flashanacLcLMaxNPEWindow(void *p);
   static void deleteArray_flashanacLcLMaxNPEWindow(void *p);
   static void destruct_flashanacLcLMaxNPEWindow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::MaxNPEWindow*)
   {
      ::flashana::MaxNPEWindow *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::MaxNPEWindow));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::MaxNPEWindow", "OpT0Finder/Algorithms/MaxNPEWindow.h", 40,
                  typeid(::flashana::MaxNPEWindow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLMaxNPEWindow_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::MaxNPEWindow) );
      instance.SetNew(&new_flashanacLcLMaxNPEWindow);
      instance.SetNewArray(&newArray_flashanacLcLMaxNPEWindow);
      instance.SetDelete(&delete_flashanacLcLMaxNPEWindow);
      instance.SetDeleteArray(&deleteArray_flashanacLcLMaxNPEWindow);
      instance.SetDestructor(&destruct_flashanacLcLMaxNPEWindow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::MaxNPEWindow*)
   {
      return GenerateInitInstanceLocal((::flashana::MaxNPEWindow*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::MaxNPEWindow*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLMaxNPEWindow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::MaxNPEWindow*)0x0)->GetClass();
      flashanacLcLMaxNPEWindow_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLMaxNPEWindow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLTimeRange_Dictionary();
   static void flashanacLcLTimeRange_TClassManip(TClass*);
   static void *new_flashanacLcLTimeRange(void *p = 0);
   static void *newArray_flashanacLcLTimeRange(Long_t size, void *p);
   static void delete_flashanacLcLTimeRange(void *p);
   static void deleteArray_flashanacLcLTimeRange(void *p);
   static void destruct_flashanacLcLTimeRange(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::TimeRange*)
   {
      ::flashana::TimeRange *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::TimeRange));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::TimeRange", "OpT0Finder/Algorithms/TimeRange.h", 30,
                  typeid(::flashana::TimeRange), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLTimeRange_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::TimeRange) );
      instance.SetNew(&new_flashanacLcLTimeRange);
      instance.SetNewArray(&newArray_flashanacLcLTimeRange);
      instance.SetDelete(&delete_flashanacLcLTimeRange);
      instance.SetDeleteArray(&deleteArray_flashanacLcLTimeRange);
      instance.SetDestructor(&destruct_flashanacLcLTimeRange);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::TimeRange*)
   {
      return GenerateInitInstanceLocal((::flashana::TimeRange*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::TimeRange*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLTimeRange_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::TimeRange*)0x0)->GetClass();
      flashanacLcLTimeRange_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLTimeRange_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLTimeRangeSet_Dictionary();
   static void flashanacLcLTimeRangeSet_TClassManip(TClass*);
   static void *new_flashanacLcLTimeRangeSet(void *p = 0);
   static void *newArray_flashanacLcLTimeRangeSet(Long_t size, void *p);
   static void delete_flashanacLcLTimeRangeSet(void *p);
   static void deleteArray_flashanacLcLTimeRangeSet(void *p);
   static void destruct_flashanacLcLTimeRangeSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::TimeRangeSet*)
   {
      ::flashana::TimeRangeSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::TimeRangeSet));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::TimeRangeSet", "OpT0Finder/Algorithms/TimeRange.h", 71,
                  typeid(::flashana::TimeRangeSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLTimeRangeSet_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::TimeRangeSet) );
      instance.SetNew(&new_flashanacLcLTimeRangeSet);
      instance.SetNewArray(&newArray_flashanacLcLTimeRangeSet);
      instance.SetDelete(&delete_flashanacLcLTimeRangeSet);
      instance.SetDeleteArray(&deleteArray_flashanacLcLTimeRangeSet);
      instance.SetDestructor(&destruct_flashanacLcLTimeRangeSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::TimeRangeSet*)
   {
      return GenerateInitInstanceLocal((::flashana::TimeRangeSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::TimeRangeSet*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLTimeRangeSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::TimeRangeSet*)0x0)->GetClass();
      flashanacLcLTimeRangeSet_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLTimeRangeSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLNPtFilter_Dictionary();
   static void flashanacLcLNPtFilter_TClassManip(TClass*);
   static void *new_flashanacLcLNPtFilter(void *p = 0);
   static void *newArray_flashanacLcLNPtFilter(Long_t size, void *p);
   static void delete_flashanacLcLNPtFilter(void *p);
   static void deleteArray_flashanacLcLNPtFilter(void *p);
   static void destruct_flashanacLcLNPtFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::NPtFilter*)
   {
      ::flashana::NPtFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::NPtFilter));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::NPtFilter", "OpT0Finder/Algorithms/NPtFilter.h", 25,
                  typeid(::flashana::NPtFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLNPtFilter_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::NPtFilter) );
      instance.SetNew(&new_flashanacLcLNPtFilter);
      instance.SetNewArray(&newArray_flashanacLcLNPtFilter);
      instance.SetDelete(&delete_flashanacLcLNPtFilter);
      instance.SetDeleteArray(&deleteArray_flashanacLcLNPtFilter);
      instance.SetDestructor(&destruct_flashanacLcLNPtFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::NPtFilter*)
   {
      return GenerateInitInstanceLocal((::flashana::NPtFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::NPtFilter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLNPtFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::NPtFilter*)0x0)->GetClass();
      flashanacLcLNPtFilter_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLNPtFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLQLLMatch_Dictionary();
   static void flashanacLcLQLLMatch_TClassManip(TClass*);
   static void *new_flashanacLcLQLLMatch(void *p = 0);
   static void *newArray_flashanacLcLQLLMatch(Long_t size, void *p);
   static void delete_flashanacLcLQLLMatch(void *p);
   static void deleteArray_flashanacLcLQLLMatch(void *p);
   static void destruct_flashanacLcLQLLMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::QLLMatch*)
   {
      ::flashana::QLLMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::QLLMatch));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::QLLMatch", "OpT0Finder/Algorithms/QLLMatch.h", 26,
                  typeid(::flashana::QLLMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLQLLMatch_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::QLLMatch) );
      instance.SetNew(&new_flashanacLcLQLLMatch);
      instance.SetNewArray(&newArray_flashanacLcLQLLMatch);
      instance.SetDelete(&delete_flashanacLcLQLLMatch);
      instance.SetDeleteArray(&deleteArray_flashanacLcLQLLMatch);
      instance.SetDestructor(&destruct_flashanacLcLQLLMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::QLLMatch*)
   {
      return GenerateInitInstanceLocal((::flashana::QLLMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::QLLMatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLQLLMatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::QLLMatch*)0x0)->GetClass();
      flashanacLcLQLLMatch_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLQLLMatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLPhotonLibHypothesis_Dictionary();
   static void flashanacLcLPhotonLibHypothesis_TClassManip(TClass*);
   static void *new_flashanacLcLPhotonLibHypothesis(void *p = 0);
   static void *newArray_flashanacLcLPhotonLibHypothesis(Long_t size, void *p);
   static void delete_flashanacLcLPhotonLibHypothesis(void *p);
   static void deleteArray_flashanacLcLPhotonLibHypothesis(void *p);
   static void destruct_flashanacLcLPhotonLibHypothesis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::PhotonLibHypothesis*)
   {
      ::flashana::PhotonLibHypothesis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::PhotonLibHypothesis));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::PhotonLibHypothesis", "OpT0Finder/Algorithms/PhotonLibHypothesis.h", 26,
                  typeid(::flashana::PhotonLibHypothesis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLPhotonLibHypothesis_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::PhotonLibHypothesis) );
      instance.SetNew(&new_flashanacLcLPhotonLibHypothesis);
      instance.SetNewArray(&newArray_flashanacLcLPhotonLibHypothesis);
      instance.SetDelete(&delete_flashanacLcLPhotonLibHypothesis);
      instance.SetDeleteArray(&deleteArray_flashanacLcLPhotonLibHypothesis);
      instance.SetDestructor(&destruct_flashanacLcLPhotonLibHypothesis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::PhotonLibHypothesis*)
   {
      return GenerateInitInstanceLocal((::flashana::PhotonLibHypothesis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::PhotonLibHypothesis*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLPhotonLibHypothesis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::PhotonLibHypothesis*)0x0)->GetClass();
      flashanacLcLPhotonLibHypothesis_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLPhotonLibHypothesis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLChargeAnalytical_Dictionary();
   static void flashanacLcLChargeAnalytical_TClassManip(TClass*);
   static void *new_flashanacLcLChargeAnalytical(void *p = 0);
   static void *newArray_flashanacLcLChargeAnalytical(Long_t size, void *p);
   static void delete_flashanacLcLChargeAnalytical(void *p);
   static void deleteArray_flashanacLcLChargeAnalytical(void *p);
   static void destruct_flashanacLcLChargeAnalytical(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::ChargeAnalytical*)
   {
      ::flashana::ChargeAnalytical *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::ChargeAnalytical));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::ChargeAnalytical", "OpT0Finder/Algorithms/ChargeAnalytical.h", 29,
                  typeid(::flashana::ChargeAnalytical), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLChargeAnalytical_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::ChargeAnalytical) );
      instance.SetNew(&new_flashanacLcLChargeAnalytical);
      instance.SetNewArray(&newArray_flashanacLcLChargeAnalytical);
      instance.SetDelete(&delete_flashanacLcLChargeAnalytical);
      instance.SetDeleteArray(&deleteArray_flashanacLcLChargeAnalytical);
      instance.SetDestructor(&destruct_flashanacLcLChargeAnalytical);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::ChargeAnalytical*)
   {
      return GenerateInitInstanceLocal((::flashana::ChargeAnalytical*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::ChargeAnalytical*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLChargeAnalytical_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::ChargeAnalytical*)0x0)->GetClass();
      flashanacLcLChargeAnalytical_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLChargeAnalytical_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLLightPath_Dictionary();
   static void flashanacLcLLightPath_TClassManip(TClass*);
   static void *new_flashanacLcLLightPath(void *p = 0);
   static void *newArray_flashanacLcLLightPath(Long_t size, void *p);
   static void delete_flashanacLcLLightPath(void *p);
   static void deleteArray_flashanacLcLLightPath(void *p);
   static void destruct_flashanacLcLLightPath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::LightPath*)
   {
      ::flashana::LightPath *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::LightPath));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::LightPath", "OpT0Finder/Algorithms/LightPath.h", 33,
                  typeid(::flashana::LightPath), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLLightPath_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::LightPath) );
      instance.SetNew(&new_flashanacLcLLightPath);
      instance.SetNewArray(&newArray_flashanacLcLLightPath);
      instance.SetDelete(&delete_flashanacLcLLightPath);
      instance.SetDeleteArray(&deleteArray_flashanacLcLLightPath);
      instance.SetDestructor(&destruct_flashanacLcLLightPath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::LightPath*)
   {
      return GenerateInitInstanceLocal((::flashana::LightPath*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::LightPath*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLLightPath_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::LightPath*)0x0)->GetClass();
      flashanacLcLLightPath_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLLightPath_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLQWeightPoint(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::QWeightPoint : new ::flashana::QWeightPoint;
   }
   static void *newArray_flashanacLcLQWeightPoint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::QWeightPoint[nElements] : new ::flashana::QWeightPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLQWeightPoint(void *p) {
      delete ((::flashana::QWeightPoint*)p);
   }
   static void deleteArray_flashanacLcLQWeightPoint(void *p) {
      delete [] ((::flashana::QWeightPoint*)p);
   }
   static void destruct_flashanacLcLQWeightPoint(void *p) {
      typedef ::flashana::QWeightPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::QWeightPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLCommonAmps(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::CommonAmps : new ::flashana::CommonAmps;
   }
   static void *newArray_flashanacLcLCommonAmps(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::CommonAmps[nElements] : new ::flashana::CommonAmps[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLCommonAmps(void *p) {
      delete ((::flashana::CommonAmps*)p);
   }
   static void deleteArray_flashanacLcLCommonAmps(void *p) {
      delete [] ((::flashana::CommonAmps*)p);
   }
   static void destruct_flashanacLcLCommonAmps(void *p) {
      typedef ::flashana::CommonAmps current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::CommonAmps

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLTimeCompatMatch(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::TimeCompatMatch : new ::flashana::TimeCompatMatch;
   }
   static void *newArray_flashanacLcLTimeCompatMatch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::TimeCompatMatch[nElements] : new ::flashana::TimeCompatMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLTimeCompatMatch(void *p) {
      delete ((::flashana::TimeCompatMatch*)p);
   }
   static void deleteArray_flashanacLcLTimeCompatMatch(void *p) {
      delete [] ((::flashana::TimeCompatMatch*)p);
   }
   static void destruct_flashanacLcLTimeCompatMatch(void *p) {
      typedef ::flashana::TimeCompatMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::TimeCompatMatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLMaxNPEWindow(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::MaxNPEWindow : new ::flashana::MaxNPEWindow;
   }
   static void *newArray_flashanacLcLMaxNPEWindow(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::MaxNPEWindow[nElements] : new ::flashana::MaxNPEWindow[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLMaxNPEWindow(void *p) {
      delete ((::flashana::MaxNPEWindow*)p);
   }
   static void deleteArray_flashanacLcLMaxNPEWindow(void *p) {
      delete [] ((::flashana::MaxNPEWindow*)p);
   }
   static void destruct_flashanacLcLMaxNPEWindow(void *p) {
      typedef ::flashana::MaxNPEWindow current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::MaxNPEWindow

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLTimeRange(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::TimeRange : new ::flashana::TimeRange;
   }
   static void *newArray_flashanacLcLTimeRange(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::TimeRange[nElements] : new ::flashana::TimeRange[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLTimeRange(void *p) {
      delete ((::flashana::TimeRange*)p);
   }
   static void deleteArray_flashanacLcLTimeRange(void *p) {
      delete [] ((::flashana::TimeRange*)p);
   }
   static void destruct_flashanacLcLTimeRange(void *p) {
      typedef ::flashana::TimeRange current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::TimeRange

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLTimeRangeSet(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::TimeRangeSet : new ::flashana::TimeRangeSet;
   }
   static void *newArray_flashanacLcLTimeRangeSet(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::TimeRangeSet[nElements] : new ::flashana::TimeRangeSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLTimeRangeSet(void *p) {
      delete ((::flashana::TimeRangeSet*)p);
   }
   static void deleteArray_flashanacLcLTimeRangeSet(void *p) {
      delete [] ((::flashana::TimeRangeSet*)p);
   }
   static void destruct_flashanacLcLTimeRangeSet(void *p) {
      typedef ::flashana::TimeRangeSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::TimeRangeSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLNPtFilter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::NPtFilter : new ::flashana::NPtFilter;
   }
   static void *newArray_flashanacLcLNPtFilter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::NPtFilter[nElements] : new ::flashana::NPtFilter[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLNPtFilter(void *p) {
      delete ((::flashana::NPtFilter*)p);
   }
   static void deleteArray_flashanacLcLNPtFilter(void *p) {
      delete [] ((::flashana::NPtFilter*)p);
   }
   static void destruct_flashanacLcLNPtFilter(void *p) {
      typedef ::flashana::NPtFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::NPtFilter

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLQLLMatch(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::QLLMatch : new ::flashana::QLLMatch;
   }
   static void *newArray_flashanacLcLQLLMatch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::QLLMatch[nElements] : new ::flashana::QLLMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLQLLMatch(void *p) {
      delete ((::flashana::QLLMatch*)p);
   }
   static void deleteArray_flashanacLcLQLLMatch(void *p) {
      delete [] ((::flashana::QLLMatch*)p);
   }
   static void destruct_flashanacLcLQLLMatch(void *p) {
      typedef ::flashana::QLLMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::QLLMatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLPhotonLibHypothesis(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::PhotonLibHypothesis : new ::flashana::PhotonLibHypothesis;
   }
   static void *newArray_flashanacLcLPhotonLibHypothesis(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::PhotonLibHypothesis[nElements] : new ::flashana::PhotonLibHypothesis[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLPhotonLibHypothesis(void *p) {
      delete ((::flashana::PhotonLibHypothesis*)p);
   }
   static void deleteArray_flashanacLcLPhotonLibHypothesis(void *p) {
      delete [] ((::flashana::PhotonLibHypothesis*)p);
   }
   static void destruct_flashanacLcLPhotonLibHypothesis(void *p) {
      typedef ::flashana::PhotonLibHypothesis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::PhotonLibHypothesis

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLChargeAnalytical(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::ChargeAnalytical : new ::flashana::ChargeAnalytical;
   }
   static void *newArray_flashanacLcLChargeAnalytical(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::ChargeAnalytical[nElements] : new ::flashana::ChargeAnalytical[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLChargeAnalytical(void *p) {
      delete ((::flashana::ChargeAnalytical*)p);
   }
   static void deleteArray_flashanacLcLChargeAnalytical(void *p) {
      delete [] ((::flashana::ChargeAnalytical*)p);
   }
   static void destruct_flashanacLcLChargeAnalytical(void *p) {
      typedef ::flashana::ChargeAnalytical current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::ChargeAnalytical

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLLightPath(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::LightPath : new ::flashana::LightPath;
   }
   static void *newArray_flashanacLcLLightPath(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::LightPath[nElements] : new ::flashana::LightPath[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLLightPath(void *p) {
      delete ((::flashana::LightPath*)p);
   }
   static void deleteArray_flashanacLcLLightPath(void *p) {
      delete [] ((::flashana::LightPath*)p);
   }
   static void destruct_flashanacLcLLightPath(void *p) {
      typedef ::flashana::LightPath current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::LightPath

namespace ROOT {
   static TClass *vectorlEflashanacLcLTimeRangegR_Dictionary();
   static void vectorlEflashanacLcLTimeRangegR_TClassManip(TClass*);
   static void *new_vectorlEflashanacLcLTimeRangegR(void *p = 0);
   static void *newArray_vectorlEflashanacLcLTimeRangegR(Long_t size, void *p);
   static void delete_vectorlEflashanacLcLTimeRangegR(void *p);
   static void deleteArray_vectorlEflashanacLcLTimeRangegR(void *p);
   static void destruct_vectorlEflashanacLcLTimeRangegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<flashana::TimeRange>*)
   {
      vector<flashana::TimeRange> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<flashana::TimeRange>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<flashana::TimeRange>", -2, "vector", 214,
                  typeid(vector<flashana::TimeRange>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEflashanacLcLTimeRangegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<flashana::TimeRange>) );
      instance.SetNew(&new_vectorlEflashanacLcLTimeRangegR);
      instance.SetNewArray(&newArray_vectorlEflashanacLcLTimeRangegR);
      instance.SetDelete(&delete_vectorlEflashanacLcLTimeRangegR);
      instance.SetDeleteArray(&deleteArray_vectorlEflashanacLcLTimeRangegR);
      instance.SetDestructor(&destruct_vectorlEflashanacLcLTimeRangegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<flashana::TimeRange> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<flashana::TimeRange>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEflashanacLcLTimeRangegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<flashana::TimeRange>*)0x0)->GetClass();
      vectorlEflashanacLcLTimeRangegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEflashanacLcLTimeRangegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEflashanacLcLTimeRangegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::TimeRange> : new vector<flashana::TimeRange>;
   }
   static void *newArray_vectorlEflashanacLcLTimeRangegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::TimeRange>[nElements] : new vector<flashana::TimeRange>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEflashanacLcLTimeRangegR(void *p) {
      delete ((vector<flashana::TimeRange>*)p);
   }
   static void deleteArray_vectorlEflashanacLcLTimeRangegR(void *p) {
      delete [] ((vector<flashana::TimeRange>*)p);
   }
   static void destruct_vectorlEflashanacLcLTimeRangegR(void *p) {
      typedef vector<flashana::TimeRange> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<flashana::TimeRange>

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
  void TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAlgorithms_Impl() {
    static const char* headers[] = {
"ChargeAnalytical.h",
"CommonAmps.h",
"LightPath.h",
"MaxNPEWindow.h",
"NPtFilter.h",
"PhotonLibHypothesis.h",
"QLLMatch.h",
"QWeightPoint.h",
"TimeCompatMatch.h",
"TimeRange.h",
0
    };
    static const char* includePaths[] = {
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/core",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/BasicTool",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/SelectionTool",
"/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/scratch/lsimons/LArLite_LArSoft_Int/larlite/UserDev/larrecoobj/larrecoobj/OpT0Finder/Algorithms/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libSelectionTool_OpT0FinderAlgorithms dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace flashana{class __attribute__((annotate("$clingAutoload$QWeightPoint.h")))  QWeightPoint;}
namespace flashana{class __attribute__((annotate("$clingAutoload$CommonAmps.h")))  CommonAmps;}
namespace flashana{class __attribute__((annotate("$clingAutoload$TimeCompatMatch.h")))  TimeCompatMatch;}
namespace flashana{class __attribute__((annotate("$clingAutoload$MaxNPEWindow.h")))  MaxNPEWindow;}
namespace flashana{class __attribute__((annotate("$clingAutoload$TimeRange.h")))  TimeRange;}
namespace flashana{class __attribute__((annotate("$clingAutoload$TimeRange.h")))  TimeRangeSet;}
namespace flashana{class __attribute__((annotate("$clingAutoload$NPtFilter.h")))  NPtFilter;}
namespace flashana{class __attribute__((annotate("$clingAutoload$QLLMatch.h")))  QLLMatch;}
namespace flashana{class __attribute__((annotate("$clingAutoload$PhotonLibHypothesis.h")))  PhotonLibHypothesis;}
namespace flashana{class __attribute__((annotate("$clingAutoload$ChargeAnalytical.h")))  ChargeAnalytical;}
namespace flashana{class __attribute__((annotate("$clingAutoload$LightPath.h")))  LightPath;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSelectionTool_OpT0FinderAlgorithms dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ChargeAnalytical.h"
#include "CommonAmps.h"
#include "LightPath.h"
#include "MaxNPEWindow.h"
#include "NPtFilter.h"
#include "PhotonLibHypothesis.h"
#include "QLLMatch.h"
#include "QWeightPoint.h"
#include "TimeCompatMatch.h"
#include "TimeRange.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"flashana::ChargeAnalytical", payloadCode, "@",
"flashana::CommonAmps", payloadCode, "@",
"flashana::LightPath", payloadCode, "@",
"flashana::MaxNPEWindow", payloadCode, "@",
"flashana::NPtFilter", payloadCode, "@",
"flashana::PhotonLibHypothesis", payloadCode, "@",
"flashana::QLLMatch", payloadCode, "@",
"flashana::QWeightPoint", payloadCode, "@",
"flashana::TimeCompatMatch", payloadCode, "@",
"flashana::TimeRange", payloadCode, "@",
"flashana::TimeRangeSet", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSelectionTool_OpT0FinderAlgorithms",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAlgorithms_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAlgorithms_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAlgorithms() {
  TriggerDictionaryInitialization_libSelectionTool_OpT0FinderAlgorithms_Impl();
}
