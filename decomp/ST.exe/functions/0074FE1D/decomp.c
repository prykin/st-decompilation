
/* [STVTableApplier] Virtual slot 007A1D68+0x18 */

undefined4 FUN_0074fe1d(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else if (*(int *)(param_1 + 4) == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x40);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80004004;
  }
  return uVar1;
}

