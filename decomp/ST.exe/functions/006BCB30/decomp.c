
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006BCD10 -> 006BCB30 @ 006BCEF6 */

void FUN_006bcb30(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_10;
  int local_8;

  piVar2 = param_1;
  iVar8 = param_2 - param_1[param_1[0x79] * 2 + 0x47];
  if (iVar8 < 0) {
    param_4 = param_4 + iVar8;
    iVar8 = 0;
  }
  param_3 = param_3 - param_1[param_1[0x79] * 2 + 0x48];
  if (param_3 < 0) {
    param_3 = 0;
    param_5 = param_5 + iVar8;
  }
  if ((0 < param_4) && (0 < param_5)) {
    iVar7 = param_1[0x7b];
    iVar5 = param_1[0x7c];
    iVar3 = (iVar8 % iVar7 + iVar7 + -1 + param_4) / iVar7;
    local_10 = (param_3 % iVar5 + iVar5 + -1 + param_5) / iVar5;
    uVar4 = iVar8 / iVar7;
    iVar5 = param_3 / iVar5;
    iVar8 = param_1[0x7d] + 7;
    iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
    iVar7 = iVar8 * iVar5;
    param_3 = param_1[0x88] + iVar7;
    iVar5 = param_1[0x7d] * iVar5;
    iVar9 = param_1[0x81] + iVar5 + uVar4;
    iVar5 = param_1[0x87] + iVar5 + uVar4;
    param_1 = (int *)(param_1[0x84] + iVar7);
    if (0 < local_10) {
      do {
        if (0 < iVar3) {
          iVar7 = iVar9 - uVar4;
          uVar6 = uVar4;
          local_8 = iVar3;
          do {
            if ((piVar2[0x81] == 0) || ((uint)*(byte *)(iVar7 + uVar6) == piVar2[0x80] - 1U)) {
              if ((piVar2[0x87] != 0) &&
                 ((uint)*(byte *)(iVar7 + (iVar5 - iVar9) + uVar6) != piVar2[0x86] - 1U)) {
                pbVar1 = (byte *)(param_3 + ((int)(uVar6 ^ 7) >> 3));
                *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              }
            }
            else {
              pbVar1 = (byte *)((int)param_1 + ((int)(uVar6 ^ 7) >> 3));
              *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              if ((piVar2[0x87] != 0) && (*(char *)(iVar7 + uVar6) != '\0')) {
                pbVar1 = (byte *)(param_3 + ((int)(uVar6 ^ 7) >> 3));
                *pbVar1 = *pbVar1 | '\x01' << ((uVar6 ^ 7) & 7);
              }
            }
            uVar6 = uVar6 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
        }
        iVar9 = iVar9 + piVar2[0x7d];
        iVar5 = iVar5 + piVar2[0x7d];
        param_3 = param_3 + iVar8;
        local_10 = local_10 + -1;
        param_1 = (int *)((int)param_1 + iVar8);
      } while (local_10 != 0);
    }
  }
  return;
}

