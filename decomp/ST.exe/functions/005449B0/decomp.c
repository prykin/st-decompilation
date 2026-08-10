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
  ushort *puVar6;
  bool bVar7;
  CursorClassTy *this_00;
  short sVar8;
  int local_EAX_58;
  uint *puVar9;
  int iVar10;
  int local_EAX_1318;
  int local_EAX_1737;
  int local_EAX_2209;
  undefined4 uVar11;
  int local_EAX_2439;
  int local_EAX_2734;
  int local_EAX_3132;
  char *pcVar12_mg14;
  char *pcVar12_mg13;
  char *pcVar12_mg12;
  char *pcVar12_mg15;
  char *pcVar12_mg11;
  char *pcVar13_mgC;
  char *pcVar12_mgB;
  uint *local_EAX_4371;
  char *pcVar12_mgD;
  uint *puVar13;
  char *pcVar12_mgF;
  UINT UVar12;
  char *pcVar12_mg10;
  int local_EAX_4779;
  int local_EAX_4809;
  int iVar13;
  undefined4 *puVar14;
  int local_EAX_5241;
  int local_EAX_5271;
  int local_EAX_6047;
  int local_EAX_6656;
  cMf32 *this_01;
  ushort *puVar16;
  int local_EAX_7651;
  int iVar8;
  undefined2 uVar15;
  int iVar17;
  uint uVar16;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined3 uVar22;
  int *piVar23;
  char *pcVar24;
  uint *puVar25;
  code *pcVar26;
  char *pcVar27;
  char *pcVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  ushort uVar32;
  short sVar33;
  byte bVar34;
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
  char *pcVar12_mg2;
  char *pcVar12_mg8;

  local_44 = this;
  local_1c = STAppC::sub_006E51B0((STAppC *)this->field_0010);
  local_e0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e0;
  local_EAX_58 = Library::MSVCRT::__setjmp3(local_e0.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_58 != 0) {
    g_currentExceptionFrame = local_e0.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x4d6,0,local_EAX_58,
                                "%s","CursorClassTy::GetMessage");
    if (iVar17 == 0) {
      RaiseInternalException(local_EAX_58,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x4d7);
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
      uVar19 = (uint)(message->arg1).words.low;
      this_00->field_00C5 = uVar19;
      DrawSprite(this_00,uVar19,this_00->field_00C9);
      if ((this_00->field_04B2 <= this_00->field_00C5) &&
         (this_00->field_00C5 < this_00->field_04BA + this_00->field_04B2)) {
        if ((this_00->field_04B6 <= this_00->field_00C9) &&
           (this_00->field_00C9 < this_00->field_04BE + this_00->field_04B6)) {
          uVar11 = 1;
          goto LAB_0054532f;
        }
      }
      uVar11 = 0;
LAB_0054532f:
      this_00->field_0496 = uVar11;
      local_EAX_2439 = thunk_FUN_00544990(this_00);
      if (local_EAX_2439 == 0) {
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
        local_EAX_1737 = thunk_FUN_00544990(this_00);
        if (local_EAX_1737 == 0) break;
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
          iVar13 = 100;
          uVar32 = 0;
          goto LAB_005450ca;
        case CASE_2:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,g_nWidth_00806730 + -1,100,0
                            );
          break;
        case CASE_3:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,100,0,0);
          break;
        case CASE_4:
          iVar13 = DAT_00806734 + -1;
          uVar32 = 100;
