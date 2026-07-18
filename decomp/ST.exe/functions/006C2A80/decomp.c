
undefined4 FUN_006c2a80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  puVar1 = FUN_006aac10(0xb8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  puVar1[1] = param_2;
  *param_1 = puVar1;
  return 0;
}

