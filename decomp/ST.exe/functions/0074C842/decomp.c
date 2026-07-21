
/* [STVTableApplier] Virtual slot 007A1868+0x3C

   [STVTableApplier] Virtual slot 007A19F0+0x3C */

void __thiscall FUN_0074c842(int param_1,undefined4 param_2,undefined4 param_3)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x30))(param_2,param_3);
  return;
}

