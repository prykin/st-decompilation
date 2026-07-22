
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 004E4D60 @ 004E5702 */

undefined4 __fastcall FUN_004e4d60(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)param_1 + 0x245) == 0) &&
     ((param_1[0x16b] == 0x36 || (param_1[0x16b] == 0x5d)))) {
    if (param_1[0x137] != 0) {
      thunk_FUN_0041cf50((AnonShape_0041CF50_01071190 *)param_1);
      param_1[0x137] = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (param_1[9] != *(int *)((int)param_1 + 0x23d)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = GetPlayerRaceId((char)*(int *)((int)param_1 + 0x23d));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = *(int *)((int)param_1 + 0x235);
      uVar2 = GetPlayerRaceId((char)param_1[9]);
      if ((&DAT_007e1984)[(uVar2 & 0xff) + ((uVar1 & 0xff) + iVar3 * 3) * 3] == '\0') {
        return 0;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = thunk_FUN_004e60d0(param_1[9],
                               *(int *)(&DAT_00798fb0 + *(int *)((int)param_1 + 0x239) * 4));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + *(int *)((int)param_1 + 0x239) * 2) * 4);
    param_1[0x134] = iVar3;
    thunk_FUN_0041ce40(param_1,iVar3);
    param_1[0x137] = 1;
  }
  return 0;
}

