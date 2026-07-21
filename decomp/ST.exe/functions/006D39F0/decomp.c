
void FUN_006d39f0(undefined4 *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;

  if ((0 < param_5) && (0 < param_6)) {
    iVar3 = param_5;
    do {
      do {
        bVar1 = *param_3;
        param_3 = param_3 + 1;
        *param_1 = *(undefined4 *)(param_7 + (uint)bVar1 * 4);
        param_1 = param_1 + 1;
        iVar4 = iVar3 + -1;
        bVar2 = 0 < iVar3;
        iVar3 = iVar4;
      } while (iVar4 != 0 && bVar2);
      param_3 = param_3 + (param_4 - param_5);
      param_1 = (undefined4 *)((int)param_1 + param_2 + param_5 * -4);
      iVar4 = param_6 + -1;
      bVar2 = 0 < param_6;
      iVar3 = param_5;
      param_6 = iVar4;
    } while (iVar4 != 0 && bVar2);
  }
  return;
}

