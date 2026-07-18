
undefined4 FUN_005da980(int param_1)

{
  int iVar1;
  void *unaff_ESI;
  undefined4 uVar2;
  undefined4 local_48 [16];
  int local_8;
  
  uVar2 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3(local_48,0,unaff_ESI,uVar2);
  if (iVar1 == 0) {
    thunk_FUN_005daa60();
    FUN_006b6150((uint)DAT_00807362);
    FUN_006b6350(&DAT_00811764,(char *)(*(int *)(local_8 + 0x68a) + 0xc + param_1 * 0x14),
                 (int *)&DAT_007cd6f0);
    FUN_006b6500(DAT_00811764,DAT_0080733c);
    DAT_00858df8 = (undefined1 *)uVar2;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar2;
  thunk_FUN_005daa60();
  return 0xfffffffa;
}

