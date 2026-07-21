#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Finished */

void __thiscall FSGSTy::Finished(FSGSTy *this,int param_1)

{
  AnonPointee_FSGSTy_1AC0 *pAVar1;
  StartSystemTy *pSVar2;
  MMsgTy *this_00;
  code *pcVar3;
  CursorClassTy *this_01;
  FSGSTy *pFVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [8];
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != (AnonPointee_FSGSTy_1AC0 *)0x0)) &&
     (-1 < this->field_1ABC)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_8 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    this_01 = PTR_00802a30;
    if (iVar5 == 0) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        iVar5 = PTR_00802a30->field_00C9;
        iVar10 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        this_01->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_01,CASE_0,iVar10,iVar5);
        CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
        this_01->field_00D2 = 0;
        this_01->field_04DF = 0xffffffff;
      }
      pFVar4 = local_8;
      if (param_1 != 0) {
        DAT_0080fb76 = 1;
        local_8->field_004D = 0x7102;
        local_8->field_0049 = 1;
        FUN_006e6020(local_8,(undefined4 *)&local_8->field_0x3d);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      pAVar1 = local_8->field_1AC0;
      uVar9 = pAVar1->field_0014;
      if (uVar9 == 0) {
        uVar9 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                pAVar1->field_0008;
      }
      puVar6 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      ccFntTy::SetSurf(pFVar4->field_1A73,(int)pFVar4->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar12 = -1;
      iVar11 = -1;
      uVar9 = 2;
      iVar10 = -1;
      iVar5 = -2;
      puVar7 = (uint *)LoadResourceString(0x25b9,HINSTANCE_00807618);
      ccFntTy::WrTxt(pFVar4->field_1A73,puVar7,iVar5,iVar10,uVar9,iVar11,iVar12);
      FUN_006b35d0(DAT_008075a8,pFVar4->field_1ABC);
      pSVar2 = pFVar4->field_1A5B;
      puVar6 = local_28;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_28[2] = pFVar4->field_0008;
      local_28[3] = 2;
      local_28[4] = 0x6956;
      this_00 = pSVar2->field_02E6;
      if (this_00 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(this_00,0x25bc,'\0',local_28,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pFVar4->field_0000->field_0000)(local_28);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x95b,0,iVar5,
                                "%s","FSGSTy::Finished");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x95b);
  }
  return;
}

