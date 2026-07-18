
uint FUN_0074f1f0(undefined4 param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = 0x10;
    bVar4 = true;
    pcVar3 = &DAT_007a1dd8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar4 = *param_2 == *pcVar3;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    uVar1 = (uint)!bVar4;
  }
  return uVar1;
}

