
void FUN_00577280(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  void *unaff_ESI;
  undefined4 uVar7;
  undefined4 local_44 [16];
  
  uVar7 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar4 = __setjmp3(local_44,0,unaff_ESI,uVar7);
  if (iVar4 == 0) {
    pvVar5 = (void *)FUN_0072e530(0x435);
    if (pvVar5 == (void *)0x0) {
      DAT_0081163c = (int *)0x0;
    }
    else {
      DAT_0081163c = thunk_FUN_00576dd0(pvVar5,DAT_00806728);
    }
    if (DAT_0081163c == (int *)0x0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7cab5c,0xb1);
    }
    DAT_0081163c[0x10a] = 0;
    (**(code **)*DAT_0081163c)();
    FUN_006e4650(DAT_0081163c,0);
    DAT_0081163c[0x10a] = 1;
    pvVar5 = DAT_00802a30;
    uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
    uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
    *(undefined1 *)((int)DAT_00802a30 + 0x493) = 2;
    *(undefined2 *)((int)pvVar5 + 0x494) = 0xffff;
    thunk_FUN_0054bf40(0,uVar2,uVar1);
    thunk_FUN_00543c90(pvVar5,*(int *)((int)pvVar5 + 0xc5),*(int *)((int)pvVar5 + 0xc9));
    *(undefined1 *)((int)pvVar5 + 0xd2) = 0;
    *(undefined4 *)((int)pvVar5 + 0x4df) = 0xffffffff;
    DAT_00858df8 = (undefined1 *)uVar7;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar7;
  iVar6 = FUN_006ad4d0(s_E____titans_tsystem_cpp_007cab5c,0xbb,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cab5c,0xbb);
  return;
}

