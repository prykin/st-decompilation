
undefined4 __thiscall FUN_004e22f0(void *this,int param_1)

{
  int iVar1;

  iVar1 = thunk_FUN_004e1f70(this,param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 == 0) && (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    return 1;
  }
  return 0;
}

