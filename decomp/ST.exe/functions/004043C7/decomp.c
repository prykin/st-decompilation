
void thunk_FUN_00576bb0(void)

{
  code *pcVar1;
  int iVar2;
  void *this;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_44 [16];
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar2 = __setjmp3(auStack_44,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    this = (void *)FUN_0072e530(0x24);
    if (this == (void *)0x0) {
      DAT_00811638 = (int *)0x0;
    }
    else {
      DAT_00811638 = thunk_FUN_00576aa0(this,DAT_00806728);
    }
    if (DAT_00811638 == (int *)0x0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7cab5c,0x38);
    }
    DAT_00811638[8] = 0;
    (**(code **)*DAT_00811638)();
    FUN_006e4650(DAT_00811638,0);
    DAT_00811638[8] = 1;
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0x40,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cab5c,0x41);
  return;
}

