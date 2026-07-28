#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintBut

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005C1A90 -> 005C0B00 @ 005C1F2B

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
MReportTy::PaintBut(MReportTy *this,STMessage *param_1,UINT param_2,int param_3,char param_4,
                   uint *param_5)

{
  word wVar1;
  code *pcVar2;
  STMessageArg SVar3;
  byte *pbVar4;
  AnonPointee_MReportTy_0077 *pAVar5;
  int errorCode;
  undefined4 *puVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  InternalExceptionFrame local_64;
  STMessageArg local_20;
  byte *local_1c;
  uint *local_18;
  AnonPointee_MReportTy_0077 *local_14;
  char local_10;
  undefined3 uStack_f;
  MReportTy *local_c;
  undefined4 *local_8;

  if ((param_1->arg0).words.low == 3) {
    cVar8 = (-(param_4 != '\0') & 0xedU) + 0x2a;
  }
  else {
    cVar8 = (-(param_4 != '\0') & 0xecU) + 0x2c;
  }
  local_20 = param_1->arg1;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT31(uStack_f,cVar8);
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
  errorCode = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  pAVar5 = local_14;
  if (errorCode == 0) {
    uVar10 = local_14->field_0014;
    if (uVar10 == 0) {
      uVar10 = ((uint)(ushort)local_14->field_000E * local_14->field_0004 + 0x1f >> 3 & 0x1ffffffc)
               * local_14->field_0008;
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int *)local_14);
    pbVar4 = local_1c;
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_006c7610((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,(uint)local_8,(uint)local_1c,param_3,
                 0x4c);
    FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,2,2,local_8 + -1,(int)(pbVar4 + -4),param_3
                 ,(byte)_local_10);
    FUN_006c7570((AnonShape_006B5B10_E0D06CF1 *)pAVar5,0,0,0,local_8,(int)pbVar4,param_3,
                 (byte)_local_10);
    if (((param_4 == '\0') && (param_2 != 0)) || ((param_4 != '\0' && (param_5 != (uint *)0x0)))) {
      if (param_4 == '\0') {
        param_5 = (uint *)LoadResourceString(param_2,g_module_00807618);
      }
      local_18 = param_5;
      ccFntTy::SetSurf(local_c->field_0083,(int)pAVar5,0,0,0,0,0);
      wVar1 = (param_1->arg0).words.low;
      if ((wVar1 == 1) || (wVar1 == 2)) {
        uVar10 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 2;
      }
      else if (wVar1 == 3) {
        uVar10 = (-(uint)(param_4 != '\0') & 0xfffffffe) + 3;
      }
      else {
        uVar10 = 4;
      }
      ccFntTy::WrStr(local_c->field_0083,local_18,-1,-1,uVar10);
    }
    SVar3 = local_20;
                    /* WARNING: Load size is inaccurate */
    FUN_006b5f80((int *)g_ddxContext_008075A8,*local_20.i32,*(int *)(local_20.u32 + 4),(int)local_8,
                 (int)pbVar4);
                    /* WARNING: Load size is inaccurate */
    PutDDXClip(*SVar3.i32,*(int *)(SVar3.u32 + 4),*SVar3.i32,*(int *)(SVar3.u32 + 4),(uint)local_8,
               pbVar4,'\x01',(BITMAPINFO *)local_c->field_005D);
                    /* WARNING: Load size is inaccurate */
    Library::DKW::DDX::FUN_006b48e0
              ((int)g_dDXContext_0080759C,*SVar3.i32,*(int *)(SVar3.u32 + 4),
               (AnonPointee_MReportTy_0073 *)pAVar5,0,0,0,(uint)local_8,(int)pbVar4,
               (int)&local_c->field_0xa3,0x4c,0x10000ff);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x2c1,0,errorCode,
                             "%s","MReportTy::PaintBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x2c1);
  return;
}

