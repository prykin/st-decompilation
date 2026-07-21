
bool __fastcall FUN_0074ba06(char *param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;

  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = "";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_1 == *pcVar2;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  return !bVar3;
}

