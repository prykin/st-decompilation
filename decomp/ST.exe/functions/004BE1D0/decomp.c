
uint __fastcall FUN_004be1d0(int param_1)

{
  uint uVar1;

  uVar1 = thunk_FUN_0041f330(param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x5ac) == 0x6c)) {
    uVar1 = 0;
  }
  return uVar1;
}

