#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Finished */

void __thiscall FSGSTy::Finished(FSGSTy *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  AnonPointee_FSGSTy_1AC0 *pAVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_00;
  code *pcVar5;
  CursorClassTy *this_01;
  FSGSTy *pFVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [8];
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != (AnonPointee_FSGSTy_1AC0 *)0x0)) &&
     (-1 < (int)this->field_1ABC)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_8 = this;
    iVar7 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    this_01 = PTR_00802a30;
    if (iVar7 == 0) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        uVar1 = PTR_00802a30->field_00C9;
        uVar2 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        this_01->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_01,CASE_0,uVar2,uVar1);
        CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
        this_01->field_0xd2 = 0;
        *(undefined4 *)&this_01->field_0x4df = 0xffffffff;
      }
      pFVar6 = local_8;
      if (param_1 != 0) {
        DAT_0080fb76 = 1;
        local_8->field_004D = 0x7102;
        local_8->field_0049 = 1;
        FUN_006e6020(local_8,(undefined4 *)&local_8->field_0x3d);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      pAVar3 = local_8->field_1AC0;
      uVar11 = pAVar3->field_0014;
      if (uVar11 == 0) {
        uVar11 = ((uint)(ushort)pAVar3->field_000E * pAVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                 pAVar3->field_0008;
      }
      puVar8 = (undefined4 *)FUN_006b4fa0((int)pAVar3);
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      ccFntTy::SetSurf(pFVar6->field_1A73,(int)pFVar6->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar14 = -1;
      iVar13 = -1;
      uVar11 = 2;
      iVar12 = -1;
      iVar7 = -2;
      puVar9 = (uint *)LoadResourceString(0x25b9,HINSTANCE_00807618);
      ccFntTy::WrTxt(pFVar6->field_1A73,puVar9,iVar7,iVar12,uVar11,iVar13,iVar14);
      FUN_006b35d0(DAT_008075a8,pFVar6->field_1ABC);
      pSVar4 = pFVar6->field_1A5B;
      puVar8 = local_28;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_28[2] = pFVar6->field_0008;
      local_28[3] = 2;
      local_28[4] = 0x6956;
      this_00 = pSVar4->field_02E6;
      if (this_00 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(this_00,0x25bc,'\0',local_28,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pFVar6->field_0000->field_0000)(local_28);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x95b,0,iVar7,
                                &DAT_007a4ccc,s_FSGSTy__Finished_007cc448);
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x95b);
  }
  return;
}

