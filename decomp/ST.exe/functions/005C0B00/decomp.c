#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintBut */

void __thiscall
MReportTy::PaintBut(MReportTy *this,AnonShape_005C0B00_CBE14AB4 *param_1,UINT param_2,int param_3,
                   char param_4,uint *param_5)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  byte *pbVar4;
  AnonPointee_MReportTy_0077 *pAVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  InternalExceptionFrame local_64;
  int *local_20;
  byte *local_1c;
  uint *local_18;
  AnonPointee_MReportTy_0077 *local_14;
  char local_10;
  undefined3 uStack_f;
  MReportTy *local_c;
  undefined4 *local_8;

  if (param_1->field_0014 == 3) {
    cVar9 = (-(param_4 != '\0') & 0xedU) + 0x2a;
  }
  else {
    cVar9 = (-(param_4 != '\0') & 0xecU) + 0x2c;
  }
  local_20 = param_1->field_0018;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT31(uStack_f,cVar9);
  if (param_4 == '\0') {
    local_14 = this->field_0077;
  }
  else {
    local_14 = (AnonPointee_MReportTy_0077 *)this->field_007B;
  }
  local_1c = (byte *)local_14->field_0008;
  local_8 = (undefined4 *)local_14->field_0004;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  pAVar5 = local_14;
  if (iVar6 == 0) {
    uVar11 = local_14->field_0014;
    if (uVar11 == 0) {
      uVar11 = ((uint)(ushort)local_14->field_000E * local_14->field_0004 + 0x1f >> 3 & 0x1ffffffc)
               * local_14->field_0008;
    }
    puVar7 = (undefined4 *)FUN_006b4fa0((int)local_14);
    pbVar4 = local_1c;
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,(uint)local_8,(uint)local_1c,param_3,
                 0x4c);
    FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,2,2,local_8 + -1,(int)(pbVar4 + -4),param_3
                 ,(byte)_local_10);
    FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,local_8,(int)pbVar4,param_3,
                 (byte)_local_10);
    if (((param_4 == '\0') && (param_2 != 0)) || ((param_4 != '\0' && (param_5 != (uint *)0x0)))) {
      if (param_4 == '\0') {
        param_5 = (uint *)LoadResourceString(param_2,HINSTANCE_00807618);
      }
      local_18 = param_5;
      ccFntTy::SetSurf(local_c->field_0083,(int)pAVar5,0,0,0,0,0);
      sVar1 = param_1->field_0014;
      if ((sVar1 == 1) || (sVar1 == 2)) {
        iVar6 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 2;
      }
      else if (sVar1 == 3) {
        iVar6 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 3;
      }
      else {
        iVar6 = 4;
      }
      ccFntTy::WrStr(local_c->field_0083,local_18,-1,-1,iVar6);
    }
    piVar3 = local_20;
    FUN_006b5f80(DAT_008075a8,*local_20,local_20[1],(int)local_8,(int)pbVar4);
    PutDDXClip(*piVar3,piVar3[1],*piVar3,piVar3[1],(uint)local_8,pbVar4,'\x01',
               (BITMAPINFO *)local_c->field_005D);
    Library::DKW::DDX::FUN_006b48e0
              (DAT_0080759c,*piVar3,piVar3[1],(int)pAVar5,0,0,0,(uint)local_8,(int)pbVar4,
               (int)&local_c->field_0xa3,0x4c,0x10000ff);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x2c1,0,iVar6,"%s",
                             "MReportTy::PaintBut");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x2c1);
  return;
}

