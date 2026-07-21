
/* [STVTableApplier] Virtual slot 007A1C60+0x0

   [STVTableApplier] Virtual slot 007A1D10+0x0 */

void FUN_0074f026(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)**(undefined4 **)(param_1 + 0xc))(*(undefined4 **)(param_1 + 0xc),param_2,param_3);
  return;
}

