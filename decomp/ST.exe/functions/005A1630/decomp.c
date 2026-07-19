
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::Finished */

void __thiscall FSGSTy::Finished(FSGSTy *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  FSGSTy *pFVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [8];
  FSGSTy *local_8;
  
  if (((this[0x1a5f] == (FSGSTy)0x1) && (*(int *)(this + 0x1ac0) != 0)) &&
     (-1 < *(int *)(this + 0x1abc))) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = DAT_00802a30;
    if (iVar4 == 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar10 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(this_00 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(this_00,0,uVar1,uVar10);
        CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
        this_00[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
      }
      pFVar3 = local_8;
      if (param_1 != 0) {
        DAT_0080fb76 = 1;
        *(undefined4 *)(local_8 + 0x4d) = 0x7102;
        *(undefined4 *)(local_8 + 0x49) = 1;
        FUN_006e6020(local_8,(undefined4 *)(local_8 + 0x3d));
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      iVar4 = *(int *)(local_8 + 0x1ac0);
      uVar8 = *(uint *)(iVar4 + 0x14);
      if (uVar8 == 0) {
        uVar8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar4 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)(pFVar3 + 0x1a73),*(int *)(pFVar3 + 0x1ac0),0,0,0x16,0x1b8,0xf0)
      ;
      iVar12 = -1;
      iVar11 = -1;
      uVar10 = 2;
      iVar9 = -1;
      iVar4 = -2;
      puVar6 = (uint *)FUN_006b0140(0x25b9,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(pFVar3 + 0x1a73),puVar6,iVar4,iVar9,uVar10,iVar11,iVar12);
      FUN_006b35d0(DAT_008075a8,*(uint *)(pFVar3 + 0x1abc));
      iVar4 = *(int *)(pFVar3 + 0x1a5b);
      puVar5 = local_28;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_28[2] = *(undefined4 *)(pFVar3 + 8);
      local_28[3] = 2;
      local_28[4] = 0x6956;
      if (*(MMsgTy **)(iVar4 + 0x2e6) != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(*(MMsgTy **)(iVar4 + 0x2e6),0x25bc,'\0',local_28,(undefined4 *)0x0,
                           (undefined4 *)0x0,0,0);
        g_currentExceptionFrame = local_6c.previous;
        return;
      }
      (*(code *)**(undefined4 **)pFVar3)(local_28);
      g_currentExceptionFrame = local_6c.previous;
      return;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x95b,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__Finished_007cc448);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x95b);
  }
  return;
}

