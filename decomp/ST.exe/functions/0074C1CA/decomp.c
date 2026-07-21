
/* [STVTableApplier] Virtual slot 0079DDEC+0x58 */

undefined4 __fastcall FUN_0074c1ca(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x4c))();
  }
  return uVar1;
}

