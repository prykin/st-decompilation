
void thunk_FUN_00542d80(void)

{
  code *pcVar1;
  int iVar2;
  void *this;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_64 [16];
  undefined1 auStack_24 [16];
  undefined4 uStack_14;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffff98;
  iVar2 = __setjmp3(auStack_64,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    this = (void *)FUN_0072e530(0x34);
    if (this == (void *)0x0) {
      DAT_00802a28 = (InterSystemC *)0x0;
    }
    else {
      DAT_00802a28 = (InterSystemC *)thunk_FUN_00542440(this,DAT_00806728);
    }
    *(int *)(DAT_00802a28 + 0x20) = 0;
    (*(code *)**(undefined4 **)DAT_00802a28)();
    FUN_006e4960(DAT_0081163c,(int *)DAT_00802a28,0);
    InterSystemC::CreateInterfObjects(DAT_00802a28);
    uStack_14 = 5;
    (**(code **)(*(int *)DAT_00802a28 + 0x20))(auStack_24);
    *(int *)(DAT_00802a28 + 0x20) = 1;
    DAT_00858df8 = (undefined1 *)uVar4;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_tintersys_cpp_007c7be8,0xca,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7be8,0xca);
  return;
}

