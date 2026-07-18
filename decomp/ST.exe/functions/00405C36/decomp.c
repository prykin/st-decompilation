
int thunk_FUN_00566600(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  LPSTR pCVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  char *pcVar8;
  void *unaff_EDI;
  byte *pbVar9;
  char *pcVar10;
  byte bVar11;
  int iVar12;
  undefined1 uStack_368;
  char acStack_367 [515];
  byte abStack_164 [260];
  undefined4 uStack_60;
  undefined4 auStack_5c [16];
  int iStack_1c;
  char *pcStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  uint uStack_c;
  ushort *puStack_8;
  
  iStack_1c = 0;
  uStack_60 = DAT_00858df8;
  DAT_00858df8 = &uStack_60;
  iVar2 = __setjmp3(auStack_5c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_60;
    thunk_FUN_00566900(iStack_10);
    return iVar2;
  }
  if (*(int *)(iStack_10 + 0x18) != 0) {
    DAT_00858df8 = (undefined4 *)uStack_60;
    return iStack_1c;
  }
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_0080798c;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar7 = (byte *)(pcVar10 + -uVar5);
  pbVar9 = abStack_164;
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
  FUN_006b8280((char *)abStack_164,(char *)abStack_164);
  uVar5 = 0xffffffff;
  pcVar8 = PTR_s_music_0079b00c;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar2 = -1;
  pbVar7 = abStack_164;
  do {
    pbVar9 = pbVar7;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pbVar9 = pbVar7 + 1;
    bVar11 = *pbVar7;
    pbVar7 = pbVar9;
  } while (bVar11 != 0);
  pbVar7 = (byte *)(pcVar10 + -uVar5);
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
  puVar3 = FUN_006f0ec0(0x345,abStack_164,3,0,0);
  uVar5 = 0xffffffff;
  *(undefined4 **)(iStack_10 + 0x18) = puVar3;
  pcVar8 = PTR_s_GM_SET_0079b010;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  uStack_368 = 0xc;
  pcVar8 = pcVar10 + -uVar5;
  pcVar10 = acStack_367;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  uStack_c = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  pcStack_18 = acStack_367;
  puStack_14 = puVar3;
  FUN_006f12b0(FUN_006f2d10,&uStack_368);
  puVar3 = FUN_006f2790();
  uVar5 = uStack_c;
  while (puVar3 != (undefined4 *)0x0) {
    uStack_c = uVar5 + 1;
    puVar3 = FUN_006f2790();
    uVar5 = uStack_c;
  }
  uStack_c = uVar5;
  if (uVar5 == 0) {
    FUN_006a5e40(-4,DAT_007ed77c,0x7c9748,0x25);
  }
  if ((param_1 == 0) || ((param_1 < 0 && (*(int *)(iStack_10 + 0x28) < 1)))) {
    uVar6 = FUN_0072e6c0();
    *(uint *)(iStack_10 + 0x28) = uVar6 % uVar5 + 1;
  }
  if (0 < param_1) {
    *(int *)(iStack_10 + 0x28) = param_1;
  }
  iVar2 = 0;
  bVar11 = 0;
  pCVar4 = FUN_006f2c00(PTR_s_GM_SET_0079b010,1,*(undefined4 *)(iStack_10 + 0x28));
  puStack_8 = FUN_006f2d90(*(undefined4 *)(iStack_10 + 0x18),pCVar4,bVar11,iVar2);
  if (puStack_8 == (ushort *)0x0) {
    uVar6 = FUN_0072e6c0();
    iVar12 = 0;
    bVar11 = 0;
    iVar2 = uVar6 % uVar5 + 1;
    *(int *)(iStack_10 + 0x28) = iVar2;
    pCVar4 = FUN_006f2c00(PTR_s_GM_SET_0079b010,1,iVar2);
    puStack_8 = FUN_006f2d90(*(undefined4 *)(iStack_10 + 0x18),pCVar4,bVar11,iVar12);
    if (puStack_8 == (ushort *)0x0) {
      FUN_006a5e40(-4,DAT_007ed77c,0x7c9748,0x32);
      goto LAB_0056681c;
    }
  }
  *(undefined4 *)(iStack_10 + 0x2c) = *(undefined4 *)puStack_8;
  *(undefined4 *)(iStack_10 + 0x30) = *(undefined4 *)(puStack_8 + 2);
  *(undefined4 *)(iStack_10 + 0x34) = *(undefined4 *)(puStack_8 + 4);
LAB_0056681c:
  if (puStack_8 != (ushort *)0x0) {
    FUN_006f20e0((uint *)&puStack_8);
  }
  DAT_00858df8 = (undefined4 *)uStack_60;
  return iStack_1c;
}

