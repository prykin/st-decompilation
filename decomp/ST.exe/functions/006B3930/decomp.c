
bool FUN_006b3930(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
    if ((*puVar1 & 3) != 0) {
      if ((*puVar1 & 2) == 0) {
        puVar4 = puVar1 + 1;
      }
      else {
        FUN_006cf950(puVar1);
        puVar4 = puVar1 + 6;
      }
      local_14 = *puVar4;
      local_10 = puVar4[1];
      local_c = puVar4[2];
      local_8 = puVar4[3];
      iVar2 = FUN_006cee10(param_1,(int)puVar1);
      iVar3 = iVar2 * 0x10 + param_1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_24 = *(int *)(iVar2 * 0x10 + 0x14 + param_1) - *(int *)(param_1 + 0x11c + iVar2 * 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_20 = *(int *)(iVar3 + 0x18) - *(int *)(param_1 + 0x120 + iVar2 * 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_1c = *(int *)(iVar3 + 0x1c) - *(int *)(param_1 + 0x11c + iVar2 * 8);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_18 = *(int *)((iVar2 + 2) * 0x10 + param_1) - *(int *)(param_1 + 0x120 + iVar2 * 8);
      if ((int)local_c < 0) {
        local_14 = local_14 + local_c;
        local_c = -local_c;
      }
      if ((int)local_8 < 0) {
        local_10 = local_10 + local_8;
        local_8 = -local_8;
      }
      iVar3 = FUN_006cfeb0(param_3,(int *)&local_14,&local_24);
      return iVar3 != 0;
    }
  }
  return false;
}

