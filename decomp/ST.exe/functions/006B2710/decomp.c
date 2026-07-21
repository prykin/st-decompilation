
void FUN_006b2710(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar1 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar1 & 0xc000) == 0x8000)) {
    puVar1[0x2e] = param_3;
    puVar1[0x2f] = param_4;
    FUN_006b23e0(param_1,puVar1);
    if (((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) {
      uVar2 = puVar1[0x30];
      iVar4 = 0;
      if (0 < (int)uVar2) {
        do {
          uVar3 = *(uint *)(puVar1[0x34] + iVar4 * 4);
          if (-1 < (int)uVar3) {
            FUN_006b2710(param_1,uVar3,param_3,param_4);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar2);
      }
    }
  }
  return;
}

