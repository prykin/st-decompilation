
void FUN_00759f50(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar1 = param_1;
  puVar2 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x50);
  *(undefined4 **)((int)param_1 + 0x196) = puVar2;
  *puVar2 = FUN_0075a0f0;
  if (param_2 != 0) {
    FUN_006a5e40(4,DAT_007ed77c,0x7f2de0,0x1eb);
  }
  if (*(int *)(*(int *)((int)param_1 + 0x1b2) + 8) == 0) {
    param_1 = *(int **)((int)param_1 + 0x12a);
  }
  else {
    if (*(int *)((int)param_1 + 0x12a) < 2) {
      FUN_006a5e40(0x2e,DAT_007ed77c,0x7f2de0,0x1f2);
    }
    FUN_0075a040(param_1);
    param_1 = (int *)(*(int *)((int)param_1 + 0x12a) + 2);
  }
  param_2 = 0;
  if (0 < piVar1[7]) {
    piVar4 = (int *)(piVar1[0x34] + 0x24);
    puVar2 = puVar2 + 2;
    do {
      uVar3 = (**(code **)(*piVar1 + 8))
                        (piVar1,1,piVar4[-2] * *piVar4,
                         ((piVar4[-6] * *piVar4) / *(int *)((int)piVar1 + 0x12a)) * (int)param_1);
      *puVar2 = uVar3;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
      piVar4 = piVar4 + 0x15;
    } while (param_2 < piVar1[7]);
  }
  return;
}

