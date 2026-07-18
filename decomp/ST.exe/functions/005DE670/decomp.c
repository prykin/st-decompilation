
void __fastcall FUN_005de670(int param_1)

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
  byte local_478 [260];
  byte local_374 [260];
  char local_270 [260];
  byte local_16c [260];
  undefined4 local_68;
  undefined4 local_64 [16];
  byte *local_24;
  LPVOID local_20;
  int local_1c;
  uint local_18;
  HANDLE local_14;
  HANDLE local_10;
  LPVOID local_c;
  DWORD local_8;
  
  *(undefined4 *)(param_1 + 0x6b2) = 0;
  *(undefined4 *)(param_1 + 0x6ae) = 0;
  *(undefined4 *)(param_1 + 0x69e) = 0;
  local_8 = 0;
  local_c = (LPVOID)0x0;
  local_14 = (HANDLE)0xffffffff;
  local_10 = (HANDLE)0xffffffff;
  local_1c = param_1;
  if (*(int *)(param_1 + 0x69a) != 0) {
    FUN_006ab060((int *)(param_1 + 0x69a));
  }
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  iVar2 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    if (local_14 != (HANDLE)0xffffffff) {
      CloseHandle(local_14);
    }
    if (local_10 != (HANDLE)0xffffffff) {
      CloseHandle(local_10);
    }
    if (local_c != (LPVOID)0x0) {
      FUN_006ab060(&local_c);
    }
    *(undefined4 *)(local_1c + 0x6b2) = 0;
    *(undefined4 *)(local_1c + 0x6ae) = 0;
    *(undefined4 *)(local_1c + 0x69e) = 0;
    return;
  }
  FUN_0072e730(&DAT_0080ed16,local_478,local_374,local_16c,(byte *)0x0);
  local_18 = 0xffffffff;
  pbVar8 = local_16c;
  do {
    if (local_18 == 0) break;
    local_18 = local_18 - 1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0);
  local_18 = ~local_18;
  __makepath(local_270,(char *)local_478,(char *)local_374,(char *)local_16c,PTR_DAT_0079c1c0);
  pvVar3 = CreateFileA(local_270,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_14 = pvVar3;
  if (pvVar3 == (HANDLE)0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x413);
  }
  DVar4 = SetFilePointer(pvVar3,0,(PLONG)0x0,2);
  iVar2 = local_1c;
  *(DWORD *)(local_1c + 0x6ae) = DVar4;
  if (DVar4 == 0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x415);
  }
  __makepath(local_270,(char *)local_478,(char *)local_374,(char *)local_16c,PTR_DAT_0079c1c4);
  hFile = CreateFileA(local_270,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_10 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x41a);
  }
  DVar4 = SetFilePointer(hFile,0,(PLONG)0x0,2);
  *(DWORD *)(iVar2 + 0x6b2) = DVar4;
  if (DVar4 == 0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x41c);
  }
  local_c = (LPVOID)FUN_006aac70(*(int *)(iVar2 + 0x6ae) + local_18 + *(int *)(iVar2 + 0x6b2));
  if (local_c == (LPVOID)0x0) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x41e);
  }
  lpBuffer = (LPVOID)(*(int *)(iVar2 + 0x6ae) + (int)local_c);
  local_24 = (byte *)((int)lpBuffer + *(int *)(iVar2 + 0x6b2));
  local_20 = local_c;
  local_8 = SetFilePointer(pvVar3,0,(PLONG)0x0,0);
  if (local_8 == 0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x421);
  }
  BVar5 = ReadFile(pvVar3,local_20,*(DWORD *)(iVar2 + 0x6ae),&local_8,(LPOVERLAPPED)0x0);
  if ((BVar5 == 0) || (*(DWORD *)(iVar2 + 0x6ae) != local_8)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x422);
  }
  CloseHandle(pvVar3);
  pvVar3 = local_10;
  local_8 = SetFilePointer(local_10,0,(PLONG)0x0,0);
  if (local_8 == 0xffffffff) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x425);
  }
  BVar5 = ReadFile(pvVar3,lpBuffer,*(DWORD *)(iVar2 + 0x6b2),&local_8,(LPOVERLAPPED)0x0);
  if ((BVar5 == 0) || (*(DWORD *)(iVar2 + 0x6b2) != local_8)) {
    FUN_006a5e40(-1,DAT_007ed77c,0x7cd718,0x426);
  }
  CloseHandle(pvVar3);
  uVar6 = 0xffffffff;
  pbVar8 = local_16c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0);
  pbVar8 = local_16c;
  for (uVar7 = ~uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)local_24 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    local_24 = local_24 + 4;
  }
  for (uVar6 = ~uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *local_24 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    local_24 = local_24 + 1;
  }
  *(LPVOID *)(iVar2 + 0x69a) = local_c;
  uVar6 = *(int *)(iVar2 + 0x6b2) + *(int *)(iVar2 + 0x6ae) + local_18;
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
  DAT_00858df8 = (undefined4 *)local_68;
  return;
}

