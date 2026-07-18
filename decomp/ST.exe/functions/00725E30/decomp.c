
void __cdecl FUN_00725e30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(short *)(iVar1 + 0x23)) {
      do {
        if (*(int *)(iVar1 + 0x25) == 0) {
          FUN_006ab060((undefined4 *)(iVar1 + 0x2d + iVar2 * 4));
        }
        else {
          FUN_006f20e0((uint *)(iVar1 + 0x2d + iVar2 * 4));
        }
        iVar1 = *param_1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(short *)(iVar1 + 0x23));
    }
    FUN_006ab060(param_1);
  }
  return;
}

