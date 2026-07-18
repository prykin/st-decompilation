
void FUN_006d7770(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if ((short)piVar1[1] == -0x50ee) {
    *(uint *)(param_1 + 8) = (uint)*(ushort *)(piVar1 + 2);
    *(uint *)(param_1 + 0xc) = (uint)*(ushort *)((int)piVar1 + 10);
    *(uint *)(param_1 + 0x10) = (uint)*(ushort *)(piVar1 + 4);
    *(uint *)(param_1 + 0x14) = (uint)*(ushort *)((int)piVar1 + 6);
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(int *)(param_1 + 0x28) = piVar1[0x14] + (int)piVar1;
    *(int *)(param_1 + 0x2c) = piVar1[0x15] + (int)piVar1;
    *(int *)(param_1 + 0x24) = *piVar1 + (int)piVar1;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}

