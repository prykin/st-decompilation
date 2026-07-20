
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Finished */

void __thiscall FSGSTy::Finished(FSGSTy *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  StartSystemTy *pSVar3;
  MMsgTy *this_00;
  code *pcVar4;
  CursorClassTy *this_01;
  FSGSTy *pFVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar11;
  int iVar12;
  int iVar13;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [8];
  FSGSTy *local_8;
  
  if (((this->field_1A5F == '\x01') && (this->field_1AC0 != 0)) && (-1 < (int)this->field_1ABC)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_8 = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_01 = DAT_00802a30;
    if (iVar6 == 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar1 = DAT_00802a30->field_00C9;
        uVar2 = DAT_00802a30->field_00C5;
        DAT_00802a30->field_0493 = 1;
        this_01->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_01,CASE_0,uVar2,uVar1);
        CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
        this_01->field_0xd2 = 0;
        *(undefined4 *)&this_01->field_0x4df = 0xffffffff;
      }
      pFVar5 = local_8;
      if (param_1 != 0) {
        DAT_0080fb76 = 1;
        local_8->field_004D = 0x7102;
        local_8->field_0049 = 1;
        FUN_006e6020(local_8,(undefined4 *)&local_8->field_0x3d);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      iVar6 = local_8->field_1AC0;
      uVar10 = *(uint *)(iVar6 + 0x14);
      if (uVar10 == 0) {
        uVar10 = ((uint)*(ushort *)(iVar6 + 0xe) * *(int *)(iVar6 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar6 + 8);
      }
      puVar7 = (undefined4 *)FUN_006b4fa0(iVar6);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar7 = 0xff;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      ccFntTy::SetSurf(pFVar5->field_1A73,pFVar5->field_1AC0,0,0,0x16,0x1b8,0xf0);
      iVar13 = -1;
      iVar12 = -1;
      uVar10 = 2;
      iVar11 = -1;
      iVar6 = -2;
      puVar8 = (uint *)FUN_006b0140(0x25b9,HINSTANCE_00807618);
      ccFntTy::WrTxt(pFVar5->field_1A73,puVar8,iVar6,iVar11,uVar10,iVar12,iVar13);
      FUN_006b35d0(DAT_008075a8,pFVar5->field_1ABC);
      pSVar3 = pFVar5->field_1A5B;
      puVar7 = local_28;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_28[2] = pFVar5->field_0008;
      local_28[3] = 2;
      local_28[4] = 0x6956;
      this_00 = pSVar3->field_02E6;
      if (this_00 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(this_00,0x25bc,'\0',local_28,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      (**(code **)pFVar5->field_0000)(local_28);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x95b,0,iVar6,
                                &DAT_007a4ccc,s_FSGSTy__Finished_007cc448);
    if (iVar11 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x95b);
  }
  return;
}

