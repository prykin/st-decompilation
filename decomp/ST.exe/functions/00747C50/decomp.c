
/* [STVTableApplier] Virtual slot 0079DCBC+0x8

   [STVTableApplier] Virtual slot 0079DED8+0x8

   [STVTableApplier] Virtual slot 007A1510+0x8

   [STVTableApplier] Virtual slot 007A17C8+0x8

   [STVTableApplier] Virtual slot 007A1868+0x8

   [STVTableApplier] Virtual slot 007A1950+0x8

   [STVTableApplier] Virtual slot 007A19F0+0x8 */

void FUN_00747c50(int param_1)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1 + 0x70) + 0xc);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}

