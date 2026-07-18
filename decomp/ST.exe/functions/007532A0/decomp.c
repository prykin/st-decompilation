
void FUN_007532a0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_00754ec0((int)param_1);
    if (param_1[2] != 0) {
      FUN_006b9890((int *)(param_1[2] + 0x4c));
    }
    FUN_006d46a0((undefined4 *)param_1[2],0);
    FUN_006a5e90((undefined4 *)param_1[2]);
    FUN_006a5e90((undefined4 *)param_1[6]);
    FUN_006a5e90((undefined4 *)param_1[7]);
    FUN_006a5e90(param_1);
  }
  return;
}

