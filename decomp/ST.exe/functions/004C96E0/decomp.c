
void __fastcall FUN_004c96e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar2 = GetPlayerRaceId(*(char *)(param_1 + 0x23d));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x245);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = (((uVar2 & 0xff) - 1) + *(int *)(param_1 + 0x235) * 3) * 0xc;
  *(undefined4 *)(param_1 + 0x5ef) = *(undefined4 *)((&PTR_PTR_007bb198)[iVar1] + iVar3);
  *(undefined4 *)(param_1 + 0x5f3) = *(undefined4 *)((&PTR_PTR_007bb198)[iVar1] + iVar3 + 4);
  *(undefined4 *)(param_1 + 0x5f7) = *(undefined4 *)((&PTR_PTR_007bb198)[iVar1] + iVar3 + 8);
  return;
}

