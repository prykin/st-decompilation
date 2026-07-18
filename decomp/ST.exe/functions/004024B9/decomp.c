
undefined4 __cdecl thunk_FUN_006809f0(uint *param_1)

{
  void *unaff_ESI;
  undefined4 uVar1;
  undefined4 auStack_58 [16];
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  byte *pbStack_8;
  
  uVar1 = DAT_00858df8;
  uStack_c = 0;
  pbStack_8 = (byte *)0x0;
  DAT_00858df8 = &stack0xffffffa4;
  iStack_14 = __setjmp3(auStack_58,0,unaff_ESI,uVar1);
  if (iStack_14 == 0) {
    uStack_18 = param_1[2];
    iStack_10 = iStack_14;
    pbStack_8 = (byte *)FUN_006c8910(param_1,(int *)&uStack_c);
    thunk_FUN_00680890(0x17,pbStack_8,uStack_c,&uStack_18);
    if (pbStack_8 != (byte *)0x0) {
      FUN_006ab060(&pbStack_8);
    }
    DAT_00858df8 = (undefined1 *)uVar1;
    return 1;
  }
  DAT_00858df8 = (undefined1 *)uVar1;
  if (pbStack_8 != (byte *)0x0) {
    FUN_006ab060(&pbStack_8);
  }
  FUN_006a5e40(iStack_14,0,0x7d5604,0x124);
  return 0;
}

