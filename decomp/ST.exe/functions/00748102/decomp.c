
/* [STVTableApplier] Virtual slot 0079DC74+0x18

   [STVTableApplier] Virtual slot 0079DE90+0x18

   [STVTableApplier] Virtual slot 007A14C8+0x18

   [STVTableApplier] Virtual slot 007A1780+0x18

   [STVTableApplier] Virtual slot 007A1820+0x18

   [STVTableApplier] Virtual slot 007A1908+0x18

   [STVTableApplier] Virtual slot 007A19A8+0x18 */

undefined4 FUN_00748102(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;

  if (param_2 == (int *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar1 = *(int **)(param_1 + 0xc);
    *param_2 = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      uVar2 = 0x80040209;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar1 + 4))(piVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

