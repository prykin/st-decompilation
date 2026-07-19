
/* [STVTableApplier] Virtual slot 0079E2C8+0x8 */

undefined4 __fastcall FUN_00724d20(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[7] & 0xf0000000U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00724d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  }
  return 0;
}

