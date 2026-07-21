
void FUN_00564dd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = *(int *)(DAT_00803300 + (int)param_4 * 0x14);
  iVar2 = *(int *)(DAT_00803300 + (int)param_4 * 0x14 + 4);
  iVar3 = DAT_008032ec;
  if ((int)param_4 < DAT_0080337c) {
    iVar3 = DAT_00803378;
  }
  iVar5 = 0;
  if (0 < DAT_0080337c) {
    iVar6 = 0;
    param_4 = param_3;
    do {
      iVar4 = FUN_006acf90(*(int *)(iVar6 + DAT_00803300),*(int *)(iVar6 + 4 + DAT_00803300),iVar1,
                           iVar2);
      if (iVar4 < DAT_00803378 / 2 + iVar3 / 4) {
        *param_4 = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      param_4 = param_4 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < DAT_0080337c);
  }
  if (iVar5 < DAT_00803398) {
    iVar6 = iVar5 * 0x14;
    param_3 = param_3 + iVar5;
    do {
      iVar4 = FUN_006acf90(*(int *)(iVar6 + DAT_00803300),*(int *)(iVar6 + 4 + DAT_00803300),iVar1,
                           iVar2);
      if (iVar4 < DAT_008032ec / 2 + iVar3 / 4) {
        *param_3 = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
      param_3 = param_3 + 1;
    } while (iVar5 < DAT_00803398);
  }
  return;
}

