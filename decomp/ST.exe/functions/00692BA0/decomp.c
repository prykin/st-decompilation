
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00691690 -> 00692BA0 @ 00691759 | 00691690 -> 00692BA0 @ 00691888 | 00691690 ->
   00692BA0 @ 006918FD | 00691690 -> 00692BA0 @ 006920B8 */

void FUN_00692ba0(char *param_1)

{
  int iVar1;
  byte *pbVar2;
  char *pcVar3;

  iVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(short *)(param_1 + 0x23)) {
    pcVar3 = param_1 + 0x2d;
    do {
      pbVar2 = &DAT_007d5930;
      do {
        FUN_006c8e60(*(int **)pcVar3,*pbVar2,pbVar2[4]);
        pbVar2 = pbVar2 + 8;
      } while ((int)pbVar2 < 0x7d5958);
      iVar1 = iVar1 + 1;
      pcVar3 = pcVar3 + 4;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar1 < *(short *)(param_1 + 0x23));
  }
  return;
}

