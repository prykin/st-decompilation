
bool thunk_FUN_00571810(char *param_1)

{
  byte bVar1;
  char **ppcVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 == (char *)0x0) {
    return false;
  }
  Library::MSVCRT::_strncpy((char *)&param_1,param_1,4);
  param_1 = (char *)((uint)param_1 & 0xffffff);
  FUN_006b77e0((char *)&param_1,(byte *)&param_1);
  pbVar3 = &DAT_007ca2e4;
  ppcVar2 = &param_1;
  while( true ) {
    bVar1 = *(byte *)ppcVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return true;
    }
    bVar1 = *(byte *)((int)ppcVar2 + 1);
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    ppcVar2 = (char **)((int)ppcVar2 + 2);
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

