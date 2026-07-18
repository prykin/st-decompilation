
void FUN_005d8450(void)

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
  undefined4 local_db0 [19];
  undefined4 local_d64;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d24;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_524 [10];
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [17];
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x104,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd5c4,0x104);
    return;
  }
  if (*(HANDLE *)(local_8 + 0x1cc4) != (HANDLE)0x0) {
    FindCloseChangeNotification(*(HANDLE *)(local_8 + 0x1cc4));
    *(undefined4 *)(local_8 + 0x1cc4) = 0;
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
  pcVar11 = (char *)(local_8 + 0x1cd4);
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
  pcVar9 = (char *)(local_8 + 0x1cd4);
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
  pcVar9 = (char *)(local_8 + 0x1cd4);
  FUN_006b78c0(pcVar9,pcVar9);
  pvVar4 = FindFirstChangeNotificationA(pcVar9,0,2);
  *(HANDLE *)(local_8 + 0x1cc4) = pvVar4;
  if (pvVar4 == (HANDLE)0xffffffff) {
    *(undefined4 *)(local_8 + 0x1cc4) = 0;
  }
  puVar12 = local_524;
  for (iVar3 = 0x135; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_524[0] = 0;
  local_524[2] = 0xe4;
  local_524[3] = 0x1be;
  local_524[4] = 0x145;
  local_524[5] = 100;
  local_524[6] = 0;
  local_524[7] = 0;
  if (DAT_0080734c != '\0') {
    local_54 = 1;
  }
  local_3ec = *(undefined4 *)(local_8 + 0x1b1d);
  local_2ec = 1;
  local_3e8 = *(undefined4 *)(local_8 + 0x1b21);
  local_3e4 = *(undefined4 *)(local_8 + 0x1b25);
  local_3e0 = *(undefined4 *)(local_8 + 0x1b29);
  local_26c = *(undefined4 *)(local_8 + 0x1bae);
  local_268 = *(undefined4 *)(local_8 + 0x1bb2);
  local_2e8 = 1;
  local_16c = 1;
  local_168 = 1;
  local_264 = *(undefined4 *)(local_8 + 0x1bb6);
  local_f4 = 1;
  local_e8 = *(undefined4 *)(local_8 + 0x1c3f);
  local_4fc = *(undefined4 *)(local_8 + 8);
  local_260 = *(undefined4 *)(local_8 + 0x1bba);
  local_e4 = *(undefined4 *)(local_8 + 0x1c43);
  local_e0 = *(undefined4 *)(local_8 + 0x1c47);
  local_3f4 = 0;
  local_274 = 0;
  local_ec = 0;
  local_4f8 = 2;
  local_4f4 = 0x8160;
  local_4d8 = 2;
  local_4d4 = 0x8161;
  local_4b8 = 2;
  local_4b4 = 0x8162;
  local_498 = 2;
  local_494 = 0x8163;
  local_3f8 = 2;
  local_3f0 = 2;
  local_2e4 = 500;
  local_2e0 = 0x32;
  local_390 = 2;
  local_38c = 0x8164;
  local_278 = 2;
  local_270 = 2;
  local_164 = 500;
  local_160 = 0x32;
  local_210 = 2;
  local_20c = 0x8165;
  local_f8 = 3;
  local_dc = 0x3a;
  local_d8 = 8;
  local_a0 = 2;
  local_9c = 0x8166;
  local_4dc = local_4fc;
  local_4bc = local_4fc;
  local_49c = local_4fc;
  local_394 = local_4fc;
  local_214 = local_4fc;
  local_a4 = local_4fc;
  (**(code **)(**(int **)(local_8 + 0xc) + 8))(7,local_8 + 0x1af1,0,local_524,0);
  puVar12 = local_db0;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_db0[0] = 0;
  local_db0[1] = 9;
  local_db0[2] = *(undefined4 *)(DAT_0081176c + 0x34);
  local_db0[8] = *(undefined4 *)(local_8 + 0x1cd0);
  local_d64 = *(undefined4 *)(local_8 + 8);
  local_db0[3] = 0xe4;
  local_db0[4] = 0x1aa;
  local_db0[5] = 0x156;
  local_db0[6] = 0x10;
  local_550 = 1;
  local_554 = 1;
  local_db0[7] = 0x104;
  local_d60 = 2;
  local_d5c = 0x697f;
  local_d20 = 2;
  local_d1c = 0x68ff;
  local_d24 = local_d64;
  (**(code **)(**(int **)(local_8 + 0xc) + 8))(6,local_8 + 0x1af5,0,local_db0,1);
  uVar5 = thunk_FUN_005b5510(1,1,0x1e8,0x228,0x55,0x12,0x6900,0x6980);
  *(undefined4 *)(local_8 + 0x1af9) = uVar5;
  uVar5 = thunk_FUN_005b5510(1,1,0x1e8,0x23b,0x55,0x12,0x6901,0x6981);
  *(undefined4 *)(local_8 + 0x1afd) = uVar5;
  thunk_FUN_005d8bf0();
  FUN_006b3430(DAT_008075a8,*(uint *)(local_8 + 0x1cb4));
  if (*(uint *)(local_8 + 0x1b05) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(local_8 + 0x1b49),*(uint *)(local_8 + 0x1b05),0xfffffffe,
                 *(uint *)(local_8 + 0x1b1d),*(uint *)(local_8 + 0x1b21));
  }
  if (*(uint *)(local_8 + 0x1b96) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(local_8 + 0x1bda),*(uint *)(local_8 + 0x1b96),0xfffffffe,
                 *(uint *)(local_8 + 0x1bae),*(uint *)(local_8 + 0x1bb2));
  }
  if (*(uint *)(local_8 + 0x1c27) != 0xffffffff) {
    FUN_006b34d0(*(uint **)(local_8 + 0x1c6b),*(uint *)(local_8 + 0x1c27),0xfffffffe,
                 *(uint *)(local_8 + 0x1c3f),*(uint *)(local_8 + 0x1c43));
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

