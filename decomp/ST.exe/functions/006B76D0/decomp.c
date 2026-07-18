
void FUN_006b76d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      iVar2 = param_1[0xe];
      if ((iVar2 != 0) && (iVar2 != -1)) {
        (**(code **)(*piVar1 + 0x24))(piVar1,iVar2);
        param_1[0xe] = -1;
      }
      (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1);
    }
    for (puVar3 = (undefined4 *)param_1[0x11]; puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      FUN_006a5e90((undefined4 *)puVar3[4]);
    }
    FUN_006d25a0(param_1 + 0x11);
    FUN_006ab060(param_1 + 0xd);
    FUN_006ab060(param_1 + 0xc);
  }
  return;
}

