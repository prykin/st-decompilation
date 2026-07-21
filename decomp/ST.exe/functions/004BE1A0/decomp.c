
undefined4 __fastcall FUN_004be1a0(int *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(byte *)((int)param_1 + 0x1d1) & 2) == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0xf8))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

