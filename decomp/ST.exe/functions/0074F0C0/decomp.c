
/* [STVTableApplier] Virtual slot 007A1C60+0x8

   [STVTableApplier] Virtual slot 007A1D10+0x8 */

void FUN_0074f0c0(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
  return;
}

