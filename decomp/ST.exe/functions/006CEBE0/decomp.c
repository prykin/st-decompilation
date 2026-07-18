
void FUN_006cebe0(char *param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,
                 char param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_5;
  iVar4 = param_2 - param_5;
  iVar3 = param_4 - param_5;
  if ((0 < param_5) && (0 < param_6)) {
    param_5 = param_6;
    do {
      iVar5 = iVar2;
      if (0 < iVar2) {
        do {
          cVar1 = *param_3;
          param_3 = param_3 + 1;
          if (cVar1 != param_7) {
            *param_1 = cVar1;
          }
          param_1 = param_1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_1 = param_1 + iVar4;
      param_3 = param_3 + iVar3;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

