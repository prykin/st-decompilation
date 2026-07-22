#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SetActivityToObjs */

void __thiscall
STAllPlayersC::SetActivityToObjs
          (STAllPlayersC *this,uint param_1,int param_2,DArrayTy *param_3,uint param_4)

{
  code *pcVar1;
  STGameObjC *pSVar2;
  int iVar3;
  uint index;
  char objPtr;
  STAllPlayersC_GetObjPtr_param_3Enum SVar4;

  objPtr = (char)param_1;
  if (0x19a < param_2) {
    if (param_2 == 0x1a4) {
      pSVar2 = GetObjPtr(this,objPtr,param_4,CASE_5);
      if (pSVar2 == (STGameObjC *)0x0) {
        return;
      }
      (*pSVar2->vtable[1].vfunc_14)(1);
      return;
    }
    if (param_2 == 0x1ae) {
      SVar4 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d41b;
      SVar4 = CASE_6;
    }
    goto cf_common_exit_0042D44C;
  }
  if (param_2 == 0x19a) {
LAB_0042d3b2:
    index = 0;
    param_4 = param_3->count;
    if ((int)param_4 < 1) {
      return;
    }
    do {
      DArrayGetElement(param_3,index,&param_1);
      if (((short)param_1 != -1) &&
         (pSVar2 = GetObjPtr(this,objPtr,param_1,CASE_1), pSVar2 != (STGameObjC *)0x0)) {
        (*pSVar2->vtable[1].vfunc_14)(1);
      }
      index = index + 1;
    } while ((int)index < (int)param_4);
    return;
  }
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      SVar4 = CASE_4;
cf_common_exit_0042D44C:
      pSVar2 = GetObjPtr(this,objPtr,param_4,SVar4);
      if (pSVar2 == (STGameObjC *)0x0) {
        return;
      }
      (*pSVar2->vtable[1].vfunc_14)(1);
      return;
    }
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 0x3c) goto LAB_0042d3b2;
  }
  else if (param_2 == 0x172) {
    SVar4 = CASE_2;
    goto cf_common_exit_0042D44C;
  }
LAB_0042d41b:
  iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x43d,0,0,"%s",
                             "STAllPlayersC::SetActivityToObjs invalid type");
  if (iVar3 == 0) {
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

