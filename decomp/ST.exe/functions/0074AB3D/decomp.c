
undefined4 FUN_0074ab3d(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  short *psVar2;

  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    psVar2 = CoTaskMemAlloc(8);
    *param_2 = psVar2;
    if (psVar2 == (short *)0x0) {
      uVar1 = 0x8007000e;
    }
    else {
      FUN_0074d580(psVar2,(short *)&DAT_007ee298);
      uVar1 = 0;
    }
  }
  return uVar1;
}

