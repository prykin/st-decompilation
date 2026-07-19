
undefined4 * __cdecl
FUN_006f0ec0(uint param_1,byte *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  HANDLE hFile;
  BOOL BVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  byte *pbVar8;
  char *pcVar9;
  void *unaff_EDI;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  byte local_360 [256];
  byte local_260 [256];
  byte local_160 [256];
  InternalExceptionFrame local_60;
  _FILETIME local_1c;
  _FILETIME local_14;
  byte local_c [4];
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar3 = __setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_60.previous;
    if (local_8 != (undefined4 *)0x0) {
      FUN_007508f0((undefined4 *)*local_8);
      uVar6 = 0xffffffff;
      pcVar9 = (char *)((int)local_8 + 0x231);
      do {
        pcVar12 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar12 + -uVar6;
      pcVar12 = (char *)&DAT_00856ec0;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_006ab060(&local_8);
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Mf32int_cpp_007efaa4,0x77);
    return (undefined4 *)0x0;
  }
  DAT_00856ec0._0_1_ = 0;
  local_8 = FUN_006aac10(param_1);
  *local_8 = 0;
  FUN_0072e730(param_2,local_c,local_360,local_260,local_160);
  iVar3 = __strcmpi((char *)local_160,&DAT_007c7080);
  if ((iVar3 == 0) || (iVar3 = __strcmpi((char *)local_160,&DAT_007c7078), iVar3 == 0)) {
    __makepath((char *)((int)local_8 + 0x231),(char *)local_c,(char *)local_360,(char *)local_260,
               &DAT_007c7080);
  }
  else {
    uVar6 = 0xffffffff;
    pbVar8 = param_2;
    do {
      pbVar10 = pbVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pbVar10 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar10;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
    pbVar8 = pbVar10 + -uVar6;
    pbVar10 = (byte *)((int)local_8 + 0x231);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar10 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_007c7080;
    do {
      pcVar12 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar12;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar3 = -1;
    pcVar9 = (char *)((int)local_8 + 0x231);
    do {
      pcVar11 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar11 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar2 != '\0');
    pcVar9 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  local_8[1] = 0xff;
  local_8[2] = FUN_006f0e30;
  local_8[3] = FUN_006f0ea0;
  local_8[4] = 0;
  local_8[5] = param_4;
  hFile = CreateFileA((LPCSTR)((int)local_8 + 0x231),0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    BVar4 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_1c);
    if ((BVar4 != 0) && (BVar4 = FileTimeToLocalFileTime(&local_1c,&local_14), BVar4 != 0)) {
      FileTimeToSystemTime(&local_14,(LPSYSTEMTIME)((int)local_8 + 0x335));
    }
    CloseHandle(hFile);
  }
  if (param_3 == 1) {
    uVar5 = FUN_00750920(param_2,local_8 + 1,0,param_5);
  }
  else if (param_3 == 2) {
    uVar5 = FUN_00750940(param_2,local_8 + 1,0,param_5);
  }
  else {
    if (param_3 != 3) {
      uVar5 = FUN_00750970(param_2,local_8 + 1,0);
      *local_8 = uVar5;
      g_currentExceptionFrame = local_60.previous;
      return local_8;
    }
    uVar5 = FUN_00750970(param_2,local_8 + 1,0x100000);
  }
  *local_8 = uVar5;
  g_currentExceptionFrame = local_60.previous;
  return local_8;
}

