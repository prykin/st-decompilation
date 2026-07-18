
void FUN_006b9910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      puVar1 = puVar2;
    }
    *puVar1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}

