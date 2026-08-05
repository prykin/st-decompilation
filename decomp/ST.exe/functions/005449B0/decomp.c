#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::GetMessage

   [STSwitchEnumApplier] Switch target field_00DE uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_00DEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_5=5

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005449B0; family_names=CursorClassTy::GetMessage; ret4=74;
   direct_offsets={10:10,14:8,18:6,1c:3}

   [STSwitchEnumApplier] Switch target field_00CD uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_00CDState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_00DE uses
   /SubmarineTitans/Recovered/Enums/CursorClassTy_field_00DEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

int __thiscall CursorClassTy::GetMessage(CursorClassTy *this,STMessage *message)

{
  int *piVar1;
  char cVar2;
  CursorClassTy_field_00DEState CVar3;
  STMessageId SVar4;
  AnonShape_005449B0_F65ED625 *pAVar5;
  bool bVar6;
  CursorClassTy *this_00;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  char *pcVar12;
  uint *puVar13;
  UINT UVar14;
  undefined4 *puVar15;
  cMf32 *this_01;
  ushort *puVar16;
  undefined2 uVar18;
  int iVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined3 uVar23;
  int *piVar24;
  uint *puVar25;
  code *pcVar26;
  char *pcVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  ushort uVar31;
  short sVar32;
  byte bVar33;
  HINSTANCE module;
  uint local_524 [256];
  InternalExceptionFrame local_124;
  InternalExceptionFrame local_e0;
  int local_9c;
  int local_98;
  int local_8c;
  int local_88;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  int *local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  CursorClassTy *local_44;
  undefined4 local_40 [6];
  undefined2 local_28;
  undefined2 local_26;
  DWORD local_1c;
  cMf32 *local_14;
  char local_d;
  float local_c;
  AnonShape_005449B0_F65ED625 *local_8;

  local_44 = this;
  local_1c = STAppC::sub_006E51B0((STAppC *)this->field_0010);
  local_e0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e0;
  iVar8 = Library::MSVCRT::__setjmp3(local_e0.jumpBuffer,0);
  this_00 = local_44;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_e0.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x4d6,0,iVar8,
                                "%s","CursorClassTy::GetMessage");
    if (iVar17 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x4d7);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006e5fd0(local_44,message);
  switch(message->id) {
  case 0xa110:
    this_00->field_0xd4 = 1;
    break;
  case 0xa111:
    this_00->field_0xd4 = 0;
    break;
  case 0xa112:
    this_00->field_0xd3 = 1;
    break;
  case 0xa113:
    this_00->field_0xd3 = 0;
    break;
  case 0xa114:
    this_00->field_0xd5 = 1;
    break;
  case MESS_CURSORCLASSTY_A115:
    this_00->field_0xd5 = 0;
  }
  if (((this_00->field_0493 != 2) && (MESS_CURSORCLASSTY_A0FF < message->id)) &&
     (message->id < 0xb100)) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if ((((DAT_00808784 != 0) || (DAT_0080878c != 0)) || (DAT_00808790 != 0)) &&
     ((0xa10e < message->id && (message->id < 0xb100)))) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  SVar4 = message->id;
  if (SVar4 < MESS_SHARED_0061) {
    if (SVar4 == MESS_SHARED_0060) {
      this_00->field_00C9 = (uint)(message->arg1).words.high;
      uVar20 = (uint)(message->arg1).words.low;
      this_00->field_00C5 = uVar20;
      DrawSprite(this_00,uVar20,this_00->field_00C9);
      if ((this_00->field_04B2 <= this_00->field_00C5) &&
         (this_00->field_00C5 < this_00->field_04BA + this_00->field_04B2)) {
        if ((this_00->field_04B6 <= this_00->field_00C9) &&
           (this_00->field_00C9 < this_00->field_04BE + this_00->field_04B6)) {
          uVar10 = 1;
          goto LAB_0054532f;
        }
      }
      uVar10 = 0;
LAB_0054532f:
      this_00->field_0496 = uVar10;
      iVar8 = thunk_FUN_00544990(this_00);
      if (iVar8 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_tLOBldMark_007FB2AC == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_0496 != 0) && (this_00->field_04A2 == CASE_E)) {
        if (g_tLOBldMark_007FB2AC->field_0018 != 0) {
          TLOBldMark::sub_004C6210(g_tLOBldMark_007FB2AC,this_00->field_04AA,0);
        }
        TLOBldMark::sub_004C6440
                  (g_tLOBldMark_007FB2AC,(float)(this_00->field_00C5 - this_00->field_04B2),
                   this_00->field_00C9 - this_00->field_04B6,nullptr,nullptr,nullptr);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_tLOBldMark_007FB2AC->field_0018 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      TLOBldMark::sub_004C63F0(g_tLOBldMark_007FB2AC);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    switch(SVar4) {
    case MESS_ID_NONE:
      switch(this_00->field_00DE) {
      case CASE_0:
        iVar8 = thunk_FUN_00544990(this_00);
        if (iVar8 == 0) break;
        if (-1 < this_00->field_010B) {
          FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_010B);
          this_00->field_010B = -1;
        }
        switch(this_00->field_00CD) {
        case CASE_0:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,this_00->field_00C5,
                             this_00->field_00C9,1);
          break;
        case CASE_1:
          iVar8 = 100;
          uVar31 = 0;
          goto LAB_005450ca;
        case CASE_2:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,g_nWidth_00806730 + -1,100,0
                            );
          break;
        case CASE_3:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,100,0,0);
          break;
        case CASE_4:
          iVar8 = DAT_00806734 + -1;
          uVar31 = 100;
LAB_005450ca:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,(uint)uVar31,iVar8,0);
        }
        break;
      case CASE_1:
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          local_7c = (float)this_00->field_00EF;
          local_78 = this_00->field_00F3;
          local_74 = 0;
          ST3DSMAPContext::sub_006E25D0
                    (g_sT3DSMAPContext_00807598,&local_9c,&local_7c,0.0,0.0,0.0,0);
          this_00->field_00DF = local_9c >> 0x10;
          this_00->field_00E3 = local_98 >> 0x10;
        }
        uVar20 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
        this_00->field_00E7 = uVar20;
        uVar21 = (this_00->field_00C9 - this_00->field_04B6) - this_00->field_00E3;
        this_00->field_00EB = uVar21;
        if ((5 < (int)((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f))) ||
           (5 < (int)((uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f)))) {
          piVar24 = &this_00->field_010B;
          this_00->field_00DE = CASE_2;
          if (-1 < this_00->field_010B) {
            FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_010B);
          }
          iVar8 = 0x20;
          puVar13 = (uint *)&this_00->field_0x113;
          do {
            iVar8 = iVar8 + -1;
            *puVar13 = (-(uint)(this_00->field_04A2 != 0) & 0x49) + 0x45 | 0x1000000;
            puVar13 = puVar13 + 7;
          } while (iVar8 != 0);
          FUN_006b96f0((int *)g_ddxContext_008075A8,(uint *)piVar24,10,0x20,
                       (uint)&this_00->field_0x113);
          FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*piVar24,2);
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,*piVar24,0xffffffff,this_00->field_00DF,
                     this_00->field_00E3);
          FUN_006b2800(g_ddxContext_008075A8,*piVar24,this_00->field_00E7,this_00->field_00EB);
          iVar8 = FUN_00405687((int)this_00);
          if (iVar8 == 0) {
            SetGCType(this_00,CASE_0,this_00->field_0034,this_00->field_0038);
          }
        }
        break;
      case CASE_2:
        local_8 = (AnonShape_005449B0_F65ED625 *)0xfffffffe;
        local_c = 1.4013e-45;
        switch(this_00->field_00CD) {
        case CASE_1:
          iVar9 = this_00->field_04B6;
          iVar22 = this_00->field_04B2;
          iVar8 = iVar9 + 100;
          iVar17 = iVar22;
          goto LAB_00544d9b;
        case CASE_2:
          iVar9 = this_00->field_04B6;
          iVar29 = this_00->field_04BA;
          iVar22 = this_00->field_04B2;
          iVar8 = iVar9 + 100;
          iVar17 = iVar29 + -1 + iVar22;
          iVar30 = this_00->field_04BE;
          break;
        case CASE_3:
          iVar22 = this_00->field_04B2;
          iVar9 = this_00->field_04B6;
          iVar8 = iVar9;
          iVar17 = iVar22 + 100;
LAB_00544d9b:
          iVar30 = this_00->field_04BE;
          iVar29 = this_00->field_04BA;
          break;
        case CASE_4:
          iVar30 = this_00->field_04BE;
          iVar9 = this_00->field_04B6;
          iVar22 = this_00->field_04B2;
          iVar8 = iVar30 + -1 + iVar9;
          iVar17 = iVar22 + 100;
          iVar29 = this_00->field_04BA;
          break;
        default:
          goto switchD_00544d44_default;
        }
        thunk_FUN_0054b9a0(this_00,iVar22,iVar9,iVar29,iVar30,iVar17,iVar8,0);
