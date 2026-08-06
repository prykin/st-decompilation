#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall
MTaskTy::PaintBut(MTaskTy *this,int *param_1,UINT param_2,int param_3,int param_4,short param_5)

{
  int *piVar1;
  MTaskTy *pMVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *resourceString;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  InternalExceptionFrame local_5c;
  MTaskTy *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;

  if (param_1 != nullptr) {
    local_c = *(undefined4 **)(*param_1 + 4);
    local_14 = *(undefined4 **)(*param_1 + 8);
    puVar4 = local_14;
    if ((int)local_c < (int)local_14) {
      puVar4 = local_c;
    }
    local_10 = (int)puVar4 / 2;
    if (param_3 <= local_10) {
      local_10 = param_3;
    }
    if (STField<char>(param_1,10) == '\x01') {
      cVar7 = ((param_5 != 3) - 1U & 0xfe) + 0x2c;
    }
    else {
      cVar7 = ((param_5 != 3) - 1U & 0xfe) + 0x18;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_8 = CONCAT31(uStack_7,cVar7);
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_18 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    if (iVar5 == 0) {
      piVar1 = (int *)*param_1;
      uVar9 = piVar1[5];
      if (uVar9 == 0) {
        uVar9 = ((uint)STField<ushort>(piVar1,0xe) * piVar1[1] + 0x1f >> 3 & 0x1ffffffc) *
                piVar1[2];
      }
      puVar6 = (undefined4 *)FUN_006b4fa0(piVar1);
      iVar5 = local_10;
      puVar4 = local_14;
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_006c7610((RecoveredSourceFamily_dibcopy *)*param_1,0,0,0,(uint)local_c,(uint)local_14,
                   local_10,0);
      if (param_4 != 0) {
        FUN_006c7570((RecoveredSourceFamily_dibcopy *)*param_1,0,2,2,local_c + -1,(int)(puVar4 + -1)
                     ,iVar5,(byte)_local_8);
      }
      FUN_006c7570((RecoveredSourceFamily_dibcopy *)*param_1,0,0,0,local_c,(int)puVar4,iVar5,
                   (byte)_local_8);
      pMVar3 = local_18;
      if (param_2 != 0) {
        ccFntTy::SetSurf(local_18->field_0089,*param_1,0,0,0,0,0);
        if (param_5 == 3) {
          uVar9 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 3;
        }
        else {
          uVar9 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 2;
        }
        iVar10 = -1;
        iVar5 = -1;
        resourceString = (uint *)LoadResourceString(param_2,g_hINSTANCE_00807618);
        ccFntTy::WrStr(pMVar3->field_0089,resourceString,iVar5,iVar10,uVar9);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x4b9,0,iVar5,
                                "%s","MTaskTy::PaintBut");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\task_obj.cpp",0x4b9);
  }
  return;
}

