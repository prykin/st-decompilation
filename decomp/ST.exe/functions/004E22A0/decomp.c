
undefined4 __thiscall FUN_004e22a0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4d4) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

