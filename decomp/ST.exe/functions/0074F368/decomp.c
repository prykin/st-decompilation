
undefined4
FUN_0074f368(undefined4 param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,char *param_6)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_3 == (char *)0x0) {
LAB_0074f393:
    if (param_6 != (char *)0x0) {
      iVar2 = 0x10;
      bVar4 = true;
      pcVar3 = &DAT_007a1dd8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar4 = *param_6 == *pcVar3;
        param_6 = param_6 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (!bVar4) goto LAB_0074f3a5;
    }
    *param_2 = param_4;
    param_2[1] = param_5;
    uVar1 = 0;
  }
  else {
    iVar2 = 0x10;
    bVar4 = true;
    pcVar3 = &DAT_007a1dd8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar4 = *param_3 == *pcVar3;
      param_3 = param_3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) goto LAB_0074f393;
LAB_0074f3a5:
    uVar1 = 0x80070057;
  }
  return uVar1;
}

