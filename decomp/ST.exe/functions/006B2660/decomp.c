
uint FUN_006b2660(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  uVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
    uVar3 = *puVar1;
    if ((uVar3 & 0xc000) == 0x8000) {
      uVar2 = uVar3 >> 0x12 & 1;
      if (param_3 == 0) {
        uVar3 = uVar3 & 0xfffbffff;
      }
      else {
        uVar3 = uVar3 | 0x40000;
      }
      *puVar1 = uVar3;
      FUN_006b23e0(param_1,puVar1);
      if ((((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) &&
         (iVar4 = 0, 0 < (int)puVar1[0x30])) {
        do {
          uVar3 = *(uint *)(puVar1[0x34] + iVar4 * 4);
          if (-1 < (int)uVar3) {
            FUN_006b2660(param_1,uVar3,param_3);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puVar1[0x30]);
      }
    }
  }
  return uVar2;
}

