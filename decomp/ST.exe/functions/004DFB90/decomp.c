
int FUN_004dfb90(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_3;
  iVar5 = 0;
  iVar1 = param_1 * 0xa62;
  iVar4 = *(int *)(&DAT_007f57f2 + iVar1);
  if ((iVar4 != 0) && (param_1 = 0, 0 < *(int *)(iVar4 + 0xc))) {
    do {
      FUN_006acc70(iVar4,param_1,&param_3);
      iVar4 = *(int *)(param_3 + 0x4d0);
      if (iVar4 != 0) {
        if ((param_2 - iVar5) * iVar2 <= iVar4) {
          *(int *)(param_3 + 0x4d0) = *(int *)(param_3 + 0x4d0) - (param_2 - iVar5) * iVar2;
          return param_2;
        }
        iVar3 = (iVar4 / iVar2) * iVar2;
        if (iVar3 != 0) {
          iVar5 = iVar5 + iVar4;
          *(int *)(param_3 + 0x4d0) = iVar4 - iVar3;
        }
      }
      param_1 = param_1 + 1;
      iVar4 = *(int *)(&DAT_007f57f2 + iVar1);
    } while ((int)param_1 < *(int *)(iVar4 + 0xc));
  }
  return iVar5;
}

