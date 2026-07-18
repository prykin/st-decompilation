
undefined4 FUN_00748de3(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(LPVOID *)(param_1 + 0x3c) != (LPVOID)0x0) {
    FUN_0074bc50(*(LPVOID *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
  }
  else {
    puVar1 = FUN_0074bc6a(param_2);
    *(undefined4 **)(param_1 + 0x3c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
      return 0x8007000e;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return 0;
}

