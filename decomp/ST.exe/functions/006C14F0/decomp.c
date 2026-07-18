
void FUN_006c14f0(int *param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    if (puVar1[1] != 0) {
      FUN_006ab060(puVar1 + 1);
    }
    FUN_006ab060(puVar1 + 2);
  }
  FUN_006b9890(param_1);
  return;
}

