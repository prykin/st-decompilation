
void FUN_00708ca0(byte *param_1,int param_2,ushort *param_3,int param_4,uint param_5,byte *param_6,
                 undefined4 param_7,uint param_8,int param_9,int param_10)

{
  byte bVar1;
  int iVar2;
  
  if (-1 < param_10 + -1) {
    do {
      iVar2 = param_9;
      if (-1 < param_9 + -1) {
        do {
          bVar1 = *param_6;
          param_6 = param_6 + 1;
          if ((bVar1 != param_8) && (param_5 <= *param_3)) {
            *param_1 = bVar1;
          }
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      param_1 = param_1 + (param_2 - param_9);
      param_3 = (ushort *)((int)param_3 + param_4 + param_9 * -2);
      param_10 = param_10 + -1;
    } while (param_10 != 0);
  }
  return;
}

