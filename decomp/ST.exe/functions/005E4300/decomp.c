#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintBut */

void __thiscall
MTaskTy::PaintBut(MTaskTy *this,int *param_1,UINT param_2,int param_3,int param_4,short param_5)

{
  code *pcVar1;
  MTaskTy *pMVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *resourceString;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  InternalExceptionFrame local_5c;
  MTaskTy *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;

  if (param_1 != (int *)0x0) {
    local_c = *(undefined4 **)(*param_1 + 4);
    local_14 = *(undefined4 **)(*param_1 + 8);
    puVar3 = local_14;
    if ((int)local_c < (int)local_14) {
      puVar3 = local_c;
    }
    local_10 = (int)puVar3 / 2;
    if (param_3 <= local_10) {
      local_10 = param_3;
    }
    if (*(char *)((int)param_1 + 10) == '\x01') {
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
    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    if (iVar4 == 0) {
      iVar4 = *param_1;
      uVar8 = *(uint *)(iVar4 + 0x14);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar4 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
      iVar4 = local_10;
      puVar3 = local_14;
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)*param_1,0,0,0,(uint)local_c,(uint)local_14,
                   local_10,0);
      if (param_4 != 0) {
        FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)*param_1,0,2,2,local_c + -1,(int)(puVar3 + -1),
                     iVar4,(byte)_local_8);
      }
      FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)*param_1,0,0,0,local_c,(int)puVar3,iVar4,
                   (byte)_local_8);
      pMVar2 = local_18;
      if (param_2 != 0) {
        ccFntTy::SetSurf(local_18->field_0089,*param_1,0,0,0,0,0);
        if (param_5 == 3) {
          iVar4 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 3;
        }
        else {
          iVar4 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 2;
        }
        iVar10 = -1;
        iVar9 = -1;
        resourceString = (uint *)LoadResourceString(param_2,g_module_00807618);
        ccFntTy::WrStr(pMVar2->field_0089,resourceString,iVar9,iVar10,iVar4);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x4b9,0,iVar4,"%s"
                               ,"MTaskTy::PaintBut");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\task_obj.cpp",0x4b9);
  }
  return;
}

