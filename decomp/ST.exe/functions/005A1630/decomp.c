#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Finished */

void __thiscall FSGSTy::Finished(FSGSTy *this,int param_1)

{
  ushort *puVar1;
  StartSystemTy *pSVar2;
  MMsgTy *this_00;
  CursorClassTy *this_01;
  FSGSTy *this_02;
  int iVar4;
  undefined4 *puVar5;
  uint *resourceString;
  uint uVar6;
  uint uVar7;
  STMessage *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_6c;
  STMessage local_28;
  FSGSTy *local_8;

  if (((this->field_1A5F == CASE_1) && (this->field_1AC0 != nullptr)) &&
     (-1 < (int)this->field_1ABC)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
    this_01 = g_cursorClass_00802A30;
    if (iVar4 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar4 = g_cursorClass_00802A30->field_00C9;
        iVar9 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_01->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_01,CASE_0,iVar9,iVar4);
        CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
        this_01->field_00D2 = 0;
        this_01->field_04DF = -1;
      }
      this_02 = local_8;
      if (param_1 != 0) {
        DAT_0080fb76 = 1;
        local_8->field_004D = 0x7102;
        local_8->field_0049 = 1;
        FUN_006e6020(local_8,(undefined4 *)&local_8->field_0x3d);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      puVar1 = local_8->field_1AC0;
      uVar7 = *(uint *)(puVar1 + 10);
      if (uVar7 == 0) {
        uVar7 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0((int *)puVar1);
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      ccFntTy::SetSurf(this_02->field_1A73,(int)this_02->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar11 = -1;
      iVar10 = -1;
      uVar7 = 2;
      iVar9 = -1;
      iVar4 = -2;
      resourceString = (uint *)LoadResourceString(0x25b9,g_module_00807618);
      ccFntTy::WrTxt(this_02->field_1A73,resourceString,iVar4,iVar9,uVar7,iVar10,iVar11);
      FUN_006b35d0((int *)g_ddxContext_008075A8,this_02->field_1ABC);
      pSVar2 = this_02->field_1A5B;
      pSVar8 = &local_28;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        pSVar8->unknown_00 = 0;
        pSVar8 = (STMessage *)&pSVar8->unknown_04;
      }
      local_28.unknown_08 = this_02->field_0008;
      local_28.unknown_0c = 2;
      local_28.id = MESS_CHOOSEMAPTY_6956;
      this_00 = pSVar2->field_02E6;
      if (this_00 != nullptr) {
        MMsgTy::SetMessage(this_00,0x25bc,'\0',&local_28.unknown_00,nullptr,
                           nullptr,0,0);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      this_02->GetMessage(&local_28);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x95b,0,iVar4,"%s"
                               ,"FSGSTy::Finished");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x95b);
  }
  return;
}