switchD_00544d44_default:
        local_70 = (float)this_00->field_00EF;
        local_6c = this_00->field_00F3;
        local_68 = 0;
        ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_8c,&local_70,0.0,0.0,0.0,0);
        this_00->field_00E3 = local_88 >> 0x10;
        this_00->field_00DF = local_8c >> 0x10;
        if (this_00->field_00CD == CASE_0) {
          piVar24 = &this_00->field_00C9;
          piVar1 = &this_00->field_00C5;
          iVar8 = thunk_FUN_0054bdf0(this_00->field_04B2,this_00->field_04B6,this_00->field_04BA,
                                     this_00->field_04BE,piVar1,piVar24);
          if (iVar8 != 0) {
            local_28 = (undefined2)*piVar1;
            local_26 = (undefined2)*piVar24;
            local_40[4] = 0x16;
            FUN_006e6000(this_00,3,1,local_40);
          }
          iVar8 = FUN_00405687((int)this_00);
          iVar8 = thunk_FUN_0054b9a0(this_00,this_00->field_04B2,this_00->field_04B6,
                                     this_00->field_04BA,this_00->field_04BE,*piVar1,*piVar24,
                                     (uint)(iVar8 == 0));
          if (iVar8 != 0) {
            FUN_006e1440(g_sT3DSMAPContext_00807598);
            iVar8 = *piVar24;
            uVar20 = (*piVar1 - this_00->field_00DF) - this_00->field_04B2;
            this_00->field_00E7 = uVar20;
            goto LAB_00544e8f;
          }
          local_14 = (cMf32 *)this_00->field_00EB;
          uVar21 = this_00->field_00E7;
          uVar20 = (*piVar1 - this_00->field_00DF) - this_00->field_04B2;
          uVar19 = (*piVar24 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00E7 = uVar20;
          this_00->field_00EB = uVar19;
          if ((uVar21 == uVar20) && (local_14 == (cMf32 *)uVar19)) {
            local_c = 0.0;
          }
        }
        else {
          FUN_006e1440(g_sT3DSMAPContext_00807598);
          iVar8 = this_00->field_00C9;
          uVar20 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
          this_00->field_00E7 = uVar20;
LAB_00544e8f:
          uVar19 = (iVar8 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00EB = uVar19;
        }
        if (0x31 < local_1c - this_00->field_010F) {
          this_00->field_010F = local_1c;
          local_8 = (AnonShape_005449B0_F65ED625 *)0xffffffff;
        }
        if (local_c != 0.0) {
          FUN_006b2800(g_ddxContext_008075A8,this_00->field_010B,uVar20,uVar19);
        }
        if ((local_c != 0.0) || ((int)local_8 < 0)) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,this_00->field_010B,(uint)local_8,
                     this_00->field_00DF,this_00->field_00E3);
        }
        break;
      case CASE_3:
        uVar20 = this_00->field_010B;
        if (-1 < (int)uVar20) goto LAB_0054505c;
        goto LAB_0054506b;
      case CASE_4:
        uVar20 = this_00->field_010B;
LAB_0054505c:
        FUN_006b3bb0((int *)g_ddxContext_008075A8,uVar20);
        this_00->field_010B = -1;
