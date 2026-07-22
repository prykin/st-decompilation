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
  STAppC_field_1180State SVar2;
  byte bVar3;
  byte bVar4;
  STMessageId SVar5;
  STMessageArg SVar6;
  AnonPointee_STAppC_115A *pAVar7;
  dword dVar8;
  code *pcVar9;
  CursorClassTy *pCVar10;
  STAppC *pSVar11;
  int iVar12;
  StartSystemTy *pSVar13;
  DWORD DVar14;
  char *pcVar15;
  undefined4 *puVar16;
  HANDLE pvVar17;
  STMessageId *pSVar18;
  uint uVar19;
  int iVar20;
  STAppCVTable *pSVar21;
  byte *pbVar22;
  char *pcVar23;
  undefined4 *puVar24;
  uint uVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  int iVar31;
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
  iVar12 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  pSVar11 = local_18;
  if (iVar12 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar20 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x890,0,iVar12,"%s",
                                "STAppC::GetMessage");
    if (iVar20 == 0) {
      RaiseInternalException(iVar12,0,"E:\\__titans\\tapp.cpp",0x891);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  sub_006E5150(local_18,message);
  pCVar10 = g_cursorClass_00802A30;
  SVar5 = message->id;
  if (SVar5 < MESS_SHARED_6120) {
    if (SVar5 == MESS_SHARED_611F) {
switchD_0056fad2_caseD_6105:
      DAT_0080674c = 0;
      g_cursorClass_00802A30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar10);
      ChangeResolution(pSVar11,0);
      if (g_startSystem_0081176C == (StartSystemTy *)0x0) {
        pSVar13 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar13 != (StartSystemTy *)0x0) {
          StartSystemTy::StartSystemTy(pSVar13,pSVar11);
        }
        (*g_startSystem_0081176C->vtable->InitSystem)(g_startSystem_0081176C);
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      if (message->id != MESS_STAPPC_6122) {
        g_startSystem_0081176C->field_02EB = ((message->arg0).u32 == 2) + 1;
      }
      SVar6 = message->arg1;
      pSVar18 = local_44;
      for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pSVar18 = MESS_ID_NONE;
        pSVar18 = pSVar18 + 1;
      }
      local_30 = message->arg0;
      local_44[3] = 0;
      local_44[4] = message->id;
      local_44[2] = 0x200;
      local_2c = SVar6;
      FUN_006e3db0((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    switch(SVar5) {
    case 0x60ff:
      if (pSVar11->field_0FC3 != 0) {
        FUN_006c1e20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
        iVar12 = 0;
      }
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar10);
      if (g_startSystem_0081176C != (StartSystemTy *)0x0) {
        FUN_006e4b80(pSVar11,(int)g_startSystem_0081176C);
      }
      uVar25 = 0xffffffff;
      pcVar15 = &DAT_008016a0;
      do {
        pcVar23 = pcVar15;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar23 = pcVar15 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar1 != '\0');
      uVar25 = ~uVar25;
      pcVar15 = pcVar23 + -uVar25;
      pcVar23 = &pSVar11->field_0x7a02;
      for (uVar19 = uVar25 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar23 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar23 = pcVar23 + 1;
      }
      OpenGameDBs(pSVar11);
      StartGame(pSVar11);
      SVar2 = pSVar11->field_1180;
      if ((SVar2 < (CASE_8|CASE_1)) || ((0xc < SVar2 && (SVar2 != 0x10)))) {
        puVar16 = (undefined4 *)&pSVar11->field_0x1196;
        puVar24 = (undefined4 *)&pSVar11->field_0x2b2f;
        for (iVar12 = 0x666; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        }
        *(undefined1 *)puVar24 = *(undefined1 *)puVar16;
        pSVar11->field_44C8 = pSVar11->field_4F0A;
        puVar16 = (undefined4 *)&pSVar11->field_0x6e1b;
        puVar24 = (undefined4 *)&pSVar11->field_0x44cc;
        for (iVar12 = 0x100; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        }
        puVar16 = &g_playerRuntime[DAT_0080874d].field480_0x2eb;
        puVar24 = (undefined4 *)&pSVar11->field_0x48cc;
        for (iVar12 = 5; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        }
        puVar16 = &g_playerRuntime[DAT_0080874d].field494_0x2ff;
        puVar24 = (undefined4 *)&pSVar11->field_0x48e0;
        for (iVar12 = 5; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        }
        puVar16 = &g_playerRuntime[DAT_0080874d].field522_0x327;
        puVar24 = (undefined4 *)&pSVar11->field_0x48f4;
        for (iVar12 = 0x9b; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        }
        puVar16 = &g_playerRuntime[DAT_0080874d].field1136_0x593;
        puVar24 = (undefined4 *)&pSVar11->field_0x4b60;
        for (iVar12 = 0x6a; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        }
        puVar16 = &g_playerRuntime[DAT_0080874d].field1554_0x73b;
        puVar24 = (undefined4 *)&pSVar11->field_0x4d08;
        for (iVar12 = 0x26; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar24 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar24 = puVar24 + 1;
        }
        *(undefined2 *)puVar24 = *(undefined2 *)puVar16;
        *(undefined1 *)((int)puVar24 + 2) = *(undefined1 *)((int)puVar16 + 2);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6100:
      DAT_0080674c = 0;
      if (pSVar11->field_0FC3 != 0) {
        FUN_006c1e20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
      }
      thunk_FUN_005713b0((int)pSVar11);
      DVar14 = sub_006E51B0(pSVar11);
      pSVar11->field_1134 = DVar14;
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar10);
      thunk_FUN_005711d0(pSVar11,(int *)&PTR_0081163c);
      CloseGameDBs(pSVar11);
      if (g_startSystem_0081176C != (StartSystemTy *)0x0) {
        FUN_006e4b80(pSVar11,(int)g_startSystem_0081176C);
      }
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
      DarkScreen(DAT_0080759c,10,2);
      ChangeResolution(pSVar11,0);
      uVar25 = 0xffffffff;
      pcVar15 = &pSVar11->field_0x77fa;
      do {
        pcVar23 = pcVar15;
        if (uVar25 == 0) break;
        uVar25 = uVar25 - 1;
        pcVar23 = pcVar15 + 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar23;
      } while (cVar1 != '\0');
      uVar25 = ~uVar25;
      pcVar15 = pcVar23 + -uVar25;
      pcVar23 = &pSVar11->field_0x76f6;
      for (uVar19 = uVar25 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
        *pcVar23 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar23 = pcVar23 + 1;
      }
      OpenGameDBs(pSVar11);
      StartGame(pSVar11);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    case MESS_STARTSYSTEMTY_6102:
    case MESS_STARTSYSTEMTY_6103:
    case MESS_STARTSYSTEMTY_6104:
    case MESS_SHARED_610A:
switchD_0056fad2_caseD_6102:
      DAT_0080674c = 0;
      ChangeResolution(pSVar11,0);
      if (pSVar11->field_0FC3 != 0) {
        FUN_006c1e20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
        iVar12 = 0;
      }
      thunk_FUN_005713b0((int)pSVar11);
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar10);
      thunk_FUN_005711d0(pSVar11,(int *)&PTR_0081163c);
      CloseGameDBs(pSVar11);
      if (g_startSystem_0081176C == (StartSystemTy *)0x0) {
        pSVar13 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar13 != (StartSystemTy *)0x0) {
          StartSystemTy::StartSystemTy(pSVar13,pSVar11);
        }
        (*g_startSystem_0081176C->vtable->InitSystem)(g_startSystem_0081176C);
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      pSVar18 = local_44;
      for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pSVar18 = MESS_ID_NONE;
        pSVar18 = pSVar18 + 1;
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
      bVar4 = pSVar11->field_112D;
      (&pSVar11->field_11A7)[(uint)bVar4 * 0x51] = 1;
      pSVar11->field_112D = *(undefined1 *)((int)&message->arg0 + 2);
      pSVar11->field_112E = *(undefined1 *)&message->arg0;
      (&pSVar11->field_11A7)[(uint)(byte)pSVar11->field_112D * 0x51] = 0;
      if (g_playSystem_00802A38 != (STPlaySystemC *)0x0) {
        FUN_006e57b0(g_playSystem_00802A38,0x121);
        (*g_playSystem_00802A38->vtable->vfunc_08)(0x121,0,0,0,0);
        local_b8 = 0xf;
        local_b4 = 0x4405;
        (*g_playSystem_00802A38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_c4);
      }
      if (PTR_00802a28 != (ccFntTy *)0x0) {
        thunk_FUN_005711d0(pSVar11,(int *)&PTR_00802a28);
      }
      CreateInterSystem();
      if (g_allPlayers_007FA174 != (STAllPlayersC *)0x0) {
        thunk_FUN_0042a9f0(bVar4);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case MESS_STARTSYSTEMTY_6104|MESS_SHARED_0003:
      DarkScreen(DAT_0080759c,10,2);
      if (PTR_00802a28 != (ccFntTy *)0x0) {
        thunk_FUN_005711d0(pSVar11,(int *)&PTR_00802a28);
      }
      ChangeResolution(pSVar11,_DAT_00807348 & 0xff);
      pCVar10 = g_cursorClass_00802A30;
      uVar25 = _DAT_00807348 & 0xff;
      g_cursorClass_00802A30->field_04B2 = (&DAT_00807568)[uVar25 * 4];
      pCVar10->field_04B6 = (&DAT_0080756c)[uVar25 * 4];
      pCVar10->field_04BA = (&DAT_00807570)[uVar25 * 4];
      pCVar10->field_04BE = (&DAT_00807574)[uVar25 * 4];
      if (g_opticClass_007FB2A0 != (OpticClassC *)0x0) {
        OpticClassC::ReInitOptic(g_opticClass_007FB2A0,_DAT_00807348 & 0xff);
        FUN_006b1a50(PTR_008075a8,3,(undefined4 *)0x0,&local_60);
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
      bVar28 = true;
      g_cursorClass_00802A30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar10);
      pSVar18 = local_44;
      for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pSVar18 = MESS_ID_NONE;
        pSVar18 = pSVar18 + 1;
      }
      bVar4 = pSVar11->field_6CE1;
      bVar3 = pSVar11->field_6CE0;
      local_44[4] = 0x6102;
      if (((bVar3 <= bVar4) && (pSVar11->field_6CE2 <= bVar4)) && (bVar4 != 0)) {
        bVar28 = false;
        local_44[4] = 0x6103;
        local_30 = (STMessageArg)0x0;
        pSVar11->field_6CE1 = 0;
      }
      if (bVar28) {
        bVar28 = true;
        if (((pSVar11->field_6CE1 < bVar3) && (pSVar11->field_6CE2 <= bVar3)) && (bVar3 != 0)) {
          local_44[4] = 0x6104;
          local_30 = (STMessageArg)0x1;
          pSVar11->field_6CE0 = 0;
          bVar28 = false;
        }
        if (bVar28) {
          bVar4 = pSVar11->field_6CE2;
          bVar28 = true;
          if ((pSVar11->field_6CE1 < bVar4) && (pSVar11->field_6CE0 < bVar4)) {
            if ((DAT_00807330 & 2) == 0) {
              pSVar11->field_6CE2 = 0;
            }
            else if (bVar4 != 0) {
              local_44[4] = 0x7101;
              local_30 = (STMessageArg)0x4;
              pSVar11->field_6CE2 = 0;
              bVar28 = false;
            }
          }
          if ((((bVar28) && (pSVar11->field_6CE1 == 0)) && (pSVar11->field_6CE0 == 0)) &&
             ((pSVar11->field_6CE2 == 0 && (pSVar11->field_5012 != '\0')))) {
            wsprintfA(&pSVar11->field_0x76f6,"%s%s",&pSVar11->field_0x60,&pSVar11->field_5012
                     );
            wsprintfA(&pSVar11->field_0x78fe,"%s",&pSVar11->field_5012);
            uVar25 = 0xffffffff;
            pcVar15 = &pSVar11->field_0x76f6;
            do {
              pcVar23 = pcVar15;
              if (uVar25 == 0) break;
              uVar25 = uVar25 - 1;
              pcVar23 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar23;
            } while (cVar1 != '\0');
            uVar25 = ~uVar25;
            pcVar15 = pcVar23 + -uVar25;
            pcVar23 = &pSVar11->field_0x77fa;
            for (uVar19 = uVar25 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar25 = uVar25 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
              *pcVar23 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar23 = pcVar23 + 1;
            }
            if ((pSVar11->field_1180 == CASE_3) || (pSVar11->field_1180 == (CASE_8|CASE_3))) {
              pSVar11->field_1180 = CASE_3;
            }
            else {
              pSVar11->field_1180 = CASE_8;
            }
            iVar12 = sub_0056E9E0(pSVar11,1);
            if (iVar12 != 0) {
              local_44[4] = 0x6104;
              local_30 = (STMessageArg)0x0;
            }
          }
        }
      }
      if ((local_44[4] == 0x6102) && (DAT_008067a0 != '\0')) {
        if ((DAT_00802a98 == '\0') ||
           (iVar12 = CFsgsConnection::IsInitialized((CFsgsConnection *)&DAT_00802a90), iVar12 == 0))
        {
          bVar28 = false;
        }
        else {
          bVar28 = true;
        }
        if (bVar28) {
          local_44[4] = 0x610a;
          local_30 = (STMessageArg)0x6;
        }
      }
      pSVar21 = pSVar11->vtable;
      pSVar18 = local_44;
      goto LAB_00570c77;
    }
  }
  else {
    if (SVar5 < MESS_STAPPC_7101) {
      if (SVar5 != MESS_STAPPC_7100) {
        if (SVar5 != MESS_STAPPC_6122) {
          if (SVar5 == MESS_STAPPC_6123) goto switchD_0056fad2_caseD_6102;
          if (SVar5 != MESS_STARTSYSTEMTY_6124) {
            g_currentExceptionFrame = local_a4.previous;
            return 0;
          }
        }
        goto switchD_0056fad2_caseD_6105;
      }
      local_8 = (byte *)0x1;
      Library::DKW::DV::FUN_006c4110(g_anonShape_006C3FC0_72DDFA27_008075A0);
      if ((g_anonShape_006C3FC0_72DDFA27_008075A0->field_0004 & 0x40000000) != 0) {
        FUN_006c3f00((int)g_anonShape_006C3FC0_72DDFA27_008075A0);
      }
      local_10 = FUN_006c2a00(&DAT_00803408);
      if ((local_10 != 0) && (g_int_008075A4 == (int *)0x0)) {
        FUN_006e3db0((int)&pSVar11->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      if (pSVar11->field_0FC3 != 0) {
        FUN_006c1e20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
      }
      thunk_FUN_005713b0((int)pSVar11);
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      thunk_FUN_0054b540(pCVar10);
      if (g_startSystem_0081176C != (StartSystemTy *)0x0) {
        FUN_006e4b80(pSVar11,(int)g_startSystem_0081176C);
      }
      thunk_FUN_005711d0(pSVar11,(int *)&PTR_0081163c);
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
      FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
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
          Library::DKW::DDX::FUN_006b1470((int *)PTR_008075a8);
        }
        pSVar11 = local_18;
        puVar16 = &local_18->field_0038;
        local_18->field_4EFA = 0;
        thunk_FUN_00567220((AnonShape_00567220_C9DD1C7D *)puVar16);
        thunk_FUN_00567180(puVar16,HWND_00856d78);
        FUN_006e3db0((int)&pSVar11->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      uVar25 = 0;
      local_48 = 0;
      FUN_006b13e0((int *)PTR_008075a8);
      if (((ushort)DAT_0080350c & 0xff) == 1) {
        local_24 = 0x280;
        local_20 = 0x1e0;
      }
      else {
        local_24 = 800;
        local_20 = 600;
      }
      iVar12 = 0x10;
      local_1c = iVar12;
      if ((ushort)DAT_0080350c >> 8 == 2) {
        iVar12 = 0x18;
        local_1c = iVar12;
      }
      do {
        if (iVar12 == 8) goto LAB_00570645;
        iVar20 = 0;
        local_c = (DArrayTy *)0x0;
        pAVar7 = local_18->field_115A;
        puVar16 = &pAVar7->field_0004;
        if (0 < (int)*puVar16) {
          do {
            if (((pAVar7[1].field_0000 == local_24) && (pAVar7[1].field_0004 == local_20)) &&
               (pAVar7[2].field_0000 == iVar12)) {
              local_c = (DArrayTy *)0x1;
              break;
            }
            iVar20 = iVar20 + 1;
            pAVar7 = (AnonPointee_STAppC_115A *)&pAVar7[1].field_0004;
          } while (iVar20 < (int)*puVar16);
        }
        if (local_c != (DArrayTy *)0x0) {
          local_108.previous = g_currentExceptionFrame;
          DAT_00806738 = iVar12;
          g_currentExceptionFrame = &local_108;
          iVar20 = Library::MSVCRT::__setjmp3(local_108.jumpBuffer,0);
          iVar12 = local_1c;
          if (iVar20 == 0) {
            DVar14 = Library::DKW::DDX::FUN_006b9b40
                               (DAT_0080759c,0x10000001,local_24,local_20,local_1c,local_24,local_20
                                ,0,0,0);
            local_48 = (uint)(DVar14 == 0);
          }
          uVar25 = local_48;
          g_currentExceptionFrame = local_108.previous;
          if ((local_c != (DArrayTy *)0x0) && (local_48 != 0)) break;
        }
        if (iVar12 == 0x10) {
          iVar12 = 8;
          local_1c = iVar12;
        }
        else if (iVar12 == 0x18) {
          iVar12 = 0x20;
          local_1c = iVar12;
        }
        else if (iVar12 == 0x20) {
          iVar12 = 0x10;
          local_1c = iVar12;
        }
      } while (uVar25 == 0);
      if (iVar12 == 8) {
LAB_00570645:
        if (uVar25 == 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x792);
        }
      }
      iVar12 = local_10;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((DAT_0080350c._2_1_ == '\x01') ||
         ((DAT_0080350c._2_1_ == '\x02' && (DAT_0080351f == '\x01')))) {
        local_8 = (byte *)((uint)local_8 | 4);
      }
      if (local_10 == 0) {
        Library::DKW::DV::FUN_006c3b00
                  (g_anonShape_006C3FC0_72DDFA27_008075A0,(LPCSTR)&DAT_00803408,(uint)local_8);
      }
      else {
        Library::DKW::DV::FUN_006c2ae0(g_int_008075A4,&DAT_00803408,(uint)local_8);
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (DAT_0080350c._2_1_ == '\x01') {
        iVar20 = 0;
        iVar29 = 0;
        iVar30 = DAT_0080759c[6];
        iVar31 = DAT_0080759c[7];
        if (iVar12 != 0) {
          Library::DKW::DV::FUN_006c2d30(g_int_008075A4,0,0,DAT_0080759c[6],DAT_0080759c[7]);
          goto cf_common_exit_0057073B;
        }
      }
      else {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (DAT_0080350c._2_1_ != '\x02') goto cf_common_exit_0057073B;
        iVar20 = ram0x0080350f;
        iVar29 = DAT_00803513;
        iVar30 = DAT_00803517;
        iVar31 = DAT_0080351b;
        if (iVar12 != 0) {
          Library::DKW::DV::FUN_006c2d30
                    (g_int_008075A4,ram0x0080350f,DAT_00803513,DAT_00803517,DAT_0080351b);
          goto cf_common_exit_0057073B;
        }
      }
      FUN_006c3fc0(g_anonShape_006C3FC0_72DDFA27_008075A0,iVar20,iVar29,iVar30,iVar31);
cf_common_exit_0057073B:
      pSVar11 = local_18;
      thunk_FUN_00567220((AnonShape_00567220_C9DD1C7D *)&local_18->field_0038);
      pSVar11->field_4EFA = 1;
      if (iVar12 == 0) {
        Library::DKW::DV::FUN_006c4000(g_anonShape_006C3FC0_72DDFA27_008075A0);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      Library::DKW::DV::FUN_006c2d90(g_int_008075A4);
      RaiseInternalException
                (local_4c,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x7bc);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    if (SVar5 != MESS_STAPPC_7101) {
      if (SVar5 == MESS_STAPPC_7102) {
        DarkScreen(DAT_0080759c,10,2);
        pSVar11->field_001C = 1;
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      if (SVar5 != MESS_STAPPC_7104) {
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      thunk_FUN_005718d0((int)pSVar11);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    dVar8 = (message->arg0).u32;
    local_10 = 1;
    if (dVar8 == 1) {
      memset(&pSVar11->field_0x113a, 0, 0x20); /* compiler bulk-zero initialization */
      iVar12 = 0;
      memset(&DAT_00803408, 0, 0x118); /* compiler bulk-zero initialization */
      iVar12 = 0;
      uVar25 = PTR_00806740->iteratorIndex;
      if (uVar25 < PTR_00806740->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_00806740, uVar25) (runtime stride) */
        puVar16 = (undefined4 *)(PTR_00806740->elementSize * uVar25 + (int)PTR_00806740->data);
        PTR_00806740->iteratorIndex = uVar25 + 1;
      }
      else {
        puVar16 = (undefined4 *)0x0;
      }
      if (puVar16 == (undefined4 *)0x0) {
        pSVar11->field_1146 = 1;
        pSVar11->field_114A = 0x6123;
      }
      else {
        pSVar11->field_1146 = 1;
        pSVar11->field_114E = 1;
        pSVar11->field_114A = 0x7101;
        puVar24 = puVar16;
        puVar27 = &DAT_00803408;
        for (iVar12 = 0x46; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar27 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar27 = puVar27 + 1;
        }
        wsprintfA((LPSTR)&DAT_00803408,"%s%s",&pSVar11->field_0x164,puVar16);
      }
      pSVar18 = local_44;
      for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pSVar18 = MESS_ID_NONE;
        pSVar18 = pSVar18 + 1;
      }
      local_44[4] = 0x7100;
    }
    else if (dVar8 == 3) {
      memset(&DAT_00803408, 0, 0x118); /* compiler bulk-zero initialization */
      iVar12 = 0;
      memset(&pSVar11->field_0x113a, 0, 0x20); /* compiler bulk-zero initialization */
      iVar12 = 0;
      pSVar11->field_1146 = 1;
      pSVar11->field_114A = 0x6104;
      pSVar11->field_114E = 0;
      pSVar18 = local_44;
      for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pSVar18 = MESS_ID_NONE;
        pSVar18 = pSVar18 + 1;
      }
      local_44[4] = 0x7100;
      if ((DAT_00807330 & 2) != 0) {
        memset(&stack0xfffff65c, 0, 0x318); /* compiler bulk-zero initialization */
        iVar12 = 0;
        Library::MSVCRT::FUN_0072e730(&pSVar11->field_0x7c0a,local_14,local_24c,local_44c,local_54c)
        ;
        Library::MSVCRT::__makepath
                  (&pSVar11->field_7D1A,(char *)local_14,(char *)local_24c,
                   PTR_s_CAMPAIGN_VPS_0079b03c,(char *)0x0);
        local_c = (DArrayTy *)
                  thunk_FUN_00683c70(&pSVar11->field_7D1A,
                                     (AnonShape_00683C70_22193481 *)&stack0xfffff65c,&local_50,
                                     (int *)0x0,(undefined *)0x0);
        if ((local_50 == 0x40) && (local_c != (DArrayTy *)0x0)) {
          uVar25 = local_c->iteratorIndex;
          if ((message->arg1).u32 == 0) {
            if (uVar25 < local_c->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_c, uVar25) (runtime stride) */
              pcVar15 = (char *)(local_c->elementSize * uVar25 + (int)local_c->data);
              local_c->iteratorIndex = uVar25 + 1;
            }
            else {
              pcVar15 = (char *)0x0;
            }
            if (pcVar15 != (char *)0x0) {
              pcVar23 = pcVar15;
              puVar16 = &DAT_00803408;
              for (iVar12 = 0x46; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar16 = *(undefined4 *)pcVar23;
                pcVar23 = pcVar23 + 4;
                puVar16 = puVar16 + 1;
              }
              Library::MSVCRT::__makepath
                        ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,pcVar15,
                         (char *)0x0);
            }
          }
          else {
            if (uVar25 < local_c->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_c, uVar25) (runtime stride) */
              local_8 = (byte *)(local_c->elementSize * uVar25 + (int)local_c->data);
              local_c->iteratorIndex = uVar25 + 1;
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
                pbVar22 = local_44c;
                pbVar26 = local_34c;
                do {
                  bVar4 = *pbVar26;
                  bVar28 = bVar4 < *pbVar22;
                  if (bVar4 != *pbVar22) {
LAB_00570ab1:
                    iVar12 = (1 - (uint)bVar28) - (uint)(bVar28 != 0);
                    goto LAB_00570ab6;
                  }
                  if (bVar4 == 0) break;
                  bVar4 = pbVar26[1];
                  bVar28 = bVar4 < pbVar22[1];
                  if (bVar4 != pbVar22[1]) goto LAB_00570ab1;
                  pbVar26 = pbVar26 + 2;
                  pbVar22 = pbVar22 + 2;
                } while (bVar4 != 0);
                iVar12 = 0;
LAB_00570ab6:
                if (iVar12 == 0) {
                  pbVar22 = local_8;
                  puVar16 = &DAT_00803408;
                  for (iVar12 = 0x46; iVar12 != 0; iVar12 = iVar12 + -1) {
                    *puVar16 = *(undefined4 *)pbVar22;
                    pbVar22 = pbVar22 + 4;
                    puVar16 = puVar16 + 1;
                  }
                  Library::MSVCRT::__makepath
                            ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,
                             (char *)local_8,(char *)0x0);
                  local_8 = (byte *)0x0;
                }
                else {
                  uVar25 = local_c->iteratorIndex;
                  if (uVar25 < local_c->count) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(local_c, uVar25) (runtime stride) */
                    local_8 = (byte *)(local_c->elementSize * uVar25 + (int)local_c->data);
                    local_c->iteratorIndex = uVar25 + 1;
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
    else if (dVar8 == 4) {
      memset(&pSVar11->field_0x113a, 0, 0x20); /* compiler bulk-zero initialization */
      iVar12 = 0;
      pSVar18 = local_44;
      for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
        *pSVar18 = MESS_ID_NONE;
        pSVar18 = pSVar18 + 1;
      }
      pSVar11->field_1146 = 1;
      pSVar11->field_114A = 0x6108;
      local_44[4] = 0x7100;
      puVar16 = (undefined4 *)&pSVar11->field_0x6d03;
      puVar24 = &DAT_00803408;
      for (iVar12 = 0x46; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar24 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar24 = puVar24 + 1;
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
    pvVar17 = FindFirstFileA((LPCSTR)&DAT_00803408,&local_68c);
    if (pvVar17 != (HANDLE)0xffffffff) {
      (*pSVar11->vtable->GetMessage)(pSVar11,(int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pSVar21 = pSVar11->vtable;
    pSVar18 = (STMessageId *)&pSVar11->field_0x113a;
LAB_00570c77:
    (*pSVar21->GetMessage)(pSVar11,(int)pSVar18);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

