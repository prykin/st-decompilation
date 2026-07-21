
/* [STVTableApplier] Virtual slot 007A1868+0x18

   [STVTableApplier] Virtual slot 007A19F0+0x18 */

undefined4 __fastcall FUN_007484f4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  *(undefined4 *)(param_1 + 0x6c) = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == (int *)0x0) {
    return 0x8004020a;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}

