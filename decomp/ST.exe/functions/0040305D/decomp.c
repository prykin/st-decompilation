
void thunk_FUN_005ff150(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iStack_c;
  int iStack_8;
  
  iStack_c = 0;
  piVar6 = param_2;
  if (0 < param_3) {
    do {
      iVar2 = *(int *)(param_1 + 0x10 + *piVar6 * 0x18);
      iVar3 = *(int *)(param_1 + *piVar6 * 0x18 + 0xc);
      piVar5 = param_2;
      iStack_8 = iStack_c;
      if (0 < iStack_c) {
        do {
          iVar4 = *piVar5;
          iVar1 = param_1 + iVar4 * 0x18;
          if (*(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0xc) <= iVar2 + iVar3) {
            *piVar5 = *piVar6;
            *piVar6 = iVar4;
          }
          iStack_8 = iStack_8 + -1;
          piVar5 = piVar5 + 1;
        } while (iStack_8 != 0);
      }
      iStack_c = iStack_c + 1;
      piVar6 = piVar6 + 1;
    } while (iStack_c < param_3);
  }
  return;
}

