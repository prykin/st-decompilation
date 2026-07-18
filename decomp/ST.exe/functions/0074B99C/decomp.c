
undefined4 __thiscall FUN_0074b99c(void *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = this;
  pcVar3 = param_1;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = (char *)((int)this + 0x10);
    pcVar3 = param_1 + 0x10;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      iVar1 = 0x10;
      bVar4 = true;
      pcVar2 = (char *)((int)this + 0x2c);
      pcVar3 = param_1 + 0x2c;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if ((bVar4) && (iVar1 = *(int *)((int)this + 0x40), iVar1 == *(int *)(param_1 + 0x40))) {
        if (iVar1 != 0) {
          bVar4 = true;
          pcVar2 = *(char **)((int)this + 0x44);
          pcVar3 = *(char **)(param_1 + 0x44);
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = *pcVar2 == *pcVar3;
            pcVar2 = pcVar2 + 1;
            pcVar3 = pcVar3 + 1;
          } while (bVar4);
          if (!bVar4) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

