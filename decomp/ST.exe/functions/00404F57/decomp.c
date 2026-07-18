
void __fastcall thunk_FUN_0060d220(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x240) == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x23c)) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x244) + iVar4;
        if (*(int *)(*(int *)(param_1 + 0x244) + iVar4) != 0) {
          if (*(int *)(iVar1 + 0x40) != 0) {
            thunk_FUN_0062c2a0((int *)(iVar1 + 0x40));
          }
          if (*(int *)(*(int *)(param_1 + 0x244) + 8 + iVar4) != 0) {
            FUN_006ab060((undefined4 *)(*(int *)(param_1 + 0x244) + 8 + iVar4));
          }
          *(undefined4 *)(*(int *)(param_1 + 0x244) + iVar4) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x44;
      } while (iVar3 < *(int *)(param_1 + 0x23c));
    }
  }
  else if ((*(int *)(param_1 + 0x240) == 1) && (piVar2 = *(int **)(param_1 + 0x244), *piVar2 != 0))
  {
    if (piVar2[2] != 0) {
      FUN_006ab060(piVar2 + 2);
    }
    **(undefined4 **)(param_1 + 0x244) = 0;
    return;
  }
  return;
}

