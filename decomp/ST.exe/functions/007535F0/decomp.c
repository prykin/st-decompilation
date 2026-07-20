
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 007535F0 -> 0072F110 @ 007536C3 | 007535F0 -> 0072F110 @ 00753784 */

bool FUN_007535f0(char *_Drive)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte local_408 [256];
  byte local_308 [256];
  byte local_208 [256];
  char local_108 [260];
  
  pcVar7 = _Drive;
  Library::MSVCRT::FUN_0072e730((byte *)_Drive,(byte *)&_Drive,local_408,local_308,local_208);
  iVar2 = Library::MSVCRT::__strcmpi((char *)local_208,&DAT_007c7078);
  if ((iVar2 == 0) ||
     (iVar2 = Library::MSVCRT::__strcmpi((char *)local_208,&DAT_007c7080), iVar2 == 0)) {
    Library::MSVCRT::__makepath
              (local_108,(char *)&_Drive,(char *)local_408,(char *)local_308,&DAT_007c7078);
  }
  else {
    uVar4 = 0xffffffff;
    pcVar6 = pcVar7;
    do {
      pcVar9 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar9 + -uVar4;
    pcVar9 = local_108;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_007c7078;
    do {
      pcVar9 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    pcVar6 = local_108;
    do {
      pcVar8 = pcVar6;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    pcVar6 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  iVar2 = FUN_00754f40(local_108);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = Library::MSVCRT::__strcmpi((char *)local_208,&DAT_007c7078);
  if ((iVar2 == 0) ||
     (iVar2 = Library::MSVCRT::__strcmpi((char *)local_208,&DAT_007c7080), iVar2 == 0)) {
    Library::MSVCRT::__makepath
              (local_108,(char *)&_Drive,(char *)local_408,(char *)local_308,&DAT_007c7080);
  }
  else {
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar6 + -uVar4;
    pcVar6 = local_108;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_007c7080;
    do {
      pcVar6 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    pcVar7 = local_108;
    do {
      pcVar9 = pcVar7;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar4;
    pcVar6 = pcVar9 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  DVar3 = GetFileAttributesA(local_108);
  return DVar3 != 0xffffffff;
}

