
undefined4 __cdecl FUN_004b31c0(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int local_8;
  
  piVar1 = param_1;
  iVar5 = 0;
  local_8 = 0;
  bVar2 = thunk_FUN_0044e1b0((int)param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (DAT_007fa170 != 0) {
    *(undefined4 *)(DAT_007fa170 + 4) = 0;
    iVar3 = FUN_006b1190(DAT_007fa170,&local_c);
    iVar4 = param_2;
    while (-1 < iVar3) {
      if ((((local_c != 0) && (*(int **)(local_c + 0x24) == piVar1)) &&
          ((iVar4 == 0 || (*(int *)(local_c + 0x18) != iVar4)))) &&
         ((((*(int *)(local_c + 0x2ec) == 3 || (*(int *)(local_c + 0x2a0) != 0)) ||
           (*(int *)(local_c + 0x2e0) != 0)) || (*(int *)(local_c + 0x2dc) != 0)))) {
        local_8 = local_8 + 1;
      }
      iVar3 = FUN_006b1190(DAT_007fa170,&local_c);
      iVar5 = local_8;
    }
    if (DAT_00808a97 <= (uint)*(ushort *)(&DAT_007f4e2d + (int)piVar1 * 0xa62) + iVar5) {
      return 0;
    }
  }
  iVar3 = (int)piVar1 * 0xa62;
  iVar4 = *(int *)((int)&DAT_007f4e29 + iVar3);
  if (iVar4 != 0) {
    uVar6 = 0;
    if (*(int *)(iVar4 + 0xc) != 0) {
      do {
        FUN_006acc70(iVar4,uVar6,&param_1);
        if (((param_1 != (int *)0x0) &&
            ((((iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x32 ||
               (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x40)) ||
              ((iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x49 ||
               (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 == 0x5c)))) &&
             (((*(int *)((int)param_1 + 0x361) == 1 && (iVar4 = param_1[0x134], iVar4 != 0)) &&
              (iVar4 != 1)))))) && (iVar4 != 2)) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = *(int *)((int)&DAT_007f4e29 + iVar3);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(iVar4 + 0xc));
    }
    if (DAT_00808a97 <= (uint)*(ushort *)(&DAT_007f4e2d + iVar3) + iVar5) {
      return 0;
    }
  }
  return 1;
}

