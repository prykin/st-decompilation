#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SetActivityToObjs */

void __thiscall
STAllPlayersC::SetActivityToObjs
          (STAllPlayersC *this,uint param_1,int param_2,DArrayTy *param_3,uint param_4)

{
  STGameObjC *pSVar2;
  int iVar3;
  uint index;
  char objPtr;
  STAllPlayersC_GetObjPtr_param_3Enum SVar4;

  objPtr = (char)param_1;
  if (0x19a < param_2) {
    if (param_2 == 0x1a4) {
      /* ST_CALLSITE[0042D47D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar2 = GetObjPtr(this,objPtr,(ushort)param_4,CASE_5);
      if (pSVar2 == nullptr) {
        return;
      }
      /* ST_CALLSITE[0042D48C]: CALL dword ptr [EDX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
      (*pSVar2->vtable[1].vfunc_14)(pSVar2,1);
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
      if (((ushort)param_1 != 0xffff) &&
         /* ST_CALLSITE[0042D3E6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
         (pSVar2 = GetObjPtr(this,objPtr,(ushort)param_1,CASE_1), pSVar2 != nullptr)) {
        /* ST_CALLSITE[0042D3F5]: CALL dword ptr [EDX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
        (*pSVar2->vtable[1].vfunc_14)(pSVar2,1);
      }
      index = index + 1;
    } while ((int)index < (int)param_4);
    return;
  }
  if (param_2 < 0x5b) {
    if (param_2 == 0x5a) {
      SVar4 = CASE_4;
cf_common_exit_0042D44C:
      /* ST_CALLSITE[0042D456]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar2 = GetObjPtr(this,objPtr,(ushort)param_4,SVar4);
      if (pSVar2 == nullptr) {
        return;
      }
      /* ST_CALLSITE[0042D465]: CALL dword ptr [EDX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
      (*pSVar2->vtable[1].vfunc_14)(pSVar2,1);
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

