
uint FUN_00747704(uint param_1,uint param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  uint local_8;
  
  uVar3 = param_1;
  if (param_3 == (int *)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    if (param_4 == (uint *)0x0) {
      if (1 < param_2) {
        return 0x80070057;
      }
    }
    else {
      *param_4 = 0;
    }
    local_8 = 0;
    bVar2 = FUN_00747e4e(param_1);
    if (CONCAT31(extraout_var,bVar2) == 1) {
      FUN_0074784f(param_1);
    }
    param_1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if ((int)param_2 <= (int)param_1) {
      param_1 = param_2;
    }
    if (param_1 == 0) {
      uVar3 = 1;
    }
    else {
      do {
        iVar4 = *(int *)(uVar3 + 4);
        if (*(int *)(uVar3 + 8) == iVar4) break;
        *(int *)(uVar3 + 4) = iVar4 + 1;
        iVar4 = (**(code **)(**(int **)(uVar3 + 0xc) + 0x1c))(iVar4);
        if (iVar4 == 0) {
          return 0x80040203;
        }
        iVar5 = FUN_0074dee5((void *)(uVar3 + 0x18),iVar4);
        if (iVar5 == 0) {
          piVar1 = (int *)(iVar4 + 0xc);
          *param_3 = (int)piVar1;
          (**(code **)(*piVar1 + 4))(piVar1);
          local_8 = local_8 + 1;
          param_3 = param_3 + 1;
          FUN_0074df72((void *)(uVar3 + 0x18),iVar4);
          param_1 = param_1 - 1;
        }
      } while (param_1 != 0);
      if (param_4 != (uint *)0x0) {
        *param_4 = local_8;
      }
      uVar3 = (uint)(param_2 != local_8);
    }
  }
  return uVar3;
}

