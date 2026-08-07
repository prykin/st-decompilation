#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004058EE|0056FA60; family_names=STAppC::GetMessage; ret4=17;
   direct_offsets={10:4,14:6,18:7,1c:8}

   [STSwitchEnumApplier] Switch target field_1180 uses
   /SubmarineTitans/Recovered/Enums/STAppC_field_1180State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_6=6;CASE_8=8;CASE_9=9;CASE_B=11 */

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
  CursorClassTy *pCVar10;
  STAppC *pSVar11;
  int iVar12;
  StartSystemTy *pSVar12;
  int local_EAX_2897;
  DWORD DVar13;
  char *pcVar14;
  byte *puVar15;
  HANDLE pvVar16;
  STMessageId *pSVar17;
  int iVar20;
  uint uVar18;
  int iVar19;
  int iVar21;
  STAppCVTable *pSVar22;
  byte *pbVar23;
  char *pcVar24;
  byte *puVar25;
  uint uVar26;
  byte *pbVar27;
  byte *puVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
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
      CursorClassTy::sub_0054B540(pCVar10);
      ChangeResolution(pSVar11,0);
      if (g_startSystem_0081176C == nullptr) {
        pSVar12 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar12 != nullptr) {
          StartSystemTy::StartSystemTy(pSVar12,pSVar11);
        }
        g_startSystem_0081176C->InitSystem();
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      if (message->id != MESS_STAPPC_6122) {
        g_startSystem_0081176C->field_02EB = ((message->arg0).u32 == 2) + 1;
      }
      SVar6 = message->arg1;
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
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
        iVar19 = 0;
      }
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      CursorClassTy::sub_0054B540(pCVar10);
      if (g_startSystem_0081176C != nullptr) {
        FUN_006e4b80(pSVar11,(int)g_startSystem_0081176C);
      }
      uVar26 = 0xffffffff;
      pcVar14 = &CHAR_00h_008016a0;
      do {
        pcVar24 = pcVar14;
        if (uVar26 == 0) break;
        uVar26 = uVar26 - 1;
        pcVar24 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar24;
      } while (cVar1 != '\0');
      uVar26 = ~uVar26;
      pcVar14 = pcVar24 + -uVar26;
      pcVar24 = &pSVar11->field_0x7a02;
      memmove(pcVar24, pcVar14, uVar26); /* compiler REP MOVS byte copy */
      uVar18 = 0;
      OpenGameDBs(pSVar11);
      StartGame(pSVar11);
      SVar2 = pSVar11->field_1180;
      if ((SVar2 < CASE_9) || ((0xc < SVar2 && (SVar2 != 0x10)))) {
        puVar15 = (byte *)&pSVar11->field_0x1196;
        puVar25 = (byte *)&pSVar11->field_0x2b2f;
        memmove(puVar25, puVar15, 0x1999); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        pSVar11->field_44C8 = pSVar11->field_4F0A;
        puVar15 = (byte *)&pSVar11->field_0x6e1b;
        puVar25 = (byte *)&pSVar11->field_0x44cc;
        memmove(puVar25, puVar15, 0x400); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)&g_packedRecords_A62x8[DAT_0080874d].field_0x2eb;
        puVar25 = (byte *)&pSVar11->field_0x48cc;
        memmove(puVar25, puVar15, 0x14); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field376_0x2ff);
        puVar25 = (byte *)&pSVar11->field_0x48e0;
        memmove(puVar25, puVar15, 0x14); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field410_0x327);
        puVar25 = (byte *)&pSVar11->field_0x48f4;
        memmove(puVar25, puVar15, 0x26c); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)(&g_packedRecords_A62x8[DAT_0080874d].field1024_0x593);
        puVar25 = (byte *)&pSVar11->field_0x4b60;
        memmove(puVar25, puVar15, 0x1a8); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        puVar15 = (byte *)&g_packedRecords_A62x8[DAT_0080874d].field1445_0x73b;
        puVar25 = (byte *)&pSVar11->field_0x4d08;
        memmove(puVar25, puVar15, 0x9b); /* compiler REP MOVS byte copy */
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
      DVar13 = sub_006E51B0(pSVar11);
      pSVar11->field_1134 = DVar13;
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      CursorClassTy::sub_0054B540(pCVar10);
      thunk_FUN_005711d0(pSVar11,(int *)&g_parentSystem_0081163C);
      CloseGameDBs(pSVar11);
      if (g_startSystem_0081176C != nullptr) {
        FUN_006e4b80(pSVar11,(int)g_startSystem_0081176C);
      }
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
      DarkScreen(g_dDXContext_0080759C,10,2);
      ChangeResolution(pSVar11,0);
      uVar26 = 0xffffffff;
      pcVar14 = &pSVar11->field_0x77fa;
      do {
        pcVar24 = pcVar14;
        if (uVar26 == 0) break;
        uVar26 = uVar26 - 1;
        pcVar24 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar24;
      } while (cVar1 != '\0');
      uVar26 = ~uVar26;
      pcVar14 = pcVar24 + -uVar26;
      pcVar24 = &pSVar11->field_76F6;
      memmove(pcVar24, pcVar14, uVar26); /* compiler REP MOVS byte copy */
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
        iVar19 = 0;
      }
      thunk_FUN_005713b0((int)pSVar11);
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      CursorClassTy::sub_0054B540(pCVar10);
      thunk_FUN_005711d0(pSVar11,(int *)&g_parentSystem_0081163C);
      CloseGameDBs(pSVar11);
      if (g_startSystem_0081176C == nullptr) {
        pSVar12 = (StartSystemTy *)Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar12 != nullptr) {
          StartSystemTy::StartSystemTy(pSVar12,pSVar11);
        }
        g_startSystem_0081176C->InitSystem();
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      else {
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
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
      bVar4 = pSVar11->field_112D;
      (&pSVar11->field_11A7)[(uint)bVar4 * 0x51] = 1;
      pSVar11->field_112D = *(undefined1 *)((int)&message->arg0 + 2);
      pSVar11->field_112E = *(undefined1 *)&message->arg0;
      (&pSVar11->field_11A7)[(uint)(byte)pSVar11->field_112D * 0x51] = 0;
      if (g_playSystem_00802A38 != nullptr) {
        STPlaySystemC::sub_006E57B0(g_playSystem_00802A38,0x121);
        g_playSystem_00802A38->vfunc_08(0x121,0,0,0,0);
        local_b8 = 0xf;
        local_b4 = 0x4405;
        (*g_playSystem_00802A38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_c4);
      }
      if (g_interSystem_00802A28 != nullptr) {
        thunk_FUN_005711d0(pSVar11,(int *)&g_interSystem_00802A28);
      }
      CreateInterSystem();
      if (g_allPlayers_007FA174 != nullptr) {
        thunk_FUN_0042a9f0(bVar4);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case MESS_STARTSYSTEMTY_6104|MESS_SHARED_0003:
      DarkScreen(g_dDXContext_0080759C,10,2);
      if (g_interSystem_00802A28 != nullptr) {
        thunk_FUN_005711d0(pSVar11,(int *)&g_interSystem_00802A28);
      }
      ChangeResolution(pSVar11,_DAT_00807348 & 0xff);
      pCVar10 = g_cursorClass_00802A30;
      uVar26 = _DAT_00807348 & 0xff;
      g_cursorClass_00802A30->field_04B2 = (&DAT_00807568)[uVar26 * 4];
      pCVar10->field_04B6 = (&DAT_0080756c)[uVar26 * 4];
      pCVar10->field_04BA = (&DAT_00807570)[uVar26 * 4];
      pCVar10->field_04BE = (&DAT_00807574)[uVar26 * 4];
      if (g_opticClass_007FB2A0 != nullptr) {
        OpticClassC::ReInitOptic(g_opticClass_007FB2A0,_DAT_00807348 & 0xff);
        FUN_006b1a50(g_ddxContext_008075A8,3,nullptr,&local_60);
        if (g_cPanel_00801688 != nullptr) {
          thunk_FUN_004a9b60(local_60,local_5c,local_58,
                             local_54 -
                             ((-(uint)(g_cPanel_00801688->field_023F != CASE_1) & 0xffffff65) + 0x9b
                             ));
        }
      }
      CreateInterSystem();
      if ((g_parentSystem_0081163C != nullptr) && ((message->arg0).u32 == 0)) {
        GameSystemC::sub_00577690(g_parentSystem_0081163C);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6108:
      bVar29 = true;
      g_cursorClass_00802A30->field_0493 = 0;
      CursorClassTy::sub_0054B540(pCVar10);
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      bVar4 = pSVar11->field_6CE1;
      bVar3 = pSVar11->field_6CE0;
      local_44[4] = 0x6102;
      if (((bVar3 <= bVar4) && (pSVar11->field_6CE2 <= bVar4)) && (bVar4 != 0)) {
        bVar29 = false;
        local_44[4] = 0x6103;
        local_30 = (STMessageArg)0x0;
        pSVar11->field_6CE1 = 0;
      }
      if (bVar29) {
        bVar29 = true;
        if (((pSVar11->field_6CE1 < bVar3) && (pSVar11->field_6CE2 <= bVar3)) && (bVar3 != 0)) {
          local_44[4] = 0x6104;
          local_30 = (STMessageArg)0x1;
          pSVar11->field_6CE0 = 0;
          bVar29 = false;
        }
        if (bVar29) {
          bVar4 = pSVar11->field_6CE2;
          bVar29 = true;
          if ((pSVar11->field_6CE1 < bVar4) && (pSVar11->field_6CE0 < bVar4)) {
            if ((DAT_00807330 & 2) == 0) {
              pSVar11->field_6CE2 = 0;
            }
            else if (bVar4 != 0) {
              local_44[4] = 0x7101;
              local_30 = (STMessageArg)0x4;
              pSVar11->field_6CE2 = 0;
              bVar29 = false;
            }
          }
          if ((((bVar29) && (pSVar11->field_6CE1 == 0)) && (pSVar11->field_6CE0 == 0)) &&
             ((pSVar11->field_6CE2 == 0 && (pSVar11->field_5012 != '\0')))) {
            wsprintfA(&pSVar11->field_76F6,"%s%s",&pSVar11->field_0x60,&pSVar11->field_5012);
            wsprintfA(&pSVar11->field_78FE,"%s",&pSVar11->field_5012);
            uVar26 = 0xffffffff;
            pcVar14 = &pSVar11->field_76F6;
            do {
              pcVar24 = pcVar14;
              if (uVar26 == 0) break;
              uVar26 = uVar26 - 1;
              pcVar24 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar24;
            } while (cVar1 != '\0');
            uVar26 = ~uVar26;
            pcVar14 = pcVar24 + -uVar26;
            pcVar24 = &pSVar11->field_0x77fa;
            memmove(pcVar24, pcVar14, uVar26); /* compiler REP MOVS byte copy */
            if ((pSVar11->field_1180 == CASE_3) || (pSVar11->field_1180 == CASE_B)) {
              pSVar11->field_1180 = CASE_3;
            }
            else {
              pSVar11->field_1180 = CASE_8;
            }
            iVar19 = sub_0056E9E0(pSVar11,1);
            if (iVar19 != 0) {
              local_44[4] = 0x6104;
              local_30 = (STMessageArg)0x0;
            }
          }
        }
      }
      if ((local_44[4] == 0x6102) && (DAT_008067a0 != '\0')) {
        if ((DAT_00802a98 == '\0') ||
           (iVar19 = CFsgsConnection::IsInitialized((CFsgsConnection *)&DAT_00802a90), iVar19 == 0))
        {
          bVar29 = false;
        }
        else {
          bVar29 = true;
        }
        if (bVar29) {
          local_44[4] = 0x610a;
          local_30 = (STMessageArg)0x6;
        }
      }
      pSVar22 = pSVar11->vtable;
      pSVar17 = local_44;
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
      if ((local_10 != 0) && (g_int_008075A4 == nullptr)) {
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
      CursorClassTy::sub_0054B540(pCVar10);
      if (g_startSystem_0081176C != nullptr) {
        FUN_006e4b80(pSVar11,(int)g_startSystem_0081176C);
      }
      thunk_FUN_005711d0(pSVar11,(int *)&g_parentSystem_0081163C);
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
      Library::DKW::DDX::FUN_006bab60(g_dDXContext_0080759C,0);
      Library::DKW::DDX::FUN_006bb370(g_dDXContext_0080759C,0,0);
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
                    (g_dDXContext_0080759C,0x10000001,g_nWidth_00806730,DAT_00806734,8,
                     g_nWidth_00806730,DAT_00806734,0,0,0x100);
          Library::DKW::DDX::FUN_006b1470((int *)g_ddxContext_008075A8);
        }
        pSVar11 = local_18;
        puVar15 = (byte *)(&local_18->field_0038);
        local_18->field_4EFA = 0;
        thunk_FUN_00567220((AnonShape_00567220_C9DD1C7D *)puVar15);
        thunk_FUN_00567180(puVar15,HWND_00856d78);
        FUN_006e3db0((int)&pSVar11->field_0x113a);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      uVar26 = 0;
      local_48 = 0;
      FUN_006b13e0((int *)g_ddxContext_008075A8);
      if (((ushort)DAT_0080350c & 0xff) == 1) {
        local_24 = 0x280;
        local_20 = 0x1e0;
      }
      else {
        local_24 = 800;
        local_20 = 600;
      }
      iVar19 = 0x10;
      local_1c = iVar19;
      if ((ushort)DAT_0080350c >> 8 == 2) {
        iVar19 = 0x18;
        local_1c = iVar19;
      }
      do {
        if (iVar19 == 8) goto LAB_00570645;
        iVar21 = 0;
        local_c = nullptr;
        pAVar7 = local_18->field_115A;
        puVar15 = (byte *)(&pAVar7->field_0004);
        if (0 < (int)*puVar15) {
          do {
            if (((pAVar7[1].field_0000 == local_24) && (pAVar7[1].field_0004 == local_20)) &&
               (pAVar7[2].field_0000 == iVar19)) {
              local_c = (DArrayTy *)0x1;
              break;
            }
            iVar21 = iVar21 + 1;
            pAVar7 = (AnonPointee_STAppC_115A *)&pAVar7[1].field_0004;
          } while (iVar21 < (int)*puVar15);
        }
        if (local_c != nullptr) {
          local_108.previous = g_currentExceptionFrame;
          DAT_00806738 = iVar19;
          g_currentExceptionFrame = &local_108;
          local_EAX_2897 = Library::MSVCRT::__setjmp3(local_108.jumpBuffer,0);
          iVar19 = local_1c;
          if (local_EAX_2897 == 0) {
            DVar13 = Library::DKW::DDX::FUN_006b9b40
                               (g_dDXContext_0080759C,0x10000001,local_24,local_20,local_1c,local_24
                                ,local_20,0,0,0);
            local_48 = (uint)(DVar13 == 0);
          }
          uVar26 = local_48;
          g_currentExceptionFrame = local_108.previous;
          if ((local_c != nullptr) && (local_48 != 0)) break;
        }
        if (iVar19 == 0x10) {
          iVar19 = 8;
          local_1c = iVar19;
        }
        else if (iVar19 == 0x18) {
          iVar19 = 0x20;
          local_1c = iVar19;
        }
        else if (iVar19 == 0x20) {
          iVar19 = 0x10;
          local_1c = iVar19;
        }
      } while (uVar26 == 0);
      if (iVar19 == 8) {
LAB_00570645:
        if (uVar26 == 0) {
          RaiseInternalException
                    (-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x792);
        }
      }
      iVar19 = local_10;
      if ((STPiece<2,1>(DAT_0080350c) == '\x01') ||
         ((STPiece<2,1>(DAT_0080350c) == '\x02' && (DAT_0080351f == '\x01')))) {
        local_8 = (byte *)((uint)local_8 | 4);
      }
      if (local_10 == 0) {
        Library::DKW::DV::FUN_006c3b00
                  (g_anonShape_006C3FC0_72DDFA27_008075A0,(LPCSTR)&DAT_00803408,(uint)local_8);
      }
      else {
        Library::DKW::DV::FUN_006c2ae0(g_int_008075A4,&DAT_00803408,(uint)local_8);
      }
      if (STPiece<2,1>(DAT_0080350c) == '\x01') {
        iVar21 = 0;
        iVar30 = 0;
        iVar31 = g_dDXContext_0080759C->field_0018;
        iVar32 = g_dDXContext_0080759C->field_001C;
        if (iVar19 != 0) {
          Library::DKW::DV::FUN_006c2d30
                    (g_int_008075A4,0,0,g_dDXContext_0080759C->field_0018,
                     g_dDXContext_0080759C->field_001C);
          goto cf_common_exit_0057073B;
        }
      }
      else {
        if (STPiece<2,1>(DAT_0080350c) != '\x02') goto cf_common_exit_0057073B;
        iVar21 = ram0x0080350f;
        iVar30 = DAT_00803513;
        iVar31 = DAT_00803517;
        iVar32 = DAT_0080351b;
        if (iVar19 != 0) {
          Library::DKW::DV::FUN_006c2d30
                    (g_int_008075A4,ram0x0080350f,DAT_00803513,DAT_00803517,DAT_0080351b);
          goto cf_common_exit_0057073B;
        }
      }
      FUN_006c3fc0(g_anonShape_006C3FC0_72DDFA27_008075A0,iVar21,iVar30,iVar31,iVar32);
cf_common_exit_0057073B:
      pSVar11 = local_18;
      thunk_FUN_00567220((AnonShape_00567220_C9DD1C7D *)&local_18->field_0038);
      pSVar11->field_4EFA = 1;
      if (iVar19 == 0) {
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
        DarkScreen(g_dDXContext_0080759C,10,2);
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
      iVar19 = 0;
      memset(&DAT_00803408, 0, 0x118); /* compiler bulk-zero initialization */
      iVar19 = 0;
      uVar26 = PTR_00806740->iteratorIndex;
      if (uVar26 < PTR_00806740->count) {
        puVar15 = DArrayAt<byte>(PTR_00806740, uVar26);
        PTR_00806740->iteratorIndex = uVar26 + 1;
      }
      else {
        puVar15 = nullptr;
      }
      if (puVar15 == nullptr) {
        pSVar11->field_1146 = 1;
        pSVar11->field_114A = 0x6123;
      }
      else {
        pSVar11->field_1146 = 1;
        pSVar11->field_114E = 1;
        pSVar11->field_114A = 0x7101;
        puVar25 = (byte *)(puVar15);
        puVar28 = (byte *)(&DAT_00803408);
        memmove(puVar28, puVar25, 0x118); /* compiler REP MOVS byte copy */
        iVar19 = 0;
        wsprintfA((LPSTR)&DAT_00803408,"%s%s",&pSVar11->field_0x164,puVar15);
      }
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_44[4] = 0x7100;
    }
    else if (dVar8 == 3) {
      memset(&DAT_00803408, 0, 0x118); /* compiler bulk-zero initialization */
      iVar19 = 0;
      memset(&pSVar11->field_0x113a, 0, 0x20); /* compiler bulk-zero initialization */
      iVar19 = 0;
      pSVar11->field_1146 = 1;
      pSVar11->field_114A = 0x6104;
      pSVar11->field_114E = 0;
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      local_44[4] = 0x7100;
      if ((DAT_00807330 & 2) != 0) {
        memset(&stack0xfffff65c, 0, 0x318); /* compiler bulk-zero initialization */
        iVar19 = 0;
        Library::MSVCRT::FUN_0072e730(&pSVar11->field_0x7c0a,local_14,local_24c,local_44c,local_54c);
        Library::MSVCRT::__makepath
                  (&pSVar11->field_7D1A,(char *)local_14,(char *)local_24c,
                   PTR_s_CAMPAIGN_VPS_0079b03c,nullptr);
        local_c = (DArrayTy *)
                  thunk_FUN_00683c70(&pSVar11->field_7D1A,
                                     (AnonShape_00683C70_22193481 *)&stack0xfffff65c,&local_50,
                                     nullptr,nullptr);
        if ((local_50 == 0x40) && (local_c != nullptr)) {
          uVar26 = local_c->iteratorIndex;
          if ((message->arg1).u32 == 0) {
            if (uVar26 < local_c->count) {
              pcVar14 = DArrayAt<char>(local_c, uVar26);
              local_c->iteratorIndex = uVar26 + 1;
            }
            else {
              pcVar14 = nullptr;
            }
            if (pcVar14 != nullptr) {
              pcVar24 = pcVar14;
              puVar15 = (byte *)(&DAT_00803408);
              memmove(puVar15, pcVar24, 0x118); /* compiler REP MOVS byte copy */
              Library::MSVCRT::__makepath
                        ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,pcVar14,
                         nullptr);
            }
          }
          else {
            if (uVar26 < local_c->count) {
              local_8 = DArrayAt<byte>(local_c, uVar26);
              local_c->iteratorIndex = uVar26 + 1;
            }
            else {
              local_8 = nullptr;
            }
            if (local_8 != nullptr) {
              do {
                Library::MSVCRT::FUN_0072e730(local_8,nullptr,nullptr,local_34c,nullptr);
                FUN_006b77e0((char *)local_34c,local_34c);
                FUN_006b77e0((char *)local_44c,local_44c);
                pbVar23 = local_44c;
                pbVar27 = local_34c;
                do {
                  bVar4 = *pbVar27;
                  bVar29 = bVar4 < *pbVar23;
                  if (bVar4 != *pbVar23) {
LAB_00570ab1:
                    iVar19 = (1 - (uint)bVar29) - (uint)(bVar29 != 0);
                    goto LAB_00570ab6;
                  }
                  if (bVar4 == 0) break;
                  bVar4 = pbVar27[1];
                  bVar29 = bVar4 < pbVar23[1];
                  if (bVar4 != pbVar23[1]) goto LAB_00570ab1;
                  pbVar27 = pbVar27 + 2;
                  pbVar23 = pbVar23 + 2;
                } while (bVar4 != 0);
                iVar19 = 0;
LAB_00570ab6:
                if (iVar19 == 0) {
                  pbVar23 = local_8;
                  puVar15 = (byte *)(&DAT_00803408);
                  memmove(puVar15, pbVar23, 0x118); /* compiler REP MOVS byte copy */
                  Library::MSVCRT::__makepath
                            ((char *)&DAT_00803408,(char *)local_14,(char *)local_24c,
                             (char *)local_8,nullptr);
                  local_8 = nullptr;
                }
                else {
                  uVar26 = local_c->iteratorIndex;
                  if (uVar26 < local_c->count) {
                    local_8 = DArrayAt<byte>(local_c, uVar26);
                    local_c->iteratorIndex = uVar26 + 1;
                  }
                  else {
                    local_8 = nullptr;
                  }
                }
              } while (local_8 != nullptr);
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
      iVar19 = 0;
      pSVar17 = local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *pSVar17 = MESS_ID_NONE;
        pSVar17 = pSVar17 + 1;
      }
      pSVar11->field_1146 = 1;
      pSVar11->field_114A = 0x6108;
      local_44[4] = 0x7100;
      puVar15 = (byte *)&pSVar11->field_0x6d03;
      puVar25 = (byte *)(&DAT_00803408);
      memmove(puVar25, puVar15, 0x118); /* compiler REP MOVS byte copy */
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
      pSVar11->GetMessage((int)local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pSVar22 = pSVar11->vtable;
    pSVar17 = (STMessageId *)&pSVar11->field_0x113a;
LAB_00570c77:
    (*pSVar22->GetMessage)(pSVar11,(int)pSVar17);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

