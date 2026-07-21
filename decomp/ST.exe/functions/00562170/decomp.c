
int FUN_00562170(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;

  iVar4 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = (int *)0x0;
  if (0 < DAT_0080338c) {
    local_14 = 0;
    do {
      iVar1 = FUN_006db910(DAT_00803304,DAT_00803308,*(int *)(local_14 + DAT_00803310),
                           *(int *)(local_14 + 4 + DAT_00803310));
      if (0 < param_2) {
        local_c = local_c + param_2;
        iVar5 = param_2;
        piVar6 = param_1;
        do {
          iVar4 = FUN_006db910(DAT_00803304,DAT_00803308,*(int *)(DAT_00803300 + *piVar6 * 0x14),
                               *(int *)(DAT_00803300 + 4 + *piVar6 * 0x14));
          uVar3 = iVar4 - iVar1 >> 0x1f;
          iVar4 = (iVar4 - iVar1 ^ uVar3) - uVar3;
          if (0xb4 < iVar4) {
            iVar4 = 0x168 - iVar4;
          }
          piVar6 = piVar6 + 1;
          iVar4 = local_8 + iVar4;
          iVar5 = iVar5 + -1;
          local_8 = iVar4;
        } while (iVar5 != 0);
      }
      local_10 = (int *)((int)local_10 + 1);
      local_14 = local_14 + 0x14;
    } while ((int)local_10 < DAT_0080338c);
  }
  iVar5 = 1;
  iVar1 = *(int *)(DAT_00803300 + 0xc + *param_1 * 0x14);
  local_10 = param_1;
  if (1 < param_2) {
    do {
      local_10 = local_10 + 1;
      iVar4 = *local_10;
      iVar1 = iVar1 + *(int *)(DAT_00803300 + 0xc + iVar4 * 0x14);
      iVar4 = FUN_006db910(DAT_00803304,DAT_00803308,*(int *)(DAT_00803300 + iVar4 * 0x14),
                           *(int *)(DAT_00803300 + iVar4 * 0x14 + 4));
      if (0 < iVar5) {
        local_c = local_c + iVar5;
        piVar6 = param_1;
        local_14 = iVar5;
        do {
          iVar2 = FUN_006db910(DAT_00803304,DAT_00803308,*(int *)(DAT_00803300 + *piVar6 * 0x14),
                               *(int *)(DAT_00803300 + 4 + *piVar6 * 0x14));
          uVar3 = iVar2 - iVar4 >> 0x1f;
          iVar2 = (iVar2 - iVar4 ^ uVar3) - uVar3;
          if (0xb4 < iVar2) {
            iVar2 = 0x168 - iVar2;
          }
          piVar6 = piVar6 + 1;
          local_8 = local_8 + iVar2;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar4 = local_8;
    } while (iVar5 < param_2);
  }
  if (0 < local_c) {
    iVar4 = iVar4 + (DAT_00803328 * iVar4) / local_c;
  }
  return iVar1 + iVar4;
}

