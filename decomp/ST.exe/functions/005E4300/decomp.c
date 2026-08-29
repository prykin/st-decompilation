#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall
MTaskTy::PaintBut(MTaskTy *this,RecoveredRecord_005E4300_441EBD84 *param_1,UINT param_2,int param_3,
                 int param_4,short param_5)

{
  AnonNested_RecoveredRecord_005E4300_441EBD84_0000_A1AC3E00 *pAVar1;
  MTaskTy *pMVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar5;
  char *resourceString;
  int iVar9;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_5c;
  MTaskTy *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;

  if (param_1 != nullptr) {
    local_c = (undefined4 *)param_1->field_0000->field_0004;
    local_14 = (undefined4 *)param_1->field_0000->field_0008;
    puVar4 = local_14;
    if ((int)local_c < (int)local_14) {
      puVar4 = local_c;
    }
    local_10 = (int)puVar4 / 2;
    if (param_3 <= local_10) {
      local_10 = param_3;
    }
    if (param_1->field_000A == '\x01') {
      cVar6 = ((param_5 != 3) - 1U & 0xfe) + 0x2c;
    }
    else {
      cVar6 = ((param_5 != 3) - 1U & 0xfe) + 0x18;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_8 = CONCAT31(uStack_7,cVar6);
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_18 = this;

    iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    if (iVar5 == 0) {
      pAVar1 = param_1->field_0000;
      uVar8 = *(uint *)(&pAVar1->field_0x10 + 4);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)&pAVar1->field_0xe * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc)
                * pAVar1->field_0008;
      }

      puVar5 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pAVar1));
      iVar10 = local_10;
      puVar4 = local_14;
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_006c7610((RecoveredSourceFamily_dibcopy *)param_1->field_0000,0,0,0,(uint)local_c,
                   (uint)local_14,local_10,0);
      if (param_4 != 0) {
        FUN_006c7570((RecoveredSourceFamily_dibcopy *)param_1->field_0000,0,2,2,local_c + -1,
                     (int)(puVar4 + -1),iVar10,(byte)_local_8);
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)param_1->field_0000,0,0,0,local_c,(int)puVar4,
                   iVar10,(byte)_local_8);
      pMVar3 = local_18;
      if (param_2 != 0) {

        ccFntTy::SetSurf(local_18->field_0089,(int)param_1->field_0000,0,0,0,0,0);
        if (param_5 == 3) {
          uVar8 = (-(uint)(param_1->field_0x8 != '\x01') & 0xfffffffe) + 3;
        }
        else {
          uVar8 = (-(uint)(param_1->field_0x8 != '\x01') & 0xfffffffe) + 2;
        }
        iVar11 = -1;
        iVar10 = -1;
        /* ST_CALLSITE[005E447A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        resourceString = LoadResourceString(param_2,g_hINSTANCE_00807618);

        ccFntTy::WrStr(pMVar3->field_0089,resourceString,iVar10,iVar11,uVar8);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x4b9,0,iVar5,"%s"
                               ,"MTaskTy::PaintBut");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\task_obj.cpp",0x4b9);
  }
  return;
}

