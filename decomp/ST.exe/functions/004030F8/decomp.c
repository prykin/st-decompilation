
void __thiscall SIDTy::CreateCtrls(SIDTy *this)

{
  char cVar1;
  MMObjTy MVar2;
  code *pcVar3;
  MMObjTy *this_00;
  int iVar4;
  HANDLE pvVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  MMObjTy *pMVar10;
  void *unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  MMObjTy *pMVar13;
  undefined4 *puVar14;
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
  InternalExceptionFrame IStack_50;
  MMObjTy *pMStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pMStack_8 = (MMObjTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pMStack_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x104,0,iVar4,&DAT_007a4ccc,
                               s_SIDTy__CreateCtrls_007cd664);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x104);
    return;
  }
  if (*(HANDLE *)(pMStack_8 + 0x1cc4) != (HANDLE)0x0) {
    FindCloseChangeNotification(*(HANDLE *)(pMStack_8 + 0x1cc4));
    *(undefined4 *)(this_00 + 0x1cc4) = 0;
  }
  uVar8 = 0xffffffff;
  pcVar11 = &DAT_00807680;
  do {
    pcVar12 = pcVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pMVar10 = (MMObjTy *)(pcVar12 + -uVar8);
  pMVar13 = this_00 + 0x1cd4;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pMVar13 = *(undefined4 *)pMVar10;
    pMVar10 = pMVar10 + 4;
    pMVar13 = pMVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pMVar13 = *pMVar10;
    pMVar10 = pMVar10 + 1;
    pMVar13 = pMVar13 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar11 = PTR_s_SAVEGAME__0079c19c;
  do {
    pcVar12 = pcVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar4 = -1;
  pMVar10 = this_00 + 0x1cd4;
  do {
    pMVar13 = pMVar10;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pMVar13 = pMVar10 + 1;
    MVar2 = *pMVar10;
    pMVar10 = pMVar13;
  } while (MVar2 != (MMObjTy)0x0);
  pMVar10 = (MMObjTy *)(pcVar12 + -uVar8);
  pMVar13 = pMVar13 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pMVar13 = *(undefined4 *)pMVar10;
    pMVar10 = pMVar10 + 4;
    pMVar13 = pMVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pMVar13 = *pMVar10;
    pMVar10 = pMVar10 + 1;
    pMVar13 = pMVar13 + 1;
  }
  pMVar10 = this_00 + 0x1cd4;
  FUN_006b78c0((char *)pMVar10,(char *)pMVar10);
  pvVar5 = FindFirstChangeNotificationA((LPCSTR)pMVar10,0,2);
  *(HANDLE *)(this_00 + 0x1cc4) = pvVar5;
  if (pvVar5 == (HANDLE)0xffffffff) {
    *(undefined4 *)(this_00 + 0x1cc4) = 0;
  }
  puVar14 = auStack_524;
  for (iVar4 = 0x135; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
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
  uStack_3ec = *(undefined4 *)(this_00 + 0x1b1d);
  uStack_2ec = 1;
  uStack_3e8 = *(undefined4 *)(this_00 + 0x1b21);
  uStack_3e4 = *(undefined4 *)(this_00 + 0x1b25);
  uStack_3e0 = *(undefined4 *)(this_00 + 0x1b29);
  uStack_26c = *(undefined4 *)(this_00 + 0x1bae);
  uStack_268 = *(undefined4 *)(this_00 + 0x1bb2);
  uStack_2e8 = 1;
  uStack_16c = 1;
  uStack_168 = 1;
  uStack_264 = *(undefined4 *)(this_00 + 0x1bb6);
  uStack_f4 = 1;
  uStack_e8 = *(undefined4 *)(this_00 + 0x1c3f);
  uStack_4fc = *(undefined4 *)(this_00 + 8);
  uStack_260 = *(undefined4 *)(this_00 + 0x1bba);
  uStack_e4 = *(undefined4 *)(this_00 + 0x1c43);
  uStack_e0 = *(undefined4 *)(this_00 + 0x1c47);
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
  (**(code **)(**(int **)(this_00 + 0xc) + 8))(7,this_00 + 0x1af1,0,auStack_524,0);
  puVar14 = auStack_db0;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  auStack_db0[0] = 0;
  auStack_db0[1] = 9;
  auStack_db0[2] = *(undefined4 *)(DAT_0081176c + 0x34);
  auStack_db0[8] = *(undefined4 *)(this_00 + 0x1cd0);
  uStack_d64 = *(undefined4 *)(this_00 + 8);
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
  (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1af5,0,auStack_db0,1);
  uVar6 = MMObjTy::CreateSprBut(this_00,1,1,0x1e8,0x228,0x55,0x12,0x6900,0x6980);
  *(undefined4 *)(this_00 + 0x1af9) = uVar6;
  uVar6 = MMObjTy::CreateSprBut(this_00,1,1,0x1e8,0x23b,0x55,0x12,0x6901,0x6981);
  *(undefined4 *)(this_00 + 0x1afd) = uVar6;
  PrepFiles((SIDTy *)this_00);
  Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x1cb4));
  if (*(uint *)(this_00 + 0x1b05) != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(this_00 + 0x1b49),*(uint *)(this_00 + 0x1b05),0xfffffffe,
               *(uint *)(this_00 + 0x1b1d),*(uint *)(this_00 + 0x1b21));
  }
  if (*(uint *)(this_00 + 0x1b96) != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(this_00 + 0x1bda),*(uint *)(this_00 + 0x1b96),0xfffffffe,
               *(uint *)(this_00 + 0x1bae),*(uint *)(this_00 + 0x1bb2));
  }
  if (*(uint *)(this_00 + 0x1c27) != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(this_00 + 0x1c6b),*(uint *)(this_00 + 0x1c27),0xfffffffe,
               *(uint *)(this_00 + 0x1c3f),*(uint *)(this_00 + 0x1c43));
  }
  g_currentExceptionFrame = IStack_50.previous;
  return;
}

