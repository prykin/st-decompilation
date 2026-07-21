
/* [STVTableApplier] Virtual slot 007A1C60+0x4

   [STVTableApplier] Virtual slot 007A1D10+0x4 */

void FUN_0074f03d(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xc) + 4))(*(int **)(param_1 + 0xc));
  return;
}

