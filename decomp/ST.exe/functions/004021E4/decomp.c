
void __fastcall thunk_FUN_005de670(int param_1)

{
  byte bVar1;
  int iVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  HANDLE hFile;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  byte *pbVar8;
  void *unaff_EDI;
  LPVOID lpBuffer;
  byte abStack_478 [260];
  byte abStack_374 [260];
  char acStack_270 [260];
  byte abStack_16c [260];
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  byte *pbStack_24;
  LPVOID pvStack_20;
  int iStack_1c;
  uint uStack_18;
  HANDLE pvStack_14;
  HANDLE pvStack_10;
  LPVOID pvStack_c;
  DWORD DStack_8;
  
  *(undefined4 *)(param_1 + 0x6b2) = 0;
  *(undefined4 *)(param_1 + 0x6ae) = 0;
  *(undefined4 *)(param_1 + 0x69e) = 0;
  DStack_8 = 0;
  pvStack_c = (LPVOID)0x0;
  pvStack_14 = (HANDLE)0xffffffff;
  pvStack_10 = (HANDLE)0xffffffff;
  iStack_1c = param_1;
  if (*(int *)(param_1 + 0x69a) != 0) {
    FUN_006ab060((int *)(param_1 + 0x69a));
  }
  uStack_68 = DAT_00858df8;
  DAT_00858df8 = &uStack_68;
  iVar2 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_68;
    if (pvStack_14 != (HANDLE)0xffffffff) {
      CloseHandle(pvStack_14);
    }
    if (pvStack_10 != (HANDLE)0xffffffff) {
      CloseHandle(pvStack_10);
    }
    if (pvStack_c != (LPVOID)0x0) {
      FUN_006ab060(&pvStack_c);
    }
    *(undefined4 *)(iStack_1c + 0x6b2) = 0;
    *(undefined4 *)(iStack_1c + 0x6ae) = 0;
    *(undefined4 *)(iStack_1c + 0x69e) = 0;
    return;
  }
  FUN_0072e730(&DAT_0080ed16,abStack_478,abStack_374,abStack_16c,(byte *)0x0);
  uStack_18 = 0xffffffff;
  pbVar8 = abStack_16c;
  do {
    if (uStack_18 == 0) break;
    uStack_18 = uStack_18 - 1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0);
  uStack_18 = ~uStack_18;
  __makepath(acStack_270,(char *)abStack_478,(char *)abStack_374,(char *)abStack_16c,
             PTR_DAT_0079c1c0);
  pvVar3 = CreateFileA(acStack_270,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  pvStack_14 = pvVar3;
  if (pvVar3 == (HANDLE)0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x413);
  }
  DVar4 = SetFilePointer(pvVar3,0,(PLONG)0x0,2);
  iVar2 = iStack_1c;
  *(DWORD *)(iStack_1c + 0x6ae) = DVar4;
  if (DVar4 == 0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x415);
  }
  __makepath(acStack_270,(char *)abStack_478,(char *)abStack_374,(char *)abStack_16c,
             PTR_DAT_0079c1c4);
  hFile = CreateFileA(acStack_270,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  pvStack_10 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x41a);
  }
  DVar4 = SetFilePointer(hFile,0,(PLONG)0x0,2);
  *(DWORD *)(iVar2 + 0x6b2) = DVar4;
  if (DVar4 == 0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x41c);
  }
  pvStack_c = (LPVOID)FUN_006aac70(*(int *)(iVar2 + 0x6ae) + uStack_18 + *(int *)(iVar2 + 0x6b2));
  if (pvStack_c == (LPVOID)0x0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x41e);
  }
  lpBuffer = (LPVOID)(*(int *)(iVar2 + 0x6ae) + (int)pvStack_c);
  pbStack_24 = (byte *)((int)lpBuffer + *(int *)(iVar2 + 0x6b2));
  pvStack_20 = pvStack_c;
  DStack_8 = SetFilePointer(pvVar3,0,(PLONG)0x0,0);
  if (DStack_8 == 0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x421);
  }
  BVar5 = ReadFile(pvVar3,pvStack_20,*(DWORD *)(iVar2 + 0x6ae),&DStack_8,(LPOVERLAPPED)0x0);
  if ((BVar5 == 0) || (*(DWORD *)(iVar2 + 0x6ae) != DStack_8)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x422);
  }
  CloseHandle(pvVar3);
  pvVar3 = pvStack_10;
  DStack_8 = SetFilePointer(pvStack_10,0,(PLONG)0x0,0);
  if (DStack_8 == 0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x425);
  }
  BVar5 = ReadFile(pvVar3,lpBuffer,*(DWORD *)(iVar2 + 0x6b2),&DStack_8,(LPOVERLAPPED)0x0);
  if ((BVar5 == 0) || (*(DWORD *)(iVar2 + 0x6b2) != DStack_8)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x426);
  }
  CloseHandle(pvVar3);
  uVar6 = 0xffffffff;
  pbVar8 = abStack_16c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0);
  pbVar8 = abStack_16c;
  for (uVar7 = ~uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbStack_24 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbStack_24 = pbStack_24 + 4;
  }
  for (uVar6 = ~uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pbStack_24 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbStack_24 = pbStack_24 + 1;
  }
  *(LPVOID *)(iVar2 + 0x69a) = pvStack_c;
  uVar6 = *(int *)(iVar2 + 0x6b2) + *(int *)(iVar2 + 0x6ae) + uStack_18;
  *(uint *)(iVar2 + 0x69e) = uVar6;
  if ((DAT_00811764 == 0) || (*(int *)(DAT_00811764 + 0x28) != 1)) {
    *(undefined4 *)(iVar2 + 0x6a2) = 0x400;
    *(undefined4 *)(iVar2 + 0x6aa) = 5;
  }
  else {
    *(undefined4 *)(iVar2 + 0x6a2) = 0x1000;
    *(undefined4 *)(iVar2 + 0x6aa) = 0;
  }
  *(uint *)(iVar2 + 0x6a6) =
       (uint)(uVar6 % *(uint *)(iVar2 + 0x6a2) != 0) + uVar6 / *(uint *)(iVar2 + 0x6a2);
  DAT_00858df8 = (undefined4 *)uStack_68;
  return;
}

