
void FUN_006b3a40(int param_1,uint param_2,uint *param_3)

{
  uint *puVar1;

  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0x8020) == 0x8020)) {
    FUN_006cf950(puVar1);
    *param_3 = puVar1[6];
    param_3[1] = puVar1[7];
    param_3[2] = puVar1[8];
    param_3[3] = puVar1[9];
  }
  return;
}