LAB_005450ca:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,(uint)uVar32,iVar13,0);
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
        uVar19 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
        this_00->field_00E7 = uVar19;
        uVar20 = (this_00->field_00C9 - this_00->field_04B6) - this_00->field_00E3;
        this_00->field_00EB = uVar20;
        if ((5 < (int)((uVar19 ^ (int)uVar19 >> 0x1f) - ((int)uVar19 >> 0x1f))) ||
           (5 < (int)((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f)))) {
          piVar23 = &this_00->field_010B;
          this_00->field_00DE = CASE_2;
          if (-1 < this_00->field_010B) {
            FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_010B);
          }
          iVar13 = 0x20;
          puVar9 = (uint *)&this_00->field_0x113;
          do {
            iVar13 = iVar13 + -1;
            *puVar9 = (-(uint)(this_00->field_04A2 != 0) & 0x49) + 0x45 | 0x1000000;
            puVar9 = puVar9 + 7;
          } while (iVar13 != 0);
          FUN_006b96f0((int *)g_ddxContext_008075A8,(uint *)piVar23,10,0x20,
                       (uint)&this_00->field_0x113);
          FUN_006b1b10((AnonShape_006B1B10_121F236C *)g_ddxContext_008075A8,*piVar23,2);
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,*piVar23,0xffffffff,this_00->field_00DF,
                     this_00->field_00E3);
          FUN_006b2800(g_ddxContext_008075A8,*piVar23,this_00->field_00E7,this_00->field_00EB);
          iVar13 = FUN_00405687((int)this_00);
          if (iVar13 == 0) {
            SetGCType(this_00,CASE_0,this_00->field_0034,this_00->field_0038);
          }
        }
        break;
      case CASE_2:
        local_8 = (AnonShape_005449B0_F65ED625 *)0xfffffffe;
        local_c = 1.4013e-45;
        switch(this_00->field_00CD) {
        case CASE_1:
          iVar10 = this_00->field_04B6;
          iVar21 = this_00->field_04B2;
          iVar13 = iVar10 + 100;
          iVar18 = iVar21;
          goto LAB_00544d9b;
        case CASE_2:
          iVar10 = this_00->field_04B6;
          iVar30 = this_00->field_04BA;
          iVar21 = this_00->field_04B2;
          iVar13 = iVar10 + 100;
          iVar18 = iVar30 + -1 + iVar21;
          iVar31 = this_00->field_04BE;
          break;
        case CASE_3:
          iVar21 = this_00->field_04B2;
          iVar10 = this_00->field_04B6;
          iVar13 = iVar10;
          iVar18 = iVar21 + 100;
LAB_00544d9b:
          iVar31 = this_00->field_04BE;
          iVar30 = this_00->field_04BA;
          break;
        case CASE_4:
          iVar31 = this_00->field_04BE;
          iVar10 = this_00->field_04B6;
          iVar21 = this_00->field_04B2;
          iVar13 = iVar31 + -1 + iVar10;
          iVar18 = iVar21 + 100;
          iVar30 = this_00->field_04BA;
          break;
        default:
          goto switchD_00544d44_default;
        }
        thunk_FUN_0054b9a0(this_00,iVar21,iVar10,iVar30,iVar31,iVar18,iVar13,0);
switchD_00544d44_default:
        local_70 = (float)this_00->field_00EF;
        local_6c = this_00->field_00F3;
        local_68 = 0;
        ST3DSMAPContext::sub_006E25D0(g_sT3DSMAPContext_00807598,&local_8c,&local_70,0.0,0.0,0.0,0);
        this_00->field_00E3 = local_88 >> 0x10;
        this_00->field_00DF = local_8c >> 0x10;
        if (this_00->field_00CD == CASE_0) {
          piVar23 = &this_00->field_00C9;
          piVar1 = &this_00->field_00C5;
          local_EAX_1318 =
               thunk_FUN_0054bdf0(this_00->field_04B2,this_00->field_04B6,this_00->field_04BA,
                                  this_00->field_04BE,piVar1,piVar23);
          if (local_EAX_1318 != 0) {
            local_28 = (undefined2)*piVar1;
            local_26 = (undefined2)*piVar23;
            local_40[4] = 0x16;
            FUN_006e6000(this_00,3,1,local_40);
          }
          iVar13 = FUN_00405687((int)this_00);
          iVar13 = thunk_FUN_0054b9a0(this_00,this_00->field_04B2,this_00->field_04B6,
                                      this_00->field_04BA,this_00->field_04BE,*piVar1,*piVar23,
                                      (uint)(iVar13 == 0));
          if (iVar13 != 0) {
            FUN_006e1440(g_sT3DSMAPContext_00807598);
            iVar13 = *piVar23;
            uVar19 = (*piVar1 - this_00->field_00DF) - this_00->field_04B2;
            this_00->field_00E7 = uVar19;
            goto LAB_00544e8f;
          }
          local_14 = (cMf32 *)this_00->field_00EB;
          uVar20 = this_00->field_00E7;
          uVar19 = (*piVar1 - this_00->field_00DF) - this_00->field_04B2;
          uVar16 = (*piVar23 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00E7 = uVar19;
          this_00->field_00EB = uVar16;
          if ((uVar20 == uVar19) && (local_14 == (cMf32 *)uVar16)) {
            local_c = 0.0;
          }
        }
        else {
          FUN_006e1440(g_sT3DSMAPContext_00807598);
          iVar13 = this_00->field_00C9;
          uVar19 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
          this_00->field_00E7 = uVar19;
LAB_00544e8f:
          uVar16 = (iVar13 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00EB = uVar16;
        }
        if (0x31 < local_1c - this_00->field_010F) {
          this_00->field_010F = local_1c;
          local_8 = (AnonShape_005449B0_F65ED625 *)0xffffffff;
        }
        if (local_c != 0.0) {
          FUN_006b2800(g_ddxContext_008075A8,this_00->field_010B,uVar19,uVar16);
        }
        if ((local_c != 0.0) || ((int)local_8 < 0)) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,this_00->field_010B,(uint)local_8,
                     this_00->field_00DF,this_00->field_00E3);
        }
        break;
      case CASE_3:
        uVar19 = this_00->field_010B;
        if (-1 < (int)uVar19) goto LAB_0054505c;
        goto LAB_0054506b;
      case CASE_4:
        uVar19 = this_00->field_010B;
