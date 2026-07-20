
uint * FUN_0069c8b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_68 [9];
  int local_44 [3];
  uint *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  void *local_8;
  
  iVar1 = param_1;
  puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x10,10);
  if (((puVar2 != (uint *)0x0) && (param_1 != 0)) && (0 < param_3)) {
    local_18 = 0;
    local_1c = 0;
    local_20 = (int *)(param_1 + 2);
    local_2c = param_3;
    iVar5 = param_2 * 0xe;
    local_34 = iVar5;
    do {
      if (0 < param_2) {
        param_1 = local_18;
        param_3 = local_1c;
        local_14 = local_20;
        local_28 = param_2;
        do {
          uVar6 = 0xffffffff;
          local_24 = *local_14;
          local_30 = thunk_FUN_00696310(local_8,param_1,param_2,local_68,(int *)0x0);
          local_10 = 0;
          if (local_30 < 1) {
LAB_0069ca03:
            local_44[0] = 0;
            local_44[1] = 0;
            local_44[2] = 0;
            local_38 = (uint *)0x0;
            local_38 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
            local_44[0] = local_24;
            uVar6 = Library::DKW::TBL::FUN_006ae1c0(puVar2,local_44);
            if (uVar6 < puVar2[3]) {
              iVar5 = puVar2[2] * uVar6 + puVar2[7];
            }
            else {
              iVar5 = 0;
            }
            uVar4 = thunk_FUN_0069c710(iVar1,param_1,iVar5);
            if (-1 < (int)uVar4) {
              *(uint *)(param_3 + 10 + iVar1) = uVar6;
            }
          }
          else {
            local_c = local_68;
            do {
              uVar4 = *(uint *)(iVar1 + 10 + *local_c * 0xe);
              if ((int)uVar4 < 0) break;
              if (*(int *)(iVar1 + *local_c * 0xe + 2) == local_24) {
                if (uVar6 == 0xffffffff) {
                  uVar6 = uVar4;
                  if (((uVar4 < puVar2[3]) && (iVar5 = puVar2[2] * uVar4 + puVar2[7], iVar5 != 0))
                     && (uVar3 = thunk_FUN_0069c710(iVar1,param_1,iVar5), -1 < (int)uVar3)) {
                    *(uint *)(param_3 + 10 + iVar1) = uVar4;
                  }
                }
                else if (uVar6 != uVar4) {
                  uVar4 = *(uint *)(iVar1 + 10 + local_68[local_10] * 0xe);
                  uVar3 = uVar6;
                  if ((int)uVar4 < (int)uVar6) {
                    uVar3 = uVar4;
                    uVar4 = uVar6;
                  }
                  thunk_FUN_0069c790(puVar2,iVar1,uVar3,uVar4);
                  break;
                }
              }
              local_10 = local_10 + 1;
              local_c = local_c + 1;
            } while (local_10 < local_30);
            if ((int)uVar6 < 0) goto LAB_0069ca03;
          }
          param_3 = param_3 + 0xe;
          local_14 = (int *)((int)local_14 + 0xe);
          param_1 = param_1 + 1;
          local_28 = local_28 + -1;
          iVar5 = local_34;
        } while (local_28 != 0);
      }
      local_18 = local_18 + param_2;
      local_1c = local_1c + iVar5;
      local_20 = (int *)((int)local_20 + iVar5);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return puVar2;
}

