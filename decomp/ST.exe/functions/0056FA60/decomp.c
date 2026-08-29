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
  byte stack_bytes_neg_9A4[0x318]; /* exact EBP-relative stack object */
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
  RecoveredRecord_006E3DB0_0F66DDCF *pRVar17;
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
  byte local_c4 [12];
  uint local_b8;
  uint local_b4;
  InternalExceptionFrame local_a4;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  RecoveredRecord_006E3DB0_0F66DDCF local_44;
  STMessageId local_34;
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

  AppClassTy::vfunc_18((AppClassTy *)local_18,message);
  pCVar10 = g_cursorClass_00802A30;
  SVar5 = message->id;
  if (SVar5 < MESS_SHARED_6120) {
    if (SVar5 == MESS_SHARED_611F) {
switchD_0056fad2_caseD_6105:
      DAT_0080674c = 0;
      g_cursorClass_00802A30->field_0493 = 0;
      /* ST_CALLSITE[005702D2]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      CursorClassTy::sub_0054B540(pCVar10);
      /* ST_CALLSITE[005702DA]: CALL 0x00401578; direct=00401578 STAppC::ChangeResolution */
      ChangeResolution(pSVar11,0);
      if (g_startSystem_0081176C == nullptr) {
        /* ST_CALLSITE[005702ED]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/StartSystemTy; signature=__cdecl;pointer:/StartSystemTy;/uint */
        pSVar12 = Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar12 != nullptr) {
          /* ST_CALLSITE[005702FC]: CALL 0x00405cd6; direct=00405CD6 StartSystemTy::StartSystemTy */
          StartSystemTy::StartSystemTy(pSVar12,(AppClassTy *)pSVar11);
        }
        /* ST_CALLSITE[00570309]: CALL dword ptr [EDX] */
        g_startSystem_0081176C->InitSystem();
        /* ST_CALLSITE[00570314]: CALL 0x006e4650; direct=006E4650 AppClassTy::AddSystem */
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      else {
        /* ST_CALLSITE[0057031F]: CALL 0x006e47e0; direct=006E47E0 AppClassTy::AddSystem */
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      if (message->id != MESS_STAPPC_6122) {
        g_startSystem_0081176C->field_02EB = ((message->arg0).u32 == 2) + 1;
      }
      SVar6 = message->arg1;
      pRVar17 = &local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(undefined4 *)pRVar17 = 0;
        pRVar17 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar17->field_0x4;
      }
      local_30 = message->arg0;
      local_44.field_000C = 0;
      local_34 = message->id;
      local_44.field_0008 = 0x200;
      local_2c = SVar6;

      FUN_006e3db0((AppClassTy *)pSVar11,&local_44);
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
      /* ST_CALLSITE[0056FB02]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      CursorClassTy::sub_0054B540(pCVar10);
      if (g_startSystem_0081176C != nullptr) {
        FUN_006e4b80(pSVar11,(RecoveredRecord_006E4B80_A7B295CE *)g_startSystem_0081176C);
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
      /* ST_CALLSITE[0056FB42]: CALL 0x00403990; direct=00403990 STAppC::OpenGameDBs */
      OpenGameDBs(pSVar11);
      /* ST_CALLSITE[0056FB49]: CALL 0x00404bab; direct=00404BAB STAppC::StartGame */
      StartGame(pSVar11);
      SVar2 = pSVar11->field_1180;
      if ((SVar2 < CASE_9) || ((CASE_C < SVar2 && (SVar2 != 0x10)))) {
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

      iVar19 = sub_006E51B0(pSVar11);
      pSVar11->field_1134 = iVar19;
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      /* ST_CALLSITE[0056FEBE]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      CursorClassTy::sub_0054B540(pCVar10);
      /* ST_CALLSITE[0056FECA]: CALL 0x00401d3e; direct=00401D3E STAppC::sub_005711D0 */
      sub_005711D0(pSVar11,(int *)&g_parentSystem_0081163C);
      /* ST_CALLSITE[0056FED1]: CALL 0x00403562; direct=00403562 STAppC::CloseGameDBs */
      CloseGameDBs(pSVar11);
      if (g_startSystem_0081176C != nullptr) {
        FUN_006e4b80(pSVar11,(RecoveredRecord_006E4B80_A7B295CE *)g_startSystem_0081176C);
      }
      if (g_cursorClass_00802A30->field_00A9 == 0) {

        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
      /* ST_CALLSITE[0056FF20]: CALL 0x00401d43; direct=00401D43 DarkScreen */
      DarkScreen(g_dDXContext_0080759C,10,2);
      /* ST_CALLSITE[0056FF2C]: CALL 0x00401578; direct=00401578 STAppC::ChangeResolution */
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
      /* ST_CALLSITE[0056FF5C]: CALL 0x00403990; direct=00403990 STAppC::OpenGameDBs */
      OpenGameDBs(pSVar11);
      /* ST_CALLSITE[0056FF63]: CALL 0x00404bab; direct=00404BAB STAppC::StartGame */
      StartGame(pSVar11);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    case MESS_STARTSYSTEMTY_6102:
    case MESS_STARTSYSTEMTY_6103:
    case MESS_STARTSYSTEMTY_6104:
    case MESS_SHARED_610A:
switchD_0056fad2_caseD_6102:
      DAT_0080674c = 0;
      /* ST_CALLSITE[005701B0]: CALL 0x00401578; direct=00401578 STAppC::ChangeResolution */
      ChangeResolution(pSVar11,0);
      if (pSVar11->field_0FC3 != 0) {
        FUN_006c1e20();
        memset(&pSVar11->field_0xe43, 0, 0x180); /* compiler bulk-zero initialization */
        iVar19 = 0;
      }
      thunk_FUN_005713b0((int)pSVar11);
      pCVar10 = g_cursorClass_00802A30;
      g_cursorClass_00802A30->field_0493 = 0;
      /* ST_CALLSITE[005701E5]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      CursorClassTy::sub_0054B540(pCVar10);
      /* ST_CALLSITE[005701F1]: CALL 0x00401d3e; direct=00401D3E STAppC::sub_005711D0 */
      sub_005711D0(pSVar11,(int *)&g_parentSystem_0081163C);
      /* ST_CALLSITE[005701F8]: CALL 0x00403562; direct=00403562 STAppC::CloseGameDBs */
      CloseGameDBs(pSVar11);
      if (g_startSystem_0081176C == nullptr) {
        /* ST_CALLSITE[0057020B]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/StartSystemTy; signature=__cdecl;pointer:/StartSystemTy;/uint */
        pSVar12 = Library::MSVCRT::FUN_0072e530(0x6b6);
        if (pSVar12 != nullptr) {
          /* ST_CALLSITE[0057021A]: CALL 0x00405cd6; direct=00405CD6 StartSystemTy::StartSystemTy */
          StartSystemTy::StartSystemTy(pSVar12,(AppClassTy *)pSVar11);
        }
        /* ST_CALLSITE[00570227]: CALL dword ptr [EDX] */
        g_startSystem_0081176C->InitSystem();
        /* ST_CALLSITE[00570233]: CALL 0x006e4650; direct=006E4650 AppClassTy::AddSystem */
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      else {
        /* ST_CALLSITE[0057023F]: CALL 0x006e47e0; direct=006E47E0 AppClassTy::AddSystem */
        AppClassTy::AddSystem((AppClassTy *)pSVar11,(int *)g_startSystem_0081176C,0);
      }
      pRVar17 = &local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(undefined4 *)pRVar17 = 0;
        pRVar17 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar17->field_0x4;
      }
      local_44.field_000C = 0;
      local_34 = message->id;
      local_44.field_0008 = 0x200;
      if (local_34 != MESS_STARTSYSTEMTY_6103) {
        if (local_34 == MESS_STARTSYSTEMTY_6104) {
          local_2c = message->arg1;
        }
        else if (local_34 != MESS_SHARED_610A) {

          FUN_006e3db0((AppClassTy *)pSVar11,&local_44);
          g_currentExceptionFrame = local_a4.previous;
          return 0;
        }
      }
      local_30 = message->arg0;

      FUN_006e3db0((AppClassTy *)pSVar11,&local_44);
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
        /* ST_CALLSITE[0056FFE8]: CALL dword ptr [EAX + 0x8] */
        g_playSystem_00802A38->vfunc_8(0x121,nullptr,nullptr,0,0);
        local_b8 = 0xf;
        local_b4 = 0x4405;
        /* ST_CALLSITE[0057000E]: CALL dword ptr [EDX + 0x18] */
        (*g_playSystem_00802A38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_c4);
      }
      if (g_interSystem_00802A28 != nullptr) {
        /* ST_CALLSITE[00570021]: CALL 0x00401d3e; direct=00401D3E STAppC::sub_005711D0 */
        sub_005711D0(pSVar11,(int *)&g_interSystem_00802A28);
      }
      /* ST_CALLSITE[00570026]: CALL 0x00403fa3; direct=00403FA3 CreateInterSystem */
      CreateInterSystem();
      if (g_allPlayers_007FA174 != nullptr) {
        thunk_FUN_0042a9f0(g_allPlayers_007FA174,bVar4);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case MESS_STARTSYSTEMTY_6104|MESS_SHARED_0003:
      /* ST_CALLSITE[00570061]: CALL 0x00401d43; direct=00401D43 DarkScreen */
      DarkScreen(g_dDXContext_0080759C,10,2);
      if (g_interSystem_00802A28 != nullptr) {
        /* ST_CALLSITE[00570079]: CALL 0x00401d3e; direct=00401D3E STAppC::sub_005711D0 */
        sub_005711D0(pSVar11,(int *)&g_interSystem_00802A28);
      }
      /* ST_CALLSITE[0057008D]: CALL 0x00401578; direct=00401578 STAppC::ChangeResolution */
      ChangeResolution(pSVar11,_DAT_00807348 & 0xff);
      pCVar10 = g_cursorClass_00802A30;
      uVar26 = _DAT_00807348 & 0xff;
      g_cursorClass_00802A30->field_04B2 = (&DAT_00807568)[uVar26 * 4];
      pCVar10->field_04B6 = (&DAT_0080756c)[uVar26 * 4];
      pCVar10->field_04BA = (&DAT_00807570)[uVar26 * 4];
      pCVar10->field_04BE = (&DAT_00807574)[uVar26 * 4];
      if (g_opticClass_007FB2A0 != nullptr) {
        /* ST_CALLSITE[005700DD]: CALL 0x00402081; direct=00402081 OpticClassC::ReInitOptic */
        OpticClassC::ReInitOptic(g_opticClass_007FB2A0,_DAT_00807348 & 0xff);
        FUN_006b1a50(g_ddxContext_008075A8,3,nullptr,&local_60);
        if (g_cPanel_00801688 != nullptr) {
          /* ST_CALLSITE[0057012D]: CALL 0x00401b6d; direct=00401B6D OpticClassC::sub_004A9B60 */
          OpticClassC::sub_004A9B60
                    (g_opticClass_007FB2A0,local_60,local_5c,local_58,
                     local_54 -
                     ((-(uint)(g_cPanel_00801688->field_023F != CASE_1) & 0xffffff65) + 0x9b));
        }
      }
      /* ST_CALLSITE[00570132]: CALL 0x00403fa3; direct=00403FA3 CreateInterSystem */
      CreateInterSystem();
      if ((g_parentSystem_0081163C != nullptr) && ((message->arg0).u32 == 0)) {
        /* ST_CALLSITE[0057014E]: CALL 0x00403085; direct=00403085 GameSystemC::sub_00577690 */
        GameSystemC::sub_00577690(g_parentSystem_0081163C);
        g_currentExceptionFrame = local_a4.previous;
        return 0;
      }
      break;
    case 0x6108:
      bVar29 = true;
      g_cursorClass_00802A30->field_0493 = 0;
      /* ST_CALLSITE[0056FC94]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      CursorClassTy::sub_0054B540(pCVar10);
      pRVar17 = &local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(undefined4 *)pRVar17 = 0;
        pRVar17 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar17->field_0x4;
      }
      bVar4 = pSVar11->field_6CE1;
      bVar3 = pSVar11->field_6CE0;
      local_34 = 0x6102;
      if (((bVar3 <= bVar4) && (pSVar11->field_6CE2 <= bVar4)) && (bVar4 != 0)) {
        bVar29 = false;
        local_34 = 0x6103;
        local_30 = (STMessageArg)0x0;
        pSVar11->field_6CE1 = 0;
      }
      if (bVar29) {
        bVar29 = true;
        if (((pSVar11->field_6CE1 < bVar3) && (pSVar11->field_6CE2 <= bVar3)) && (bVar3 != 0)) {
          local_34 = 0x6104;
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
              local_34 = 0x7101;
              local_30 = (STMessageArg)0x4;
              pSVar11->field_6CE2 = 0;
              bVar29 = false;
            }
          }
          if ((((bVar29) && (pSVar11->field_6CE1 == 0)) && (pSVar11->field_6CE0 == 0)) &&
             ((pSVar11->field_6CE2 == 0 && (pSVar11->field_5012 != '\0')))) {
            /* ST_CALLSITE[0056FDB2]: CALL dword ptr [0x0085bde8] */
            wsprintfA(&pSVar11->field_76F6,"%s%s",&pSVar11->field_0x60,&pSVar11->field_5012);
            /* ST_CALLSITE[0056FDC5]: CALL dword ptr [0x0085bde8] */
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
            /* ST_CALLSITE[0056FE13]: CALL 0x00404b4c; direct=00404B4C STAppC::sub_0056E9E0 */
            iVar19 = sub_0056E9E0(pSVar11,1);
            if (iVar19 != 0) {
              local_34 = 0x6104;
              local_30 = (STMessageArg)0x0;
            }
          }
        }
      }
      if ((local_34 == 0x6102) && (DAT_008067a0 != '\0')) {
        if ((DAT_00802a98 == '\0') ||
           /* ST_CALLSITE[0056FE4A]: CALL dword ptr [0x0085c048] */
           (iVar19 = CFsgsConnection::IsInitialized((CFsgsConnection *)&DAT_00802a90), iVar19 == 0))
        {
          bVar29 = false;
        }
        else {
          bVar29 = true;
        }
        if (bVar29) {
          local_34 = 0x610a;
          local_30 = (STMessageArg)0x6;
        }
      }
      pSVar22 = pSVar11->vtable;
      pRVar17 = &local_44;
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

      Library::DKW::DV::FUN_006c4110(g_recoveredSourceFamily_dvideo_008075A0);
      if ((g_recoveredSourceFamily_dvideo_008075A0->field_0004 & 0x40000000) != 0) {

        FUN_006c3f00(g_recoveredSourceFamily_dvideo_008075A0);
      }

      local_10 = FUN_006c2a00(&DAT_00803408);
      if ((local_10 != 0) && (g_int_008075A4 == nullptr)) {

        FUN_006e3db0((AppClassTy *)pSVar11,
                     (RecoveredRecord_006E3DB0_0F66DDCF *)&pSVar11->field_0x113a);
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
      /* ST_CALLSITE[00570422]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
      CursorClassTy::sub_0054B540(pCVar10);
      if (g_startSystem_0081176C != nullptr) {
        FUN_006e4b80(pSVar11,(RecoveredRecord_006E4B80_A7B295CE *)g_startSystem_0081176C);
      }
      /* ST_CALLSITE[0057043F]: CALL 0x00401d3e; direct=00401D3E STAppC::sub_005711D0 */
      sub_005711D0(pSVar11,(int *)&g_parentSystem_0081163C);
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
        thunk_FUN_00567220((RecoveredRecordView_00567220_6B6F72F8 *)puVar15);
        thunk_FUN_00567180(puVar15,HWND_00856d78);

        FUN_006e3db0((AppClassTy *)pSVar11,
                     (RecoveredRecord_006E3DB0_0F66DDCF *)&pSVar11->field_0x113a);
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
                  (g_recoveredSourceFamily_dvideo_008075A0,(LPCSTR)&DAT_00803408,(uint)local_8);
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
      FUN_006c3fc0(g_recoveredSourceFamily_dvideo_008075A0,iVar21,iVar30,iVar31,iVar32);
cf_common_exit_0057073B:
      pSVar11 = local_18;
      thunk_FUN_00567220((RecoveredRecordView_00567220_6B6F72F8 *)&local_18->field_0038);
      pSVar11->field_4EFA = 1;
      if (iVar19 == 0) {

        Library::DKW::DV::FUN_006c4000(g_recoveredSourceFamily_dvideo_008075A0);
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
        /* ST_CALLSITE[005708A1]: CALL 0x00401d43; direct=00401D43 DarkScreen */
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
        /* ST_CALLSITE[00570BFD]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_00803408,"%s%s",&pSVar11->field_0x164,puVar15);
      }
      pRVar17 = &local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(undefined4 *)pRVar17 = 0;
        pRVar17 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar17->field_0x4;
      }
      local_34 = 0x7100;
    }
    else if (dVar8 == 3) {
      memset(&DAT_00803408, 0, 0x118); /* compiler bulk-zero initialization */
      iVar19 = 0;
      memset(&pSVar11->field_0x113a, 0, 0x20); /* compiler bulk-zero initialization */
      iVar19 = 0;
      pSVar11->field_1146 = 1;
      pSVar11->field_114A = 0x6104;
      pSVar11->field_114E = 0;
      pRVar17 = &local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(undefined4 *)pRVar17 = 0;
        pRVar17 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar17->field_0x4;
      }
      local_34 = 0x7100;
      if ((DAT_00807330 & 2) != 0) {
        memset(stack_bytes_neg_9A4, 0, 0x318); /* compiler bulk-zero initialization */
        iVar19 = 0;
        Library::MSVCRT::FUN_0072e730(&pSVar11->field_0x7c0a,local_14,local_24c,local_44c,local_54c);
        Library::MSVCRT::__makepath
                  (&pSVar11->field_7D1A,(char *)local_14,(char *)local_24c,
                   PTR_s_CAMPAIGN_VPS_0079b03c,nullptr);
        local_c = (DArrayTy *)
                  thunk_FUN_00683c70(&pSVar11->field_7D1A,
                                     (RecoveredRecordView_00683C70_9F6EAF4E *)stack_bytes_neg_9A4,
                                     &local_50,nullptr,nullptr);
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
      pRVar17 = &local_44;
      for (iVar19 = 8; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(undefined4 *)pRVar17 = 0;
        pRVar17 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar17->field_0x4;
      }
      pSVar11->field_1146 = 1;
      pSVar11->field_114A = 0x6108;
      local_34 = 0x7100;
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
    /* ST_CALLSITE[00570C42]: CALL dword ptr [0x0085bcec] */
    pvVar16 = FindFirstFileA((LPCSTR)&DAT_00803408,&local_68c);
    if (pvVar16 != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[00570C55]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STAppC;/int */
      pSVar11->GetMessage((int)&local_44);
      g_currentExceptionFrame = local_a4.previous;
      return 0;
    }
    pSVar22 = pSVar11->vtable;
    pRVar17 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pSVar11->field_0x113a;
LAB_00570c77:
    /* ST_CALLSITE[00570C7A]: CALL dword ptr [EDX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STAppC;/int */
    (*pSVar22->GetMessage)(pSVar11,(int)pRVar17);
  }
  g_currentExceptionFrame = local_a4.previous;
  return 0;
}

