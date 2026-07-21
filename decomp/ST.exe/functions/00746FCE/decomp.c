
/* [STVTableApplier] Virtual slot 0079DDB0+0x1C */

undefined4 FUN_00746fce(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_3 = *(undefined4 *)(param_1 + 8);
    uVar1 = 0;
  }
  return uVar1;
}

