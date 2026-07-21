
undefined4 __thiscall FUN_0074b99c(void *this,AnonShape_0074B99C_A57FB945 *param_1)

{
  int iVar1;
  char *pcVar2;
  AnonShape_0074B99C_A57FB945 *pAVar3;
  char *pcVar4;
  bool bVar5;

  iVar1 = 0x10;
  bVar5 = true;
  pcVar2 = this;
  pAVar3 = param_1;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *pcVar2 == *(char *)pAVar3;
    pcVar2 = pcVar2 + 1;
    pAVar3 = (AnonShape_0074B99C_A57FB945 *)&pAVar3->field_0x1;
  } while (bVar5);
  if (bVar5) {
    iVar1 = 0x10;
    bVar5 = true;
    pcVar2 = (char *)((int)this + 0x10);
    pcVar4 = &param_1->field_0x10;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      iVar1 = 0x10;
      bVar5 = true;
      pcVar2 = (char *)((int)this + 0x2c);
      pcVar4 = &param_1->field_0x2c;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *pcVar2 == *pcVar4;
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if ((bVar5) && (iVar1 = *(int *)((int)this + 0x40), iVar1 == param_1->field_0040)) {
        if (iVar1 != 0) {
          bVar5 = true;
          pcVar2 = *(char **)((int)this + 0x44);
          pcVar4 = param_1->field_0044;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar5 = *pcVar2 == *pcVar4;
            pcVar2 = pcVar2 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar5);
          if (!bVar5) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

