
undefined4 __thiscall FUN_00630160(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;

  uVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)((int)this + param_1 * 4 + 0x1e5);
  if ((((piVar1 != (int *)0x0) && (piVar1[8] == param_2)) && (piVar1[9] == param_3)) &&
     (0 < *piVar1)) {
    uVar2 = 1;
  }
  return uVar2;
}

