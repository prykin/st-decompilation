
void FUN_00562e10(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;

  iVar1 = *(int *)(DAT_00803300 + param_4 * 0x14);
  iVar2 = *(int *)(DAT_00803300 + param_4 * 0x14 + 4);
  iVar3 = DAT_008032ec;
  if (param_4 < DAT_0080337c) {
    iVar3 = DAT_00803378;
  }
  iVar6 = 0;
  if (0 < DAT_0080337c) {
    iVar7 = 0;
    puVar5 = param_3;
    do {
      iVar4 = FUN_006acf90(*(int *)(iVar7 + DAT_00803300),*(int *)(iVar7 + 4 + DAT_00803300),iVar1,
                           iVar2);
      if (iVar4 < DAT_00803378 / 2 + iVar3 / 2) {
        *puVar5 = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x14;
      puVar5 = puVar5 + 1;
    } while (iVar6 < DAT_0080337c);
  }
  if (iVar6 < DAT_00803398) {
    iVar7 = iVar6 * 0x14;
    puVar5 = param_3 + iVar6;
    do {
      iVar4 = FUN_006acf90(*(int *)(iVar7 + DAT_00803300),*(int *)(iVar7 + 4 + DAT_00803300),iVar1,
                           iVar2);
      if (iVar4 < DAT_008032ec / 2 + iVar3 / 2) {
        *puVar5 = 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x14;
      puVar5 = puVar5 + 1;
    } while (iVar6 < DAT_00803398);
  }
  return;
}

