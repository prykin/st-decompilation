
undefined4 FUN_006bc440(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = param_3 - *(int *)(param_1 + 0x11c + *(int *)(param_1 + 0x1e4) * 8);
  if (iVar8 < 0) {
    param_5 = param_5 + iVar8;
    iVar8 = 0;
  }
  param_4 = param_4 - *(int *)(param_1 + 0x120 + *(int *)(param_1 + 0x1e4) * 8);
  if (param_4 < 0) {
    param_4 = 0;
    param_6 = param_6 + iVar8;
  }
  if ((0 < param_5) && (0 < param_6)) {
    iVar1 = *(int *)(param_1 + 0x1ec);
    iVar5 = *(int *)(param_1 + 0x1f0);
    iVar3 = (iVar8 % iVar1 + iVar1 + -1 + param_5) / iVar1;
    iVar4 = (param_4 % iVar5 + iVar5 + -1 + param_6) / iVar5;
    iVar2 = *(int *)(param_1 + 500);
    iVar5 = param_4 / iVar5;
    param_4 = 0;
    iVar5 = iVar2 * iVar5;
    iVar9 = *(int *)(param_1 + 0x204) + iVar5 + iVar8 / iVar1;
    pcVar6 = (char *)(*(int *)(param_1 + 0x21c) + iVar5 + iVar8 / iVar1);
    if (0 < iVar4) {
      do {
        param_3 = 0;
        if (0 < iVar3) {
          pcVar7 = pcVar6;
          do {
            if (((*(int *)(param_1 + 0x204) == 0) || (pcVar7[iVar9 - (int)pcVar6] != '\0')) &&
               ((param_2 != 0 || ((*(int *)(param_1 + 0x21c) == 0 || (*pcVar7 != '\0')))))) {
              return 0;
            }
            param_3 = param_3 + 1;
            pcVar7 = pcVar7 + 1;
          } while (param_3 < iVar3);
        }
        iVar9 = iVar9 + iVar2;
        pcVar6 = pcVar6 + iVar2;
        param_4 = param_4 + 1;
      } while (param_4 < iVar4);
    }
  }
  return 1;
}

