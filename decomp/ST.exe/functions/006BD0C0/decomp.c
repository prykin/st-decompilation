
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006BCD10 -> 006BD0C0 @ 006BCDD4 */

undefined4 FUN_006bd0c0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar5 = param_2 - param_1[param_1[0x79] * 2 + 0x47];
  if (iVar5 < 0) {
    param_4 = param_4 + iVar5;
    iVar5 = 0;
  }
  param_3 = param_3 - param_1[param_1[0x79] * 2 + 0x48];
  if (param_3 < 0) {
    param_3 = 0;
    param_5 = param_5 + iVar5;
  }
  if ((0 < param_4) && (0 < param_5)) {
    iVar1 = param_1[0x7b];
    iVar4 = param_1[0x7c];
    iVar2 = (iVar5 % iVar1 + iVar1 + -1 + param_4) / iVar1;
    iVar3 = (param_3 % iVar4 + iVar4 + -1 + param_5) / iVar4;
    iVar4 = param_3 / iVar4;
    param_3 = 0;
    iVar7 = (int)(param_1[0x7d] + 7 + (param_1[0x7d] + 7 >> 0x1f & 7U)) >> 3;
    iVar4 = iVar7 * iVar4;
    iVar6 = param_1[0x88] + iVar4;
    iVar4 = param_1[0x84] + iVar4;
    if (0 < iVar3) {
      do {
        param_2 = 0;
        param_1 = (int *)(iVar5 / iVar1);
        if (0 < iVar2) {
          do {
            if (((*(byte *)(iVar4 + ((int)((uint)param_1 ^ 7) >> 3)) >> (((uint)param_1 ^ 7) & 7) &
                 1) != 0) ||
               ((*(byte *)(iVar6 + ((int)((uint)param_1 ^ 7) >> 3)) >> (((uint)param_1 ^ 7) & 7) & 1
                ) != 0)) {
              return 1;
            }
            param_2 = param_2 + 1;
            param_1 = (int *)((int)param_1 + 1);
          } while (param_2 < iVar2);
        }
        iVar4 = iVar4 + iVar7;
        iVar6 = iVar6 + iVar7;
        param_3 = param_3 + 1;
      } while (param_3 < iVar3);
    }
  }
  return 0;
}

