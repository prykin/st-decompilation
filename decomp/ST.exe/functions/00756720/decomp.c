
undefined4 FUN_00756720(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[3] == 0xca) {
    FUN_00756e50(param_1);
    if (param_1[0xe] != 0) {
      param_1[3] = 0xcf;
      return 1;
    }
    param_1[3] = 0xcb;
  }
  if (param_1[3] == 0xcb) {
    if (*(int *)(*(int *)((int)param_1 + 0x1a2) + 0x10) != 0) {
      while( true ) {
        if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
          (**(code **)param_1[1])(param_1);
        }
        iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x1a2))(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        if (iVar2 == 2) break;
        iVar1 = param_1[1];
        if ((iVar1 != 0) && ((iVar2 == 3 || (iVar2 == 1)))) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          iVar2 = param_1[1];
          if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 4)) {
            *(int *)(iVar2 + 8) = *(int *)((int)param_1 + 0x12e) + *(int *)(iVar2 + 8);
          }
        }
      }
    }
    param_1[0x24] = param_1[0x22];
    uVar3 = FUN_00756800((int)param_1);
    return uVar3;
  }
  if (param_1[3] != 0xcc) {
    FUN_006a5e40(0x12,DAT_007ed77c,0x7f2d50,0x52);
  }
  uVar3 = FUN_00756800((int)param_1);
  return uVar3;
}

