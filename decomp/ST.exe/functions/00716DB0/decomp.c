
void __cdecl FUN_00716db0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*(uint **)((int)piVar1 + 0x21) != (uint *)0x0) {
      if ((char)piVar1[2] == '\x1d') {
        FUN_006f20e0(*(uint **)((int)piVar1 + 0x21));
      }
      else {
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            FUN_006f20e0((uint *)(*(int *)((int)piVar1 + 0x21) + iVar2 * 4));
            piVar1 = (int *)*param_1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *piVar1);
        }
      }
      FUN_006ab060((undefined4 *)(*param_1 + 0x21));
    }
    piVar1 = (int *)*param_1;
    if (*(int *)((int)piVar1 + 0x29) != 0) {
      if ((char)piVar1[2] == '\x1d') {
        FUN_006f20e0((uint *)((int)piVar1 + 0x25));
      }
      else {
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            FUN_006f20e0((uint *)(*(int *)((int)piVar1 + 0x29) + iVar2 * 4));
            piVar1 = (int *)*param_1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *piVar1);
        }
      }
      FUN_006ab060((undefined4 *)(*param_1 + 0x29));
    }
    FUN_006ab060(param_1);
  }
  return;
}

