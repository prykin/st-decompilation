
void FUN_006e36e0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 *local_c;
  void *local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    *(undefined4 *)((int)local_8 + 0x20) = 1;
    FUN_006e4340(local_8,0x1c,4,1,DAT_00856d6c);
    if (*(byte **)((int)local_8 + 0x14) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_8 + 0x14));
      *(undefined4 *)((int)local_8 + 0x14) = 0;
    }
    if (*(int *)((int)local_8 + 0x10) != 0) {
      FUN_006e3680(*(int *)((int)local_8 + 0x10));
      FUN_006ae110(*(byte **)((int)local_8 + 0x10));
      *(undefined4 *)((int)local_8 + 0x10) = 0;
    }
    iVar2 = *(int *)((int)local_8 + 0xc);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0xc);
      while (iVar3 != 0) {
        FUN_006acc70(iVar2,0,&local_10);
        thunk_FUN_006a4950(local_c);
        FUN_006b0c70(*(int *)((int)local_8 + 0xc),0);
        iVar2 = *(int *)((int)local_8 + 0xc);
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      FUN_006ae110(*(byte **)((int)local_8 + 0xc));
      *(undefined4 *)((int)local_8 + 0xc) = 0;
    }
    if (*(byte **)((int)local_8 + 0x28) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_8 + 0x28));
      *(undefined4 *)((int)local_8 + 0x28) = 0;
    }
    if (*(byte **)((int)local_8 + 0x2c) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_8 + 0x2c));
      *(undefined4 *)((int)local_8 + 0x2c) = 0;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x6d,0,iVar2,&DAT_007a4ccc);
  if (iVar3 == 0) {
    FUN_006a5e40(iVar2,0,0x7ee78c,0x6e);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

