
int __thiscall thunk_FUN_004dfc70(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  piVar1 = param_1;
  uVar4 = 0;
  uStack_8 = 0;
  iVar3 = (int)param_1 * 0xa62;
  iVar2 = *(int *)((int)&DAT_007f4e29 + iVar3);
  if (iVar2 != 0) {
    iStack_c = 0;
    iStack_10 = 0;
    pvStack_14 = this;
    if (*(int *)(iVar2 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar2,uVar4,&param_1);
        if (param_1 != (int *)0x0) {
          if (param_1[8] == 0x14) {
            puVar8 = &uStack_18;
            puVar7 = &uStack_8;
            puVar6 = &uStack_20;
            iVar2 = (**(code **)(*param_1 + 0x2c))();
            iVar2 = thunk_FUN_004458d0(iVar2,puVar6,puVar7,puVar8);
            if (iVar2 == 2) {
LAB_004dfd49:
              iStack_10 = 1;
              iStack_c = iStack_c + (int)(0x5dc / (longlong)(int)uStack_8);
            }
          }
          else if (((param_1[8] == 1000) &&
                   (iVar2 = (**(code **)(*param_1 + 0x2c))(),
                   *(int *)(&DAT_007926b0 + iVar2 * 4) != 0)) &&
                  (iVar2 = (**(code **)(*param_1 + 0x2c))(),
                  *(int *)(&DAT_00793c98 + iVar2 * 8) == 2)) {
            iVar5 = 0;
            iVar2 = (**(code **)(*param_1 + 0x2c))();
            uStack_8 = thunk_FUN_004e8230((int)piVar1,iVar2 + -0x32,iVar5);
            iVar2 = (**(code **)(*param_1 + 0x2c))();
            uStack_18 = *(undefined4 *)(&DAT_00793ea8 + iVar2 * 8);
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
      if (iStack_10 != 0) {
        return 1;
      }
    }
    else {
      if (*(int *)(iVar2 + 0xc) != 0) {
        do {
          FUN_006acc70(iVar2,uVar4,&iStack_1c);
          uStack_8 = thunk_FUN_004df910(iStack_1c);
          uStack_8 = uStack_8 / 500;
          if (uStack_8 != 0) {
            iVar5 = iVar5 + (int)(0x5dc / (ulonglong)(longlong)(int)uStack_8);
          }
          iVar2 = *(int *)(&DAT_007f57f2 + iVar3);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(iVar2 + 0xc));
      }
      if ((iVar5 < iStack_c) &&
         (iVar2 = (((iStack_c - iVar5) * 100) / iVar5 + -100) / 100, 0 < iVar2)) {
        return iVar2;
      }
    }
  }
  return 0;
}

