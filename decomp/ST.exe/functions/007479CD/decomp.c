
uint FUN_007479cd(int param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_4c [15];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    bVar2 = FUN_00747f3b((AnonShape_00747F3B_C97131D7 *)param_1);
    if (CONCAT31(extraout_var,bVar2) == 1) {
      uVar3 = 0x80040203;
    }
    else {
      if (param_4 == (int *)0x0) {
        if (1 < param_2) {
          return 0x80070057;
        }
      }
      else {
        *param_4 = 0;
      }
      param_1 = 0;
      while (param_2 != 0) {
        FUN_0074b91d(local_4c);
        iVar4 = *(int *)(iVar1 + 4);
        *(int *)(iVar1 + 4) = iVar4 + 1;
        iVar4 = (**(code **)(**(int **)(iVar1 + 8) + 0x34))(iVar4,local_4c);
        if (iVar4 != 0) {
LAB_00747a71:
          FUN_0074b916((int)local_4c);
          break;
        }
        puVar5 = CoTaskMemAlloc(0x48);
        *param_3 = puVar5;
        if (puVar5 == (undefined4 *)0x0) goto LAB_00747a71;
        param_3 = param_3 + 1;
        puVar6 = local_4c;
        for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 - 1;
        local_8 = 0;
        local_c = 0;
        local_10 = 0;
        FUN_0074b916((int)local_4c);
      }
      if (param_4 != (int *)0x0) {
        *param_4 = param_1;
      }
      uVar3 = (uint)(param_2 != 0);
    }
  }
  return uVar3;
}

