
undefined4 __thiscall FUN_00647ba0(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((int)*(short *)(param_1 + 1) < *(int *)(*(int *)((int)this + 0x4e2) + 8)) {
    return *(undefined4 *)
            (*(int *)(*(int *)((int)this + 0x4e2) + 0x14) + *(short *)(param_1 + 1) * 4);
  }
  return 0;
}

