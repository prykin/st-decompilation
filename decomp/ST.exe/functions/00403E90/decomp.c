
undefined4 thunk_FUN_004b6fc0(char param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((int)&DAT_007f579a + param_1 * 0xa62);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1 = FUN_006ae290((uint *)0x0,0x14,0xc,0x14);
  *(uint **)(&DAT_007f57b2 + param_1 * 0xa62) = puVar1;
  return 0;
}

