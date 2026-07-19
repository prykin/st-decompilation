
bool FUN_007535f0(byte *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte local_408 [256];
  byte local_308 [256];
  byte local_208 [256];
  byte local_108 [260];
  
  pbVar8 = param_1;
  Library::MSVCRT::FUN_0072e730(param_1,(byte *)&param_1,local_408,local_308,local_208);
  iVar3 = Library::MSVCRT::__strcmpi((char *)local_208,&DAT_007c7078);
  if ((iVar3 == 0) ||
     (iVar3 = Library::MSVCRT::__strcmpi((char *)local_208,&DAT_007c7080), iVar3 == 0)) {
    Library::MSVCRT::__makepath
              ((char *)local_108,(char *)&param_1,(char *)local_408,(char *)local_308,&DAT_007c7078)
    ;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar7 = pbVar8;
    do {
      pbVar9 = pbVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar9 = pbVar7 + 1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar9;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
    pbVar7 = pbVar9 + -uVar5;
    pbVar9 = local_108;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar9 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_007c7078;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    iVar3 = -1;
    pbVar7 = local_108;
    do {
      pbVar9 = pbVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar9 = pbVar7 + 1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar9;
    } while (bVar1 != 0);
    pbVar7 = (byte *)(pcVar11 + -uVar5);
    pbVar9 = pbVar9 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar9 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
    }
  }
  iVar3 = FUN_00754f40((LPCSTR)local_108);
  if (iVar3 == 0) {
    return false;
  }
  iVar3 = Library::MSVCRT::__strcmpi((char *)local_208,&DAT_007c7078);
  if ((iVar3 == 0) ||
     (iVar3 = Library::MSVCRT::__strcmpi((char *)local_208,&DAT_007c7080), iVar3 == 0)) {
    Library::MSVCRT::__makepath
              ((char *)local_108,(char *)&param_1,(char *)local_408,(char *)local_308,&DAT_007c7080)
    ;
  }
  else {
    uVar5 = 0xffffffff;
    do {
      pbVar7 = pbVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar7 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar7;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
    pbVar8 = pbVar7 + -uVar5;
    pbVar7 = local_108;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar7 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_007c7080;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    iVar3 = -1;
    pbVar8 = local_108;
    do {
      pbVar7 = pbVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar7 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar7;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar11 + -uVar5);
    pbVar7 = pbVar7 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar7 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    }
  }
  DVar4 = GetFileAttributesA((LPCSTR)local_108);
  return DVar4 != 0xffffffff;
}

