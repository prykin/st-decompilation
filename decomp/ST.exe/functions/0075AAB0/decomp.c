
undefined4 FUN_0075aab0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar6 = *(int *)((int)param_1 + 0x19a);
  local_8 = 0;
  local_24 = iVar6;
  if (0 < *(int *)((int)param_1 + 0x136)) {
    local_1c = local_38;
    local_10 = (int *)((int)param_1 + 0x13a);
    do {
      iVar1 = *(int *)(*local_10 + 0xc);
      iVar1 = (**(code **)(*param_1 + 0x20))
                        (param_1,*(undefined4 *)(iVar6 + 0x48 + *(int *)(*local_10 + 4) * 4),
                         param_1[0x23] * iVar1,iVar1,1);
      piVar5 = local_10 + 1;
      *local_1c = iVar1;
      local_1c = local_1c + 1;
      local_8 = local_8 + 1;
      local_10 = piVar5;
    } while (local_8 < *(int *)((int)param_1 + 0x136));
  }
  local_c = *(int *)(iVar6 + 0x18);
  if (local_c < *(int *)(iVar6 + 0x1c)) {
    do {
      local_10 = *(int **)(iVar6 + 0x14);
      if (local_10 < *(int **)((int)param_1 + 0x14a)) {
        do {
          iVar1 = 0;
          local_8 = 0;
          if (0 < *(int *)((int)param_1 + 0x136)) {
            local_1c = local_38;
            local_18 = (int *)((int)param_1 + 0x13a);
            do {
              local_20 = 0;
              iVar6 = *local_18;
              iVar3 = *(int *)(iVar6 + 0x34);
              if (0 < *(int *)(iVar6 + 0x38)) {
                local_28 = iVar3 * (int)local_10 * 0x100;
                local_14 = (int *)(*local_1c + local_c * 4);
                do {
                  iVar2 = local_28 + *local_14;
                  iVar4 = 0;
                  if (0 < iVar3) {
                    piVar5 = (int *)(local_24 + 0x20 + iVar1 * 4);
                    do {
                      *piVar5 = iVar2;
                      iVar3 = *(int *)(iVar6 + 0x34);
                      iVar1 = iVar1 + 1;
                      piVar5 = piVar5 + 1;
                      iVar2 = iVar2 + 0x100;
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < iVar3);
                  }
                  local_14 = local_14 + 1;
                  local_20 = local_20 + 1;
                } while (local_20 < *(int *)(iVar6 + 0x38));
              }
              local_18 = local_18 + 1;
              local_1c = local_1c + 1;
              local_8 = local_8 + 1;
              iVar6 = local_24;
            } while (local_8 < *(int *)((int)param_1 + 0x136));
          }
          iVar1 = (**(code **)(*(int *)((int)param_1 + 0x1aa) + 4))(param_1,iVar6 + 0x20);
          if (iVar1 == 0) {
            *(int *)(iVar6 + 0x18) = local_c;
            *(int **)(iVar6 + 0x14) = local_10;
            return 0;
          }
          local_10 = (int *)((int)local_10 + 1);
        } while (local_10 < *(int **)((int)param_1 + 0x14a));
      }
      local_c = local_c + 1;
      *(undefined4 *)(iVar6 + 0x14) = 0;
    } while (local_c < *(int *)(iVar6 + 0x1c));
  }
  iVar6 = param_1[0x23];
  param_1[0x23] = iVar6 + 1U;
  if (*(uint *)((int)param_1 + 0x12e) <= iVar6 + 1U) {
    (**(code **)(*(int *)((int)param_1 + 0x1a2) + 0xc))(param_1);
    return 4;
  }
  FUN_0075a7a0((int)param_1);
  return 3;
}

