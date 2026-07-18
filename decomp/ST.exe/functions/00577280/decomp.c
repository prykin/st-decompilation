
void FUN_00577280(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this;
  int iVar4;
  void *this_00;
  int iVar5;
  void *unaff_ESI;
  undefined4 uVar6;
  undefined4 local_44 [16];
  
  uVar6 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar4 = __setjmp3(local_44,0,unaff_ESI,uVar6);
  if (iVar4 == 0) {
    this_00 = (void *)FUN_0072e530(0x435);
    if (this_00 == (void *)0x0) {
      DAT_0081163c = (int *)0x0;
    }
    else {
      DAT_0081163c = thunk_FUN_00576dd0(this_00,DAT_00806728);
    }
    if (DAT_0081163c == (int *)0x0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7cab5c,0xb1);
    }
    DAT_0081163c[0x10a] = 0;
    (**(code **)*DAT_0081163c)();
    FUN_006e4650(DAT_0081163c,0);
    DAT_0081163c[0x10a] = 1;
    this = DAT_00802a30;
    uVar1 = *(undefined4 *)(DAT_00802a30 + 0xc9);
    uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
    DAT_00802a30[0x493] = (CursorClassTy)0x2;
    *(undefined2 *)(this + 0x494) = 0xffff;
    CursorClassTy::SetGCType(this,0,uVar2,uVar1);
    CursorClassTy::DrawSprite(this,*(int *)(this + 0xc5),*(int *)(this + 0xc9));
    this[0xd2] = (CursorClassTy)0x0;
    *(undefined4 *)(this + 0x4df) = 0xffffffff;
    DAT_00858df8 = (undefined1 *)uVar6;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar5 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0xbb,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cab5c,0xbb);
  return;
}

