
uint __fastcall FUN_006b5a50(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0xffffffcc;
  }
  if (*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) {
    return 0xffffffce;
  }
  if (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc)) {
    return 2;
  }
  iVar1 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
  bVar4 = true;
  pcVar2 = *(char **)(param_1 + 0x1c);
  pcVar3 = *(char **)(param_2 + 0x1c);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  return (uint)!bVar4;
}