LAB_0054506b:
        this_00->field_00DE = CASE_0;
        break;
      case CASE_5:
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          ST3DSMAPContext::sub_006E1C20
                    (g_sT3DSMAPContext_00807598,(float)(this_00->field_00C5 - this_00->field_04B2),
                     this_00->field_00C9 - this_00->field_04B6,this_00->field_0107,(float *)&local_8
                     ,&local_c);
          lVar28 = Library::MSVCRT::__ftol();
          this_00->field_00FB = (int)lVar28;
          if ((int)lVar28 < 1) {
            this_00->field_00FB = 1;
          }
          lVar28 = Library::MSVCRT::__ftol();
          iVar8 = (int)(short)lVar28;
          lVar28 = Library::MSVCRT::__ftol();
          iVar17 = (int)(short)lVar28;
          lVar28 = Library::MSVCRT::__ftol();
          sVar7 = (short)lVar28;
          sVar32 = sVar7 >> 0xf;
          lVar28 = Library::MSVCRT::__ftol();
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar8 = FUN_006db910((int)(short)lVar28,CONCAT22(sVar32,sVar7),iVar17,iVar8);
          this_00->field_00F7 = iVar8;
          Library::Ourlib::ST3DSMAP::SprWireObjMove
                    (g_sT3DSMAPContext_00807598,this_00->field_010B,this_00->field_00FF,
                     this_00->field_0103,this_00->field_0107,iVar8,this_00->field_00FB,1);
        }
      }
      if ((this_00->field_04A6 != 0) && (this_00->field_04A2 != 0)) {
        sub_0054A8D0(this_00);
      }
      GCGameState(this_00,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_ID_CREATE:
      InitCursor(this_00,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0003:
      DoneCursor(this_00);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0008:
      if (this_00->field_00C1 == 0) {
        this_00->field_00C1 = 1;
        AddSysAcc(this_00);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      break;
    case MESS_CURSORCLASSTY_0009:
      if (this_00->field_00C1 != 0) {
        this_00->field_00C1 = 0;
        DelSysAcc(this_00);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
    }
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar4 < MESS_CURSORCLASSTY_A31D) {
    if (0xa312 < SVar4) {
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SaveTmp(g_allPlayers_007FA174,SVar4 - MESS_CURSORCLASSTY_A313);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A124 < SVar4) {
      if (SVar4 < 0xa204) {
        if (0xa1fe < SVar4) {
          if (g_playSystem_00802A38 == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          local_d = '\x03' - (char)message->id;
          thunk_FUN_0054edf0((undefined4 *)0x15,(uint *)&local_d,0,0xffffffff);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        switch(SVar4) {
        case 0xa125:
          goto switchD_00546590_caseD_a125;
        case MESS_CURSORCLASSTY_A124|MESS_ID_CREATE:
          if (DAT_00808783 != '\x03') {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          sub_0054B540(this_00);
          if (g_intercomPanel_0080169C == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,3);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case MESS_CURSORCLASSTY_A124|MESS_SHARED_0003:
          if (DAT_00808783 != '\x03') {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          sub_0054B540(this_00);
          if (g_intercomPanel_0080169C == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,2);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case MESS_CURSORCLASSTY_A100|MESS_TRACKBARCLASSTY_0028:
          if (g_cPanel_00801688 == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          CPanelTy::sub_004FAFF0(g_cPanel_00801688);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa12f:
          this_00->field_00CD = CASE_3;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa130:
          this_00->field_00CD = CASE_4;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa131:
          this_00->field_00CD = CASE_2;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa132:
          this_00->field_00CD = CASE_1;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case MESS_CURSORCLASSTY_A133:
          this_00->field_00CD = CASE_0;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
      }
      if (MESS_CURSORCLASSTY_A209 < SVar4) {
        switch(SVar4) {
        case 0xa2ff:
        case 0xa300:
        case 0xa301:
        case 0xa302:
        case 0xa303:
        case 0xa304:
        case 0xa305:
        case 0xa306:
        case 0xa307:
        case 0xa308:
          goto switchD_005468af_caseD_a2ff;
        case 0xa309:
        case 0xa30a:
        case 0xa30b:
        case 0xa30c:
        case 0xa30d:
        case 0xa30e:
        case 0xa30f:
        case 0xa310:
        case 0xa311:
        case 0xa312:
          if (g_opticClass_007FB2A0 == nullptr) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          thunk_FUN_004ab300(SVar4 - 0xa309);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
      }
      if (SVar4 != MESS_CURSORCLASSTY_A209) {
        if (SVar4 == MESS_CURSORCLASSTY_A206) {
          memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
          local_40[4] = 0x100;
          FUN_006e6000(this_00,3,0x100,local_40);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar4 == MESS_CURSORCLASSTY_A207) {
          memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
          local_40[4] = 0x101;
          FUN_006e6000(this_00,3,0x100,local_40);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar4 != MESS_CURSORCLASSTY_A208) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (g_opticClass_007FB2A0 == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
        iVar8 = thunk_FUN_004ab050();
        switch(iVar8) {
        case 0:
switchD_0054679d_caseD_0:
          local_40[4] = 0x105;
          break;
        case 1:
switchD_0054679d_caseD_1:
          local_40[4] = 0x106;
          break;
        case 2:
switchD_0054679d_caseD_2:
          local_40[4] = 0x107;
          break;
        case 3:
switchD_0054679d_caseD_3:
          local_40[4] = 0x104;
        default:
          break;
        }
switchD_0054679d_default:
        FUN_006e6000(this_00,3,0x100,local_40);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_opticClass_007FB2A0 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
      iVar8 = thunk_FUN_004ab050();
      switch(iVar8) {
      case 0:
        goto switchD_0054679d_caseD_2;
      case 1:
        goto switchD_0054679d_caseD_3;
      case 2:
        goto switchD_0054679d_caseD_0;
      case 3:
        goto switchD_0054679d_caseD_1;
      default:
        goto switchD_0054679d_default;
      }
    }
    if (SVar4 == MESS_CURSORCLASSTY_A124) {
      sub_0054B540(this_00);
      if (g_intercomPanel_0080169C == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A102 < SVar4) {
      switch(SVar4) {
      case 0xa103:
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OptPanelTy::Question(g_optPanel_008016DC,'\x04');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa104:
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_008067a0 != '\0') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OptPanelTy::Question(g_optPanel_008016DC,'\x05');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case MESS_OPTPANELTY_A105:
      case MESS_OPTPANELTY_A106:
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        g_optPanel_008016DC->GetMessage(message);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      default:
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa11f:
        if (DAT_00808783 == '\x03') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        DAT_00808794 = 1;
        _DAT_00808798 = 1;
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa120:
        if (DAT_00808783 == '\x03') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        uVar20 = 0xffffffff;
        pcVar11 = &DAT_00807680;
        break;
      case 0xa122:
        sub_0054B540(this_00);
        if (g_cPanel_00801688 == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        CPanelTy::SwitchCPanel(g_cPanel_00801688);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case MESS_CURSORCLASSTY_A123:
        if (g_cPanel_00801688 == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        CPanelTy::sub_004FA3B0(g_cPanel_00801688);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      do {
        pcVar12 = pcVar11;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar12 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      local_58 = &local_48;
      local_48 = 0;
      pcVar11 = pcVar12 + -uVar20;
      pcVar12 = (char *)&DAT_0080ee1a;
      memmove(pcVar12, pcVar11, uVar20); /* compiler REP MOVS byte copy */
      uVar21 = 0;
      uVar20 = 0xffffffff;
      pcVar11 = PTR_s_SAVEGAME__0079ade4;
      do {
        pcVar12 = pcVar11;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar12 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      iVar8 = -1;
      pcVar11 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar27 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar27;
      } while (cVar2 != '\0');
      pcVar11 = pcVar12 + -uVar20;
      pcVar12 = pcVar27 + -1;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      local_14 = nullptr;
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar20 = 0xffffffff;
      pcVar11 = (char *)&DAT_00807ddd;
      do {
        pcVar12 = pcVar11;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar12 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      iVar8 = -1;
      pcVar11 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar27 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar27;
      } while (cVar2 != '\0');
      pcVar11 = pcVar12 + -uVar20;
      pcVar12 = pcVar27 + -1;
      memmove(pcVar12, pcVar11, uVar20); /* compiler REP MOVS byte copy */
      uVar21 = 0;
      FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
      uVar20 = 0xffffffff;
      pcVar11 = PTR_s_SAVE_QUICKSAVE_0079ade8;
      do {
        pcVar12 = pcVar11;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar12 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      iVar8 = -1;
      pcVar11 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar11;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar27 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar27;
      } while (cVar2 != '\0');
      pcVar11 = pcVar12 + -uVar20;
      pcVar12 = pcVar27 + -1;
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      local_124.previous = g_currentExceptionFrame;
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
      g_currentExceptionFrame = &local_124;
      iVar8 = Library::MSVCRT::__setjmp3(local_124.jumpBuffer,0);
      this_01 = local_14;
      if (iVar8 == 0) {
        this_01 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080ee1a,0,0,0);
        local_14 = this_01;
        puVar16 = cMf32::RecGet(this_01,0x80,PTR_s_SAVE_DESC_0079adec,(int *)&local_58,0);
        if (puVar16 != nullptr) {
          iVar8 = -0x77ffffea;
          if (DAT_00808783 == '\x01') {
            iVar8 = -0x77fffeea;
          }
          else if (DAT_00808783 == '\x02') {
            iVar8 = -0x77fffdea;
          }
          if (iVar8 == local_48) {
            if (DAT_00808783 == '\x01') {
              DAT_008087a0 = 9;
            }
            else if (DAT_00808783 == '\x02') {
              DAT_008087a0 = 10;
            }
            memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
            DAT_0080879c = 1;
            _DAT_0080f32e = 1;
            local_40[3] = 1;
            local_40[4] = 0x6100;
            AppClassTy::PostNextMessage(local_44->field_0010,local_40);
          }
        }
      }
      if (this_01 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      g_currentExceptionFrame = local_124.previous;
      cMf32::delete(this_01);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 == MESS_CURSORCLASSTY_A102) {
      sub_0054B540(this_00);
      if (g_optPanel_008016DC == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,-1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_4203 < SVar4) {
      if (SVar4 == MESS_CURSORCLASSTY_A0FF) {
        message->id = MESS_STAPPC_7104;
        STAppC::GetMessage((STAppC *)&DAT_00807620,message);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (SVar4 != MESS_CURSORCLASSTY_A100) {
        if (SVar4 != MESS_CURSORCLASSTY_A101) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        sub_0054B540(this_00);
        if (g_optPanel_008016DC == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,'\x0f');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = thunk_FUN_00544990(this_00);
      if (iVar8 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      local_54 = 1;
      if (g_parentSystem_0081163C == nullptr) {
        local_4c = 1;
        puVar13 = &local_54;
        local_50 = (uint)(DAT_00808784 == 0);
      }
      else {
        local_4c = 1;
        puVar13 = &local_54;
        local_50 = (uint)(g_parentSystem_0081163C->field_042C == 0);
      }
      goto LAB_00547c2d;
    }
    if (SVar4 == MESS_CURSORCLASSTY_4203) {
      sub_00544940(this_00);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_4201 < SVar4) {
      if (SVar4 != MESS_CURSORCLASSTY_4202) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_00807322 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((message->arg1).u32 != this_00->field_04DA) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_04DA = 0;
      FUN_006b2800(g_ddxContext_008075A8,this_00->field_04D6,0,0);
      FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_04D6);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 != MESS_CURSORCLASSTY_4201) {
      if (SVar4 == MESS_CURSORCLASSTY_0067) {
        if (DAT_0080734c == '\0') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        iVar8 = thunk_FUN_00544990(this_00);
        if (iVar8 == 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_008016E8 != nullptr) && (g_prodPanel_008016E8->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_0080167C != nullptr) && (g_prodPanel_0080167C->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_00801684 != nullptr) && (g_prodPanel_00801684->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_upgPanel_00802A48 != nullptr) && (g_upgPanel_00802A48->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_infocPanel_00801698 != nullptr) &&
           (g_infocPanel_00801698->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_tradePanel_00802A44 != nullptr) &&
           (g_tradePanel_00802A44->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_frmPanel_0080168C != nullptr) && (g_frmPanel_0080168C->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_00801680 != nullptr) && (g_prodPanel_00801680->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (g_opticClass_007FB2A0 == nullptr) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (this_00->field_00D2 == '\0') {
          OpticClassC::sub_004AB070(g_opticClass_007FB2A0,CASE_3,0.0,0,1);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OpticClassC::sub_004AB070(g_opticClass_007FB2A0,CASE_1,0.0,0,1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (SVar4 != MESS_SHARED_0068) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_0080734c == '\0') {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = thunk_FUN_00544990(this_00);
      if (iVar8 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_008016E8 != nullptr) && (g_prodPanel_008016E8->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_0080167C != nullptr) && (g_prodPanel_0080167C->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_00801684 != nullptr) && (g_prodPanel_00801684->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_upgPanel_00802A48 != nullptr) && (g_upgPanel_00802A48->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_infocPanel_00801698 != nullptr) && (g_infocPanel_00801698->field_0172 == 1)
         ) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 1)
         ) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_frmPanel_0080168C != nullptr) && (g_frmPanel_0080168C->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_00801680 != nullptr) && (g_prodPanel_00801680->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_opticClass_007FB2A0 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00D2 == '\0') {
        OpticClassC::sub_004AB070(g_opticClass_007FB2A0,CASE_4,0.0,0,1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      OpticClassC::sub_004AB070(g_opticClass_007FB2A0,CASE_2,0.0,0,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    local_c = 1.4013e-45;
    if (DAT_00807322 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    UVar14 = (message->arg1).u32;
    if (UVar14 == this_00->field_04DA) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (UVar14 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00DE == CASE_5) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00DE == CASE_2) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    this_00->field_04DA = UVar14;
    uVar31 = (message->arg0).words.high;
    if (uVar31 == 1) {
      pAVar5 = (message->arg1).ptr;
      local_8 = pAVar5;
      switch(*(undefined1 *)pAVar5) {
      case 1:
        if (pAVar5->field_0009 < 0) {
          if ((&stack0x00000000 != (undefined1 *)0x524) &&
             (pcVar11 = LoadResourceString(pAVar5->field_0001,g_module_00807618),
             pcVar11 != nullptr)) {
            UVar14 = local_8->field_0001;
LAB_005458df:
            pcVar11 = LoadResourceString(UVar14,g_module_00807618);
            uVar20 = 0xffffffff;
            do {
              pcVar12 = pcVar11;
              if (uVar20 == 0) break;
              uVar20 = uVar20 - 1;
              pcVar12 = pcVar11 + 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar2 != '\0');
            uVar20 = ~uVar20;
            puVar13 = (uint *)(pcVar12 + -uVar20);
            puVar25 = local_524;
            memmove(puVar25, puVar13, uVar20); /* compiler REP MOVS byte copy */
            puVar13 = (uint *)((byte *)puVar13 + uVar20);
            uVar21 = 0;
          }
        }
        else {
          thunk_FUN_0052a970(*(uint *)(&DAT_00807e66 + pAVar5->field_0009 * 4),1);
          LoadResourceString(pAVar5->field_0001,g_module_00807618);
          wsprintfA((LPSTR)local_524,"&%d%s\n&%d%s");
        }
        break;
      case 2:
        if (pAVar5->field_0001 == 0) goto switchD_00545816_default;
        if ((&stack0x00000000 != (undefined1 *)0x524) &&
           (pcVar11 = LoadResourceString(pAVar5->field_0001,g_module_00807618),
           pcVar11 != nullptr)) {
          UVar14 = local_8->field_0001;
          goto LAB_005458df;
        }
        break;
      case 3:
        if (pAVar5->field_0005 == 0) {
          pcVar11 = LoadResourceString(0x36b3,g_module_00807618);
          pcVar12 = LoadResourceString(pAVar5->field_0001,g_module_00807618);
          pcVar26 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,"&%d%s\n%s",(message->arg0).words.low,pcVar12,pcVar11);
        }
        else {
          LoadResourceString(0x36b3,g_module_00807618);
          LoadResourceString(pAVar5->field_0005,g_module_00807618);
          LoadResourceString(pAVar5->field_0001,g_module_00807618);
          pcVar26 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,"&%d%s\n%s\n%s");
        }
        if (*(short *)&pAVar5->field_0xd != 0) {
          (*pcVar26)(local_524,"%s &%d%d",(short)local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 5,*(short *)&pAVar5->field_0xd
                    );
        }
        sVar7 = (short)pAVar5->field_0009;
        if (sVar7 != 0) {
          (*pcVar26)((short)local_524,"%s &%d%d",local_524,2,sVar7);
        }
        sVar7 = *(short *)((int)&pAVar5->field_0009 + 2);
        if (sVar7 != 0) {
          (*pcVar26)((short)local_524,"%s &%d%d",local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 6,sVar7);
        }
        if (0 < *(short *)&pAVar5->field_0xf) {
          LoadResourceString(0x273a,g_module_00807618);
          (*pcVar26)();
        }
        break;
      case 4:
        pcVar11 = LoadResourceString(pAVar5->field_0001,g_module_00807618);
        uVar20 = 0xffffffff;
        do {
          pcVar12 = pcVar11;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar12 = pcVar11 + 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar2 != '\0');
        uVar20 = ~uVar20;
        pcVar11 = pcVar12 + -uVar20;
        pcVar12 = (char *)&DAT_0080f33a;
        memmove(pcVar12, pcVar11, uVar20); /* compiler REP MOVS byte copy */
        uVar21 = 0;
        for (puVar13 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar13 != nullptr;
            puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
          *(undefined1 *)puVar13 = 0x20;
        }
        wsprintfA((LPSTR)local_524,"&%d%s",(uint)(message->arg0).words.low,&DAT_0080f33a);
        if (local_8->field_0005 != 0) {
          pcVar11 = LoadResourceString(local_8->field_0005,g_module_00807618);
          uVar20 = 0xffffffff;
          do {
            pcVar12 = pcVar11;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar12 = pcVar11 + 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar2 != '\0');
          uVar20 = ~uVar20;
          pcVar11 = pcVar12 + -uVar20;
          pcVar12 = (char *)&DAT_0080f33a;
          memmove(pcVar12, pcVar11, uVar20); /* compiler REP MOVS byte copy */
          for (puVar13 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar13 != nullptr;
              puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
            *(undefined1 *)puVar13 = 0x20;
          }
          wsprintfA((LPSTR)local_524,"%s\n%s",local_524,&DAT_0080f33a);
        }
        piVar24 = &local_8->field_0009;
        if (local_8->field_0009 != 0) {
          pcVar11 = LoadResourceString(0x36c2,g_module_00807618);
          wsprintfA((LPSTR)local_524,"%s\n%s",local_524,pcVar11);
          iVar8 = 5;
          do {
            if (*piVar24 != CASE_0) {
              module = g_module_00807618;
              UVar14 = thunk_FUN_00528060((Global_sub_00528060_param_1Enum)*piVar24,
                                          (char)((uint)*piVar24 >> 0x10));
              pcVar11 = LoadResourceString(UVar14,module);
              wsprintfA((LPSTR)local_524,"%s\n&%d%s",local_524,
                        (*(Global_sub_00528060_param_1Enum *)((int)piVar24 + 5) != CASE_0) + 1,
                        pcVar11);
            }
            piVar24 = (int *)((int)piVar24 + 6);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        break;
      default:
switchD_00545816_default:
        local_c = 0.0;
      }
    }
    else if ((uVar31 < 2) || (3 < uVar31)) {
      local_c = 0.0;
    }
    else if ((&stack0x00000000 != (undefined1 *)0x524) &&
            (pcVar11 = LoadResourceString(UVar14,g_module_00807618), pcVar11 != nullptr)) {
      UVar14 = this_00->field_04DA;
      goto LAB_005458df;
    }
    if (local_c == 0.0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((message->arg0).words.high == 3) {
      if ((g_startSystem_0081176C == nullptr) ||
         (g_startSystem_0081176C->field_0038 == nullptr)) goto cf_common_exit_00545FF6;
      iVar8 = FUN_00711370(g_startSystem_0081176C->field_0038,local_524);
      this_00->field_04CA = iVar8 + 0xc;
      iVar8 = FUN_007113e0(g_startSystem_0081176C->field_0038,local_524);
      iVar8 = iVar8 + 10;
      this_00->field_04CE = iVar8;
      if ((800 < this_00->field_04CA) || (0x96 < iVar8)) goto cf_common_exit_00545FF6;
      this_00->field_04C2 = this_00->field_00C5 + this_00->field_00B1;
      iVar22 = this_00->field_00C9 + this_00->field_00B5;
      this_00->field_04C6 = iVar22;
      iVar17 = (g_nWidth_00806730 - this_00->field_04CA) + -0x28;
      if (iVar17 < this_00->field_04C2) {
        this_00->field_04C2 = iVar17;
      }
      if (this_00->field_04C2 < 0) {
        this_00->field_04C2 = 0;
      }
      iVar8 = (DAT_00806734 - iVar8) + -0x14;
      if (iVar8 < iVar22) {
        this_00->field_04C6 = iVar8;
      }
      if (this_00->field_04C6 < 0) {
        this_00->field_04C6 = 0;
      }
      puVar16 = this_00->field_04D2;
      uVar20 = *(uint *)(puVar16 + 10);
      if (uVar20 == 0) {
        uVar20 = ((uint)puVar16[7] * *(int *)(puVar16 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar16 + 4);
      }
      puVar15 = (undefined4 *)FUN_006b4fa0((int *)puVar16);
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *puVar15 = 0x22222222;
        puVar15 = puVar15 + 1;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined1 *)puVar15 = 0x22;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      ccFntTy::SetSurf(g_startSystem_0081176C->field_0038,(int)this_00->field_04D2,0,5,5,
                       this_00->field_04CA + -10,this_00->field_04CE + -10);
      ccFntTy::WrTxt(g_startSystem_0081176C->field_0038,local_524,-2,-1,
                     (uint)(message->arg0).words.low,-1,-1);
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,0,0,this_00->field_04CA,
                   this_00->field_04CE,0x18,0xd);
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,1,1,this_00->field_04CA + -2
                   ,this_00->field_04CE + -2,0x1d,0xd);
      bVar33 = 0x18;
    }
    else {
      if ((g_interSystem_00802A28 == nullptr) ||
         (g_interSystem_00802A28->field_0028 == nullptr)) goto cf_common_exit_00545FF6;
      iVar8 = FUN_00711370(g_interSystem_00802A28->field_0028,local_524);
      this_00->field_04CA = iVar8 + 0xc;
      iVar8 = FUN_007113e0(g_interSystem_00802A28->field_0028,local_524);
      iVar8 = iVar8 + 10;
      this_00->field_04CE = iVar8;
      if ((800 < this_00->field_04CA) || (0x96 < iVar8)) goto cf_common_exit_00545FF6;
      this_00->field_04C2 = this_00->field_00C5 + this_00->field_00B1;
      iVar22 = this_00->field_00C9 + this_00->field_00B5;
      this_00->field_04C6 = iVar22;
      iVar17 = (g_nWidth_00806730 - this_00->field_04CA) + -0x28;
      if (iVar17 < this_00->field_04C2) {
        this_00->field_04C2 = iVar17;
      }
      if (this_00->field_04C2 < 0) {
        this_00->field_04C2 = 0;
      }
      iVar8 = (DAT_00806734 - iVar8) + -0x14;
      if (iVar8 < iVar22) {
        this_00->field_04C6 = iVar8;
      }
      if (this_00->field_04C6 < 0) {
        this_00->field_04C6 = 0;
      }
      puVar16 = this_00->field_04D2;
      uVar20 = *(uint *)(puVar16 + 10);
      if (uVar20 == 0) {
        uVar20 = ((uint)puVar16[7] * *(int *)(puVar16 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar16 + 4);
      }
      puVar15 = (undefined4 *)FUN_006b4fa0((int *)puVar16);
      for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
        *puVar15 = 0x3a3a3a3a;
        puVar15 = puVar15 + 1;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined1 *)puVar15 = 0x3a;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      ccFntTy::SetSurf(g_interSystem_00802A28->field_0028,(int)this_00->field_04D2,0,5,5,
                       this_00->field_04CA + -10,this_00->field_04CE + -10);
      ccFntTy::WrTxt(g_interSystem_00802A28->field_0028,local_524,-2,-1,
                     (uint)(message->arg0).words.low,-1,-1);
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,0,0,this_00->field_04CA,
                   this_00->field_04CE,0x6f,0xd);
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,1,1,this_00->field_04CA + -2
                   ,this_00->field_04CE + -2,0xb3,0xd);
      bVar33 = 0x6f;
    }
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,3,3,this_00->field_04CA + -6,
                 this_00->field_04CE + -6,bVar33,0xd);
cf_common_exit_00545FF6:
    if (800 < this_00->field_04CA) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0x96 < this_00->field_04CE) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    FUN_006b2800(g_ddxContext_008075A8,this_00->field_04D6,this_00->field_04CA,this_00->field_04CE);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,this_00->field_04D6,0xffffffff,this_00->field_04C2,
               this_00->field_04C6);
    Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_00->field_04D6);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (MESS_CURSORCLASSTY_A50C < SVar4) {
    if (MESS_CURSORCLASSTY_A708 < SVar4) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0xa6fe < SVar4) {
      local_60 = SVar4 - MESS_CURSORCLASSTY_A6FF;
      puVar13 = &local_64;
      local_5c = 0;
      local_64 = 9;
LAB_00547c2d:
      thunk_FUN_0054edf0((undefined4 *)0x5,puVar13,1,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    uVar23 = (undefined3)((uint)this_00 >> 8);
    uVar18 = (undefined2)(SVar4 + ~MESS_CURSORCLASSTY_A50C >> 0x10);
    switch(SVar4 + ~MESS_CURSORCLASSTY_A50C) {
    case MESS_ID_NONE:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C5 < this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + this_00->field_04B2 <= this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C9 < this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + this_00->field_04B6 <= this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = 0;
      break;
    case 1:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = this_00->field_00C5;
      iVar17 = this_00->field_04B2;
      if (iVar8 < iVar17) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar17 <= iVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar22 = this_00->field_00C9;
      iVar9 = this_00->field_04B6;
      if (iVar22 < iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar9 <= iVar22) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::PointPick
                (g_allPlayers_007FA174,(uint *)STReplaceLowByte((uint32_t)(iVar17), (uint8_t)(DAT_0080874d)),
                 iVar8 - iVar17,iVar22 - iVar9,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_ID_CREATE:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C5 < this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + this_00->field_04B2 <= this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C9 < this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + this_00->field_04B6 <= this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = 0;
      break;
    case MESS_SHARED_0003:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar8 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar17 = this_00->field_00C9;
      iVar22 = this_00->field_04B6;
      if (iVar17 < iVar22) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar22 <= iVar17) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::PointPick
                (g_allPlayers_007FA174,(uint *)CONCAT31(uVar23,DAT_0080874d),iVar8 - (int)local_8,
                 iVar17 - iVar22,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 4:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar8 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar17 = this_00->field_00C9;
      iVar22 = this_00->field_04B6;
      if (iVar17 < iVar22) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar22 <= iVar17) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::PointPick
                (g_allPlayers_007FA174,(uint *)CONCAT31(uVar23,DAT_0080874d),iVar8 - (int)local_8,
                 iVar17 - iVar22,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0005:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = this_00->field_00C5;
      iVar17 = this_00->field_04B2;
      if (iVar8 < iVar17) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar17 <= iVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar22 = this_00->field_00C9;
      iVar9 = this_00->field_04B6;
      if (iVar22 < iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar9 <= iVar22) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_7,iVar8 - iVar17,iVar22 - iVar9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 6:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = this_00->field_00C5;
      iVar17 = this_00->field_04B2;
      if (iVar8 < iVar17) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar17 <= iVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar22 = this_00->field_00C9;
      iVar9 = this_00->field_04B6;
      if (iVar22 < iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar9 <= iVar22) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_6,iVar8 - iVar17,iVar22 - iVar9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 7:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C5 < this_00->field_04B2) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + this_00->field_04B2 <= this_00->field_00C5) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00C9 < this_00->field_04B6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + this_00->field_04B6 <= this_00->field_00C9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 == (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = 0;
      break;
    case MESS_SHARED_0008:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar8 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar8 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar17 = this_00->field_00C9;
      iVar22 = this_00->field_04B6;
      if (iVar17 < iVar22) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar22 <= iVar17) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != CASE_3)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 == (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::PointPick
                (g_allPlayers_007FA174,(uint *)(uint)DAT_0080874d,iVar8 - (int)local_8,
                 iVar17 - iVar22,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_CURSORCLASSTY_0009:
      if (DAT_0080734c == '\0') {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_00D2 = this_00->field_00D2 == '\0';
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SYSTEMCLASSTY_000A:
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      CPanelTy::sub_004FAD60
                (g_cPanel_00801688,(uint *)CONCAT22(uVar18,(short)this_00->field_00C5),
                 (uint)(ushort)this_00->field_00C9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xb:
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004fae70((int)g_cPanel_00801688);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xc:
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      CPanelTy::sub_004FAE90
                (g_cPanel_00801688,(uint *)CONCAT22(uVar18,(short)this_00->field_00C5),
                 (ushort)this_00->field_00C9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0008|MESS_SHARED_0005:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_4,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    goto LAB_005470b2;
  }
  if (SVar4 == MESS_CURSORCLASSTY_A50C) {
    if (g_allPlayers_007FA174 == nullptr) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_5,0xffffffff,0xffffffff);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (MESS_CURSORCLASSTY_A504 < SVar4) {
    switch(SVar4) {
    case 0xa505:
    case MESS_CURSORCLASSTY_A507:
      goto switchD_00546ac9_caseD_a505;
    case MESS_CURSORCLASSTY_A504|MESS_ID_CREATE:
      goto switchD_00546ac9_caseD_a506;
    case MESS_CURSORCLASSTY_A500|MESS_SHARED_0008:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_0,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_CURSORCLASSTY_A500|MESS_CURSORCLASSTY_0009:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_2,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_CURSORCLASSTY_A500|MESS_SYSTEMCLASSTY_000A:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_1,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xa50b:
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_3,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
  }
  if (SVar4 == MESS_CURSORCLASSTY_A504) {
switchD_00546ac9_caseD_a506:
    GCGameState(this_00,1);
    if (DAT_00808784 != 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00C5 < this_00->field_04B2) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_04BA + this_00->field_04B2 <= this_00->field_00C5) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_00C9 < this_00->field_04B6) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_04BE + this_00->field_04B6 <= this_00->field_00C9) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (message->id != MESS_CURSORCLASSTY_A501) {
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_00DE = CASE_1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar8 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar8;
      ST3DSMAPContext::sub_006E1C20
                (g_sT3DSMAPContext_00807598,(float)this_00->field_00DF,iVar8,0.0,
                 (float *)&this_00->field_00EF,(float *)&this_00->field_00F3);
      this_00->field_010F = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    iVar8 = thunk_FUN_00548b90((int)this_00);
    if (iVar8 != 0) {
      this_00->field_00DE = CASE_1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar8 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar8;
      ST3DSMAPContext::sub_006E1C20
                (g_sT3DSMAPContext_00807598,(float)this_00->field_00DF,iVar8,0.0,
                 (float *)&this_00->field_00EF,(float *)&this_00->field_00F3);
      this_00->field_010F = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_04A2 != CASE_4E) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (g_sT3DSMAPContext_00807598 == nullptr) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    iVar8 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&this_00->field_00FF,
                         &this_00->field_0103,&this_00->field_0107);
    if (iVar8 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    piVar24 = &this_00->field_010B;
    this_00->field_00DE = CASE_5;
    if ((-1 < this_00->field_010B) && (g_sT3DSMAPContext_00807598 != nullptr)) {
      Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this_00->field_010B);
    }
    FUN_006e89b0(g_sT3DSMAPContext_00807598,piVar24,&DAT_007c7cd8,8,2,0x45,this_00->field_00FF,
                 this_00->field_0103,this_00->field_0107,0,1,1);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,*piVar24,0);
    Library::Ourlib::ST3DSMAP::SprSetLevBefore(g_sT3DSMAPContext_00807598,*piVar24,-1);
    if (this_00->field_00A9 != 0) {
      if (this_00->field_001C == 0xffffffff) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      FUN_006b3af0((int *)this_00->field_0060,this_00->field_001C);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    Library::DKW::DDX::FUN_006b8b10((int *)this_00->field_00AD);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar4 < MESS_CURSORCLASSTY_A501) {
    if (SVar4 == MESS_CURSORCLASSTY_A500) {
      this_00->field_04AE = 0;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A330 < SVar4) {
      if (SVar4 != MESS_CURSORCLASSTY_A4FF) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_04AE = 1;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 == MESS_CURSORCLASSTY_A330) {
      if (g_playSystem_00802A38 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_00550bb0((int)g_playSystem_00802A38);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 < MESS_CURSORCLASSTY_A31D) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 < 0xa327) {
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::RestoreTmp(g_allPlayers_007FA174,SVar4 - MESS_CURSORCLASSTY_A31D);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar4 != MESS_CURSORCLASSTY_A32F) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (g_popUp_008016D8 == nullptr) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    PopUpTy::Clear(g_popUp_008016D8);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar4 == MESS_CURSORCLASSTY_A501) goto switchD_00546ac9_caseD_a506;
  if (SVar4 != MESS_CURSORCLASSTY_A502) {
    if (SVar4 != MESS_CURSORCLASSTY_A503) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    this_00->field_04A6 = 1;
    this_00->field_04DE = 0;
    if (g_cPanel_00801688 == nullptr) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    CPanelTy::sub_004FAD20(g_cPanel_00801688);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
switchD_00546ac9_caseD_a505:
  if ((this_00->field_04B2 <= this_00->field_00C5) &&
     (this_00->field_00C5 < this_00->field_04BA + this_00->field_04B2)) {
    if ((this_00->field_04B6 <= this_00->field_00C9) &&
       (this_00->field_00C9 < this_00->field_04BE + this_00->field_04B6)) {
      switch(this_00->field_00DE) {
      case CASE_1:
        this_00->field_00DE = CASE_3;
      case CASE_0:
        if (message->id != MESS_CURSORCLASSTY_A502) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((this_00->field_04A2 == 0) && (this_00->field_04DE == '\0')) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        TakeCmdToRun(this_00,0);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case CASE_2:
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar4 != MESS_CURSORCLASSTY_A502) {
          if (this_00->field_04A2 == 0) {
            STAllPlayersC::FramePick
                      (g_allPlayers_007FA174,
                       STReplaceLowByte((uint32_t)(this_00->field_00E7), (uint8_t)(DAT_0080874d)),
                       this_00->field_00DF,this_00->field_00E3,this_00->field_00E7,
                       this_00->field_00EB,(uint)(SVar4 == MESS_CURSORCLASSTY_A507));
          }
          this_00->field_00DE = CASE_4;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (this_00->field_04A2 == 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        TakeCmdToRun(this_00,1);
        goto LAB_00546f1c;
      default:
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case CASE_5:
        goto switchD_00546e07_caseD_5;
      }
    }
  }
  CVar3 = this_00->field_00DE;
  if (CVar3 == CASE_1) {
    this_00->field_00DE = CASE_3;
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (CVar3 == CASE_2) {
LAB_00546f1c:
    this_00->field_00DE = CASE_4;
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (CVar3 != CASE_5) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar4 != MESS_CURSORCLASSTY_A502) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (this_00->field_00A9 == 0) {
    Library::DKW::DDX::FUN_006b8a60((byte *)this_00->field_00AD);
  }
  else if (this_00->field_001C != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_0060,this_00->field_001C,0xfffffffe,this_00->field_0034,
               this_00->field_0038);
  }
  DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  if (g_sT3DSMAPContext_00807598 != nullptr) {
    uVar20 = this_00->field_010B;
LAB_0054708b:
    Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,uVar20);
  }
LAB_00547090:
  this_00->field_00DE = CASE_0;
  this_00->field_010B = -1;
  if (this_00->field_04A2 != CASE_4E) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  iVar8 = 1;
LAB_005470b2:
  TakeCmdToRun(this_00,iVar8);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
switchD_00546e07_caseD_5:
  if (SVar4 != MESS_CURSORCLASSTY_A502) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (this_00->field_00A9 == 0) {
    Library::DKW::DDX::FUN_006b8a60((byte *)this_00->field_00AD);
  }
  else if (this_00->field_001C != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_0060,this_00->field_001C,0xfffffffe,this_00->field_0034,
               this_00->field_0038);
  }
  DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  if (g_sT3DSMAPContext_00807598 != nullptr) {
    uVar20 = this_00->field_010B;
    goto LAB_0054708b;
  }
  goto LAB_00547090;
switchD_005468af_caseD_a2ff:
  if (g_opticClass_007FB2A0 == nullptr) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  thunk_FUN_004ab270(SVar4 - 0xa2ff);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
switchD_00546590_caseD_a125:
  if (DAT_00808783 != '\x03') {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  sub_0054B540(this_00);
  if (g_intercomPanel_0080169C == nullptr) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,1);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
}

