#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ResetActivityFromObjs */

void __thiscall
STAllPlayersC::ResetActivityFromObjs
          (STAllPlayersC *this,uint param_1,int param_2,DArrayTy *param_3,uint param_4,int param_5)

{
  dword dVar1;
  code *pcVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  char objPtr;
  STAllPlayersC_GetObjPtr_param_3Enum SVar5;

  objPtr = (char)param_1;
  if (param_2 < 0x19b) {
    if (param_2 == 0x19a) {
LAB_0042d1f8:
      index = 0;
      dVar1 = param_3->count;
      if ((int)dVar1 < 1) {
        return;
      }
      do {
        DArrayGetElement(param_3,index,&param_4);
        if ((((short)param_4 != -1) &&
            (pSVar3 = GetObjPtr(this,objPtr,param_4,CASE_1), pSVar3 != (STGameObjC *)0x0)) &&
           ((*pSVar3->vtable[1].vfunc_14)(0), param_5 != 0)) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          STGameObjC::ResetSelfCheckFlag(pSVar3,unaff_EDI);
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return;
    }
    if (param_2 < 0x5b) {
      if (param_2 == 0x5a) {
        SVar5 = CASE_4;
LAB_0042d1c3:
        pSVar3 = GetObjPtr(this,objPtr,param_4,SVar5);
        if (pSVar3 == (STGameObjC *)0x0) {
          return;
        }
        iVar4 = 0;
        (*pSVar3->vtable[1].vfunc_14)();
        goto LAB_0042d2c3;
      }
      if (param_2 == 0) {
        return;
      }
      if (param_2 == 0x3c) goto LAB_0042d1f8;
    }
    else if (param_2 == 0x172) {
      SVar5 = CASE_2;
      goto LAB_0042d1c3;
    }
LAB_0042d270:
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x406,0,0,"%s",
                               "STAllPlayersC::ResetActivityFromObjs invalid type");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if (param_2 == 0x1a4) {
      pSVar3 = GetObjPtr(this,objPtr,param_4,CASE_5);
      if (pSVar3 == (STGameObjC *)0x0) {
        return;
      }
      iVar4 = 0;
      (*pSVar3->vtable[1].vfunc_14)();
      if (param_5 == 0) {
        return;
      }
      STGameObjC::ResetSelfCheckFlag(pSVar3,iVar4);
      return;
    }
    if (param_2 == 0x1ae) {
      SVar5 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d270;
      SVar5 = CASE_6;
    }
    pSVar3 = GetObjPtr(this,objPtr,param_4,SVar5);
    if (pSVar3 == (STGameObjC *)0x0) {
      return;
    }
    iVar4 = 0;
    (*pSVar3->vtable[1].vfunc_14)();
LAB_0042d2c3:
    if (param_5 != 0) {
      STGameObjC::ResetSelfCheckFlag(pSVar3,iVar4);
      return;
    }
  }
  return;
}

