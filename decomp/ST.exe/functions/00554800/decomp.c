#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::InitParam */

void __thiscall
cLoadingTy::InitParam
          (cLoadingTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  ushort *puVar1;
  ccFntTy *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  cLoadingTy *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  char *resourceString;
  int iVar9;
  uint uVar10;
  uint uVar11;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pcVar6 = local_8;
  if (iVar7 == 0) {
    local_8->field_0014 = param_1;
    local_8->field_0018 = param_2;
    if (param_3 < 1) {
      param_3 = local_8->field_0000->field_0004;
    }
    local_8->field_001C = param_3;
    if (param_4 < 1) {
      param_4 = local_8->field_0000->field_0008;
    }
    local_8->field_0020 = param_4;
    puVar1 = local_8->field_0004;
    local_8->field_000C = 0;
    local_8->field_0010 = 0;
    local_8->field_0038 = 0;
    uVar11 = *(uint *)(puVar1 + 10);
    if (uVar11 == 0) {
      uVar11 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar1 + 4);
    }
    puVar8 = (undefined4 *)FUN_006b4fa0((int)puVar1);
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    pcVar2 = pcVar6->field_0008;
    iVar7 = pcVar6->field_0020;
    uVar3 = pcVar6->field_001C;
    uVar4 = pcVar6->field_0014;
    pcVar2->field_0064 = pcVar6->field_0018;
    pcVar2->field_0060 = uVar4;
    pcVar2->field_0068 = uVar3;
    pcVar2->field_006C = iVar7;
    pcVar2->field_0050 = 0;
    pcVar2->field_0054 = 0;
    pcVar2 = pcVar6->field_0008;
    pcVar6->field_0028 = param_6;
    pcVar6->field_002C = param_7;
    pcVar2->field_0058 = param_6;
    pcVar2->field_005C = param_7;
    resourceString = LoadResourceString(0x267a,HINSTANCE_00807618);
    iVar7 = FUN_007111c0(pcVar6->field_0008,resourceString);
    iVar7 = pcVar6->field_002C + iVar7;
    iVar9 = pcVar6->field_0020 / iVar7;
    pcVar6->field_0034 = iVar7;
    pcVar6->field_0030 = iVar9;
    if (iVar9 < 1) {
      RaiseInternalException
                (-6,g_overwriteContext_007ED77C,"E:\\__titans\\grig\\loading.cpp",0xa3);
    }
    pcVar6->field_0058 = param_8;
    pcVar6->field_0054 = param_9;
    FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    FUN_006b4640(DAT_0080759c,0,0,(BITMAPINFO *)pcVar6->field_0000,(uint *)0x0);
    Library::DKW::DDX::FUN_006bb370(DAT_0080759c,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0xac,0,iVar7,"%s",
                             "cLoadingTy::InitParam");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar7,0,"E:\\__titans\\grig\\loading.cpp",0xad);
  return;
}

