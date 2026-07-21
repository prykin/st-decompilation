
/* [STVTableApplier] Virtual slot 0079DCBC+0x14

   [STVTableApplier] Virtual slot 007A1510+0x14 */

void __fastcall FUN_0074ab88(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0074ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x74))();
  return;
}

