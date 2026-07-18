
int FUN_006c87f0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar3 = (iVar4 + 7U >> 3) + 0x18;
  if (iVar4 < 1) {
    return iVar3;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  do {
    if ((char *)*puVar5 != (char *)0x0) {
      uVar2 = 0xffffffff;
      pcVar6 = (char *)*puVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar3 = iVar3 + ~uVar2;
    }
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return iVar3;
    }
  } while( true );
}

