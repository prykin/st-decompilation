
void __cdecl FUN_00726870(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)piVar1 + 0x11) != 0) {
      iVar2 = 0;
      if (0 < *piVar1) {
        do {
          FUN_006f20e0((uint *)(*(int *)((int)piVar1 + 0x11) + iVar2 * 4));
          piVar1 = (int *)*param_1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *piVar1);
      }
      FUN_006ab060((undefined4 *)(*param_1 + 0x11));
    }
    FUN_006ab060(param_1);
  }
  return;
}

