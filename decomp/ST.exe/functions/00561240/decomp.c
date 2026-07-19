
int * FUN_00561240(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = param_1;
  local_c = 0;
  param_1 = 0x75300000;
  local_18 = 0x8ad00000;
  local_8 = -0x75300000;
  iVar7 = iVar4 / 2;
  iVar6 = param_2 / 2;
  local_10 = Library::DKW::STR::FUN_006db640(param_3);
  iVar3 = FUN_006db6d0(param_3);
  local_14 = (iVar4 - iVar7) + -1;
  local_28 = local_14 * iVar3;
  local_40[0] = local_10 * iVar6 + local_28;
  local_14 = local_14 * local_10;
  local_18 = iVar3 * iVar6;
  local_40[1] = local_18 - local_14;
  if (local_40[1] < 0x75300000) {
    local_c = 0;
    param_1 = local_40[1];
  }
  if (-0x75300000 < local_40[1]) {
    local_8 = local_40[1];
  }
  local_40[2] = local_10 * iVar6 - iVar3 * iVar7;
  local_40[3] = local_18 + local_10 * iVar7;
  if (local_40[3] < param_1) {
    local_c = 1;
    param_1 = local_40[3];
  }
  if (local_8 < local_40[3]) {
    local_8 = local_40[3];
  }
  iVar4 = (param_2 - iVar6) + -1;
  iVar6 = iVar4 * iVar3;
  iVar4 = iVar4 * local_10;
  local_2c = local_10 * iVar7 - iVar6;
  local_30 = -(iVar3 * iVar7 + iVar4);
  if (local_2c < param_1) {
    local_c = 2;
    param_1 = local_2c;
  }
  if (local_8 < local_2c) {
    local_8 = local_2c;
  }
  local_28 = local_28 - iVar4;
  local_24 = -(iVar6 + local_14);
  if (local_24 < param_1) {
    local_c = 3;
    param_1 = local_24;
  }
  if (local_8 < local_24) {
    local_8 = local_24;
  }
  iVar4 = param_1 + 0x8000 >> 0x10;
  iVar3 = ((local_8 + 0x8000 >> 0x10) - iVar4) + 1;
  local_10 = iVar4;
  piVar5 = Library::DKW::LIB::FUN_006aac10(iVar3 * 8 + 0x1c);
  local_18 = 2;
  piVar5[4] = iVar3;
  piVar5[3] = iVar4;
  local_20 = local_40[local_c * 2];
  local_1c = local_40[local_c * 2 + 1] + 0x8000 >> 0x10;
  param_1 = local_c;
  iVar4 = local_1c;
  param_3 = local_20;
  do {
    param_1 = param_1 + 1;
    if (3 < param_1) {
      param_1 = 0;
    }
    iVar6 = local_40[param_1 * 2 + 1] + 0x8000 >> 0x10;
    if (iVar4 < iVar6) {
      local_14 = iVar6 - iVar4;
      local_8 = (local_40[param_1 * 2] - param_3) / local_14;
      iVar4 = iVar4 * 8;
      iVar7 = param_3 + 0x8000;
      param_3 = param_3 + local_14 * local_8;
      do {
        *(int *)(iVar4 + local_10 * -8 + 0x18 + (int)piVar5) = iVar7 >> 0x10;
        iVar7 = iVar7 + local_8;
        iVar4 = iVar4 + 8;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    piVar5[(iVar6 - local_10) * 2 + 6] = param_3 + 0x8000 >> 0x10;
    param_3 = local_40[param_1 * 2];
    local_18 = local_18 + -1;
    iVar4 = iVar6;
  } while (local_18 != 0);
  local_14 = 2;
  param_3 = local_20;
  do {
    param_1 = local_c + -1;
    if (param_1 < 0) {
      param_1 = 3;
    }
    iVar4 = local_40[param_1 * 2 + 1] + 0x8000 >> 0x10;
    if (local_1c < iVar4) {
      local_18 = iVar4 - local_1c;
      local_8 = (local_40[param_1 * 2] - param_3) / local_18;
      local_1c = local_1c * 8;
      iVar6 = param_3 + 0x8000;
      param_3 = param_3 + local_18 * local_8;
      do {
        *(int *)(local_1c + local_10 * -8 + 0x14 + (int)piVar5) = iVar6 >> 0x10;
        iVar6 = iVar6 + local_8;
        local_1c = local_1c + 8;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    piVar5[(iVar4 - local_10) * 2 + 5] = param_3 + 0x8000 >> 0x10;
    param_3 = local_40[param_1 * 2];
    local_14 = local_14 + -1;
    local_c = param_1;
    local_1c = iVar4;
  } while (local_14 != 0);
  iVar7 = 0;
  *piVar5 = 0;
  iVar4 = 30000;
  iVar6 = -30000;
  if (0 < iVar3) {
    do {
      iVar1 = piVar5[iVar7 * 2 + 5];
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
      iVar2 = piVar5[iVar7 * 2 + 6];
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      iVar7 = iVar7 + 1;
      *piVar5 = *piVar5 + (iVar2 - iVar1) + 1;
    } while (iVar7 < iVar3);
  }
  piVar5[1] = iVar4;
  piVar5[2] = (iVar6 - iVar4) + 1;
  return piVar5;
}

