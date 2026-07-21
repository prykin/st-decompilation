
/* [STVTableApplier] Virtual slot 007A19A8+0x30 */

undefined4 FUN_0074d017(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x9c) + 0x8c) + 0x18);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80040209;
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,param_2);
  }
  return uVar2;
}

