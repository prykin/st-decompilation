
int __fastcall FUN_007217e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x138) + 4) = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x138);
    if (*(int *)(iVar2 + 8) <= *(int *)(iVar2 + 4)) {
      return iVar5;
    }
    iVar3 = *(int *)(iVar2 + 4) + 1;
    pcVar6 = *(char **)(*(int *)(iVar2 + 0x14) + -4 + iVar3 * 4);
    *(int *)(iVar2 + 4) = iVar3;
    if (pcVar6 == (char *)0x0) {
      return iVar5;
    }
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = iVar5 + (~uVar4 - 1);
  } while( true );
}

