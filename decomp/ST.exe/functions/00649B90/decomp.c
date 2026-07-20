
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 417 | 423 | 424 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * CreateBossData(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  uint *puVar8;
  char *pcVar9;
  void *unaff_EDI;
  int *piVar10;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  char local_390 [532];
  uint local_17c [65];
  InternalExceptionFrame local_78;
  int local_34 [6];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint *local_8;
  
  local_c = (undefined4 *)0x0;
  local_8 = (uint *)0x0;
  local_10 = (undefined4 *)0x0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    thunk_FUN_0065d0f0((int *)&local_10);
    thunk_FUN_006484f0((int *)&local_8);
    thunk_FUN_006484f0((int *)&local_c);
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_creat_cpp_007d2880,0x1a7,0,iVar3,&DAT_007a4ccc,
                               s_CreateBossData_007d2940);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar2)();
      return puVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_creat_cpp_007d2880,0x1a8);
    return (undefined4 *)0x0;
  }
  piVar10 = local_34;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  puVar5 = (undefined4 *)&stack0xfffffb6c;
  for (iVar3 = 0xc6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_00807680;
  do {
    pcVar13 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar13 + -uVar6;
  pcVar13 = local_390;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = PTR_DAT_0079d65c;
  do {
    pcVar13 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar3 = -1;
  pcVar9 = local_390;
  do {
    pcVar11 = pcVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  pcVar9 = pcVar13 + -uVar6;
  pcVar13 = pcVar11 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_00807680;
  do {
    pcVar13 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar13 + -uVar6;
  pcVar13 = &stack0xfffffb6c;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_006b78c0(&stack0xfffffb6c,&stack0xfffffb6c);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_00807680;
  do {
    pcVar13 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  puVar8 = (uint *)(pcVar13 + -uVar6);
  puVar12 = local_17c;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar12 = (char)*puVar8;
    puVar8 = (uint *)((int)puVar8 + 1);
    puVar12 = (uint *)((int)puVar12 + 1);
  }
  uVar6 = 0xffffffff;
  pcVar9 = PTR_DAT_0079d65c;
  do {
    pcVar13 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar3 = -1;
  puVar8 = local_17c;
  do {
    puVar12 = puVar8;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    puVar12 = (uint *)((int)puVar8 + 1);
    uVar7 = *puVar8;
    puVar8 = puVar12;
  } while ((char)uVar7 != '\0');
  pcVar9 = pcVar13 + -uVar6;
  pcVar13 = (char *)((int)puVar12 + -1);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = s_Arbiter_battle_arb_007d2954;
  do {
    pcVar13 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar3 = -1;
  puVar8 = local_17c;
  do {
    puVar12 = puVar8;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    puVar12 = (uint *)((int)puVar8 + 1);
    uVar7 = *puVar8;
    puVar8 = puVar12;
  } while ((char)uVar7 != '\0');
  pcVar9 = pcVar13 + -uVar6;
  pcVar13 = (char *)((int)puVar12 + -1);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar13 = pcVar13 + 1;
  }
  local_8 = thunk_FUN_00683c70(local_17c,(AnonShape_00683C70_22193481 *)&stack0xfffffb6c,&local_1c,
                               local_34,(undefined *)0x0);
  if (local_8 != (uint *)0x0) {
    local_10 = EventDataPack(*(AnonShape_0065CD10_BA40DE58 **)((int)local_8 + 0x4e),&local_14);
    local_c = BossDataPack(local_8,local_10,local_14,&local_18);
    thunk_FUN_0065d0f0((int *)&local_10);
    thunk_FUN_006484f0((int *)&local_8);
    g_currentExceptionFrame = local_78.previous;
    return local_c;
  }
  RaiseInternalException
            (local_34[0],g_overwriteContext_007ED77C,s_E____titans_ai_ai_creat_cpp_007d2880,0x1a1);
  g_currentExceptionFrame = local_78.previous;
  return local_c;
}

