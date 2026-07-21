
undefined4 __thiscall FUN_004de7d0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + 0x4d0) + param_3 < DAT_007e6190) &&
     (iVar1 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),0x19), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

