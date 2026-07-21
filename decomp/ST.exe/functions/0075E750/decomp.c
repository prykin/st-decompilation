
void FUN_0075e750(AnonShape_0075E750_D250320C *param_1,undefined4 *param_2,undefined4 param_3,
                 int param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;

  iVar2 = param_1->field_0068;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1->field_01BA + 0x18);
  if (0 < param_4) {
    param_1 = (AnonShape_0075E750_D250320C *)param_4;
    do {
      pbVar5 = (byte *)*param_2;
      for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar6 = (uint)(pbVar5[1] >> 2) * 0x20 + (uint)(pbVar5[2] >> 3);
        iVar4 = *(int *)(iVar3 + (uint)(*pbVar5 >> 3) * 4);
        psVar1 = (short *)(iVar4 + iVar6 * 2);
        *psVar1 = *psVar1 + 1;
        psVar1 = (short *)(iVar4 + iVar6 * 2);
        if (*psVar1 == 0) {
          *psVar1 = -1;
        }
        pbVar5 = pbVar5 + 3;
      }
      param_2 = param_2 + 1;
      param_1 = (AnonShape_0075E750_D250320C *)&param_1[-1].field_0x1bf;
    } while (param_1 != (AnonShape_0075E750_D250320C *)0x0);
  }
  return;
}

