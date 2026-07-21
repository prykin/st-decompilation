#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004058EE|0056FA60; family_names=STAppC::GetMessage; ret4=17;
   direct_offsets={10:4,14:6,18:7,1c:8} */

int __thiscall STAppC::GetMessage(STAppC *this,STMessage *message)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  STMessageId SVar4;
  STMessageArg SVar5;
  AnonPointee_STAppC_115A *pAVar6;
  dword dVar7;
  code *pcVar8;
  CursorClassTy *pCVar9;
  STAppC *pSVar10;
  int iVar11;
  StartSystemTy *pSVar12;
  DWORD DVar13;
  char *pcVar14;
  undefined4 *puVar15;
  HANDLE pvVar16;
  STMessageId *pSVar17;
  uint uVar18;
  int iVar19;
  STAppCVTable *pSVar20;
  byte *pbVar21;
  char *pcVar22;
  undefined4 *puVar23;
  uint uVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  _WIN32_FIND_DATAA local_68c;
  byte local_54c [256];
  byte local_44c [256];
  byte local_34c [256];
  byte local_24c [256];
  InternalExceptionFrame local_14c;
  InternalExceptionFrame local_108;
  undefined1 local_c4 [12];
  undefined4 local_b8;
  undefined4 local_b4;
  InternalExceptionFrame local_a4;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  STMessageId local_44 [5];
  STMessageArg local_30;
  STMessageArg local_2c;
  int local_24;
  int local_20;
  int local_1c;
  STAppC *local_18;
  byte local_14 [4];
  int local_10;
  DArrayTy *local_c;
  byte *local_8;

  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_18 = this;
  iVar11 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  pSVar10 = local_18;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar19 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x890,0,iVar11,"%s",
                                "STAppC::GetMessage");
    if (iVar19 == 0) {
      RaiseInternalException(iVar11,0,"E:\\__titans\\tapp.cpp",0x891);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006e5150(local_18,(AnonShape_006E5150_51076593 *)message);
  pCVar9 = PTR_00802a30;
  SVar4 = message->id;
  if (SVar4 < MESS_SHARED_6120) {
    if (SVar4 == MESS_SHARED_611F) {
switchD_0056fad2_caseD_6105:
      DAT_0080674c = 0;
      PTR_00802a30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar9);
      ChangeResolution(pSVar10,0);
      if (PTR_0081176c == (StartSystemTy *)0x0) {
        pSVar12 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar12 != (StartSystemTy *)0x0) {
          StartSystemTy::StartSystemTy(pSVar12,pSVar10);
        }
        (*PTR_0081176c->vtable->InitSystem)(PTR_0081176c);
        AppClassTy::AddSystem((AppClassTy *)pSVar10,(int *)PTR_0081176c,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar10,(int *)PTR_0081176c,0);
      }
      if (message->id != MESS_STAPPC_6122) {
        PTR_0081176c->field_02EB = ((message->arg0).u32 == 2) + 1;
      }
      SVar5 = message->arg1;
      pSVar17 = local_44;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_30 = message->arg0;
      local_44[3] = 0;
      local_44[4] = message->id;
      local_44[2] = 0x200;
      local_2c = SVar5;
      FUN_006e3db0((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    switch(SVar4) {
    case 0x60ff:
      if (pSVar10->field_0FC3 != 0) {
        FUN_006c1e20();
        puVar15 = (undefined4 *)&pSVar10->field_0xe43;
        for (iVar11 = 0x60; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      pCVar9 = PTR_00802a30;
      PTR_00802a30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar9);
      if (PTR_0081176c != (StartSystemTy *)0x0) {
        FUN_006e4b80(pSVar10,(int)PTR_0081176c);
      }
      uVar24 = 0xffffffff;
      pcVar14 = &DAT_008016a0;
      do {
        pcVar22 = pcVar14;
        if (uVar24 == 0) break;
        uVar24 = uVar24 - 1;
        pcVar22 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar22;
      } while (cVar1 != '\0');
      uVar24 = ~uVar24;
      pcVar14 = pcVar22 + -uVar24;
      pcVar22 = &pSVar10->field_0x7a02;
      for (uVar18 = uVar24 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
        *pcVar22 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar22 = pcVar22 + 1;
      }
      OpenGameDBs(pSVar10);
      StartGame(pSVar10);
      bVar3 = pSVar10->field_1180;
      if ((bVar3 < 9) || ((0xc < bVar3 && (bVar3 != 0x10)))) {
        puVar15 = (undefined4 *)&pSVar10->field_0x1196;
        puVar23 = (undefined4 *)&pSVar10->field_0x2b2f;
        for (iVar11 = 0x666; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar23 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar23 = puVar23 + 1;
        }
        *(undefined1 *)puVar23 = *(undefined1 *)puVar15;
        pSVar10->field_44C8 = pSVar10->field_4F0A;
        puVar15 = (undefined4 *)&pSVar10->field_0x6e1b;
        puVar23 = (undefined4 *)&pSVar10->field_0x44cc;
        for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar23 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar23 = puVar23 + 1;
        }
        puVar15 = &g_playerRuntime[DAT_0080874d].field480_0x2eb;
        puVar23 = (undefined4 *)&pSVar10->field_0x48cc;
        for (iVar11 = 5; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar23 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar23 = puVar23 + 1;
        }
        puVar15 = &g_playerRuntime[DAT_0080874d].field494_0x2ff;
        puVar23 = (undefined4 *)&pSVar10->field_0x48e0;
        for (iVar11 = 5; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar23 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar23 = puVar23 + 1;
        }
        puVar15 = &g_playerRuntime[DAT_0080874d].field522_0x327;
        puVar23 = (undefined4 *)&pSVar10->field_0x48f4;
        for (iVar11 = 0x9b; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar23 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar23 = puVar23 + 1;
        }
        puVar15 = &g_playerRuntime[DAT_0080874d].field1136_0x593;
        puVar23 = (undefined4 *)&pSVar10->field_0x4b60;
        for (iVar11 = 0x6a; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar23 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar23 = puVar23 + 1;
        }
        puVar15 = &g_playerRuntime[DAT_0080874d].field1554_0x73b;
        puVar23 = (undefined4 *)&pSVar10->field_0x4d08;
        for (iVar11 = 0x26; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar23 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar23 = puVar23 + 1;
        }
        *(undefined2 *)puVar23 = *(undefined2 *)puVar15;
        *(undefined1 *)((int)puVar23 + 2) = *(undefined1 *)((int)puVar15 + 2);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6100:
      DAT_0080674c = 0;
      if (pSVar10->field_0FC3 != 0) {
        FUN_006c1e20();
        puVar15 = (undefined4 *)&pSVar10->field_0xe43;
        for (iVar11 = 0x60; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      thunk_FUN_005713b0((int)pSVar10);
      DVar13 = FUN_006e51b0((int)pSVar10);
      pSVar10->field_1134 = DVar13;
      pCVar9 = PTR_00802a30;
      PTR_00802a30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar9);
      thunk_FUN_005711d0(pSVar10,(int *)&PTR_0081163c);
      CloseGameDBs(pSVar10);
      if (PTR_0081176c != (StartSystemTy *)0x0) {
        FUN_006e4b80(pSVar10,(int)PTR_0081176c);
      }
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
      DarkScreen(DAT_0080759c,10,2);
      ChangeResolution(pSVar10,0);
      uVar24 = 0xffffffff;
      pcVar14 = &pSVar10->field_0x77fa;
      do {
        pcVar22 = pcVar14;
        if (uVar24 == 0) break;
        uVar24 = uVar24 - 1;
        pcVar22 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar22;
      } while (cVar1 != '\0');
      uVar24 = ~uVar24;
      pcVar14 = pcVar22 + -uVar24;
      pcVar22 = &pSVar10->field_0x76f6;
      for (uVar18 = uVar24 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar22 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar22 = pcVar22 + 4;
      }
      for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
        *pcVar22 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar22 = pcVar22 + 1;
      }
      OpenGameDBs(pSVar10);
      StartGame(pSVar10);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    case MESS_STARTSYSTEMTY_6102:
    case MESS_STARTSYSTEMTY_6103:
    case MESS_STARTSYSTEMTY_6104:
    case MESS_SHARED_610A:
switchD_0056fad2_caseD_6102:
      DAT_0080674c = 0;
      ChangeResolution(pSVar10,0);
      if (pSVar10->field_0FC3 != 0) {
        FUN_006c1e20();
        puVar15 = (undefined4 *)&pSVar10->field_0xe43;
        for (iVar11 = 0x60; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      thunk_FUN_005713b0((int)pSVar10);
      pCVar9 = PTR_00802a30;
      PTR_00802a30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar9);
      thunk_FUN_005711d0(pSVar10,(int *)&PTR_0081163c);
      CloseGameDBs(pSVar10);
      if (PTR_0081176c == (StartSystemTy *)0x0) {
        pSVar12 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar12 != (StartSystemTy *)0x0) {
          StartSystemTy::StartSystemTy(pSVar12,pSVar10);
        }
        (*PTR_0081176c->vtable->InitSystem)(PTR_0081176c);
        AppClassTy::AddSystem((AppClassTy *)pSVar10,(int *)PTR_0081176c,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar10,(int *)PTR_0081176c,0);
      }
      pSVar17 = local_44;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_44[3] = 0;
      local_44[4] = message->id;
      local_44[2] = 0x200;
      if (local_44[4] != MESS_STARTSYSTEMTY_6103) {
        if (local_44[4] == MESS_STARTSYSTEMTY_6104) {
          local_2c = message->arg1;
        }
        else if (local_44[4] != MESS_SHARED_610A) {
          FUN_006e3db0((int)local_44);
          g_currentExceptionFrame = local_a4.previous;
          return 0;
        }
      }
      local_30 = message->arg0;
      FUN_006e3db0((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    case MESS_SHARED_6105:
      goto switchD_0056fad2_caseD_6105;
    case MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE:
      bVar3 = pSVar10->field_112D;
      (&pSVar10->field_0x11a7)[(uint)bVar3 * 0x51] = 1;
      pSVar10->field_112D = *(undefined1 *)((int)&message->arg0 + 2);
      pSVar10->field_112E = *(undefined1 *)&message->arg0;
      (&pSVar10->field_0x11a7)[(uint)(byte)pSVar10->field_112D * 0x51] = 0;
      if (PTR_00802a38 != (STPlaySystemC *)0x0) {
        FUN_006e57b0(PTR_00802a38,0x121);
        (*PTR_00802a38->vtable->vfunc_08)(0x121,0,0,0,0);
        local_b8 = 0xf;
        local_b4 = 0x4405;
        (*PTR_00802a38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)PTR_00802a38,(int)local_c4);
      }
      if (PTR_00802a28 != (ccFntTy *)0x0) {
        thunk_FUN_005711d0(pSVar10,(int *)&PTR_00802a28);
      }
      CreateInterSystem();
      if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
        thunk_FUN_0042a9f0(bVar3);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case MESS_STARTSYSTEMTY_6104|MESS_SHARED_0003:
      DarkScreen(DAT_0080759c,10,2);
      if (PTR_00802a28 != (ccFntTy *)0x0) {
        thunk_FUN_005711d0(pSVar10,(int *)&PTR_00802a28);
      }
      ChangeResolution(pSVar10,_DAT_00807348 & 0xff);
      pCVar9 = PTR_00802a30;
      uVar24 = _DAT_00807348 & 0xff;
      PTR_00802a30->field_04B2 = (&DAT_00807568)[uVar24 * 4];
      pCVar9->field_04B6 = (&DAT_0080756c)[uVar24 * 4];
      pCVar9->field_04BA = (&DAT_00807570)[uVar24 * 4];
      pCVar9->field_04BE = (&DAT_00807574)[uVar24 * 4];
      if (g_opticClass_007FB2A0 != (OpticClassC *)0x0) {
        OpticClassC::ReInitOptic(g_opticClass_007FB2A0,_DAT_00807348 & 0xff);
        FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,&local_60);
        if (g_cPanel_00801688 != (CPanelTy *)0x0) {
          thunk_FUN_004a9b60(local_60,local_5c,local_58,
                             local_54 -
                             ((-(uint)(g_cPanel_00801688->field_023F != CASE_1) & 0xffffff65) + 0x9b
                             ));
        }
      }
      CreateInterSystem();
      if ((PTR_0081163c != (AnonShape_00577690_10255A81 *)0x0) && ((message->arg0).u32 == 0)) {
        thunk_FUN_00577690(PTR_0081163c);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6108:
      bVar27 = true;
      PTR_00802a30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar9);
      pSVar17 = local_44;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      bVar3 = pSVar10->field_6CE1;
      bVar2 = pSVar10->field_6CE0;
      local_44[4] = 0x6102;
      if (((bVar2 <= bVar3) && (pSVar10->field_6CE2 <= bVar3)) && (bVar3 != 0)) {
        bVar27 = false;
        local_44[4] = 0x6103;
        local_30 = (STMessageArg)0x0;
        pSVar10->field_6CE1 = 0;
      }
      if (bVar27) {
        bVar27 = true;
        if (((pSVar10->field_6CE1 < bVar2) && (pSVar10->field_6CE2 <= bVar2)) && (bVar2 != 0)) {
          local_44[4] = 0x6104;
          local_30 = (STMessageArg)0x1;
          pSVar10->field_6CE0 = 0;
          bVar27 = false;
        }
        if (bVar27) {
          bVar3 = pSVar10->field_6CE2;
          bVar27 = true;
          if ((pSVar10->field_6CE1 < bVar3) && (pSVar10->field_6CE0 < bVar3)) {
            if ((DAT_00807330 & 2) == 0) {
              pSVar10->field_6CE2 = 0;
            }
            else if (bVar3 != 0) {
              local_44[4] = 0x7101;
              local_30 = (STMessageArg)0x4;
              pSVar10->field_6CE2 = 0;
              bVar27 = false;
            }
          }
          if ((((bVar27) && (pSVar10->field_6CE1 == 0)) && (pSVar10->field_6CE0 == 0)) &&
             ((pSVar10->field_6CE2 == 0 && (pSVar10->field_5012 != '\0')))) {
            wsprintfA(&pSVar10->field_0x76f6,"%s%s",&pSVar10->field_0x60,&pSVar10->field_5012
                     );
            wsprintfA(&pSVar10->field_0x78fe,"%s",&pSVar10->field_5012);
            uVar24 = 0xffffffff;
            pcVar14 = &pSVar10->field_0x76f6;
            do {
              pcVar22 = pcVar14;
              if (uVar24 == 0) break;
              uVar24 = uVar24 - 1;
              pcVar22 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar22;
            } while (cVar1 != '\0');
            uVar24 = ~uVar24;
            pcVar14 = pcVar22 + -uVar24;
            pcVar22 = &pSVar10->field_0x77fa;
            for (uVar18 = uVar24 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar24 = uVar24 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
              *pcVar22 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar22 = pcVar22 + 1;
            }
            if ((pSVar10->field_1180 == '\x03') || (pSVar10->field_1180 == '\v')) {
              pSVar10->field_1180 = 3;
            }
            else {
              pSVar10->field_1180 = 8;
            }
            iVar11 = thunk_FUN_0056e9e0(pSVar10,1);
            if (iVar11 != 0) {
              local_44[4] = 0x6104;
              local_30 = (STMessageArg)0x0;
            }
          }
        }
      }
      if ((local_44[4] == 0x6102) && (DAT_008067a0 != '\0')) {
        if ((DAT_00802a98 == '\0') ||
           (iVar11 = CFsgsConnection::IsInitialized((CFsgsConnection *)&DAT_00802a90), iVar11 == 0))
        {
          bVar27 = false;
        }
        else {
          bVar27 = true;
        }
        if (bVar27) {
          local_44[4] = 0x610a;
          local_30 = (STMessageArg)0x6;
        }
      }
      pSVar20 = pSVar10->vtable;
      pSVar17 = local_44;
      goto LAB_00570c77;
    }
  }
  else {
    if (SVar4 < MESS_STAPPC_7101) {
      if (SVar4 != MESS_STAPPC_7100) {
        if (SVar4 != MESS_STAPPC_6122) {
          if (SVar4 == MESS_STAPPC_6123) goto switchD_0056fad2_caseD_6102;
          if (SVar4 != MESS_STARTSYSTEMTY_6124) {
            g_currentExceptionFrame = local_a4.previous;
            return 0;
          }
        }
        goto switchD_0056fad2_caseD_6105;
      }
      local_8 = (byte *)0x1;
      Library::DKW::DV::FUN_006c4110(PTR_008075a0);
      if ((PTR_008075a0->field_0004 & 0x40000000) != 0) {
        FUN_006c3f00((int)PTR_008075a0);
      }
      local_10 = FUN_006c2a00(&DAT_00803408);
      if ((local_10 != 0) && (g_int_008075A4 == (int *)0x0)) {
        FUN_006e3db0((int)&pSVar10->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      if (pSVar10->field_0FC3 != 0) {
        FUN_006c1e20();
        puVar15 = (undefined4 *)&pSVar10->field_0xe43;
        for (iVar11 = 0x60; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      thunk_FUN_005713b0((int)pSVar10);
      pCVar9 = PTR_00802a30;
      PTR_00802a30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar9);
      if (PTR_0081176c != (StartSystemTy *)0x0) {
        FUN_006e4b80(pSVar10,(int)PTR_0081176c);
      }
      thunk_FUN_005711d0(pSVar10,(int *)&PTR_0081163c);
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
      FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
      Library::DKW::DDX::FUN_006bab60((int)DAT_0080759c,0);
      Library::DKW::DDX::FUN_006bb370((int)DAT_0080759c,0,0);
      local_14c.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_14c;
      local_4c = Library::MSVCRT::__setjmp3(local_14c.jumpBuffer,0);
      if (local_4c != 0) {
        g_currentExceptionFrame = local_14c.previous;
        if (local_10 != 0) {
          FUN_006c2c80(g_int_008075A4);
        }
        if (DAT_00806738 != 8) {
          DAT_00806738 = 8;
          Library::DKW::DDX::FUN_006b9b40
                    (DAT_0080759c,0x10000001,g_nWidth_00806730,DAT_00806734,8,g_nWidth_00806730,
                     DAT_00806734,0,0,0x100);
          Library::DKW::DDX::FUN_006b1470(DAT_008075a8);
        }
        pSVar10 = local_18;
        puVar15 = &local_18->field_0038;
        local_18->field_4EFA = 0;
        thunk_FUN_00567220((AnonShape_00567220_C9DD1C7D *)puVar15);
        thunk_FUN_00567180(puVar15,HWND_00856d78);
        FUN_006e3db0((int)&pSVar10->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      uVar24 = 0;
      local_48 = 0;
      FUN_006b13e0(DAT_008075a8);
      if (((ushort)DAT_0080350c & 0xff) == 1) {
        local_24 = 0x280;
        local_20 = 0x1e0;
      }
      else {
        local_24 = 800;
        local_20 = 600;
      }
      iVar11 = 0x10;
      local_1c = iVar11;
      if ((ushort)DAT_0080350c >> 8 == 2) {
        iVar11 = 0x18;
        local_1c = iVar11;
      }
      do {
        if (iVar11 == 8) goto LAB_00570645;
        iVar19 = 0;
        local_c = (DArrayTy *)0x0;
        pAVar6 = local_18->field_115A;
        puVar15 = &pAVar6->field_0004;
        if (0 < (int)*puVar15) {
          do {
            if (((pAVar6[1].field_0000 == local_24) && (pAVar6[1].field_0004 == local_20)) &&
               (pAVar6[2].field_0000 == iVar11)) {
              local_c = (DArrayTy *)0x1;
              break;
            }
            iVar19 = iVar19 + 1;
            pAVar6 = (AnonPointee_STAppC_115A *)&pAVar6[1].field_0004;
          } while (iVar19 < (int)*puVar15);
        }
        if (local_c != (DArrayTy *)0x0) {
          local_108.previous = g_currentExceptionFrame;
          DAT_00806738 = iVar11;
          g_currentExceptionFrame = &local_108;
          iVar19 = Library::MSVCRT::__setjmp3(local_108.jumpBuffer,0);
          iVar11 = local_1c;
          if (iVar19 == 0) {
            DVar13 = Library::DKW::DDX::FUN_006b9b40
                               (DAT_0080759c,0x10000001,local_24,local_20,local_1c,local_24,local_20
                                ,0,0,0);
            local_48 = (uint)(DVar13 == 0);
          }
          uVar24 = local_48;
          g_currentExceptionFrame = local_108.previous;
          if ((local_c != (DArrayTy *)0x0) && (local_48 != 0)) break;
        }
        if (iVar11 == 0x10) {
          iVar11 = 8;
          local_1c = iVar11;
        }
        else if (iVar11 == 0x18) {
          iVar11 = 0x20;
          local_1c = iVar11;
        }
        else if (iVar11 == 0x20) {
          iVar11 = 0x10;
          local_1c = iVar11;
        }
      } while (uVar24 == 0);
      if (iVar11 == 8) {
LAB_00570645:
        if (uVar24 == 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x792);
        }
      }
      iVar11 = local_10;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((DAT_0080350c._2_1_ == '\x01') ||
         ((DAT_0080350c._2_1_ == '\x02' && (DAT_0080351f == '\x01')))) {
        local_8 = (byte *)((uint)local_8 | 4);
      }
      if (local_10 == 0) {
        Library::DKW::DV::FUN_006c3b00(PTR_008075a0,(LPCSTR)&DAT_00803408,(uint)local_8);
      }
      else {
        Library::DKW::DV::FUN_006c2ae0(g_int_008075A4,&DAT_00803408,(uint)local_8);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (DAT_0080350c._2_1_ == '\x01') {
        iVar19 = 0;
        iVar28 = 0;
        iVar29 = DAT_0080759c[6];
        iVar30 = DAT_0080759c[7];
        if (iVar11 != 0) {
          Library::DKW::DV::FUN_006c2d30(g_int_008075A4,0,0,DAT_0080759c[6],DAT_0080759c[7]);
          goto cf_common_exit_0057073B;
        }
      }
      else {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (DAT_0080350c._2_1_ != '\x02') goto cf_common_exit_0057073B;
        iVar19 = ram0x0080350f;
        iVar28 = DAT_00803513;
        iVar29 = DAT_00803517;
        iVar30 = DAT_0080351b;
        if (iVar11 != 0) {
          Library::DKW::DV::FUN_006c2d30
                    (g_int_008075A4,ram0x0080350f,DAT_00803513,DAT_00803517,DAT_0080351b);
          goto cf_common_exit_0057073B;
        }
      }
      FUN_006c3fc0(PTR_008075a0,iVar19,iVar28,iVar29,iVar30);
cf_common_exit_0057073B:
      pSVar10 = local_18;
      thunk_FUN_00567220((AnonShape_00567220_C9DD1C7D *)&local_18->field_0038);
      pSVar10->field_4EFA = 1;
      if (iVar11 == 0) {
        Library::DKW::DV::FUN_006c4000(PTR_008075a0);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      Library::DKW::DV::FUN_006c2d90(g_int_008075A4);
      RaiseInternalException
                (local_4c,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x7bc);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    if (SVar4 != MESS_STAPPC_7101) {
      if (SVar4 == MESS_STAPPC_7102) {
        DarkScreen(DAT_0080759c,10,2);
        pSVar10->field_001C = 1;
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      if (SVar4 != MESS_STAPPC_7104) {
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      thunk_FUN_005718d0((int)pSVar10);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    dVar7 = (message->arg0).u32;
    local_10 = 1;
    if (dVar7 == 1) {
      puVar15 = (undefined4 *)&pSVar10->field_0x113a;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      puVar15 = &DAT_00803408;
      for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      uVar24 = PTR_00806740->field_0004;
      if (uVar24 < PTR_00806740->field_000C) {
        puVar15 = (undefined4 *)(PTR_00806740->field_0008 * uVar24 + PTR_00806740->field_001C);
        PTR_00806740->field_0004 = uVar24 + 1;
      }
      else {
        puVar15 = (undefined4 *)0x0;
      }
      if (puVar15 == (undefined4 *)0x0) {
        pSVar10->field_1146 = 1;
        pSVar10->field_114A = 0x6123;
      }
      else {
        pSVar10->field_1146 = 1;
        pSVar10->field_114E = 1;
        pSVar10->field_114A = 0x7101;
        puVar23 = puVar15;
        puVar26 = &DAT_00803408;
        for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar26 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar26 = puVar26 + 1;
        }
        wsprintfA((LPSTR)&DAT_00803408,"%s%s",&pSVar10->field_0x164,puVar15);
      }
      pSVar17 = local_44;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_44[4] = 0x7100;
    }
    else if (dVar7 == 3) {
      puVar15 = &DAT_00803408;
      for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      puVar15 = (undefined4 *)&pSVar10->field_0x113a;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      pSVar10->field_1146 = 1;
      pSVar10->field_114A = 0x6104;
      pSVar10->field_114E = 0;
      pSVar17 = local_44;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_44[4] = 0x7100;
      if ((DAT_00807330 & 2) != 0) {
        puVar15 = (undefined4 *)&stack0xfffff65c;
        for (iVar11 = 0xc6; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        Library::MSVCRT::FUN_0072e730(&pSVar10->field_0x7c0a,local_14,local_24c,local_44c,local_54c)
        ;
        Library::MSVCRT::__makepath
                  (&pSVar10->field_7D1A,(char *)local_14,(char *)local_24c,
                   PTR_s_CAMPAIGN_VPS_0079b03c,(char *)0x0);
        local_c = (DArrayTy *)
                  thunk_FUN_00683c70((uint *)&pSVar10->field_7D1A,
                                     (AnonShape_00683C70_22193481 *)&stack0xfffff65c,&local_50,
                                     (int *)0x0,(undefined *)0x0);
        if ((local_50 == 0x40) && (local_c != (DArrayTy *)0x0)) {
          uVar24 = local_c->iteratorIndex;
          if ((message->arg1).u32 == 0) {
            if (uVar24 < local_c->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_c, uVar24) (runtime stride) */
              pcVar14 = (char *)(local_c->elementSize * uVar24 + (int)local_c->data);
              local_c->iteratorIndex = uVar24 + 1;
            }
            else {
              pcVar14 = (char *)0x0;
            }
            if (pcVar14 != (char *)0x0) {
              pcVar22 = pcVar14;
              puVar15 = &DAT_00803408;
              for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar15 = *(undefined4 *)pcVar22;
                pcVar22 = pcVar22 + 4;
                puVar15 = puVar15 + 1;
              }
              Library::MSVCRT::__makepath
                        ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,pcVar14,
                         (char *)0x0);
            }
          }
          else {
            if (uVar24 < local_c->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_c, uVar24) (runtime stride) */
              local_8 = (byte *)(local_c->elementSize * uVar24 + (int)local_c->data);
              local_c->iteratorIndex = uVar24 + 1;
            }
            else {
              local_8 = (byte *)0x0;
            }
            if (local_8 != (byte *)0x0) {
              do {
                Library::MSVCRT::FUN_0072e730(local_8,(byte *)0x0,(byte *)0x0,local_34c,(byte *)0x0)
                ;
                FUN_006b77e0((char *)local_34c,local_34c);
                FUN_006b77e0((char *)local_44c,local_44c);
                pbVar21 = local_44c;
                pbVar25 = local_34c;
                do {
                  bVar3 = *pbVar25;
                  bVar27 = bVar3 < *pbVar21;
                  if (bVar3 != *pbVar21) {
LAB_00570ab1:
                    iVar11 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                    goto LAB_00570ab6;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar25[1];
                  bVar27 = bVar3 < pbVar21[1];
                  if (bVar3 != pbVar21[1]) goto LAB_00570ab1;
                  pbVar25 = pbVar25 + 2;
                  pbVar21 = pbVar21 + 2;
                } while (bVar3 != 0);
                iVar11 = 0;
LAB_00570ab6:
                if (iVar11 == 0) {
                  pbVar21 = local_8;
                  puVar15 = &DAT_00803408;
                  for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
                    *puVar15 = *(undefined4 *)pbVar21;
                    pbVar21 = pbVar21 + 4;
                    puVar15 = puVar15 + 1;
                  }
                  Library::MSVCRT::__makepath
                            ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,
                             (char *)local_8,(char *)0x0);
                  local_8 = (byte *)0x0;
                }
                else {
                  uVar24 = local_c->iteratorIndex;
                  if (uVar24 < local_c->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_c, uVar24) (runtime stride) */
                    local_8 = (byte *)(local_c->elementSize * uVar24 + (int)local_c->data);
                    local_c->iteratorIndex = uVar24 + 1;
                  }
                  else {
                    local_8 = (byte *)0x0;
                  }
                }
              } while (local_8 != (byte *)0x0);
              DArrayDestroy(local_c);
              goto LAB_00570c2f;
            }
          }
          DArrayDestroy(local_c);
        }
      }
    }
    else if (dVar7 == 4) {
      puVar15 = (undefined4 *)&pSVar10->field_0x113a;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      pSVar17 = local_44;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      pSVar10->field_1146 = 1;
      pSVar10->field_114A = 0x6108;
      local_44[4] = 0x7100;
      puVar15 = (undefined4 *)&pSVar10->field_0x6d03;
      puVar23 = &DAT_00803408;
      for (iVar11 = 0x46; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar23 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar23 = puVar23 + 1;
      }
    }
    else {
      local_10 = 0;
    }
LAB_00570c2f:
    if (local_10 == 0) {
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pvVar16 = FindFirstFileA((LPCSTR)&DAT_00803408,&local_68c);
    if (pvVar16 != (HANDLE)0xffffffff) {
      (*pSVar10->vtable->GetMessage)(pSVar10,(int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pSVar20 = pSVar10->vtable;
    pSVar17 = (STMessageId *)&pSVar10->field_0x113a;
LAB_00570c77:
    (*pSVar20->GetMessage)(pSVar10,(int)pSVar17);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

