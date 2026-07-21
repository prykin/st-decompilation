
undefined4 __thiscall FUN_004b9d20(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)((int)this + 0x4b4) != 0) &&
      (*(int *)((int)this + 0x4b0) == *(int *)(param_1 + 0x18))) &&
     (*(int *)((int)this + 0x245) != 6)) {
    *(undefined4 *)((int)this + 0x4b4) = 0;
    return 1;
  }
  return 0;
}

