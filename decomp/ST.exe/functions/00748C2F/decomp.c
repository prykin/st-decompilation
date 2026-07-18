
undefined4 FUN_00748c2f(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfeef;
  }
  else if (param_3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = param_2[1];
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff | 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = param_2[1];
    *(undefined4 *)(param_1 + 0x28) = *param_3;
    uVar1 = param_3[1];
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) | 0x110;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
  }
  return 0;
}

