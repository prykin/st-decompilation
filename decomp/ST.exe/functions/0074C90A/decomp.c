
/* [STVTableApplier] Virtual slot 007A1820+0x0

   [STVTableApplier] Virtual slot 007A19A8+0x0 */

void FUN_0074c90a(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)**(undefined4 **)(param_1 + -8))(*(undefined4 **)(param_1 + -8),param_2,param_3);
  return;
}

