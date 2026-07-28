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
  code *pcVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint index;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
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
            (pSVar3 = GetObjPtr(this,objPtr,(ushort)param_4,CASE_1), pSVar3 != (STGameObjC *)0x0))
           && (pSVar3->vfunc_E8(0), param_5 != 0)) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          STGameObjC::ResetSelfCheckFlag(pSVar3,unaff_EDI);
        }
        index = index + 1;
      } while ((int)index < (int)dVar1);
      return;
    }
    if (param_2 < 0x5b) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0x5a) {
        SVar6 = CASE_4;
LAB_0042d1c3:
        pSVar3 = GetObjPtr(this,objPtr,uVar5,SVar6);
        if (pSVar3 == (STGameObjC *)0x0) {
          return;
        }
        pSVar3->vfunc_E8(0);
        goto LAB_0042d2c3;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0) {
        return;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_2 == 0x3c) goto LAB_0042d1f8;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x1a4) {
      pSVar3 = GetObjPtr(this,objPtr,uVar5,CASE_5);
      if (pSVar3 == (STGameObjC *)0x0) {
        return;
      }
      pSVar3->vfunc_E8(0);
      if (param_5 == 0) {
        return;
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      STGameObjC::ResetSelfCheckFlag(pSVar3,unaff_EDI);
      return;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0x1ae) {
      SVar6 = CASE_3;
    }
    else {
      if (param_2 != 0x1b8) goto LAB_0042d270;
      SVar6 = CASE_6;
    }
    pSVar3 = GetObjPtr(this,objPtr,uVar5,SVar6);
    if (pSVar3 == (STGameObjC *)0x0) {
      return;
    }
    pSVar3->vfunc_E8(0);
LAB_0042d2c3:
    if (param_5 != 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      STGameObjC::ResetSelfCheckFlag(pSVar3,unaff_EDI);
      return;
    }
  }
  return;
}

