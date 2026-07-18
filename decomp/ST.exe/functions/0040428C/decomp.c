
int thunk_FUN_004de410(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_8;
  
  iVar2 = param_2;
  iStack_8 = 0;
  iVar1 = (int)param_1 * 0xa62;
  iVar3 = *(int *)(&DAT_007f57ee + iVar1);
  if ((iVar3 != 0) && (uVar4 = 0, 0 < *(int *)(iVar3 + 0xc))) {
    do {
      FUN_006acc70(iVar3,uVar4,&param_1);
      iVar3 = thunk_FUN_004ddb30(param_1,iVar2);
      if (iVar3 != 0) {
        if (param_3 - iStack_8 <= iVar3) {
          thunk_FUN_004ddc30(param_1,iVar2,param_3 - iStack_8);
          return param_3;
        }
        thunk_FUN_004ddc30(param_1,iVar2,iVar3);
        iStack_8 = iStack_8 + iVar3;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(&DAT_007f57ee + iVar1);
    } while ((int)uVar4 < *(int *)(iVar3 + 0xc));
    return iStack_8;
  }
  return 0;
}

