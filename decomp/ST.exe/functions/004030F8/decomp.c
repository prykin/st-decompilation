
void thunk_FUN_005d8450(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 auStack_db0 [19];
  undefined4 uStack_d64;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  undefined4 uStack_d24;
  undefined4 uStack_d20;
  undefined4 uStack_d1c;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 auStack_524 [10];
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [17];
  int iStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x104,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd5c4,0x104);
    return;
  }
  if (*(HANDLE *)(iStack_8 + 0x1cc4) != (HANDLE)0x0) {
    FindCloseChangeNotification(*(HANDLE *)(iStack_8 + 0x1cc4));
    *(undefined4 *)(iStack_8 + 0x1cc4) = 0;
  }
  uVar7 = 0xffffffff;
  pcVar9 = &DAT_00807680;
  do {
    pcVar11 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar11 + -uVar7;
  pcVar11 = (char *)(iStack_8 + 0x1cd4);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar9 = PTR_s_SAVEGAME__0079c19c;
  do {
    pcVar11 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar3 = -1;
  pcVar9 = (char *)(iStack_8 + 0x1cd4);
  do {
    pcVar10 = pcVar9;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar9 = pcVar11 + -uVar7;
  pcVar11 = pcVar10 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  pcVar9 = (char *)(iStack_8 + 0x1cd4);
  FUN_006b78c0(pcVar9,pcVar9);
  pvVar4 = FindFirstChangeNotificationA(pcVar9,0,2);
  *(HANDLE *)(iStack_8 + 0x1cc4) = pvVar4;
  if (pvVar4 == (HANDLE)0xffffffff) {
    *(undefined4 *)(iStack_8 + 0x1cc4) = 0;
  }
  puVar12 = auStack_524;
  for (iVar3 = 0x135; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  auStack_524[0] = 0;
  auStack_524[2] = 0xe4;
  auStack_524[3] = 0x1be;
  auStack_524[4] = 0x145;
  auStack_524[5] = 100;
  auStack_524[6] = 0;
  auStack_524[7] = 0;
  if (DAT_0080734c != '\0') {
    uStack_54 = 1;
  }
  uStack_3ec = *(undefined4 *)(iStack_8 + 0x1b1d);
  uStack_2ec = 1;
  uStack_3e8 = *(undefined4 *)(iStack_8 + 0x1b21);
  uStack_3e4 = *(undefined4 *)(iStack_8 + 0x1b25);
  uStack_3e0 = *(undefined4 *)(iStack_8 + 0x1b29);
  uStack_26c = *(undefined4 *)(iStack_8 + 0x1bae);
  uStack_268 = *(undefined4 *)(iStack_8 + 0x1bb2);
  uStack_2e8 = 1;
  uStack_16c = 1;
  uStack_168 = 1;
  uStack_264 = *(undefined4 *)(iStack_8 + 0x1bb6);
  uStack_f4 = 1;
  uStack_e8 = *(undefined4 *)(iStack_8 + 0x1c3f);
  uStack_4fc = *(undefined4 *)(iStack_8 + 8);
  uStack_260 = *(undefined4 *)(iStack_8 + 0x1bba);
  uStack_e4 = *(undefined4 *)(iStack_8 + 0x1c43);
  uStack_e0 = *(undefined4 *)(iStack_8 + 0x1c47);
  uStack_3f4 = 0;
  uStack_274 = 0;
  uStack_ec = 0;
  uStack_4f8 = 2;
  uStack_4f4 = 0x8160;
  uStack_4d8 = 2;
  uStack_4d4 = 0x8161;
  uStack_4b8 = 2;
  uStack_4b4 = 0x8162;
  uStack_498 = 2;
  uStack_494 = 0x8163;
  uStack_3f8 = 2;
  uStack_3f0 = 2;
  uStack_2e4 = 500;
  uStack_2e0 = 0x32;
  uStack_390 = 2;
  uStack_38c = 0x8164;
  uStack_278 = 2;
  uStack_270 = 2;
  uStack_164 = 500;
  uStack_160 = 0x32;
  uStack_210 = 2;
  uStack_20c = 0x8165;
  uStack_f8 = 3;
  uStack_dc = 0x3a;
  uStack_d8 = 8;
  uStack_a0 = 2;
  uStack_9c = 0x8166;
  uStack_4dc = uStack_4fc;
  uStack_4bc = uStack_4fc;
  uStack_49c = uStack_4fc;
  uStack_394 = uStack_4fc;
  uStack_214 = uStack_4fc;
  uStack_a4 = uStack_4fc;
  (**(code **)(**(int **)(iStack_8 + 0xc) + 8))(7,iStack_8 + 0x1af1,0,auStack_524,0);
  puVar12 = auStack_db0;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  auStack_db0[0] = 0;
  auStack_db0[1] = 9;
  auStack_db0[2] = *(undefined4 *)(DAT_0081176c + 0x34);
  auStack_db0[8] = *(undefined4 *)(iStack_8 + 0x1cd0);
  uStack_d64 = *(undefined4 *)(iStack_8 + 8);
  auStack_db0[3] = 0xe4;
  auStack_db0[4] = 0x1aa;
  auStack_db0[5] = 0x156;
  auStack_db0[6] = 0x10;
  uStack_550 = 1;
  uStack_554 = 1;
  auStack_db0[7] = 0x104;
  uStack_d60 = 2;
  uStack_d5c = 0x697f;
  uStack_d20 = 2;
  uStack_d1c = 0x68ff;
  uStack_d24 = uStack_d64;
  (**(code **)(**(int **)(iStack_8 + 0xc) + 8))(6,iStack_8 + 0x1af5,0,auStack_db0,1);
  uVar5 = thunk_FUN_005b5510(1,1,0x1e8,0x228,0x55,0x12,0x6900,0x6980);
  *(undefined4 *)(iStack_8 + 0x1af9) = uVar5;
  uVar5 = thunk_FUN_005b5510(1,1,0x1e8,0x23b,0x55,0x12,0x6901,0x6981);
  *(undefined4 *)(iStack_8 + 0x1afd) = uVar5;
  thunk_FUN_005d8bf0();
  FUN_006b3430(DAT_008075a8,*(uint *)(iStack_8 + 0x1cb4));
  if (*(uint *)(iStack_8 + 0x1b05) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(iStack_8 + 0x1b49),*(uint *)(iStack_8 + 0x1b05),0xfffffffe,
                 *(uint *)(iStack_8 + 0x1b1d),*(uint *)(iStack_8 + 0x1b21));
  }
  if (*(uint *)(iStack_8 + 0x1b96) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(iStack_8 + 0x1bda),*(uint *)(iStack_8 + 0x1b96),0xfffffffe,
                 *(uint *)(iStack_8 + 0x1bae),*(uint *)(iStack_8 + 0x1bb2));
  }
  if (*(uint *)(iStack_8 + 0x1c27) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(iStack_8 + 0x1c6b),*(uint *)(iStack_8 + 0x1c27),0xfffffffe,
                 *(uint *)(iStack_8 + 0x1c3f),*(uint *)(iStack_8 + 0x1c43));
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  return;
}

