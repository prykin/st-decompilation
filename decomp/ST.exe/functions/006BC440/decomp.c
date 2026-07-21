
undefined4
FUN_006bc440(AnonShape_006BC440_9548EA86 *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;

  iVar8 = param_3 - *(int *)(&param_1->field_0x11c + param_1->field_01E4 * 8);
  if (iVar8 < 0) {
    param_5 = param_5 + iVar8;
    iVar8 = 0;
  }
  param_4 = param_4 - *(int *)(&param_1->field_0x120 + param_1->field_01E4 * 8);
  if (param_4 < 0) {
    param_4 = 0;
    param_6 = param_6 + iVar8;
  }
  if ((0 < param_5) && (0 < param_6)) {
    iVar1 = param_1->field_01EC;
    iVar5 = param_1->field_01F0;
    iVar3 = (iVar8 % iVar1 + iVar1 + -1 + param_5) / iVar1;
    iVar4 = (param_4 % iVar5 + iVar5 + -1 + param_6) / iVar5;
    iVar2 = param_1->field_01F4;
    iVar5 = param_4 / iVar5;
    param_4 = 0;
    iVar5 = iVar2 * iVar5;
    iVar9 = param_1->field_0204 + iVar5 + iVar8 / iVar1;
    pcVar6 = (char *)(param_1->field_021C + iVar5 + iVar8 / iVar1);
    if (0 < iVar4) {
      do {
        param_3 = 0;
        if (0 < iVar3) {
          pcVar7 = pcVar6;
          do {
            if (((param_1->field_0204 == 0) || (pcVar7[iVar9 - (int)pcVar6] != '\0')) &&
               ((param_2 != 0 || ((param_1->field_021C == 0 || (*pcVar7 != '\0')))))) {
              return 0;
            }
            param_3 = param_3 + 1;
            pcVar7 = pcVar7 + 1;
          } while (param_3 < iVar3);
        }
        iVar9 = iVar9 + iVar2;
        pcVar6 = pcVar6 + iVar2;
        param_4 = param_4 + 1;
      } while (param_4 < iVar4);
    }
  }
  return 1;
}

