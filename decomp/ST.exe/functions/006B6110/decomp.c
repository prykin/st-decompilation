
void FUN_006b6110(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = 0;
    if (0 < (int)param_1[1]) {
      puVar2 = param_1 + 2;
      do {
        FUN_006a5e90((undefined4 *)*puVar2);
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 5;
      } while (iVar1 < (int)param_1[1]);
    }
    FUN_006a5e90(param_1);
  }
  return;
}

