#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Finished */

void __thiscall FSGSTy::Finished(FSGSTy *this,int param_1)

{
  ushort *puVar1;
  StartSystemTy *pSVar2;
  MMsgTy *this_00;
  code *pcVar3;
  CursorClassTy *this_01;
  FSGSTy *pFVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *resourceString;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [8];
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != (ushort *)0x0)) &&
     (-1 < this->field_1ABC)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_8 = this;
    iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    this_01 = g_cursorClass_00802A30;
    if (iVar5 == 0) {
      if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
        iVar5 = g_cursorClass_00802A30->field_00C9;
        iVar9 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = 1;
        this_01->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_01,CASE_0,iVar9,iVar5);
        CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
        this_01->field_00D2 = 0;
        this_01->field_04DF = -1;
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
      puVar1 = local_8->field_1AC0;
      uVar8 = *(uint *)(puVar1 + 10);
      if (uVar8 == 0) {
        uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar6 = (undefined4 *)FUN_006b4fa0((int)puVar1);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      ccFntTy::SetSurf(pFVar4->field_1A73,(int)pFVar4->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar11 = -1;
      iVar10 = -1;
      uVar8 = 2;
      iVar9 = -1;
      iVar5 = -2;
      resourceString = (uint *)LoadResourceString(0x25b9,g_module_00807618);
      ccFntTy::WrTxt(pFVar4->field_1A73,resourceString,iVar5,iVar9,uVar8,iVar10,iVar11);
      FUN_006b35d0((int *)PTR_008075a8,pFVar4->field_1ABC);
      pSVar2 = pFVar4->field_1A5B;
      memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
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
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x95b,0,iVar5,"%s"
                               ,"FSGSTy::Finished");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x95b);
  }
  return;
}

