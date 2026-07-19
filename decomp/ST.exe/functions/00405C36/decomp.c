
int thunk_FUN_00566600(int param_1)

{
  char cVar1;
  int iVar2;
  cMf32 *pcVar3;
  undefined4 *puVar4;
  LPSTR pCVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  byte *pbVar8;
  char *pcVar9;
  void *unaff_EDI;
  byte *pbVar10;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  undefined1 uStack_368;
  char acStack_367 [515];
  byte abStack_164 [260];
  InternalExceptionFrame IStack_60;
  int iStack_1c;
  char *pcStack_18;
  cMf32 *pcStack_14;
  int iStack_10;
  uint uStack_c;
  ushort *puStack_8;
  
  iStack_1c = 0;
  IStack_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_60;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = IStack_60.previous;
    thunk_FUN_00566900(iStack_10);
    return iVar2;
  }
  if (*(int *)(iStack_10 + 0x18) != 0) {
    g_currentExceptionFrame = IStack_60.previous;
    return iStack_1c;
  }
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_0080798c;
  do {
    pcVar11 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pbVar8 = (byte *)(pcVar11 + -uVar6);
  pbVar10 = abStack_164;
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
  FUN_006b8280((char *)abStack_164,(char *)abStack_164);
  uVar6 = 0xffffffff;
  pcVar9 = PTR_s_music_0079b00c;
  do {
    pcVar11 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar2 = -1;
  pbVar8 = abStack_164;
  do {
    pbVar10 = pbVar8;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pbVar10 = pbVar8 + 1;
    bVar12 = *pbVar8;
    pbVar8 = pbVar10;
  } while (bVar12 != 0);
  pbVar8 = (byte *)(pcVar11 + -uVar6);
  pbVar10 = pbVar10 + -1;
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
  pcVar3 = (cMf32 *)FUN_006f0ec0(0x345,abStack_164,3,0,0);
  uVar6 = 0xffffffff;
  *(cMf32 **)(iStack_10 + 0x18) = pcVar3;
  pcVar9 = PTR_s_GM_SET_0079b010;
  do {
    pcVar11 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  uStack_368 = 0xc;
  pcVar9 = pcVar11 + -uVar6;
  pcVar11 = acStack_367;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  uStack_c = 0;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  pcStack_18 = acStack_367;
  pcStack_14 = pcVar3;
  cMf32::ToBeg(pcVar3,FUN_006f2d10,&uStack_368);
  pcVar3 = pcStack_14;
  puVar4 = cMf32::RecNameGetNext(pcStack_14);
  uVar6 = uStack_c;
  while (puVar4 != (undefined4 *)0x0) {
    uStack_c = uVar6 + 1;
    puVar4 = cMf32::RecNameGetNext(pcVar3);
    uVar6 = uStack_c;
  }
  uStack_c = uVar6;
  if (uVar6 == 0) {
    RaiseInternalException(-4,DAT_007ed77c,s_E____titans_snd_mngr_cpp_007c9748,0x25);
  }
  if ((param_1 == 0) || ((param_1 < 0 && (*(int *)(iStack_10 + 0x28) < 1)))) {
    uVar7 = Library::MSVCRT::FUN_0072e6c0();
    *(uint *)(iStack_10 + 0x28) = uVar7 % uVar6 + 1;
  }
  if (0 < param_1) {
    *(int *)(iStack_10 + 0x28) = param_1;
  }
  iVar2 = 0;
  bVar12 = 0;
  pCVar5 = FUN_006f2c00(PTR_s_GM_SET_0079b010,1,*(undefined4 *)(iStack_10 + 0x28));
  puStack_8 = FUN_006f2d90(*(undefined4 *)(iStack_10 + 0x18),pCVar5,bVar12,iVar2);
  if (puStack_8 == (ushort *)0x0) {
    uVar7 = Library::MSVCRT::FUN_0072e6c0();
    iVar13 = 0;
    bVar12 = 0;
    iVar2 = uVar7 % uVar6 + 1;
    *(int *)(iStack_10 + 0x28) = iVar2;
    pCVar5 = FUN_006f2c00(PTR_s_GM_SET_0079b010,1,iVar2);
    puStack_8 = FUN_006f2d90(*(undefined4 *)(iStack_10 + 0x18),pCVar5,bVar12,iVar13);
    if (puStack_8 == (ushort *)0x0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E____titans_snd_mngr_cpp_007c9748,0x32);
      goto LAB_0056681c;
    }
  }
  *(undefined4 *)(iStack_10 + 0x2c) = *(undefined4 *)puStack_8;
  *(undefined4 *)(iStack_10 + 0x30) = *(undefined4 *)(puStack_8 + 2);
  *(undefined4 *)(iStack_10 + 0x34) = *(undefined4 *)(puStack_8 + 4);
LAB_0056681c:
  if (puStack_8 != (ushort *)0x0) {
    cMf32::RecMemFree(*(cMf32 **)(iStack_10 + 0x18),(uint *)&puStack_8);
  }
  g_currentExceptionFrame = IStack_60.previous;
  return iStack_1c;
}

