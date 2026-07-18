
bool __fastcall thunk_FUN_00550110(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(byte *)(param_1 + 0x4e) < *(byte *)(param_1 + 0x4d)) {
    *(undefined2 *)(*(int *)(param_1 + 0x3d) + 5) = 0;
    *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
    thunk_FUN_00550190(param_1);
    return true;
  }
  if (*(int *)(param_1 + 0x3d) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x3d) + 5) = *(undefined2 *)(param_1 + 0x57);
    bVar1 = *(short *)(param_1 + 0x57) != 0;
    if (bVar1) {
      thunk_FUN_00550190(param_1);
    }
    *(undefined2 *)(param_1 + 0x57) = 0;
  }
  return bVar1;
}

