
void __fastcall FUN_005c00d0(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 local_8;
  
  bVar2 = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x29) = 2;
  *(undefined4 *)(param_1 + 0x2d) = 0x20;
  do {
    iVar1 = *(int *)(param_1 + 0x8f + local_8 * 4);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x25) = iVar1;
      if (bVar2 == 0) {
        *(uint *)(param_1 + 0x31) = (uint)(*(char *)(param_1 + 0x67) != '\0');
      }
      else {
        *(undefined4 *)(param_1 + 0x31) = 1;
      }
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
    }
    bVar2 = bVar2 + 1;
    local_8 = (uint)bVar2;
  } while (bVar2 < 4);
  if ((*(int *)(param_1 + 0x9f) != 0) && (*(char *)(param_1 + 0x67) != '\0')) {
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x9f);
    *(undefined4 *)(param_1 + 0x31) = 1;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
  }
  return;
}

