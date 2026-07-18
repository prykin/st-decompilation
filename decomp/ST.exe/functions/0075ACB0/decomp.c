
int FUN_0075acb0(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  piVar3 = param_1;
  iVar5 = *(int *)((int)param_1 + 0x19a);
  iVar1 = *(int *)((int)param_1 + 0x12e);
  while ((param_1[0x22] < param_1[0x24] ||
         ((param_1[0x22] == param_1[0x24] && ((uint)param_1[0x23] <= (uint)param_1[0x25]))))) {
    iVar4 = (*(code *)**(undefined4 **)((int)param_1 + 0x1a2))(param_1);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = param_1[0x34];
  local_18 = 0;
  if (0 < param_1[7]) {
    local_c = (undefined4 *)(iVar5 + 0x48);
    iVar5 = 4 - (int)param_2;
    piVar6 = param_2;
    do {
      if (*(int *)(iVar4 + 0x30) != 0) {
        local_8 = (undefined4 *)
                  (**(code **)(*piVar3 + 0x20))
                            (piVar3,*local_c,piVar3[0x25] * *(int *)(iVar4 + 0xc),
                             *(int *)(iVar4 + 0xc),0);
        if ((uint)piVar3[0x25] < iVar1 - 1U) {
          local_14 = *(uint *)(iVar4 + 0xc);
        }
        else {
          local_14 = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0xc);
          if (local_14 == 0) {
            local_14 = *(uint *)(iVar4 + 0xc);
          }
        }
        pcVar2 = *(code **)(*(int *)((int)piVar3 + 0x1ae) + iVar5 + (int)piVar6);
        param_2 = (int *)*piVar6;
        if (0 < (int)local_14) {
          do {
            iVar7 = 0;
            param_1 = (int *)*local_8;
            local_10 = 0;
            if (*(int *)(iVar4 + 0x1c) != 0) {
              do {
                (*pcVar2)(piVar3,iVar4,param_1,param_2,iVar7);
                param_1 = param_1 + 0x40;
                iVar7 = iVar7 + *(int *)(iVar4 + 0x24);
                local_10 = local_10 + 1;
              } while (local_10 < *(uint *)(iVar4 + 0x1c));
            }
            param_2 = param_2 + *(int *)(iVar4 + 0x24);
            local_8 = local_8 + 1;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
      }
      local_18 = local_18 + 1;
      local_c = local_c + 1;
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + 0x54;
    } while (local_18 < piVar3[7]);
  }
  iVar5 = piVar3[0x25];
  piVar3[0x25] = iVar5 + 1U;
  return 4 - (uint)(iVar5 + 1U < *(uint *)((int)piVar3 + 0x12e));
}

