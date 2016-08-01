// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SelectionTool_OpT0FinderBaseDict

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
#include "BaseAlgorithm.h"
#include "BaseFlashFilter.h"
#include "BaseFlashHypothesis.h"
#include "BaseFlashMatch.h"
#include "BaseProhibitAlgo.h"
#include "BaseTPCFilter.h"
#include "ColorPrint.h"
#include "FlashMatchManager.h"
#include "OpT0FinderConstants.h"
#include "OpT0FinderException.h"
#include "OpT0FinderTypes.h"

// Header files passed via #pragma extra_include

namespace flashana {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *flashana_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("flashana", 0 /*version*/, "OpT0FinderConstants.h", 9,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &flashana_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *flashana_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace flashana {
   namespace msg {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *flashanacLcLmsg_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("flashana::msg", 0 /*version*/, "OpT0FinderTypes.h", 137,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &flashanacLcLmsg_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *flashanacLcLmsg_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *flashanacLcLQPoint_t_Dictionary();
   static void flashanacLcLQPoint_t_TClassManip(TClass*);
   static void *new_flashanacLcLQPoint_t(void *p = 0);
   static void *newArray_flashanacLcLQPoint_t(Long_t size, void *p);
   static void delete_flashanacLcLQPoint_t(void *p);
   static void deleteArray_flashanacLcLQPoint_t(void *p);
   static void destruct_flashanacLcLQPoint_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::QPoint_t*)
   {
      ::flashana::QPoint_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::QPoint_t));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::QPoint_t", "OpT0FinderTypes.h", 48,
                  typeid(::flashana::QPoint_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLQPoint_t_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::QPoint_t) );
      instance.SetNew(&new_flashanacLcLQPoint_t);
      instance.SetNewArray(&newArray_flashanacLcLQPoint_t);
      instance.SetDelete(&delete_flashanacLcLQPoint_t);
      instance.SetDeleteArray(&deleteArray_flashanacLcLQPoint_t);
      instance.SetDestructor(&destruct_flashanacLcLQPoint_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::QPoint_t*)
   {
      return GenerateInitInstanceLocal((::flashana::QPoint_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::QPoint_t*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLQPoint_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::QPoint_t*)0x0)->GetClass();
      flashanacLcLQPoint_t_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLQPoint_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLQCluster_t_Dictionary();
   static void flashanacLcLQCluster_t_TClassManip(TClass*);
   static void *new_flashanacLcLQCluster_t(void *p = 0);
   static void *newArray_flashanacLcLQCluster_t(Long_t size, void *p);
   static void delete_flashanacLcLQCluster_t(void *p);
   static void deleteArray_flashanacLcLQCluster_t(void *p);
   static void destruct_flashanacLcLQCluster_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::QCluster_t*)
   {
      ::flashana::QCluster_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::QCluster_t));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::QCluster_t", "OpT0FinderTypes.h", 72,
                  typeid(::flashana::QCluster_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLQCluster_t_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::QCluster_t) );
      instance.SetNew(&new_flashanacLcLQCluster_t);
      instance.SetNewArray(&newArray_flashanacLcLQCluster_t);
      instance.SetDelete(&delete_flashanacLcLQCluster_t);
      instance.SetDeleteArray(&deleteArray_flashanacLcLQCluster_t);
      instance.SetDestructor(&destruct_flashanacLcLQCluster_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::QCluster_t*)
   {
      return GenerateInitInstanceLocal((::flashana::QCluster_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::QCluster_t*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLQCluster_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::QCluster_t*)0x0)->GetClass();
      flashanacLcLQCluster_t_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLQCluster_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLColorPrint_Dictionary();
   static void flashanacLcLColorPrint_TClassManip(TClass*);
   static void *new_flashanacLcLColorPrint(void *p = 0);
   static void *newArray_flashanacLcLColorPrint(Long_t size, void *p);
   static void delete_flashanacLcLColorPrint(void *p);
   static void deleteArray_flashanacLcLColorPrint(void *p);
   static void destruct_flashanacLcLColorPrint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::ColorPrint*)
   {
      ::flashana::ColorPrint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::ColorPrint));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::ColorPrint", "ColorPrint.h", 28,
                  typeid(::flashana::ColorPrint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLColorPrint_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::ColorPrint) );
      instance.SetNew(&new_flashanacLcLColorPrint);
      instance.SetNewArray(&newArray_flashanacLcLColorPrint);
      instance.SetDelete(&delete_flashanacLcLColorPrint);
      instance.SetDeleteArray(&deleteArray_flashanacLcLColorPrint);
      instance.SetDestructor(&destruct_flashanacLcLColorPrint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::ColorPrint*)
   {
      return GenerateInitInstanceLocal((::flashana::ColorPrint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::ColorPrint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLColorPrint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::ColorPrint*)0x0)->GetClass();
      flashanacLcLColorPrint_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLColorPrint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLFlash_t_Dictionary();
   static void flashanacLcLFlash_t_TClassManip(TClass*);
   static void *new_flashanacLcLFlash_t(void *p = 0);
   static void *newArray_flashanacLcLFlash_t(Long_t size, void *p);
   static void delete_flashanacLcLFlash_t(void *p);
   static void deleteArray_flashanacLcLFlash_t(void *p);
   static void destruct_flashanacLcLFlash_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::Flash_t*)
   {
      ::flashana::Flash_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::Flash_t));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::Flash_t", "OpT0FinderTypes.h", 27,
                  typeid(::flashana::Flash_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLFlash_t_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::Flash_t) );
      instance.SetNew(&new_flashanacLcLFlash_t);
      instance.SetNewArray(&newArray_flashanacLcLFlash_t);
      instance.SetDelete(&delete_flashanacLcLFlash_t);
      instance.SetDeleteArray(&deleteArray_flashanacLcLFlash_t);
      instance.SetDestructor(&destruct_flashanacLcLFlash_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::Flash_t*)
   {
      return GenerateInitInstanceLocal((::flashana::Flash_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::Flash_t*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLFlash_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::Flash_t*)0x0)->GetClass();
      flashanacLcLFlash_t_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLFlash_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLFlashMatch_t_Dictionary();
   static void flashanacLcLFlashMatch_t_TClassManip(TClass*);
   static void *new_flashanacLcLFlashMatch_t(void *p = 0);
   static void *newArray_flashanacLcLFlashMatch_t(Long_t size, void *p);
   static void delete_flashanacLcLFlashMatch_t(void *p);
   static void deleteArray_flashanacLcLFlashMatch_t(void *p);
   static void destruct_flashanacLcLFlashMatch_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::FlashMatch_t*)
   {
      ::flashana::FlashMatch_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::FlashMatch_t));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::FlashMatch_t", "OpT0FinderTypes.h", 101,
                  typeid(::flashana::FlashMatch_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLFlashMatch_t_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::FlashMatch_t) );
      instance.SetNew(&new_flashanacLcLFlashMatch_t);
      instance.SetNewArray(&newArray_flashanacLcLFlashMatch_t);
      instance.SetDelete(&delete_flashanacLcLFlashMatch_t);
      instance.SetDeleteArray(&deleteArray_flashanacLcLFlashMatch_t);
      instance.SetDestructor(&destruct_flashanacLcLFlashMatch_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::FlashMatch_t*)
   {
      return GenerateInitInstanceLocal((::flashana::FlashMatch_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::FlashMatch_t*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLFlashMatch_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::FlashMatch_t*)0x0)->GetClass();
      flashanacLcLFlashMatch_t_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLFlashMatch_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLFlashMatchManager_Dictionary();
   static void flashanacLcLFlashMatchManager_TClassManip(TClass*);
   static void *new_flashanacLcLFlashMatchManager(void *p = 0);
   static void *newArray_flashanacLcLFlashMatchManager(Long_t size, void *p);
   static void delete_flashanacLcLFlashMatchManager(void *p);
   static void deleteArray_flashanacLcLFlashMatchManager(void *p);
   static void destruct_flashanacLcLFlashMatchManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::FlashMatchManager*)
   {
      ::flashana::FlashMatchManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::FlashMatchManager));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::FlashMatchManager", "FlashMatchManager.h", 28,
                  typeid(::flashana::FlashMatchManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLFlashMatchManager_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::FlashMatchManager) );
      instance.SetNew(&new_flashanacLcLFlashMatchManager);
      instance.SetNewArray(&newArray_flashanacLcLFlashMatchManager);
      instance.SetDelete(&delete_flashanacLcLFlashMatchManager);
      instance.SetDeleteArray(&deleteArray_flashanacLcLFlashMatchManager);
      instance.SetDestructor(&destruct_flashanacLcLFlashMatchManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::FlashMatchManager*)
   {
      return GenerateInitInstanceLocal((::flashana::FlashMatchManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::FlashMatchManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLFlashMatchManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::FlashMatchManager*)0x0)->GetClass();
      flashanacLcLFlashMatchManager_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLFlashMatchManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLBaseAlgorithm_Dictionary();
   static void flashanacLcLBaseAlgorithm_TClassManip(TClass*);
   static void delete_flashanacLcLBaseAlgorithm(void *p);
   static void deleteArray_flashanacLcLBaseAlgorithm(void *p);
   static void destruct_flashanacLcLBaseAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::BaseAlgorithm*)
   {
      ::flashana::BaseAlgorithm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::BaseAlgorithm));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::BaseAlgorithm", "BaseAlgorithm.h", 30,
                  typeid(::flashana::BaseAlgorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLBaseAlgorithm_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::BaseAlgorithm) );
      instance.SetDelete(&delete_flashanacLcLBaseAlgorithm);
      instance.SetDeleteArray(&deleteArray_flashanacLcLBaseAlgorithm);
      instance.SetDestructor(&destruct_flashanacLcLBaseAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::BaseAlgorithm*)
   {
      return GenerateInitInstanceLocal((::flashana::BaseAlgorithm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::BaseAlgorithm*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLBaseAlgorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::BaseAlgorithm*)0x0)->GetClass();
      flashanacLcLBaseAlgorithm_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLBaseAlgorithm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLBaseProhibitAlgo_Dictionary();
   static void flashanacLcLBaseProhibitAlgo_TClassManip(TClass*);
   static void delete_flashanacLcLBaseProhibitAlgo(void *p);
   static void deleteArray_flashanacLcLBaseProhibitAlgo(void *p);
   static void destruct_flashanacLcLBaseProhibitAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::BaseProhibitAlgo*)
   {
      ::flashana::BaseProhibitAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::BaseProhibitAlgo));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::BaseProhibitAlgo", "BaseProhibitAlgo.h", 25,
                  typeid(::flashana::BaseProhibitAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLBaseProhibitAlgo_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::BaseProhibitAlgo) );
      instance.SetDelete(&delete_flashanacLcLBaseProhibitAlgo);
      instance.SetDeleteArray(&deleteArray_flashanacLcLBaseProhibitAlgo);
      instance.SetDestructor(&destruct_flashanacLcLBaseProhibitAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::BaseProhibitAlgo*)
   {
      return GenerateInitInstanceLocal((::flashana::BaseProhibitAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::BaseProhibitAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLBaseProhibitAlgo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::BaseProhibitAlgo*)0x0)->GetClass();
      flashanacLcLBaseProhibitAlgo_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLBaseProhibitAlgo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLBaseTPCFilter_Dictionary();
   static void flashanacLcLBaseTPCFilter_TClassManip(TClass*);
   static void delete_flashanacLcLBaseTPCFilter(void *p);
   static void deleteArray_flashanacLcLBaseTPCFilter(void *p);
   static void destruct_flashanacLcLBaseTPCFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::BaseTPCFilter*)
   {
      ::flashana::BaseTPCFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::BaseTPCFilter));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::BaseTPCFilter", "BaseTPCFilter.h", 25,
                  typeid(::flashana::BaseTPCFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLBaseTPCFilter_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::BaseTPCFilter) );
      instance.SetDelete(&delete_flashanacLcLBaseTPCFilter);
      instance.SetDeleteArray(&deleteArray_flashanacLcLBaseTPCFilter);
      instance.SetDestructor(&destruct_flashanacLcLBaseTPCFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::BaseTPCFilter*)
   {
      return GenerateInitInstanceLocal((::flashana::BaseTPCFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::BaseTPCFilter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLBaseTPCFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::BaseTPCFilter*)0x0)->GetClass();
      flashanacLcLBaseTPCFilter_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLBaseTPCFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLBaseFlashFilter_Dictionary();
   static void flashanacLcLBaseFlashFilter_TClassManip(TClass*);
   static void delete_flashanacLcLBaseFlashFilter(void *p);
   static void deleteArray_flashanacLcLBaseFlashFilter(void *p);
   static void destruct_flashanacLcLBaseFlashFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::BaseFlashFilter*)
   {
      ::flashana::BaseFlashFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::BaseFlashFilter));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::BaseFlashFilter", "BaseFlashFilter.h", 25,
                  typeid(::flashana::BaseFlashFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLBaseFlashFilter_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::BaseFlashFilter) );
      instance.SetDelete(&delete_flashanacLcLBaseFlashFilter);
      instance.SetDeleteArray(&deleteArray_flashanacLcLBaseFlashFilter);
      instance.SetDestructor(&destruct_flashanacLcLBaseFlashFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::BaseFlashFilter*)
   {
      return GenerateInitInstanceLocal((::flashana::BaseFlashFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::BaseFlashFilter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLBaseFlashFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::BaseFlashFilter*)0x0)->GetClass();
      flashanacLcLBaseFlashFilter_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLBaseFlashFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLBaseFlashMatch_Dictionary();
   static void flashanacLcLBaseFlashMatch_TClassManip(TClass*);
   static void delete_flashanacLcLBaseFlashMatch(void *p);
   static void deleteArray_flashanacLcLBaseFlashMatch(void *p);
   static void destruct_flashanacLcLBaseFlashMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::BaseFlashMatch*)
   {
      ::flashana::BaseFlashMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::BaseFlashMatch));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::BaseFlashMatch", "BaseFlashMatch.h", 29,
                  typeid(::flashana::BaseFlashMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLBaseFlashMatch_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::BaseFlashMatch) );
      instance.SetDelete(&delete_flashanacLcLBaseFlashMatch);
      instance.SetDeleteArray(&deleteArray_flashanacLcLBaseFlashMatch);
      instance.SetDestructor(&destruct_flashanacLcLBaseFlashMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::BaseFlashMatch*)
   {
      return GenerateInitInstanceLocal((::flashana::BaseFlashMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::BaseFlashMatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLBaseFlashMatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::BaseFlashMatch*)0x0)->GetClass();
      flashanacLcLBaseFlashMatch_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLBaseFlashMatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *flashanacLcLBaseFlashHypothesis_Dictionary();
   static void flashanacLcLBaseFlashHypothesis_TClassManip(TClass*);
   static void delete_flashanacLcLBaseFlashHypothesis(void *p);
   static void deleteArray_flashanacLcLBaseFlashHypothesis(void *p);
   static void destruct_flashanacLcLBaseFlashHypothesis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::flashana::BaseFlashHypothesis*)
   {
      ::flashana::BaseFlashHypothesis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::flashana::BaseFlashHypothesis));
      static ::ROOT::TGenericClassInfo 
         instance("flashana::BaseFlashHypothesis", "BaseFlashHypothesis.h", 26,
                  typeid(::flashana::BaseFlashHypothesis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &flashanacLcLBaseFlashHypothesis_Dictionary, isa_proxy, 4,
                  sizeof(::flashana::BaseFlashHypothesis) );
      instance.SetDelete(&delete_flashanacLcLBaseFlashHypothesis);
      instance.SetDeleteArray(&deleteArray_flashanacLcLBaseFlashHypothesis);
      instance.SetDestructor(&destruct_flashanacLcLBaseFlashHypothesis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::flashana::BaseFlashHypothesis*)
   {
      return GenerateInitInstanceLocal((::flashana::BaseFlashHypothesis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::flashana::BaseFlashHypothesis*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *flashanacLcLBaseFlashHypothesis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::flashana::BaseFlashHypothesis*)0x0)->GetClass();
      flashanacLcLBaseFlashHypothesis_TClassManip(theClass);
   return theClass;
   }

   static void flashanacLcLBaseFlashHypothesis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLQPoint_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::QPoint_t : new ::flashana::QPoint_t;
   }
   static void *newArray_flashanacLcLQPoint_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::QPoint_t[nElements] : new ::flashana::QPoint_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLQPoint_t(void *p) {
      delete ((::flashana::QPoint_t*)p);
   }
   static void deleteArray_flashanacLcLQPoint_t(void *p) {
      delete [] ((::flashana::QPoint_t*)p);
   }
   static void destruct_flashanacLcLQPoint_t(void *p) {
      typedef ::flashana::QPoint_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::QPoint_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLQCluster_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::QCluster_t : new ::flashana::QCluster_t;
   }
   static void *newArray_flashanacLcLQCluster_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::QCluster_t[nElements] : new ::flashana::QCluster_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLQCluster_t(void *p) {
      delete ((::flashana::QCluster_t*)p);
   }
   static void deleteArray_flashanacLcLQCluster_t(void *p) {
      delete [] ((::flashana::QCluster_t*)p);
   }
   static void destruct_flashanacLcLQCluster_t(void *p) {
      typedef ::flashana::QCluster_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::QCluster_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLColorPrint(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::ColorPrint : new ::flashana::ColorPrint;
   }
   static void *newArray_flashanacLcLColorPrint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::ColorPrint[nElements] : new ::flashana::ColorPrint[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLColorPrint(void *p) {
      delete ((::flashana::ColorPrint*)p);
   }
   static void deleteArray_flashanacLcLColorPrint(void *p) {
      delete [] ((::flashana::ColorPrint*)p);
   }
   static void destruct_flashanacLcLColorPrint(void *p) {
      typedef ::flashana::ColorPrint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::ColorPrint

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLFlash_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::Flash_t : new ::flashana::Flash_t;
   }
   static void *newArray_flashanacLcLFlash_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::Flash_t[nElements] : new ::flashana::Flash_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLFlash_t(void *p) {
      delete ((::flashana::Flash_t*)p);
   }
   static void deleteArray_flashanacLcLFlash_t(void *p) {
      delete [] ((::flashana::Flash_t*)p);
   }
   static void destruct_flashanacLcLFlash_t(void *p) {
      typedef ::flashana::Flash_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::Flash_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLFlashMatch_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::FlashMatch_t : new ::flashana::FlashMatch_t;
   }
   static void *newArray_flashanacLcLFlashMatch_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::FlashMatch_t[nElements] : new ::flashana::FlashMatch_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLFlashMatch_t(void *p) {
      delete ((::flashana::FlashMatch_t*)p);
   }
   static void deleteArray_flashanacLcLFlashMatch_t(void *p) {
      delete [] ((::flashana::FlashMatch_t*)p);
   }
   static void destruct_flashanacLcLFlashMatch_t(void *p) {
      typedef ::flashana::FlashMatch_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::FlashMatch_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_flashanacLcLFlashMatchManager(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::FlashMatchManager : new ::flashana::FlashMatchManager;
   }
   static void *newArray_flashanacLcLFlashMatchManager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::flashana::FlashMatchManager[nElements] : new ::flashana::FlashMatchManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_flashanacLcLFlashMatchManager(void *p) {
      delete ((::flashana::FlashMatchManager*)p);
   }
   static void deleteArray_flashanacLcLFlashMatchManager(void *p) {
      delete [] ((::flashana::FlashMatchManager*)p);
   }
   static void destruct_flashanacLcLFlashMatchManager(void *p) {
      typedef ::flashana::FlashMatchManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::FlashMatchManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_flashanacLcLBaseAlgorithm(void *p) {
      delete ((::flashana::BaseAlgorithm*)p);
   }
   static void deleteArray_flashanacLcLBaseAlgorithm(void *p) {
      delete [] ((::flashana::BaseAlgorithm*)p);
   }
   static void destruct_flashanacLcLBaseAlgorithm(void *p) {
      typedef ::flashana::BaseAlgorithm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::BaseAlgorithm

namespace ROOT {
   // Wrapper around operator delete
   static void delete_flashanacLcLBaseProhibitAlgo(void *p) {
      delete ((::flashana::BaseProhibitAlgo*)p);
   }
   static void deleteArray_flashanacLcLBaseProhibitAlgo(void *p) {
      delete [] ((::flashana::BaseProhibitAlgo*)p);
   }
   static void destruct_flashanacLcLBaseProhibitAlgo(void *p) {
      typedef ::flashana::BaseProhibitAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::BaseProhibitAlgo

namespace ROOT {
   // Wrapper around operator delete
   static void delete_flashanacLcLBaseTPCFilter(void *p) {
      delete ((::flashana::BaseTPCFilter*)p);
   }
   static void deleteArray_flashanacLcLBaseTPCFilter(void *p) {
      delete [] ((::flashana::BaseTPCFilter*)p);
   }
   static void destruct_flashanacLcLBaseTPCFilter(void *p) {
      typedef ::flashana::BaseTPCFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::BaseTPCFilter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_flashanacLcLBaseFlashFilter(void *p) {
      delete ((::flashana::BaseFlashFilter*)p);
   }
   static void deleteArray_flashanacLcLBaseFlashFilter(void *p) {
      delete [] ((::flashana::BaseFlashFilter*)p);
   }
   static void destruct_flashanacLcLBaseFlashFilter(void *p) {
      typedef ::flashana::BaseFlashFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::BaseFlashFilter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_flashanacLcLBaseFlashMatch(void *p) {
      delete ((::flashana::BaseFlashMatch*)p);
   }
   static void deleteArray_flashanacLcLBaseFlashMatch(void *p) {
      delete [] ((::flashana::BaseFlashMatch*)p);
   }
   static void destruct_flashanacLcLBaseFlashMatch(void *p) {
      typedef ::flashana::BaseFlashMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::BaseFlashMatch

namespace ROOT {
   // Wrapper around operator delete
   static void delete_flashanacLcLBaseFlashHypothesis(void *p) {
      delete ((::flashana::BaseFlashHypothesis*)p);
   }
   static void deleteArray_flashanacLcLBaseFlashHypothesis(void *p) {
      delete [] ((::flashana::BaseFlashHypothesis*)p);
   }
   static void destruct_flashanacLcLBaseFlashHypothesis(void *p) {
      typedef ::flashana::BaseFlashHypothesis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::flashana::BaseFlashHypothesis

namespace ROOT {
   static TClass *vectorlEflashanacLcLQPoint_tgR_Dictionary();
   static void vectorlEflashanacLcLQPoint_tgR_TClassManip(TClass*);
   static void *new_vectorlEflashanacLcLQPoint_tgR(void *p = 0);
   static void *newArray_vectorlEflashanacLcLQPoint_tgR(Long_t size, void *p);
   static void delete_vectorlEflashanacLcLQPoint_tgR(void *p);
   static void deleteArray_vectorlEflashanacLcLQPoint_tgR(void *p);
   static void destruct_vectorlEflashanacLcLQPoint_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<flashana::QPoint_t>*)
   {
      vector<flashana::QPoint_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<flashana::QPoint_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<flashana::QPoint_t>", -2, "vector", 214,
                  typeid(vector<flashana::QPoint_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEflashanacLcLQPoint_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<flashana::QPoint_t>) );
      instance.SetNew(&new_vectorlEflashanacLcLQPoint_tgR);
      instance.SetNewArray(&newArray_vectorlEflashanacLcLQPoint_tgR);
      instance.SetDelete(&delete_vectorlEflashanacLcLQPoint_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEflashanacLcLQPoint_tgR);
      instance.SetDestructor(&destruct_vectorlEflashanacLcLQPoint_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<flashana::QPoint_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<flashana::QPoint_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEflashanacLcLQPoint_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<flashana::QPoint_t>*)0x0)->GetClass();
      vectorlEflashanacLcLQPoint_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEflashanacLcLQPoint_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEflashanacLcLQPoint_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::QPoint_t> : new vector<flashana::QPoint_t>;
   }
   static void *newArray_vectorlEflashanacLcLQPoint_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::QPoint_t>[nElements] : new vector<flashana::QPoint_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEflashanacLcLQPoint_tgR(void *p) {
      delete ((vector<flashana::QPoint_t>*)p);
   }
   static void deleteArray_vectorlEflashanacLcLQPoint_tgR(void *p) {
      delete [] ((vector<flashana::QPoint_t>*)p);
   }
   static void destruct_vectorlEflashanacLcLQPoint_tgR(void *p) {
      typedef vector<flashana::QPoint_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<flashana::QPoint_t>

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
                  &vectorlEflashanacLcLQCluster_tgR_Dictionary, isa_proxy, 4,
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
   static TClass *vectorlEflashanacLcLFlash_tgR_Dictionary();
   static void vectorlEflashanacLcLFlash_tgR_TClassManip(TClass*);
   static void *new_vectorlEflashanacLcLFlash_tgR(void *p = 0);
   static void *newArray_vectorlEflashanacLcLFlash_tgR(Long_t size, void *p);
   static void delete_vectorlEflashanacLcLFlash_tgR(void *p);
   static void deleteArray_vectorlEflashanacLcLFlash_tgR(void *p);
   static void destruct_vectorlEflashanacLcLFlash_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<flashana::Flash_t>*)
   {
      vector<flashana::Flash_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<flashana::Flash_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<flashana::Flash_t>", -2, "vector", 214,
                  typeid(vector<flashana::Flash_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEflashanacLcLFlash_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<flashana::Flash_t>) );
      instance.SetNew(&new_vectorlEflashanacLcLFlash_tgR);
      instance.SetNewArray(&newArray_vectorlEflashanacLcLFlash_tgR);
      instance.SetDelete(&delete_vectorlEflashanacLcLFlash_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEflashanacLcLFlash_tgR);
      instance.SetDestructor(&destruct_vectorlEflashanacLcLFlash_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<flashana::Flash_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<flashana::Flash_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEflashanacLcLFlash_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<flashana::Flash_t>*)0x0)->GetClass();
      vectorlEflashanacLcLFlash_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEflashanacLcLFlash_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEflashanacLcLFlash_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::Flash_t> : new vector<flashana::Flash_t>;
   }
   static void *newArray_vectorlEflashanacLcLFlash_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::Flash_t>[nElements] : new vector<flashana::Flash_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEflashanacLcLFlash_tgR(void *p) {
      delete ((vector<flashana::Flash_t>*)p);
   }
   static void deleteArray_vectorlEflashanacLcLFlash_tgR(void *p) {
      delete [] ((vector<flashana::Flash_t>*)p);
   }
   static void destruct_vectorlEflashanacLcLFlash_tgR(void *p) {
      typedef vector<flashana::Flash_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<flashana::Flash_t>

namespace ROOT {
   static TClass *vectorlEflashanacLcLFlashMatch_tgR_Dictionary();
   static void vectorlEflashanacLcLFlashMatch_tgR_TClassManip(TClass*);
   static void *new_vectorlEflashanacLcLFlashMatch_tgR(void *p = 0);
   static void *newArray_vectorlEflashanacLcLFlashMatch_tgR(Long_t size, void *p);
   static void delete_vectorlEflashanacLcLFlashMatch_tgR(void *p);
   static void deleteArray_vectorlEflashanacLcLFlashMatch_tgR(void *p);
   static void destruct_vectorlEflashanacLcLFlashMatch_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<flashana::FlashMatch_t>*)
   {
      vector<flashana::FlashMatch_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<flashana::FlashMatch_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<flashana::FlashMatch_t>", -2, "vector", 214,
                  typeid(vector<flashana::FlashMatch_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEflashanacLcLFlashMatch_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<flashana::FlashMatch_t>) );
      instance.SetNew(&new_vectorlEflashanacLcLFlashMatch_tgR);
      instance.SetNewArray(&newArray_vectorlEflashanacLcLFlashMatch_tgR);
      instance.SetDelete(&delete_vectorlEflashanacLcLFlashMatch_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEflashanacLcLFlashMatch_tgR);
      instance.SetDestructor(&destruct_vectorlEflashanacLcLFlashMatch_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<flashana::FlashMatch_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<flashana::FlashMatch_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEflashanacLcLFlashMatch_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<flashana::FlashMatch_t>*)0x0)->GetClass();
      vectorlEflashanacLcLFlashMatch_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEflashanacLcLFlashMatch_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEflashanacLcLFlashMatch_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::FlashMatch_t> : new vector<flashana::FlashMatch_t>;
   }
   static void *newArray_vectorlEflashanacLcLFlashMatch_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::FlashMatch_t>[nElements] : new vector<flashana::FlashMatch_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEflashanacLcLFlashMatch_tgR(void *p) {
      delete ((vector<flashana::FlashMatch_t>*)p);
   }
   static void deleteArray_vectorlEflashanacLcLFlashMatch_tgR(void *p) {
      delete [] ((vector<flashana::FlashMatch_t>*)p);
   }
   static void destruct_vectorlEflashanacLcLFlashMatch_tgR(void *p) {
      typedef vector<flashana::FlashMatch_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<flashana::FlashMatch_t>

namespace ROOT {
   static TClass *vectorlEflashanacLcLBaseAlgorithmmUgR_Dictionary();
   static void vectorlEflashanacLcLBaseAlgorithmmUgR_TClassManip(TClass*);
   static void *new_vectorlEflashanacLcLBaseAlgorithmmUgR(void *p = 0);
   static void *newArray_vectorlEflashanacLcLBaseAlgorithmmUgR(Long_t size, void *p);
   static void delete_vectorlEflashanacLcLBaseAlgorithmmUgR(void *p);
   static void deleteArray_vectorlEflashanacLcLBaseAlgorithmmUgR(void *p);
   static void destruct_vectorlEflashanacLcLBaseAlgorithmmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<flashana::BaseAlgorithm*>*)
   {
      vector<flashana::BaseAlgorithm*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<flashana::BaseAlgorithm*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<flashana::BaseAlgorithm*>", -2, "vector", 214,
                  typeid(vector<flashana::BaseAlgorithm*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEflashanacLcLBaseAlgorithmmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<flashana::BaseAlgorithm*>) );
      instance.SetNew(&new_vectorlEflashanacLcLBaseAlgorithmmUgR);
      instance.SetNewArray(&newArray_vectorlEflashanacLcLBaseAlgorithmmUgR);
      instance.SetDelete(&delete_vectorlEflashanacLcLBaseAlgorithmmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEflashanacLcLBaseAlgorithmmUgR);
      instance.SetDestructor(&destruct_vectorlEflashanacLcLBaseAlgorithmmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<flashana::BaseAlgorithm*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<flashana::BaseAlgorithm*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEflashanacLcLBaseAlgorithmmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<flashana::BaseAlgorithm*>*)0x0)->GetClass();
      vectorlEflashanacLcLBaseAlgorithmmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEflashanacLcLBaseAlgorithmmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEflashanacLcLBaseAlgorithmmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::BaseAlgorithm*> : new vector<flashana::BaseAlgorithm*>;
   }
   static void *newArray_vectorlEflashanacLcLBaseAlgorithmmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<flashana::BaseAlgorithm*>[nElements] : new vector<flashana::BaseAlgorithm*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEflashanacLcLBaseAlgorithmmUgR(void *p) {
      delete ((vector<flashana::BaseAlgorithm*>*)p);
   }
   static void deleteArray_vectorlEflashanacLcLBaseAlgorithmmUgR(void *p) {
      delete [] ((vector<flashana::BaseAlgorithm*>*)p);
   }
   static void destruct_vectorlEflashanacLcLBaseAlgorithmmUgR(void *p) {
      typedef vector<flashana::BaseAlgorithm*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<flashana::BaseAlgorithm*>

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
  void TriggerDictionaryInitialization_libSelectionTool_OpT0FinderBase_Impl() {
    static const char* headers[] = {
"BaseAlgorithm.h",
"BaseFlashFilter.h",
"BaseFlashHypothesis.h",
"BaseFlashMatch.h",
"BaseProhibitAlgo.h",
"BaseTPCFilter.h",
"ColorPrint.h",
"FlashMatchManager.h",
"OpT0FinderConstants.h",
"OpT0FinderException.h",
"OpT0FinderTypes.h",
0
    };
    static const char* includePaths[] = {
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/BasicTool",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/larcoreobj",
"/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/scratch/lsimons/LArLite_LArSoft_Int/larlite/UserDev/larrecoobj/larrecoobj/OpT0Finder/Base/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libSelectionTool_OpT0FinderBase dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace flashana{struct __attribute__((annotate("$clingAutoload$BaseAlgorithm.h")))  QPoint_t;}
namespace flashana{class __attribute__((annotate("$clingAutoload$BaseAlgorithm.h")))  QCluster_t;}
namespace flashana{class __attribute__((annotate("$clingAutoload$BaseAlgorithm.h")))  ColorPrint;}
namespace flashana{struct __attribute__((annotate("$clingAutoload$BaseAlgorithm.h")))  Flash_t;}
namespace flashana{struct __attribute__((annotate("$clingAutoload$BaseAlgorithm.h")))  FlashMatch_t;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace flashana{class __attribute__((annotate("$clingAutoload$FlashMatchManager.h")))  FlashMatchManager;}
namespace flashana{class __attribute__((annotate("$clingAutoload$BaseAlgorithm.h")))  BaseAlgorithm;}
namespace flashana{class __attribute__((annotate("$clingAutoload$BaseProhibitAlgo.h")))  BaseProhibitAlgo;}
namespace flashana{class __attribute__((annotate("$clingAutoload$BaseTPCFilter.h")))  BaseTPCFilter;}
namespace flashana{class __attribute__((annotate("$clingAutoload$BaseFlashFilter.h")))  BaseFlashFilter;}
namespace flashana{class __attribute__((annotate("$clingAutoload$BaseFlashMatch.h")))  BaseFlashMatch;}
namespace flashana{class __attribute__((annotate("$clingAutoload$BaseFlashHypothesis.h")))  BaseFlashHypothesis;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libSelectionTool_OpT0FinderBase dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "BaseAlgorithm.h"
#include "BaseFlashFilter.h"
#include "BaseFlashHypothesis.h"
#include "BaseFlashMatch.h"
#include "BaseProhibitAlgo.h"
#include "BaseTPCFilter.h"
#include "ColorPrint.h"
#include "FlashMatchManager.h"
#include "OpT0FinderConstants.h"
#include "OpT0FinderException.h"
#include "OpT0FinderTypes.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"flashana::BaseAlgorithm", payloadCode, "@",
"flashana::BaseFlashFilter", payloadCode, "@",
"flashana::BaseFlashHypothesis", payloadCode, "@",
"flashana::BaseFlashMatch", payloadCode, "@",
"flashana::BaseProhibitAlgo", payloadCode, "@",
"flashana::BaseTPCFilter", payloadCode, "@",
"flashana::ColorPrint", payloadCode, "@",
"flashana::FlashMatchManager", payloadCode, "@",
"flashana::FlashMatch_t", payloadCode, "@",
"flashana::Flash_t", payloadCode, "@",
"flashana::QCluster_t", payloadCode, "@",
"flashana::QPoint_t", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libSelectionTool_OpT0FinderBase",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSelectionTool_OpT0FinderBase_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSelectionTool_OpT0FinderBase_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSelectionTool_OpT0FinderBase() {
  TriggerDictionaryInitialization_libSelectionTool_OpT0FinderBase_Impl();
}
