
char * FUN_007499dc(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar3 = 0;
  ppuVar2 = &PTR_DAT_007a1270;
  do {
    iVar1 = 0x10;
    bVar6 = true;
    pcVar4 = *ppuVar2;
    pcVar5 = param_1;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return *(char **)(&UNK_007a1278 + iVar3 * 0xc);
    }
    iVar1 = 0x10;
    bVar6 = true;
    pcVar4 = *ppuVar2;
    pcVar5 = "";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return "UNKNOWN";
    }
    iVar3 = iVar3 + 1;
    ppuVar2 = ppuVar2 + 3;
  } while( true );
}

