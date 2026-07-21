
uint FUN_007479cd(int param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_4c [15];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  iVar1 = param_1;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    iVar3 = FUN_00747f3b((AnonShape_00747F3B_C97131D7 *)param_1);
    if (iVar3 == 1) {
      uVar2 = 0x80040203;
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
        iVar3 = *(int *)(iVar1 + 4);
        *(int *)(iVar1 + 4) = iVar3 + 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar3 = (**(code **)(**(int **)(iVar1 + 8) + 0x34))(iVar3,local_4c);
        if (iVar3 != 0) {
LAB_00747a71:
          FUN_0074b916((int)local_4c);
          break;
        }
        puVar4 = CoTaskMemAlloc(0x48);
        *param_3 = puVar4;
        if (puVar4 == (undefined4 *)0x0) goto LAB_00747a71;
        param_3 = param_3 + 1;
        puVar5 = local_4c;
        for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
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
      uVar2 = (uint)(param_2 != 0);
    }
  }
  return uVar2;
}

