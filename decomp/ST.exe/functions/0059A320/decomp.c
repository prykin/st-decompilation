#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::PaintLogPsw */

void __thiscall FSGSTy::PaintLogPsw(FSGSTy *this)

{
  AnonPointee_FSGSTy_1AC0 *pAVar1;
  code *pcVar2;
  FSGSTy *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pFVar3 = local_8;
  if (iVar4 == 0) {
    pAVar1 = local_8->field_1AC0;
    uVar8 = pAVar1->field_0014;
    if (uVar8 == 0) {
      uVar8 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar1->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x2a,0x186,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x254f,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0x3d,0x188,0x1b,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x61,0xb4,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x2556,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0x74,0xb6,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0x89,0xb4,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x2555,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0x9c,0xb6,0x16,0xf,0xd);
    ccFntTy::SetSurf(pFVar3->field_1A73,(int)pFVar3->field_1AC0,0,0x19,0xb1,0xb4,0x14);
    uVar10 = 2;
    iVar9 = -1;
    iVar4 = 0;
    puVar6 = (uint *)LoadResourceString(0x2554,HINSTANCE_00807618);
    ccFntTy::WrStr(pFVar3->field_1A73,puVar6,iVar4,iVar9,uVar10);
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)pFVar3->field_1AC0,0,0x18,0xc4,0xb6,0x16,0xf,0xd);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pFVar3->field_1ABC);
    FUN_006b35d0(DAT_008075a8,pFVar3->field_1ABC);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x401,0,iVar4,&DAT_007a4ccc,
                             s_FSGSTy__PaintLogPsw_007cc218);
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x401);
  return;
}

