
void FUN_0075d680(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;

  puVar6 = param_4;
  param_4 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)*puVar6;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x126)) {
    iVar5 = param_3 - (int)puVar6;
    do {
      pbVar3 = *(byte **)(iVar5 + (int)puVar6);
      pbVar2 = (byte *)*puVar6;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *pbVar2 = bVar1;
      pbVar2[1] = (byte)((int)((uint)bVar1 * 3 + 2 + (uint)*pbVar3) >> 2);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      for (iVar4 = *(int *)(param_2 + 0x28) + -2; pbVar2 = pbVar2 + 2, iVar4 != 0;
          iVar4 = iVar4 + -1) {
        bVar1 = *pbVar3;
        *pbVar2 = (byte)((int)(pbVar3[-1] + 1 + (uint)bVar1 * 3) >> 2);
        pbVar2[1] = (byte)((int)(pbVar3[1] + 2 + (uint)bVar1 * 3) >> 2);
        pbVar3 = pbVar3 + 1;
      }
      bVar1 = *pbVar3;
      puVar6 = puVar6 + 1;
      *pbVar2 = (byte)((int)(pbVar3[-1] + 1 + (uint)bVar1 * 3) >> 2);
      pbVar2[1] = bVar1;
      param_4 = (undefined4 *)((int)param_4 + 1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while ((int)param_4 < *(int *)(param_1 + 0x126));
  }
  return;
}

