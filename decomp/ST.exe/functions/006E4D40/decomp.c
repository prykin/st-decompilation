
undefined4 __thiscall FUN_006e4d40(void *this,int param_1)

{
  undefined4 *puVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar1 = (undefined4 *)FUN_006e45a0(this,*(int *)(param_1 + 0x14));
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0xffff;
}

