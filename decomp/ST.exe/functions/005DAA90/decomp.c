
undefined4 FUN_005daa90(void)

{
  int iVar1;
  void *unaff_ESI;
  undefined4 uVar2;
  undefined4 local_48 [16];
  int local_8;
  
  uVar2 = DAT_00858df8;
  if (DAT_00811764 != (undefined4 *)0x0) {
    DAT_00858df8 = &stack0xffffffb4;
    iVar1 = __setjmp3(local_48,0,unaff_ESI,uVar2);
    if (iVar1 == 0) {
      thunk_FUN_005dab30(local_8);
      FUN_006b65f0(DAT_00811764,(undefined4 *)(local_8 + 0x68e));
      DAT_00858df8 = (undefined1 *)uVar2;
      return 0;
    }
    DAT_00858df8 = (undefined1 *)uVar2;
    thunk_FUN_005dab30(local_8);
  }
  return 0xfffffffa;
}

