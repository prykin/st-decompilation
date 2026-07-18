
byte * __cdecl FUN_00736af0(byte *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  byte *pbVar5;
  
  pbVar3 = param_1;
  pbVar2 = param_1;
  if (DAT_0085a36c == 0) {
    pbVar3 = (byte *)_strncpy((char *)param_1,(char *)param_2,param_3);
  }
  else {
    do {
      while( true ) {
        param_1 = pbVar2;
        if (param_3 == 0) goto LAB_00736bd9;
        sVar4 = param_3 - 1;
        if (((&DAT_0085a481)[*param_2] & 4) == 0) break;
        *param_1 = *param_2;
        pbVar5 = param_1 + 1;
        if (sVar4 == 0) {
          *param_1 = 0;
          param_1 = pbVar5;
          param_3 = sVar4;
          goto LAB_00736bd9;
        }
        param_3 = param_3 - 2;
        *pbVar5 = param_2[1];
        param_2 = param_2 + 2;
        pbVar2 = param_1 + 2;
        if (*pbVar5 == 0) {
          *param_1 = 0;
          param_1 = param_1 + 2;
          goto LAB_00736bd9;
        }
      }
      *param_1 = *param_2;
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      pbVar2 = param_1;
      param_3 = sVar4;
    } while (bVar1 != 0);
LAB_00736bd9:
    while (param_3 != 0) {
      *param_1 = 0;
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    }
  }
  return pbVar3;
}

