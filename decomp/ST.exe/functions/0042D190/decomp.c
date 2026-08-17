#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ResetActivityFromObjs

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall
STAllPlayersC::ResetActivityFromObjs
          (STAllPlayersC *this,uint param_1,int param_2,DArrayTy *param_3,uint param_4,int param_5)

{
  dword dVar1;
  STGameObjC *pSVar3;
  int iVar4;
  uint index;
  char objPtr;
  ushort uVar5;
  STAllPlayersC_GetObjPtr_param_3Enum SVar6;

  objPtr = (char)param_1;
  uVar5 = (ushort)param_4;
  if (param_2 < 0x19b) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x19a) {
LAB_0042d1f8:
      index = 0;
      dVar1 = param_3->count;
      if ((int)dVar1 < 1) {
        return;
      }
      do {
        DArrayGetElement(param_3,index,&param_4);
        if ((((ushort)param_4 != 0xffff) &&
            /* ST_CALLSITE[0042D22B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            (pSVar3 = GetObjPtr(this,objPtr,(ushort)param_4,CASE_1), pSVar3 != nullptr))
           /* ST_CALLSITE[0042D23C]: CALL dword ptr [EAX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
           && ((*pSVar3->vtable[1].vfunc_14)(pSVar3,0), param_5 != 0)) {
          /* ST_CALLSITE[0042D24B]: CALL 0x0040321f; direct=0040321F STGameObjC::ResetSelfCheckFlag */
          STGameObjC::ResetSelfCheckFlag(pSVar3);
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return;
    }
    if (param_2 < 0x5b) {
      if (param_2 == 0x5a) {
        SVar6 = CASE_4;
LAB_0042d1c3:
        /* ST_CALLSITE[0042D1CD]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar3 = GetObjPtr(this,objPtr,uVar5,SVar6);
        if (pSVar3 == nullptr) {
          return;
        }
        /* ST_CALLSITE[0042D1E2]: CALL dword ptr [EDX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
        (*pSVar3->vtable[1].vfunc_14)(pSVar3,0);
        goto LAB_0042d2c3;
      }
      if (param_2 == 0) {
        return;
      }
      if (param_2 == 0x3c) goto LAB_0042d1f8;
    }
    else if (param_2 == 0x172) {
      SVar6 = CASE_2;
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
      /* ST_CALLSITE[0042D2E4]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      pSVar3 = GetObjPtr(this,objPtr,uVar5,CASE_5);
      if (pSVar3 == nullptr) {
        return;
      }
      /* ST_CALLSITE[0042D2F5]: CALL dword ptr [EAX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
      (*pSVar3->vtable[1].vfunc_14)(pSVar3,0);
      if (param_5 == 0) {
        return;
      }
      /* ST_CALLSITE[0042D304]: CALL 0x0040321f; direct=0040321F STGameObjC::ResetSelfCheckFlag */
      STGameObjC::ResetSelfCheckFlag(pSVar3);
      return;
    }
    if (param_2 == 0x1ae) {
      SVar6 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d270;
      SVar6 = CASE_6;
    }
    /* ST_CALLSITE[0042D2AC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    pSVar3 = GetObjPtr(this,objPtr,uVar5,SVar6);
    if (pSVar3 == nullptr) {
      return;
    }
    /* ST_CALLSITE[0042D2BD]: CALL dword ptr [EAX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
    (*pSVar3->vtable[1].vfunc_14)(pSVar3,0);
LAB_0042d2c3:
    if (param_5 != 0) {
      /* ST_CALLSITE[0042D2CC]: CALL 0x0040321f; direct=0040321F STGameObjC::ResetSelfCheckFlag */
      STGameObjC::ResetSelfCheckFlag(pSVar3);
      return;
    }
  }
  return;
}

