
int FUN_0075f8e0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar8;
  int *local_c;
  int local_8;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(param_1 + 0x58);
  iVar6 = 1;
  do {
    iVar7 = iVar6;
    iVar6 = iVar7 + 1;
    iVar4 = iVar6;
    if (1 < iVar1) {
      iVar5 = iVar1 + -1;
      do {
        iVar4 = iVar4 * iVar6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  } while (iVar4 <= iVar2);
  if (iVar7 < 2) {
    FUN_006a5e40(0x37,DAT_007ed77c,0x7f2ea0,0xd5);
  }
  local_8 = 1;
  iVar6 = iVar1;
  piVar8 = param_2;
  if (0 < iVar1) {
    for (; iVar4 = iVar1, iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = iVar7;
      piVar8 = piVar8 + 1;
    }
    do {
      local_8 = local_8 * iVar7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  do {
    iVar6 = 0;
    bVar3 = false;
    if (iVar1 < 1) {
      return local_8;
    }
    local_c = &DAT_007a2298;
    do {
      iVar4 = iVar6;
      if (*(int *)(param_1 + 0x24) == 2) {
        iVar4 = *local_c;
      }
      iVar7 = param_2[iVar4] + 1;
      iVar5 = (local_8 / param_2[iVar4]) * iVar7;
      if (iVar5 - iVar2 != 0 && iVar2 <= iVar5) {
        if (!bVar3) {
          return local_8;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      param_2[iVar4] = iVar7;
      local_c = local_c + 1;
      bVar3 = true;
      local_8 = iVar5;
    } while (iVar6 < iVar1);
  } while( true );
}

