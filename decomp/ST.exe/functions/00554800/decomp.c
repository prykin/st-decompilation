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
  cLoadingTy *pcVar5;
  int iVar6;
  byte *puVar7;
  char *resourceString;
  int iVar8;
  uint uVar10;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pcVar5 = local_8;
  if (iVar6 == 0) {
    local_8->field_0014 = param_1;
    local_8->field_0018 = param_2;
    if (param_3 < 1) {
      param_3 = (local_8->field_0000->bmiHeader).biWidth;
    }
    local_8->field_001C = param_3;
    if (param_4 < 1) {
      param_4 = (local_8->field_0000->bmiHeader).biHeight;
    }
    local_8->field_0020 = param_4;
    puVar1 = local_8->field_0004;
    local_8->field_000C = 0;
    local_8->field_0010 = 0;
    local_8->field_0038 = 0;
    uVar10 = *(uint *)(puVar1 + 10);
    if (uVar10 == 0) {
      uVar10 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar1 + 4);
    }
    puVar7 = (byte *)FUN_006b4fa0((int *)puVar1);
    memset(puVar7, 0, uVar10); /* compiler bulk-zero initialization */
    pcVar2 = pcVar5->field_0008;
    iVar6 = pcVar5->field_0020;
    uVar3 = pcVar5->field_001C;
    iVar8 = pcVar5->field_0014;
    pcVar2->field_0064 = pcVar5->field_0018;
    pcVar2->field_0060 = iVar8;
    pcVar2->field_0068 = uVar3;
    pcVar2->field_006C = iVar6;
    pcVar2->field_0050 = 0;
    pcVar2->field_0054 = 0;
    pcVar2 = pcVar5->field_0008;
    pcVar5->field_0028 = param_6;
    pcVar5->field_002C = param_7;
    pcVar2->field_0058 = param_6;
    pcVar2->field_005C = param_7;
    resourceString = LoadResourceString(0x267a,g_module_00807618);
    iVar6 = FUN_007111c0(pcVar5->field_0008,resourceString);
    iVar6 = pcVar5->field_002C + iVar6;
    iVar8 = pcVar5->field_0020 / iVar6;
    pcVar5->field_0034 = iVar6;
    pcVar5->field_0030 = iVar8;
    if (iVar8 < 1) {
      RaiseInternalException
                (-6,g_overwriteContext_007ED77C,"E:\\__titans\\grig\\loading.cpp",0xa3);
    }
    pcVar5->field_0058 = param_8;
    pcVar5->field_0054 = param_9;
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    FUN_006b4640(g_dDXContext_0080759C,0,0,pcVar5->field_0000,nullptr);
    Library::DKW::DDX::FUN_006bb370(g_dDXContext_0080759C,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0xac,0,iVar6,"%s",
                             "cLoadingTy::InitParam");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\grig\\loading.cpp",0xad);
  return;
}

