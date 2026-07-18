
void __cdecl FUN_0071a8d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_c;
  
  iVar4 = 0;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      local_c = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        do {
          iVar2 = *(int *)(iVar1 + 0xc);
          if (*(int **)(iVar4 + iVar2) != (int *)0x0) {
            iVar3 = 0;
            if (0 < **(int **)(iVar4 + iVar2)) {
              iVar5 = 5;
              do {
                if (*(int *)(*(int *)(iVar4 + iVar2) + iVar5) != 0) {
                  FUN_006f20e0((uint *)(*(int *)(iVar4 + iVar2) + iVar5));
                }
                iVar3 = iVar3 + 1;
                iVar5 = iVar5 + 5;
                iVar2 = *(int *)(iVar1 + 0xc);
              } while (iVar3 < **(int **)(iVar4 + iVar2));
            }
            FUN_006ab060((undefined4 *)(*(int *)(iVar1 + 0xc) + iVar4));
          }
          local_c = local_c + 1;
          iVar4 = iVar4 + 4;
        } while (local_c < *(int *)(iVar1 + 8));
      }
      FUN_006ab060((undefined4 *)(iVar1 + 0xc));
    }
    if (*(byte **)(iVar1 + 4) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(iVar1 + 4));
    }
    FUN_006ab060(param_1);
  }
  return;
}

