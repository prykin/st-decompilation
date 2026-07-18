
void __thiscall FSGSTy::JoinChannel(FSGSTy *this,void *param_1)

{
  FSGSTy *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_7c;
  undefined4 auStack_78 [16];
  undefined4 auStack_38 [11];
  undefined1 uStack_b;
  FSGSTy *pFStack_8;
  
  if (this[0x1a5f] == (FSGSTy)0x6) {
    this[0x1a60] = (FSGSTy)0x0;
    uStack_7c = DAT_00858df8;
    DAT_00858df8 = &uStack_7c;
    pFStack_8 = this;
    iVar4 = __setjmp3(auStack_78,0,unaff_EDI,unaff_ESI);
    this_00 = DAT_00802a30;
    if (iVar4 == 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar5 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x1;
        *(undefined2 *)(this_00 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(this_00,0,uVar2,uVar5);
        CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
        this_00[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
      }
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      this_01 = pFStack_8;
      thunk_FUN_00540620(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',
                         *(BITMAPINFO **)(pFStack_8 + 0x1e9a));
      *(undefined4 *)(*(int *)(this_01 + 0x1ea6) + 0xc) = 0;
      uStack_b = 1;
      FUN_006ae1c0(*(uint **)(this_01 + 0x1ea6),auStack_38);
      *(undefined4 *)(this_01 + 0x2d) = 0x28;
      pFVar1 = this_01 + 0x1d;
      *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(*(int *)(this_01 + 0x1ea6) + 0xc);
      *(undefined2 *)(this_01 + 0x35) = 1;
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)pFVar1);
      *(undefined4 *)(this_01 + 0x2d) = 0x20;
      if ((*(int *)(*(int *)(this_01 + 0x1ea6) + 0xc) == 0) || (*(int *)(this_01 + 0x1a6b) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined4 *)(this_01 + 0x31) = uVar5;
      FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b20),(undefined4 *)pFVar1);
      *(undefined4 *)(this_01 + 0x2d) = 0x20;
      *(undefined4 *)(this_01 + 0x31) = 0;
      if (*(int *)(this_01 + 0x1b24) != 0) {
        FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1b24),(undefined4 *)pFVar1);
      }
      *(undefined4 *)(this_01 + 0x31) = 1;
      if ((*(int *)(this_01 + 0x1b18) != 0) && (*(int *)(this_01 + 0x1a6b) != 0)) {
        FUN_006e6080(this_01,2,*(int *)(this_01 + 0x1b18),(undefined4 *)pFVar1);
      }
      DAT_00858df8 = (undefined4 *)uStack_7c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_7c;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa7d,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7cbf70,0xa7d);
  }
  return;
}

