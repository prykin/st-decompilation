
int __thiscall FUN_004dfc70(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar1 = param_1;
  uVar4 = 0;
  local_8 = 0;
  iVar3 = (int)param_1 * 0xa62;
  iVar2 = *(int *)((int)&DAT_007f4e29 + iVar3);
  if (iVar2 != 0) {
    local_c = 0;
    local_10 = 0;
    local_14 = this;
    if (*(int *)(iVar2 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar2,uVar4,&param_1);
        if (param_1 != (int *)0x0) {
          if (param_1[8] == 0x14) {
            puVar8 = &local_18;
            puVar7 = &local_8;
            puVar6 = &local_20;
            iVar2 = (**(code **)(*param_1 + 0x2c))();
            iVar2 = thunk_FUN_004458d0(iVar2,puVar6,puVar7,puVar8);
            if (iVar2 == 2) {
LAB_004dfd49:
              local_10 = 1;
              local_c = local_c + (int)(0x5dc / (longlong)(int)local_8);
            }
          }
          else if (((param_1[8] == 1000) &&
                   (iVar2 = (**(code **)(*param_1 + 0x2c))(),
                   *(int *)(&DAT_007926b0 + iVar2 * 4) != 0)) &&
                  (iVar2 = (**(code **)(*param_1 + 0x2c))(),
                  *(int *)(&DAT_00793c98 + iVar2 * 8) == 2)) {
            iVar5 = 0;
            iVar2 = (**(code **)(*param_1 + 0x2c))();
            local_8 = thunk_FUN_004e8230((int)piVar1,iVar2 + -0x32,iVar5);
            iVar2 = (**(code **)(*param_1 + 0x2c))();
            local_18 = *(undefined4 *)(&DAT_00793ea8 + iVar2 * 8);
            goto LAB_004dfd49;
          }
        }
        iVar2 = *(int *)((int)&DAT_007f4e29 + iVar3);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar2 + 0xc));
    }
    uVar4 = 0;
    iVar2 = *(int *)(&DAT_007f57f2 + iVar3);
    iVar5 = 0;
    if (iVar2 == 0) {
      if (local_10 != 0) {
        return 1;
      }
    }
    else {
      if (*(int *)(iVar2 + 0xc) != 0) {
        do {
          FUN_006acc70(iVar2,uVar4,&local_1c);
          local_8 = thunk_FUN_004df910(local_1c);
          local_8 = local_8 / 500;
          if (local_8 != 0) {
            iVar5 = iVar5 + (int)(0x5dc / (ulonglong)(longlong)(int)local_8);
          }
          iVar2 = *(int *)(&DAT_007f57f2 + iVar3);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(iVar2 + 0xc));
      }
      if ((iVar5 < local_c) && (iVar2 = (((local_c - iVar5) * 100) / iVar5 + -100) / 100, 0 < iVar2)
         ) {
        return iVar2;
      }
    }
  }
  return 0;
}

