
void FUN_0075bf40(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  
  iVar1 = *(int *)((int)param_1 + 0x1aa);
  bVar7 = *(int *)((int)param_1 + 0x17e) != 0;
  bVar2 = false;
  if (bVar7) {
    if ((*(int *)((int)param_1 + 0x182) < *(int *)((int)param_1 + 0x17e)) ||
       (0x3f < *(int *)((int)param_1 + 0x182))) {
      bVar2 = true;
    }
    if (*(int *)((int)param_1 + 0x136) == 1) goto LAB_0075bf99;
  }
  else if (*(int *)((int)param_1 + 0x182) == 0) goto LAB_0075bf99;
  bVar2 = true;
LAB_0075bf99:
  if ((*(int *)((int)param_1 + 0x186) != 0) &&
     (*(int *)((int)param_1 + 0x18a) != *(int *)((int)param_1 + 0x186) + -1)) {
    bVar2 = true;
  }
  if ((0xd < *(int *)((int)param_1 + 0x18a)) || (bVar2)) {
    RaiseInternalException(0xe,DAT_007ed77c,s_E__DKW_JPG_C_jdphuff_c_007f2e10,0x7e);
  }
  iVar6 = 0;
  if (0 < *(int *)((int)param_1 + 0x136)) {
    piVar5 = (int *)((int)param_1 + 0x13a);
    do {
      iVar3 = *(int *)((int)param_1 + 0x17e);
      if (iVar3 <= *(int *)((int)param_1 + 0x182)) {
        puVar4 = (undefined4 *)(*(int *)(*piVar5 + 4) * 0x100 + param_1[0x26] + iVar3 * 4);
        do {
          iVar3 = iVar3 + 1;
          *puVar4 = *(undefined4 *)((int)param_1 + 0x18a);
          puVar4 = puVar4 + 1;
        } while (iVar3 <= *(int *)((int)param_1 + 0x182));
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < *(int *)((int)param_1 + 0x136));
  }
  if (*(int *)((int)param_1 + 0x186) == 0) {
    if (bVar7) {
      *(code **)(iVar1 + 4) = FUN_0075c440;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0075c180;
    }
  }
  else if (bVar7) {
    *(code **)(iVar1 + 4) = FUN_0075c790;
  }
  else {
    *(code **)(iVar1 + 4) = FUN_0075c680;
  }
  local_10 = 0;
  if (0 < *(int *)((int)param_1 + 0x136)) {
    local_14 = (undefined4 *)(iVar1 + 0x18);
    local_c = (int *)((int)param_1 + 0x13a);
    do {
      if (bVar7) {
        iVar6 = *(int *)(*local_c + 0x18);
        if (((iVar6 < 0) || (3 < iVar6)) || (param_1[iVar6 + 0x2f] == 0)) {
          RaiseInternalException(0x31,DAT_007ed77c,s_E__DKW_JPG_C_jdphuff_c_007f2e10,0xaf);
        }
        piVar5 = (int *)(iVar1 + 0x2c + iVar6 * 4);
        FUN_0075b540(param_1,param_1[iVar6 + 0x2f],piVar5);
        *(int *)(iVar1 + 0x3c) = *piVar5;
      }
      else if (*(int *)((int)param_1 + 0x186) == 0) {
        iVar6 = *(int *)(*local_c + 0x14);
        if (((iVar6 < 0) || (3 < iVar6)) || (param_1[iVar6 + 0x2b] == 0)) {
          RaiseInternalException(0x31,DAT_007ed77c,s_E__DKW_JPG_C_jdphuff_c_007f2e10,0xa7);
        }
        FUN_0075b540(param_1,param_1[iVar6 + 0x2b],(int *)(iVar1 + 0x2c + iVar6 * 4));
      }
      *local_14 = 0;
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      local_c = local_c + 1;
    } while (local_10 < *(int *)((int)param_1 + 0x136));
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x28) = param_1[0x43];
  return;
}

