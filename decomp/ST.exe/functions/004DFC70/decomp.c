
int __thiscall FUN_004dfc70(void *this,int *param_1)

{
  int *piVar1;
  STAllPlayersC_GetBoatWeaponInfo_param_1Enum SVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar1 = param_1;
  uVar5 = 0;
  local_8 = 0;
  iVar4 = (int)param_1 * 0xa62;
  iVar3 = *(int *)((int)&DAT_007f4e29 + iVar4);
  if (iVar3 != 0) {
    local_c = 0;
    local_10 = 0;
    local_14 = this;
    if (*(int *)(iVar3 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar3,uVar5,&param_1);
        if (param_1 != (int *)0x0) {
          if (param_1[8] == 0x14) {
            puVar9 = &local_18;
            puVar8 = &local_8;
            puVar7 = &local_20;
            SVar2 = (**(code **)(*param_1 + 0x2c))();
            iVar3 = STAllPlayersC::GetBoatWeaponInfo(SVar2,puVar7,puVar8,puVar9);
            if (iVar3 == 2) {
LAB_004dfd49:
              local_10 = 1;
              local_c = local_c + (int)(0x5dc / (longlong)(int)local_8);
            }
          }
          else if (((param_1[8] == 1000) &&
                   (iVar3 = (**(code **)(*param_1 + 0x2c))(),
                   *(int *)(&DAT_007926b0 + iVar3 * 4) != 0)) &&
                  (iVar3 = (**(code **)(*param_1 + 0x2c))(),
                  *(int *)(&DAT_00793c98 + iVar3 * 8) == 2)) {
            iVar6 = 0;
            iVar3 = (**(code **)(*param_1 + 0x2c))();
            local_8 = thunk_FUN_004e8230((int)piVar1,iVar3 + -0x32,iVar6);
            iVar3 = (**(code **)(*param_1 + 0x2c))();
            local_18 = *(undefined4 *)(&DAT_00793ea8 + iVar3 * 8);
            goto LAB_004dfd49;
          }
        }
        iVar3 = *(int *)((int)&DAT_007f4e29 + iVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(iVar3 + 0xc));
    }
    uVar5 = 0;
    iVar3 = *(int *)(&DAT_007f57f2 + iVar4);
    iVar6 = 0;
    if (iVar3 == 0) {
      if (local_10 != 0) {
        return 1;
      }
    }
    else {
      if (*(int *)(iVar3 + 0xc) != 0) {
        do {
          FUN_006acc70(iVar3,uVar5,&local_1c);
          local_8 = thunk_FUN_004df910(local_1c);
          local_8 = local_8 / 500;
          if (local_8 != 0) {
            iVar6 = iVar6 + (int)(0x5dc / (ulonglong)(longlong)(int)local_8);
          }
          iVar3 = *(int *)(&DAT_007f57f2 + iVar4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(iVar3 + 0xc));
      }
      if ((iVar6 < local_c) && (iVar3 = (((local_c - iVar6) * 100) / iVar6 + -100) / 100, 0 < iVar3)
         ) {
        return iVar3;
      }
    }
  }
  return 0;
}

