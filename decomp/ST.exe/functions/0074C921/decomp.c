
/* [STVTableApplier] Virtual slot 007A1820+0x4

   [STVTableApplier] Virtual slot 007A19A8+0x4 */

void FUN_0074c921(int param_1)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + -8) + 4))(*(int **)(param_1 + -8));
  return;
}

