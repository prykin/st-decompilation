
void __thiscall
FSGSTy::SetLadder(FSGSTy *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4
                 )

{
  FSGSTy *pFVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_6c;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  FSGSTy *pFStack_8;
  
  this_00 = DAT_00802a30;
  pFStack_8 = this;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    DAT_00802a30[0x493] = (CursorClassTy)0x1;
    *(undefined2 *)(this_00 + 0x494) = 0xffff;
    CursorClassTy::SetGCType
              (this_00,0,*(undefined4 *)(this_00 + 0xc5),*(undefined4 *)(this_00 + 0xc9));
    CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
    this_00[0xd2] = (CursorClassTy)0x0;
    *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
  }
  if (this[0x1a5f] == (FSGSTy)0x9) {
    IStack_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_6c;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_01 = pFStack_8;
    if (iVar3 == 0) {
      pFVar1 = pFStack_8 + 0x1edb;
      if (*(int *)(pFStack_8 + 0x1edb) != 0) {
        FUN_006ab060((undefined4 *)pFVar1);
      }
      *(undefined4 *)(this_01 + 0x1edf) = param_2;
      *(int *)(this_01 + 0x1ee3) = param_3;
      puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(param_3 * 0x24);
      iVar3 = *(int *)(this_01 + 0x1ee3);
      *(undefined4 **)pFVar1 = puVar4;
      for (uVar6 = iVar3 * 9 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *param_4;
        param_4 = param_4 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      PaintLadder(this_01,(int)unaff_EDI);
      puVar4 = auStack_28;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      uStack_18 = 0x20;
      if ((*(int *)(this_01 + 0x1edf) == 0) || (uStack_14 = 1, *(int *)(this_01 + 0x1a6b) == 0)) {
        uStack_14 = 0;
      }
      if (*(int *)(this_01 + 0x1ed3) != 0) {
        FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1ed3),auStack_28);
      }
      if ((0xf422f < *(uint *)(this_01 + 0x1edf)) ||
         (uStack_14 = 1, *(int *)(this_01 + 0x1a6b) == 0)) {
        uStack_14 = 0;
      }
      if (*(int *)(this_01 + 0x1ed7) != 0) {
        FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1ed7),auStack_28);
      }
      g_currentExceptionFrame = IStack_6c.previous;
      return;
    }
    g_currentExceptionFrame = IStack_6c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb65,0,iVar3,&DAT_007a4ccc
                               ,s_FSGSTy__SetLadder_007cc5c0);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xb65);
  }
  return;
}

