
uint FUN_007488a3(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_10;
  int *local_c;
  int *local_8;
  
  iVar2 = param_1;
  iVar3 = (**(code **)(**(int **)(param_1 + -0x28) + 0x18))();
  iVar6 = 0;
  param_1 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = (**(code **)(**(int **)(iVar2 + -0x28) + 0x1c))(iVar6);
      piVar1 = (int *)(iVar4 + 0xc);
      uVar5 = (**(code **)(*piVar1 + 0x24))(piVar1,&local_10);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      if ((local_10 == 1) && (iVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_8), -1 < iVar4)) {
        param_1 = param_1 + 1;
        iVar4 = (**(code **)*local_8)(local_8,&DAT_007a1b60,&local_c);
        (**(code **)(*local_8 + 8))(local_8);
        if (iVar4 < 0) {
          return 0;
        }
        iVar4 = (**(code **)(*local_c + 0x20))(local_c);
        (**(code **)(*local_c + 8))(local_c);
        if (iVar4 != 1) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return (uint)(param_1 != 0);
}

