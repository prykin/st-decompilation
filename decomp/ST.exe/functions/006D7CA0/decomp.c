
void FUN_006d7ca0(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;

  if ((0 < param_3) && (-1 < param_4 + -1)) {
    do {
      pbVar1 = param_1;
      iVar2 = param_3;
      if (-1 < param_3 + -1) {
        do {
          param_1 = pbVar1 + 1;
          iVar2 = iVar2 + -1;
          *pbVar1 = *(byte *)((uint)*pbVar1 + param_5);
          pbVar1 = param_1;
        } while (iVar2 != 0);
      }
      param_1 = param_1 + (param_2 - param_3);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