LAB_0054505c:
        FUN_006b3bb0((int *)g_ddxContext_008075A8,uVar19);
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
          lVar29 = Library::MSVCRT::__ftol();
          this_00->field_00FB = (int)lVar29;
          if ((int)lVar29 < 1) {
            this_00->field_00FB = 1;
          }
          lVar29 = Library::MSVCRT::__ftol();
          iVar13 = (int)(short)lVar29;
          lVar29 = Library::MSVCRT::__ftol();
          iVar18 = (int)(short)lVar29;
          lVar29 = Library::MSVCRT::__ftol();
          sVar8 = (short)lVar29;
          sVar33 = sVar8 >> 0xf;
          lVar29 = Library::MSVCRT::__ftol();
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_EAX_2209 = FUN_006db910((int)(short)lVar29,CONCAT22(sVar33,sVar8),iVar18,iVar13);
          this_00->field_00F7 = local_EAX_2209;
          Library::Ourlib::ST3DSMAP::SprWireObjMove
                    (g_sT3DSMAPContext_00807598,this_00->field_010B,this_00->field_00FF,
                     this_00->field_0103,this_00->field_0107,local_EAX_2209,this_00->field_00FB,1);
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
        local_EAX_7651 = thunk_FUN_004ab050();
        switch(local_EAX_7651) {
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
        uVar19 = 0xffffffff;
        pcVar24 = &CHAR_00h_00807680;
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
        pcVar28 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar28 = pcVar24 + 1;
        cVar2 = *pcVar24;
        pcVar24 = pcVar28;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      local_58 = &local_48;
      local_48 = 0;
      pcVar24 = pcVar28 + -uVar19;
      pcVar28 = (char *)&DAT_0080ee1a;
      memmove(pcVar28, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      uVar19 = 0xffffffff;
      pcVar12_mg2 = PTR_s_SAVEGAME__0079ade4;
      do {
        pcVar24 = pcVar12_mg2;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar12_mg2 + 1;
        cVar2 = *pcVar12_mg2;
        pcVar12_mg2 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar13 = -1;
      pcVar28 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar28;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar27 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar27;
      } while (cVar2 != '\0');
      pcVar24 = pcVar24 + -uVar19;
      pcVar28 = pcVar27 + -1;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar24;
        pcVar24 = pcVar24 + 4;
        pcVar28 = pcVar28 + 4;
      }
      local_14 = nullptr;
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar28 = *pcVar24;
        pcVar24 = pcVar24 + 1;
        pcVar28 = pcVar28 + 1;
      }
      uVar19 = 0xffffffff;
      pcVar24 = &CHAR_00h_00807ddd;
      do {
        pcVar28 = pcVar24;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar28 = pcVar24 + 1;
        cVar2 = *pcVar24;
        pcVar24 = pcVar28;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar13 = -1;
      pcVar24 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar24;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar27 = pcVar24 + 1;
        cVar2 = *pcVar24;
        pcVar24 = pcVar27;
      } while (cVar2 != '\0');
      pcVar24 = pcVar28 + -uVar19;
      pcVar28 = pcVar27 + -1;
      memmove(pcVar28, pcVar24, uVar19); /* compiler REP MOVS byte copy */
      uVar20 = 0;
      FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
      uVar19 = 0xffffffff;
      pcVar12_mg8 = PTR_s_SAVE_QUICKSAVE_0079ade8;
      do {
        pcVar24 = pcVar12_mg8;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar12_mg8 + 1;
        cVar2 = *pcVar12_mg8;
        pcVar12_mg8 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar13 = -1;
      pcVar28 = (char *)&DAT_0080ee1a;
      do {
        pcVar27 = pcVar28;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar27 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar27;
      } while (cVar2 != '\0');
      pcVar24 = pcVar24 + -uVar19;
      pcVar28 = pcVar27 + -1;
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(undefined4 *)pcVar28 = *(undefined4 *)pcVar24;
        pcVar24 = pcVar24 + 4;
        pcVar28 = pcVar28 + 4;
      }
      local_124.previous = g_currentExceptionFrame;
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar28 = *pcVar24;
        pcVar24 = pcVar24 + 1;
        pcVar28 = pcVar28 + 1;
      }
      g_currentExceptionFrame = &local_124;
      local_EAX_6656 = Library::MSVCRT::__setjmp3(local_124.jumpBuffer,0);
      this_01 = local_14;
      if (local_EAX_6656 == 0) {
        this_01 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080ee1a,0,0,0);
        local_14 = this_01;
        puVar16 = cMf32::RecGet(this_01,0x80,PTR_s_SAVE_DESC_0079adec,(int *)&local_58,0);
        if (puVar16 != nullptr) {
          iVar13 = -0x77ffffea;
          if (DAT_00808783 == '\x01') {
            iVar13 = -0x77fffeea;
          }
          else if (DAT_00808783 == '\x02') {
            iVar13 = -0x77fffdea;
          }
          if (iVar13 == local_48) {
            if (DAT_00808783 == '\x01') {
              STPiece<0,1>(DAT_008087a0) = 9;
            }
            else if (DAT_00808783 == '\x02') {
              STPiece<0,1>(DAT_008087a0) = 10;
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
      local_EAX_6047 = thunk_FUN_00544990(this_00);
      if (local_EAX_6047 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      local_54 = 1;
      if (g_parentSystem_0081163C == nullptr) {
        local_4c = 1;
        puVar9 = &local_54;
        local_50 = (uint)(DAT_00808784 == 0);
      }
      else {
        local_4c = 1;
        puVar9 = &local_54;
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
        local_EAX_3132 = thunk_FUN_00544990(this_00);
        if (local_EAX_3132 == 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_researchPanel_008016E8 != nullptr) &&
           (g_researchPanel_008016E8->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_bldBoatPanel_0080167C != nullptr) &&
           (g_bldBoatPanel_0080167C->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_bldObjPanel_00801684 != nullptr) &&
           (g_bldObjPanel_00801684->field_0172 == 1)) {
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
        if ((g_bldLabPanel_00801680 != nullptr) &&
           (g_bldLabPanel_00801680->field_0172 == 1)) {
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
      local_EAX_2734 = thunk_FUN_00544990(this_00);
      if (local_EAX_2734 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_researchPanel_008016E8 != nullptr) &&
         (g_researchPanel_008016E8->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_bldBoatPanel_0080167C != nullptr) &&
         (g_bldBoatPanel_0080167C->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_bldObjPanel_00801684 != nullptr) &&
         (g_bldObjPanel_00801684->field_0172 == 1)) {
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
      if ((g_bldLabPanel_00801680 != nullptr) &&
         (g_bldLabPanel_00801680->field_0172 == 1)) {
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
    UVar12 = (message->arg1).u32;
    if (UVar12 == this_00->field_04DA) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (UVar12 == 0) {
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
    this_00->field_04DA = UVar12;
    uVar32 = (message->arg0).words.high;
    if (uVar32 == 1) {
      pAVar5 = (message->arg1).ptr;
      local_8 = pAVar5;
      switch(*(undefined1 *)pAVar5) {
      case 1:
        if (pAVar5->field_0009 < 0) {
          if ((&stack0x00000000 != (undefined1 *)0x524) &&
             (pcVar12_mg13 = LoadResourceString(pAVar5->field_0001,g_hINSTANCE_00807618),
             pcVar12_mg13 != nullptr)) {
            UVar12 = local_8->field_0001;
LAB_005458df:
            pcVar12_mg15 = LoadResourceString(UVar12,g_hINSTANCE_00807618);
            uVar19 = 0xffffffff;
            do {
              pcVar24 = pcVar12_mg15;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1;
              pcVar24 = pcVar12_mg15 + 1;
              cVar2 = *pcVar12_mg15;
              pcVar12_mg15 = pcVar24;
            } while (cVar2 != '\0');
            uVar19 = ~uVar19;
            puVar9 = (uint *)(pcVar24 + -uVar19);
            puVar25 = local_524;
            memmove(puVar25, puVar9, uVar19); /* compiler REP MOVS byte copy */
            uVar20 = 0;
          }
        }
        else {
          thunk_FUN_0052a970(*(uint *)(&DAT_00807e66 + pAVar5->field_0009 * 4),1);
          LoadResourceString(pAVar5->field_0001,g_hINSTANCE_00807618);
          wsprintfA((LPSTR)local_524,"&%d%s\n&%d%s");
        }
        break;
      case 2:
        if (pAVar5->field_0001 == 0) goto switchD_00545816_default;
        if ((&stack0x00000000 != (undefined1 *)0x524) &&
           (pcVar12_mg12 = LoadResourceString(pAVar5->field_0001,g_hINSTANCE_00807618),
           pcVar12_mg12 != nullptr)) {
          UVar12 = local_8->field_0001;
          goto LAB_005458df;
        }
        break;
      case 3:
        if (pAVar5->field_0005 == 0) {
          pcVar12_mg11 = LoadResourceString(0x36b3,g_hINSTANCE_00807618);
          pcVar13_mgC = LoadResourceString(pAVar5->field_0001,g_hINSTANCE_00807618);
          pcVar26 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,"&%d%s\n%s",(message->arg0).words.low,pcVar13_mgC,
                    pcVar12_mg11);
        }
        else {
          LoadResourceString(0x36b3,g_hINSTANCE_00807618);
          LoadResourceString(pAVar5->field_0005,g_hINSTANCE_00807618);
          LoadResourceString(pAVar5->field_0001,g_hINSTANCE_00807618);
          pcVar26 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,"&%d%s\n%s\n%s");
        }
        if (*(short *)&pAVar5->field_0xd != 0) {
          (*pcVar26)(local_524,"%s &%d%d",(short)local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 5,*(short *)&pAVar5->field_0xd
                    );
        }
        sVar8 = (short)pAVar5->field_0009;
        if (sVar8 != 0) {
          (*pcVar26)((short)local_524,"%s &%d%d",local_524,2,sVar8);
        }
        sVar8 = *(short *)((int)&pAVar5->field_0009 + 2);
        if (sVar8 != 0) {
          (*pcVar26)((short)local_524,"%s &%d%d",local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 6,sVar8);
        }
        if (0 < *(short *)&pAVar5->field_0xf) {
          LoadResourceString(0x273a,g_hINSTANCE_00807618);
          (*pcVar26)();
        }
        break;
      case 4:
        pcVar12_mgB = LoadResourceString(pAVar5->field_0001,g_hINSTANCE_00807618);
        uVar19 = 0xffffffff;
        do {
          pcVar24 = pcVar12_mgB;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar24 = pcVar12_mgB + 1;
          cVar2 = *pcVar12_mgB;
          pcVar12_mgB = pcVar24;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar24 = pcVar24 + -uVar19;
        pcVar28 = (char *)&DAT_0080f33a;
        memmove(pcVar28, pcVar24, uVar19); /* compiler REP MOVS byte copy */
        uVar20 = 0;
        for (local_EAX_4371 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n');
            local_EAX_4371 != nullptr;
            local_EAX_4371 = Library::MSVCRT::FUN_0072e560(local_EAX_4371,'\n')) {
          *(undefined1 *)local_EAX_4371 = 0x20;
        }
        wsprintfA((LPSTR)local_524,"&%d%s",(uint)(message->arg0).words.low,&DAT_0080f33a);
        if (local_8->field_0005 != 0) {
          pcVar12_mgD = LoadResourceString(local_8->field_0005,g_hINSTANCE_00807618);
          uVar19 = 0xffffffff;
          do {
            pcVar24 = pcVar12_mgD;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar24 = pcVar12_mgD + 1;
            cVar2 = *pcVar12_mgD;
            pcVar12_mgD = pcVar24;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          pcVar24 = pcVar24 + -uVar19;
          pcVar28 = (char *)&DAT_0080f33a;
          memmove(pcVar28, pcVar24, uVar19); /* compiler REP MOVS byte copy */
          for (puVar13 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar13 != nullptr;
              puVar13 = Library::MSVCRT::FUN_0072e560(puVar13,'\n')) {
            *(undefined1 *)puVar13 = 0x20;
          }
          wsprintfA((LPSTR)local_524,"%s\n%s",local_524,&DAT_0080f33a);
        }
        piVar23 = &local_8->field_0009;
        if (local_8->field_0009 != 0) {
          pcVar12_mgF = LoadResourceString(0x36c2,g_hINSTANCE_00807618);
          wsprintfA((LPSTR)local_524,"%s\n%s",local_524,pcVar12_mgF);
          iVar13 = 5;
          do {
            if (*piVar23 != CASE_0) {
              module = g_hINSTANCE_00807618;
              UVar12 = thunk_FUN_00528060((Global_sub_00528060_param_1Enum)*piVar23,
                                          (char)((uint)*piVar23 >> 0x10));
              pcVar12_mg10 = LoadResourceString(UVar12,module);
              wsprintfA((LPSTR)local_524,"%s\n&%d%s",local_524,
                        (STField<Global_sub_00528060_param_1Enum>(piVar23,5) != CASE_0) + 1,
                        pcVar12_mg10);
            }
            piVar23 = (int *)((int)piVar23 + 6);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        break;
      default:
switchD_00545816_default:
        local_c = 0.0;
      }
    }
    else if ((uVar32 < 2) || (3 < uVar32)) {
      local_c = 0.0;
    }
    else if ((&stack0x00000000 != (undefined1 *)0x524) &&
            (pcVar12_mg14 = LoadResourceString(UVar12,g_hINSTANCE_00807618),
            pcVar12_mg14 != nullptr)) {
      UVar12 = this_00->field_04DA;
      goto LAB_005458df;
    }
    if (local_c == 0.0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((message->arg0).words.high == 3) {
      if ((g_startSystem_0081176C == nullptr) ||
         (g_startSystem_0081176C->field_0038 == nullptr)) goto cf_common_exit_00545FF6;
      local_EAX_5241 = FUN_00711370(g_startSystem_0081176C->field_0038,local_524);
      this_00->field_04CA = local_EAX_5241 + 0xc;
      local_EAX_5271 = FUN_007113e0(g_startSystem_0081176C->field_0038,local_524);
      iVar13 = local_EAX_5271 + 10;
      this_00->field_04CE = iVar13;
      if ((800 < this_00->field_04CA) || (0x96 < iVar13)) goto cf_common_exit_00545FF6;
      this_00->field_04C2 = this_00->field_00C5 + this_00->field_00B1;
      iVar21 = this_00->field_00C9 + this_00->field_00B5;
      this_00->field_04C6 = iVar21;
      iVar18 = (g_nWidth_00806730 - this_00->field_04CA) + -0x28;
      if (iVar18 < this_00->field_04C2) {
        this_00->field_04C2 = iVar18;
      }
      if (this_00->field_04C2 < 0) {
        this_00->field_04C2 = 0;
      }
      iVar13 = (DAT_00806734 - iVar13) + -0x14;
      if (iVar13 < iVar21) {
        this_00->field_04C6 = iVar13;
      }
      if (this_00->field_04C6 < 0) {
        this_00->field_04C6 = 0;
      }
      puVar6 = this_00->field_04D2;
      uVar19 = *(uint *)(puVar6 + 10);
      if (uVar19 == 0) {
        uVar19 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar6 + 4);
      }
      puVar14 = (undefined4 *)FUN_006b4fa0((int *)puVar6);
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar14 = 0x22222222;
        puVar14 = puVar14 + 1;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar14 = 0x22;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      ccFntTy::SetSurf((ccFntTy *)g_startSystem_0081176C->field_0038,(int)this_00->field_04D2,0,5,5,
                       this_00->field_04CA + -10,this_00->field_04CE + -10);
      ccFntTy::WrTxt((ccFntTy *)g_startSystem_0081176C->field_0038,(char *)local_524,-2,-1,
                     (uint)(message->arg0).words.low,-1,-1);
      FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_00->field_04D2,0,0,0,this_00->field_04CA,
                   this_00->field_04CE,0x18,0xd);
      FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_00->field_04D2,0,1,1,
                   this_00->field_04CA + -2,this_00->field_04CE + -2,0x1d,0xd);
      bVar34 = 0x18;
    }
    else {
      if ((g_interSystem_00802A28 == nullptr) ||
         (g_interSystem_00802A28->field_0028 == nullptr)) goto cf_common_exit_00545FF6;
      local_EAX_4779 = FUN_00711370(g_interSystem_00802A28->field_0028,local_524);
      this_00->field_04CA = local_EAX_4779 + 0xc;
      local_EAX_4809 = FUN_007113e0(g_interSystem_00802A28->field_0028,local_524);
      iVar13 = local_EAX_4809 + 10;
      this_00->field_04CE = iVar13;
      if ((800 < this_00->field_04CA) || (0x96 < iVar13)) goto cf_common_exit_00545FF6;
      this_00->field_04C2 = this_00->field_00C5 + this_00->field_00B1;
      iVar21 = this_00->field_00C9 + this_00->field_00B5;
      this_00->field_04C6 = iVar21;
      iVar18 = (g_nWidth_00806730 - this_00->field_04CA) + -0x28;
      if (iVar18 < this_00->field_04C2) {
        this_00->field_04C2 = iVar18;
      }
      if (this_00->field_04C2 < 0) {
        this_00->field_04C2 = 0;
      }
      iVar13 = (DAT_00806734 - iVar13) + -0x14;
      if (iVar13 < iVar21) {
        this_00->field_04C6 = iVar13;
      }
      if (this_00->field_04C6 < 0) {
        this_00->field_04C6 = 0;
      }
      puVar6 = this_00->field_04D2;
      uVar19 = *(uint *)(puVar6 + 10);
      if (uVar19 == 0) {
        uVar19 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar6 + 4);
      }
      puVar14 = (undefined4 *)FUN_006b4fa0((int *)puVar6);
      for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
        *puVar14 = 0x3a3a3a3a;
        puVar14 = puVar14 + 1;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar14 = 0x3a;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      ccFntTy::SetSurf(g_interSystem_00802A28->field_0028,(int)this_00->field_04D2,0,5,5,
                       this_00->field_04CA + -10,this_00->field_04CE + -10);
      ccFntTy::WrTxt(g_interSystem_00802A28->field_0028,(char *)local_524,-2,-1,
                     (uint)(message->arg0).words.low,-1,-1);
      FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_00->field_04D2,0,0,0,this_00->field_04CA,
                   this_00->field_04CE,0x6f,0xd);
      FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_00->field_04D2,0,1,1,
                   this_00->field_04CA + -2,this_00->field_04CE + -2,0xb3,0xd);
      bVar34 = 0x6f;
    }
    FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)this_00->field_04D2,0,3,3,this_00->field_04CA + -6
                 ,this_00->field_04CE + -6,bVar34,0xd);
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
      puVar9 = &local_64;
      local_5c = 0;
      local_64 = 9;
LAB_00547c2d:
      thunk_FUN_0054edf0((undefined4 *)0x5,puVar9,1,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    uVar22 = (undefined3)((uint)this_00 >> 8);
    uVar15 = (undefined2)(SVar4 + ~MESS_CURSORCLASSTY_A50C >> 0x10);
    switch(SVar4 + ~MESS_CURSORCLASSTY_A50C) {
    case MESS_ID_NONE:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
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
      iVar13 = 0;
      break;
    case 1:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar13 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar21 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar21 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar21) {
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
                (g_allPlayers_007FA174,(DArrayTy *)STReplaceLowByte((uint32_t)(iVar18), (uint8_t)(DAT_0080874d)),
                 iVar13 - iVar18,iVar21 - iVar10,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_ID_CREATE:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
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
      iVar13 = 0;
      break;
    case MESS_SHARED_0003:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar13 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar21 = this_00->field_04B6;
      if (iVar18 < iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar21 <= iVar18) {
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
                (g_allPlayers_007FA174,(DArrayTy *)CONCAT31(uVar22,DAT_0080874d),
                 iVar13 - (int)local_8,iVar18 - iVar21,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 4:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar13 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar21 = this_00->field_04B6;
      if (iVar18 < iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar21 <= iVar18) {
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
                (g_allPlayers_007FA174,(DArrayTy *)CONCAT31(uVar22,DAT_0080874d),
                 iVar13 - (int)local_8,iVar18 - iVar21,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0005:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar13 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar21 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar21 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar21) {
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
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_7,iVar13 - iVar18,iVar21 - iVar10);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 6:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar13 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar21 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar21 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar21) {
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
      STAllPlayersC::SelectObjects(g_allPlayers_007FA174,CASE_6,iVar13 - iVar18,iVar21 - iVar10);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 7:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
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
      iVar13 = 0;
      break;
    case MESS_SHARED_0008:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != nullptr) && (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar13 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar13 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar13) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar21 = this_00->field_04B6;
      if (iVar18 < iVar21) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar21 <= iVar18) {
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
                (g_allPlayers_007FA174,(DArrayTy *)(uint)DAT_0080874d,iVar13 - (int)local_8,
                 iVar18 - iVar21,0);
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
                (g_cPanel_00801688,(uint *)CONCAT22(uVar15,(short)this_00->field_00C5),
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
                (g_cPanel_00801688,(uint *)CONCAT22(uVar15,(short)this_00->field_00C5),
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
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
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
      iVar13 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar13;
      ST3DSMAPContext::sub_006E1C20
                (g_sT3DSMAPContext_00807598,(float)this_00->field_00DF,iVar13,0.0,
                 (float *)&this_00->field_00EF,(float *)&this_00->field_00F3);
      this_00->field_010F = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    iVar13 = thunk_FUN_00548b90((int)this_00);
    if (iVar13 != 0) {
      this_00->field_00DE = CASE_1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar13 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar13;
      ST3DSMAPContext::sub_006E1C20
                (g_sT3DSMAPContext_00807598,(float)this_00->field_00DF,iVar13,0.0,
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
    iVar13 = FUN_006e1dd0(g_sT3DSMAPContext_00807598,this_00->field_00C5 - this_00->field_04B2,
                          this_00->field_00C9 - this_00->field_04B6,&this_00->field_00FF,
                          &this_00->field_0103,&this_00->field_0107);
    if (iVar13 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    piVar23 = &this_00->field_010B;
    this_00->field_00DE = CASE_5;
    if ((-1 < this_00->field_010B) && (g_sT3DSMAPContext_00807598 != nullptr)) {
      Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this_00->field_010B);
    }
    FUN_006e89b0(g_sT3DSMAPContext_00807598,piVar23,&DAT_007c7cd8,8,2,0x45,this_00->field_00FF,
                 this_00->field_0103,this_00->field_0107,0,1,1);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,*piVar23,0);
    Library::Ourlib::ST3DSMAP::SprSetLevBefore(g_sT3DSMAPContext_00807598,*piVar23,-1);
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
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
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
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
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
    uVar19 = this_00->field_010B;
LAB_0054708b:
    Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,uVar19);
  }
LAB_00547090:
  this_00->field_00DE = CASE_0;
  this_00->field_010B = -1;
  if (this_00->field_04A2 != CASE_4E) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  iVar13 = 1;
LAB_005470b2:
  TakeCmdToRun(this_00,iVar13);
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
    uVar19 = this_00->field_010B;
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

