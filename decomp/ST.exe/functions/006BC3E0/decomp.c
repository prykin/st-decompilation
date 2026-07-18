
undefined2 * FUN_006bc3e0(int param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined2 *)0x0) {
    puVar1 = (undefined2 *)FUN_006aac70(0x404);
    if (puVar1 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
  }
  FUN_006bc360(param_1,(undefined4 *)(puVar1 + 2),(int *)&param_2);
  *puVar1 = 0x300;
  puVar1[1] = param_2._0_2_;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return puVar1;
}

