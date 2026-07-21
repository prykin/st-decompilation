
uint __fastcall FUN_004be110(int param_1)

{
  uint uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = GetPlayerRaceId(*(char *)(param_1 + 0x23d));
  return uVar1 & 0xff;
}

