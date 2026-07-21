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
   direct_offsets={10:10,14:8,18:6,1c:3} */

int __thiscall CursorClassTy::GetMessage(CursorClassTy *this,STMessage *message)

{
  int *piVar1;
  char cVar2;
  CursorClassTy_field_00DEState CVar3;
  ushort uVar4;
  short sVar5;
  STMessageId SVar6;
  AnonShape_005449B0_F65ED625 *pAVar7;
  bool bVar8;
  CursorClassTy *this_00;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  UINT UVar15;
  undefined4 *puVar16;
  cMf32 *this_01;
  ushort *puVar17;
  undefined2 uVar19;
  int iVar18;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  InternalExceptionFrame *extraout_ECX;
  InternalExceptionFrame *this_02;
  int iVar23;
  undefined3 uVar24;
  int *piVar25;
  uint *puVar26;
  code *pcVar27;
  char *pcVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  byte bVar32;
  HINSTANCE module;
  uint local_524 [256];
  InternalExceptionFrame local_124;
  InternalExceptionFrame local_e0;
  int local_9c;
  int local_98;
  int local_8c;
  int local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int *local_58;
  undefined4 local_54;
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
  local_1c = FUN_006e51b0((int)this->field_0010);
  local_e0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e0;
  iVar9 = Library::MSVCRT::__setjmp3(local_e0.jumpBuffer,0);
  this_00 = local_44;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_e0.previous;
    iVar18 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0x4d6,0,iVar9,
                                "%s","CursorClassTy::GetMessage");
    if (iVar18 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0x4d7);
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
  if (((this_00->field_0493 != '\x02') && (MESS_CURSORCLASSTY_A0FF < message->id)) &&
     (message->id < 0xb100)) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if ((((DAT_00808784 != 0) || (DAT_0080878c != 0)) || (DAT_00808790 != 0)) &&
     ((0xa10e < message->id && (message->id < 0xb100)))) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  SVar6 = message->id;
  if (SVar6 < MESS_SHARED_0061) {
    if (SVar6 == MESS_SHARED_0060) {
      this_00->field_00C9 = (uint)(message->arg1).words.high;
      uVar21 = (uint)(message->arg1).words.low;
      this_00->field_00C5 = uVar21;
      DrawSprite(this_00,uVar21,this_00->field_00C9);
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
      iVar9 = thunk_FUN_00544990((int)this_00);
      if (iVar9 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_tLOBldMark_007FB2AC == (AnonShape_GLOBAL_007FB2AC_70073F41 *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_0496 != 0) && (this_00->field_04A2 == 0xe)) {
        if (g_tLOBldMark_007FB2AC->field_0018 != 0) {
          thunk_FUN_004c6210(g_tLOBldMark_007FB2AC,this_00->field_04AA,0);
        }
        thunk_FUN_004c6440(g_tLOBldMark_007FB2AC,(float)(this_00->field_00C5 - this_00->field_04B2),
                           this_00->field_00C9 - this_00->field_04B6,(int *)0x0,(int *)0x0,
                           (int *)0x0);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_tLOBldMark_007FB2AC->field_0018 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004c63f0((AnonShape_004C63F0_0B060A14 *)g_tLOBldMark_007FB2AC);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    switch(SVar6) {
    case MESS_ID_NONE:
      switch(this_00->field_00DE) {
      case CASE_0:
        iVar9 = thunk_FUN_00544990((int)this_00);
        if (iVar9 == 0) break;
        if (-1 < this_00->field_010B) {
          FUN_006b3bb0((int *)PTR_008075a8,this_00->field_010B);
          this_00->field_010B = -1;
        }
        switch(this_00->field_00CD) {
        case 0:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,this_00->field_00C5,
                             this_00->field_00C9,1);
          break;
        case 1:
          iVar9 = 100;
          iVar18 = 0;
          goto LAB_005450ca;
        case 2:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,g_nWidth_00806730 + -1,100,0
                            );
          break;
        case 3:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,100,0,0);
          break;
        case 4:
          iVar9 = DAT_00806734 + -1;
          iVar18 = 100;
LAB_005450ca:
          thunk_FUN_0054b9a0(this_00,0,0,g_nWidth_00806730,DAT_00806734,iVar18,iVar9,0);
        }
        break;
      case CASE_1:
        if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
          local_7c = this_00->field_00EF;
          local_78 = this_00->field_00F3;
          local_74 = 0;
          FUN_006e25d0(PTR_00807598,&local_9c);
          this_00->field_00DF = local_9c >> 0x10;
          this_00->field_00E3 = local_98 >> 0x10;
        }
        uVar21 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
        this_00->field_00E7 = uVar21;
        uVar22 = (this_00->field_00C9 - this_00->field_04B6) - this_00->field_00E3;
        this_00->field_00EB = uVar22;
        if ((5 < (int)((uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f))) ||
           (5 < (int)((uVar22 ^ (int)uVar22 >> 0x1f) - ((int)uVar22 >> 0x1f)))) {
          piVar25 = &this_00->field_010B;
          this_00->field_00DE = CASE_2;
          if (-1 < this_00->field_010B) {
            FUN_006b3bb0((int *)PTR_008075a8,this_00->field_010B);
          }
          iVar9 = 0x20;
          puVar14 = (uint *)&this_00->field_0x113;
          do {
            iVar9 = iVar9 + -1;
            *puVar14 = (-(uint)(this_00->field_04A2 != 0) & 0x49) + 0x45 | 0x1000000;
            puVar14 = puVar14 + 7;
          } while (iVar9 != 0);
          FUN_006b96f0((int *)PTR_008075a8,(uint *)piVar25,10,0x20,(uint)&this_00->field_0x113);
          FUN_006b1b10(PTR_008075a8,*piVar25,2);
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,*piVar25,0xffffffff,this_00->field_00DF,this_00->field_00E3
                    );
          FUN_006b2800((int)PTR_008075a8,*piVar25,this_00->field_00E7,this_00->field_00EB);
          iVar9 = FUN_00405687((int)this_00);
          if (iVar9 == 0) {
            SetGCType(this_00,CASE_0,this_00->field_0034,this_00->field_0038);
          }
        }
        break;
      case CASE_2:
        local_8 = (AnonShape_005449B0_F65ED625 *)0xfffffffe;
        local_c = 1.4013e-45;
        switch(this_00->field_00CD) {
        case 1:
          iVar10 = this_00->field_04B6;
          iVar23 = this_00->field_04B2;
          iVar9 = iVar10 + 100;
          iVar18 = iVar23;
          goto LAB_00544d9b;
        case 2:
          iVar10 = this_00->field_04B6;
          iVar30 = this_00->field_04BA;
          iVar23 = this_00->field_04B2;
          iVar9 = iVar10 + 100;
          iVar18 = iVar30 + -1 + iVar23;
          iVar31 = this_00->field_04BE;
          break;
        case 3:
          iVar23 = this_00->field_04B2;
          iVar10 = this_00->field_04B6;
          iVar18 = iVar23 + 100;
          iVar9 = iVar10;
LAB_00544d9b:
          iVar31 = this_00->field_04BE;
          iVar30 = this_00->field_04BA;
          break;
        case 4:
          iVar31 = this_00->field_04BE;
          iVar10 = this_00->field_04B6;
          iVar23 = this_00->field_04B2;
          iVar9 = iVar31 + -1 + iVar10;
          iVar18 = iVar23 + 100;
          iVar30 = this_00->field_04BA;
          break;
        default:
          goto switchD_00544d44_default;
        }
        thunk_FUN_0054b9a0(this_00,iVar23,iVar10,iVar30,iVar31,iVar18,iVar9,0);
switchD_00544d44_default:
        local_70 = this_00->field_00EF;
        local_6c = this_00->field_00F3;
        local_68 = 0;
        FUN_006e25d0(PTR_00807598,&local_8c);
        this_00->field_00E3 = local_88 >> 0x10;
        this_00->field_00DF = local_8c >> 0x10;
        if (this_00->field_00CD == 0) {
          piVar25 = &this_00->field_00C9;
          piVar1 = &this_00->field_00C5;
          iVar9 = thunk_FUN_0054bdf0(this_00->field_04B2,this_00->field_04B6,this_00->field_04BA,
                                     this_00->field_04BE,piVar1,piVar25);
          if (iVar9 != 0) {
            local_28 = (undefined2)*piVar1;
            local_26 = (undefined2)*piVar25;
            local_40[4] = 0x16;
            FUN_006e6000(this_00,3,1,local_40);
          }
          iVar9 = FUN_00405687((int)this_00);
          iVar9 = thunk_FUN_0054b9a0(this_00,this_00->field_04B2,this_00->field_04B6,
                                     this_00->field_04BA,this_00->field_04BE,*piVar1,*piVar25,
                                     (uint)(iVar9 == 0));
          if (iVar9 != 0) {
            FUN_006e1440(PTR_00807598);
            iVar9 = *piVar25;
            uVar21 = (*piVar1 - this_00->field_00DF) - this_00->field_04B2;
            this_00->field_00E7 = uVar21;
            goto LAB_00544e8f;
          }
          local_14 = (cMf32 *)this_00->field_00EB;
          uVar22 = this_00->field_00E7;
          uVar21 = (*piVar1 - this_00->field_00DF) - this_00->field_04B2;
          uVar20 = (*piVar25 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00E7 = uVar21;
          this_00->field_00EB = uVar20;
          if ((uVar22 == uVar21) && (local_14 == (cMf32 *)uVar20)) {
            local_c = 0.0;
          }
        }
        else {
          FUN_006e1440(PTR_00807598);
          iVar9 = this_00->field_00C9;
          uVar21 = (this_00->field_00C5 - this_00->field_04B2) - this_00->field_00DF;
          this_00->field_00E7 = uVar21;
LAB_00544e8f:
          uVar20 = (iVar9 - this_00->field_04B6) - this_00->field_00E3;
          this_00->field_00EB = uVar20;
        }
        if (0x31 < local_1c - this_00->field_010F) {
          this_00->field_010F = local_1c;
          local_8 = (AnonShape_005449B0_F65ED625 *)0xffffffff;
        }
        if (local_c != 0.0) {
          FUN_006b2800((int)PTR_008075a8,this_00->field_010B,uVar21,uVar20);
        }
        if ((local_c != 0.0) || ((int)local_8 < 0)) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_010B,(uint)local_8,this_00->field_00DF,
                     this_00->field_00E3);
        }
        break;
      case CASE_2|CASE_1:
        uVar21 = this_00->field_010B;
        if (-1 < (int)uVar21) goto LAB_0054505c;
        goto LAB_0054506b;
      case 4:
        uVar21 = this_00->field_010B;
LAB_0054505c:
        FUN_006b3bb0((int *)PTR_008075a8,uVar21);
        this_00->field_010B = -1;
LAB_0054506b:
        this_00->field_00DE = CASE_0;
        break;
      case CASE_5:
        if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
          FUN_006e1c20(PTR_00807598,(float)(this_00->field_00C5 - this_00->field_04B2),
                       this_00->field_00C9 - this_00->field_04B6,this_00->field_0107,
                       (float *)&local_8,&local_c);
          lVar29 = Library::MSVCRT::__ftol();
          this_00->field_00FB = (int)lVar29;
          if ((int)lVar29 < 1) {
            this_00->field_00FB = 1;
          }
          lVar29 = Library::MSVCRT::__ftol();
          iVar9 = (int)(short)lVar29;
          lVar29 = Library::MSVCRT::__ftol();
          iVar18 = (int)(short)lVar29;
          lVar29 = Library::MSVCRT::__ftol();
          iVar23 = (int)(short)lVar29;
          lVar29 = Library::MSVCRT::__ftol();
          iVar9 = FUN_006db910((int)(short)lVar29,iVar23,iVar18,iVar9);
          this_00->field_00F7 = iVar9;
          FUN_006e8df0(PTR_00807598,this_00->field_010B,this_00->field_00FF,this_00->field_0103,
                       this_00->field_0107,iVar9,this_00->field_00FB,1);
        }
      }
      if ((this_00->field_04A6 != 0) && (this_00->field_04A2 != 0)) {
        thunk_FUN_0054a8d0(this_00);
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
  if (SVar6 < MESS_CURSORCLASSTY_A31D) {
    if (0xa312 < SVar6) {
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SaveTmp(g_sTAllPlayers_007FA174,SVar6 - MESS_CURSORCLASSTY_A313);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A124 < SVar6) {
      if (SVar6 < 0xa204) {
        if (0xa1fe < SVar6) {
          if (PTR_00802a38 == (STPlaySystemC *)0x0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          local_d = '\x03' - (char)message->id;
          thunk_FUN_0054edf0((undefined4 *)0x15,(undefined4 *)&local_d,0,0xffffffff);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        switch(SVar6) {
        case 0xa125:
          goto switchD_00546590_caseD_a125;
        case MESS_CURSORCLASSTY_A124|MESS_ID_CREATE:
          if (DAT_00808783 != '\x03') {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          thunk_FUN_0054b540(this_00);
          if (g_intercomPanel_0080169C == (IntercomPanelTy *)0x0) {
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
          thunk_FUN_0054b540(this_00);
          if (g_intercomPanel_0080169C == (IntercomPanelTy *)0x0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,2);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case MESS_CURSORCLASSTY_A100|MESS_TRACKBARCLASSTY_0028:
          if (g_cPanel_00801688 == (CPanelTy *)0x0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          thunk_FUN_004faff0((AnonShape_004FAFF0_0F922E35 *)g_cPanel_00801688);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa12f:
          this_00->field_00CD = 3;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa130:
          this_00->field_00CD = 4;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa131:
          this_00->field_00CD = 2;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case 0xa132:
          this_00->field_00CD = 1;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        case MESS_CURSORCLASSTY_A133:
          this_00->field_00CD = 0;
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
      }
      if (MESS_CURSORCLASSTY_A209 < SVar6) {
        switch(SVar6) {
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
          if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
            g_currentExceptionFrame = local_e0.previous;
            return 0;
          }
          thunk_FUN_004ab300(SVar6 - 0xa309);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
      }
      if (SVar6 != MESS_CURSORCLASSTY_A209) {
        if (SVar6 == MESS_CURSORCLASSTY_A206) {
          memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
          local_40[4] = 0x100;
          FUN_006e6000(this_00,3,0x100,local_40);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar6 == MESS_CURSORCLASSTY_A207) {
          memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
          local_40[4] = 0x101;
          FUN_006e6000(this_00,3,0x100,local_40);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar6 != MESS_CURSORCLASSTY_A208) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
        uVar11 = thunk_FUN_004ab050();
        switch(uVar11) {
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
      if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
      uVar11 = thunk_FUN_004ab050();
      switch(uVar11) {
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
    if (SVar6 == MESS_CURSORCLASSTY_A124) {
      thunk_FUN_0054b540(this_00);
      if (g_intercomPanel_0080169C == (IntercomPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A102 < SVar6) {
      switch(SVar6) {
      case 0xa103:
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OptPanelTy::Question(g_optPanel_008016DC,'\x04');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case 0xa104:
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
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
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_optPanel_008016DC->field_0000)(message);
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
        uVar21 = 0xffffffff;
        pcVar12 = &DAT_00807680;
        break;
      case 0xa122:
        thunk_FUN_0054b540(this_00);
        if (g_cPanel_00801688 == (CPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        CPanelTy::SwitchCPanel(g_cPanel_00801688);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      case MESS_CURSORCLASSTY_A123:
        if (g_cPanel_00801688 == (CPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        thunk_FUN_004fa3b0((AnonShape_004FA3B0_224BAE98 *)g_cPanel_00801688);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      do {
        pcVar13 = pcVar12;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 != '\0');
      uVar21 = ~uVar21;
      local_58 = &local_48;
      local_48 = 0;
      pcVar12 = pcVar13 + -uVar21;
      pcVar13 = (char *)&DAT_0080ee1a;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar21 = 0xffffffff;
      pcVar12 = PTR_s_SAVEGAME__0079ade4;
      do {
        pcVar13 = pcVar12;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 != '\0');
      uVar21 = ~uVar21;
      iVar9 = -1;
      pcVar12 = (char *)&DAT_0080ee1a;
      do {
        pcVar28 = pcVar12;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar28 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar28;
      } while (cVar2 != '\0');
      pcVar12 = pcVar13 + -uVar21;
      pcVar13 = pcVar28 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      local_14 = (cMf32 *)0x0;
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar21 = 0xffffffff;
      pcVar12 = (char *)&DAT_00807ddd;
      do {
        pcVar13 = pcVar12;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 != '\0');
      uVar21 = ~uVar21;
      iVar9 = -1;
      pcVar12 = (char *)&DAT_0080ee1a;
      do {
        pcVar28 = pcVar12;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar28 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar28;
      } while (cVar2 != '\0');
      pcVar12 = pcVar13 + -uVar21;
      pcVar13 = pcVar28 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_006b8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
      uVar21 = 0xffffffff;
      pcVar12 = PTR_s_SAVE_QUICKSAVE_0079ade8;
      do {
        pcVar13 = pcVar12;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar13 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar2 != '\0');
      uVar21 = ~uVar21;
      iVar9 = -1;
      pcVar12 = (char *)&DAT_0080ee1a;
      do {
        pcVar28 = pcVar12;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar28 = pcVar12 + 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar28;
      } while (cVar2 != '\0');
      pcVar12 = pcVar13 + -uVar21;
      pcVar13 = pcVar28 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      local_124.previous = g_currentExceptionFrame;
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      g_currentExceptionFrame = &local_124;
      iVar9 = Library::MSVCRT::__setjmp3(local_124.jumpBuffer,0);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_02 = extraout_ECX;
      this_01 = local_14;
      if (iVar9 == 0) {
        this_01 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080ee1a,0,0,0)
        ;
        local_14 = this_01;
        puVar17 = cMf32::RecGet(this_01,0x80,PTR_s_SAVE_DESC_0079adec,(int *)&local_58,0);
        this_02 = local_124.previous;
        if (puVar17 != (ushort *)0x0) {
          iVar9 = -0x77ffffea;
          if (DAT_00808783 == '\x01') {
            iVar9 = -0x77fffeea;
          }
          else if (DAT_00808783 == '\x02') {
            iVar9 = -0x77fffdea;
          }
          if (iVar9 == local_48) {
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
            this_02 = local_124.previous;
          }
        }
      }
      if (this_01 == (cMf32 *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      g_currentExceptionFrame = local_124.previous;
      cMf32::delete((cMf32 *)this_02,this_01);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar6 == MESS_CURSORCLASSTY_A102) {
      thunk_FUN_0054b540(this_00);
      if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,-1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_4203 < SVar6) {
      if (SVar6 == MESS_CURSORCLASSTY_A0FF) {
        message->id = MESS_STAPPC_7104;
        STAppC::GetMessage((STAppC *)&DAT_00807620,message);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (SVar6 != MESS_CURSORCLASSTY_A100) {
        if (SVar6 != MESS_CURSORCLASSTY_A101) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        thunk_FUN_0054b540(this_00);
        if (g_optPanel_008016DC == (OptPanelTy *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        OptPanelTy::SwitchOptPanel(g_optPanel_008016DC,'\x0f');
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = thunk_FUN_00544990((int)this_00);
      if (iVar9 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      local_54 = 1;
      if (PTR_0081163c == (AnonShape_00577690_10255A81 *)0x0) {
        local_4c = 1;
        puVar16 = &local_54;
        local_50 = (uint)(DAT_00808784 == 0);
      }
      else {
        local_4c = 1;
        puVar16 = &local_54;
        local_50 = (uint)(*(int *)&PTR_0081163c->field_0x42c == 0);
      }
      goto LAB_00547c2d;
    }
    if (SVar6 == MESS_CURSORCLASSTY_4203) {
      thunk_FUN_00544940((AnonShape_00544940_E504B2A8 *)this_00);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_4201 < SVar6) {
      if (SVar6 != MESS_CURSORCLASSTY_4202) {
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
      FUN_006b2800((int)PTR_008075a8,this_00->field_04D6,0,0);
      FUN_006b3af0((int *)PTR_008075a8,this_00->field_04D6);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar6 != MESS_CURSORCLASSTY_4201) {
      if (SVar6 == MESS_CURSORCLASSTY_0067) {
        if (DAT_0080734c == '\0') {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        iVar9 = thunk_FUN_00544990((int)this_00);
        if (iVar9 == 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (DAT_00808784 != 0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_008016E8 != (ProdPanelTy *)0x0) && (g_prodPanel_008016E8->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_0080167C != (ProdPanelTy *)0x0) && (g_prodPanel_0080167C->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_00801684 != (ProdPanelTy *)0x0) && (g_prodPanel_00801684->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_upgPanel_00802A48 != (UpgPanelTy *)0x0) &&
           (*(short *)&g_upgPanel_00802A48->field_0x172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_infocPanel_00801698 != (InfocPanelTy *)0x0) &&
           (g_infocPanel_00801698->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_tradePanel_00802A44 != (TradePanelTy *)0x0) &&
           (*(short *)&g_tradePanel_00802A44->field_0x172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_frmPanel_0080168C != (FrmPanelTy *)0x0) &&
           (*(short *)&g_frmPanel_0080168C->field_0x172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_behPanel_00801678 != (BehPanelTy *)0x0) && (g_behPanel_00801678->field_0172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_sAMPanel_008016EC != (SAMPanelTy *)0x0) &&
           (*(short *)&g_sAMPanel_008016EC->field_0x172 == 1)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_prodPanel_00801680 != (ProdPanelTy *)0x0) && (g_prodPanel_00801680->field_0172 == 1))
        {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (this_00->field_00D2 == '\0') {
          thunk_FUN_004ab070(g_opticClass_007FB2A0,CASE_3,0.0,0,1);
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        thunk_FUN_004ab070(g_opticClass_007FB2A0,CASE_1,0.0,0,1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (SVar6 != MESS_SHARED_0068) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_0080734c == '\0') {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = thunk_FUN_00544990((int)this_00);
      if (iVar9 == 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_008016E8 != (ProdPanelTy *)0x0) && (g_prodPanel_008016E8->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_0080167C != (ProdPanelTy *)0x0) && (g_prodPanel_0080167C->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_00801684 != (ProdPanelTy *)0x0) && (g_prodPanel_00801684->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_upgPanel_00802A48 != (UpgPanelTy *)0x0) &&
         (*(short *)&g_upgPanel_00802A48->field_0x172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_infocPanel_00801698 != (InfocPanelTy *)0x0) && (g_infocPanel_00801698->field_0172 == 1)
         ) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_tradePanel_00802A44 != (TradePanelTy *)0x0) &&
         (*(short *)&g_tradePanel_00802A44->field_0x172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_frmPanel_0080168C != (FrmPanelTy *)0x0) &&
         (*(short *)&g_frmPanel_0080168C->field_0x172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_behPanel_00801678 != (BehPanelTy *)0x0) && (g_behPanel_00801678->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_sAMPanel_008016EC != (SAMPanelTy *)0x0) &&
         (*(short *)&g_sAMPanel_008016EC->field_0x172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_prodPanel_00801680 != (ProdPanelTy *)0x0) && (g_prodPanel_00801680->field_0172 == 1)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_00D2 == '\0') {
        thunk_FUN_004ab070(g_opticClass_007FB2A0,CASE_4,0.0,0,1);
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004ab070(g_opticClass_007FB2A0,CASE_2,0.0,0,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    local_c = 1.4013e-45;
    if (DAT_00807322 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    UVar15 = (message->arg1).u32;
    if (UVar15 == this_00->field_04DA) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (UVar15 == 0) {
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
    this_00->field_04DA = UVar15;
    uVar4 = (message->arg0).words.high;
    if (uVar4 == 1) {
      pAVar7 = (message->arg1).ptr;
      local_8 = pAVar7;
      switch(*(undefined1 *)pAVar7) {
      case 1:
        if (pAVar7->field_0009 < 0) {
          if ((&stack0x00000000 != (undefined1 *)0x524) &&
             (pcVar12 = LoadResourceString(pAVar7->field_0001,HINSTANCE_00807618),
             pcVar12 != (char *)0x0)) {
            UVar15 = local_8->field_0001;
LAB_005458df:
            pcVar12 = LoadResourceString(UVar15,HINSTANCE_00807618);
            uVar21 = 0xffffffff;
            do {
              pcVar13 = pcVar12;
              if (uVar21 == 0) break;
              uVar21 = uVar21 - 1;
              pcVar13 = pcVar12 + 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar2 != '\0');
            uVar21 = ~uVar21;
            puVar14 = (uint *)(pcVar13 + -uVar21);
            puVar26 = local_524;
            for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
              *puVar26 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar26 = puVar26 + 1;
            }
            for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
              *(char *)puVar26 = (char)*puVar14;
              puVar14 = (uint *)((int)puVar14 + 1);
              puVar26 = (uint *)((int)puVar26 + 1);
            }
          }
        }
        else {
          thunk_FUN_0052a970(*(uint *)(&DAT_00807e66 + pAVar7->field_0009 * 4),1);
          LoadResourceString(pAVar7->field_0001,HINSTANCE_00807618);
          wsprintfA((LPSTR)local_524,"&%d%s\n&%d%s");
        }
        break;
      case 2:
        if (pAVar7->field_0001 == 0) goto switchD_00545816_default;
        if ((&stack0x00000000 != (undefined1 *)0x524) &&
           (pcVar12 = LoadResourceString(pAVar7->field_0001,HINSTANCE_00807618),
           pcVar12 != (char *)0x0)) {
          UVar15 = local_8->field_0001;
          goto LAB_005458df;
        }
        break;
      case 3:
        if (pAVar7->field_0005 == 0) {
          pcVar12 = LoadResourceString(0x36b3,HINSTANCE_00807618);
          pcVar13 = LoadResourceString(pAVar7->field_0001,HINSTANCE_00807618);
          pcVar27 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,"&%d%s\n%s",(uint)(message->arg0).words.low,pcVar13,
                    pcVar12);
        }
        else {
          LoadResourceString(0x36b3,HINSTANCE_00807618);
          LoadResourceString(pAVar7->field_0005,HINSTANCE_00807618);
          LoadResourceString(pAVar7->field_0001,HINSTANCE_00807618);
          pcVar27 = wsprintfA_exref;
          wsprintfA((LPSTR)local_524,"&%d%s\n%s\n%s");
        }
        if (*(short *)&pAVar7->field_0xd != 0) {
          (*pcVar27)(local_524,"%s &%d%d",local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 5,*(short *)&pAVar7->field_0xd
                    );
        }
        sVar5 = (short)pAVar7->field_0009;
        if (sVar5 != 0) {
          (*pcVar27)(local_524,"%s &%d%d",local_524,2,sVar5);
        }
        sVar5 = *(short *)((int)&pAVar7->field_0009 + 2);
        if (sVar5 != 0) {
          (*pcVar27)(local_524,"%s &%d%d",local_524,
                     (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 6,sVar5);
        }
        if (0 < *(short *)&pAVar7->field_0xf) {
          LoadResourceString(0x273a,HINSTANCE_00807618);
          (*pcVar27)();
        }
        break;
      case 4:
        pcVar12 = LoadResourceString(pAVar7->field_0001,HINSTANCE_00807618);
        uVar21 = 0xffffffff;
        do {
          pcVar13 = pcVar12;
          if (uVar21 == 0) break;
          uVar21 = uVar21 - 1;
          pcVar13 = pcVar12 + 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar2 != '\0');
        uVar21 = ~uVar21;
        pcVar12 = pcVar13 + -uVar21;
        pcVar13 = (char *)&DAT_0080f33a;
        for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
        for (puVar14 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar14 != (uint *)0x0;
            puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
          *(undefined1 *)puVar14 = 0x20;
        }
        wsprintfA((LPSTR)local_524,"&%d%s",(uint)(message->arg0).words.low,&DAT_0080f33a);
        if (local_8->field_0005 != 0) {
          pcVar12 = LoadResourceString(local_8->field_0005,HINSTANCE_00807618);
          uVar21 = 0xffffffff;
          do {
            pcVar13 = pcVar12;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar12 + 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar13;
          } while (cVar2 != '\0');
          uVar21 = ~uVar21;
          pcVar12 = pcVar13 + -uVar21;
          pcVar13 = (char *)&DAT_0080f33a;
          for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          for (puVar14 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar14 != (uint *)0x0;
              puVar14 = Library::MSVCRT::FUN_0072e560(puVar14,'\n')) {
            *(undefined1 *)puVar14 = 0x20;
          }
          wsprintfA((LPSTR)local_524,"%s\n%s",local_524,&DAT_0080f33a);
        }
        piVar25 = &local_8->field_0009;
        if (local_8->field_0009 != 0) {
          pcVar12 = LoadResourceString(0x36c2,HINSTANCE_00807618);
          wsprintfA((LPSTR)local_524,"%s\n%s",local_524,pcVar12);
          iVar9 = 5;
          do {
            if (*piVar25 != ~(CASE_80|CASE_7F)) {
              module = HINSTANCE_00807618;
              UVar15 = thunk_FUN_00528060((Global_sub_00528060_param_1Enum)*piVar25,
                                          (char)((uint)*piVar25 >> 0x10));
              pcVar12 = LoadResourceString(UVar15,module);
              wsprintfA((LPSTR)local_524,"%s\n&%d%s",local_524,
                        (*(Global_sub_00528060_param_1Enum *)((int)piVar25 + 5) !=
                        ~(CASE_80|CASE_7F)) + 1,pcVar12);
            }
            piVar25 = (int *)((int)piVar25 + 6);
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        break;
      default:
switchD_00545816_default:
        local_c = 0.0;
      }
    }
    else if ((uVar4 < 2) || (3 < uVar4)) {
      local_c = 0.0;
    }
    else if ((&stack0x00000000 != (undefined1 *)0x524) &&
            (pcVar12 = LoadResourceString(UVar15,HINSTANCE_00807618), pcVar12 != (char *)0x0)) {
      UVar15 = this_00->field_04DA;
      goto LAB_005458df;
    }
    if (local_c == 0.0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((message->arg0).words.high == 3) {
      if ((PTR_0081176c == (StartSystemTy *)0x0) || (PTR_0081176c->field_0038 == (ccFntTy *)0x0))
      goto cf_common_exit_00545FF6;
      iVar9 = FUN_00711370(PTR_0081176c->field_0038,local_524);
      this_00->field_04CA = iVar9 + 0xc;
      iVar9 = FUN_007113e0(PTR_0081176c->field_0038,local_524);
      iVar9 = iVar9 + 10;
      this_00->field_04CE = iVar9;
      if ((800 < this_00->field_04CA) || (0x96 < iVar9)) goto cf_common_exit_00545FF6;
      this_00->field_04C2 = this_00->field_00C5 + this_00->field_00B1;
      iVar23 = this_00->field_00C9 + this_00->field_00B5;
      this_00->field_04C6 = iVar23;
      iVar18 = (g_nWidth_00806730 - this_00->field_04CA) + -0x28;
      if (iVar18 < this_00->field_04C2) {
        this_00->field_04C2 = iVar18;
      }
      if (this_00->field_04C2 < 0) {
        this_00->field_04C2 = 0;
      }
      iVar9 = (DAT_00806734 - iVar9) + -0x14;
      if (iVar9 < iVar23) {
        this_00->field_04C6 = iVar9;
      }
      if (this_00->field_04C6 < 0) {
        this_00->field_04C6 = 0;
      }
      puVar17 = this_00->field_04D2;
      uVar21 = *(uint *)(puVar17 + 10);
      if (uVar21 == 0) {
        uVar21 = ((uint)puVar17[7] * *(int *)(puVar17 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar17 + 4);
      }
      puVar16 = (undefined4 *)FUN_006b4fa0((int)puVar17);
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *puVar16 = 0x22222222;
        puVar16 = puVar16 + 1;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined1 *)puVar16 = 0x22;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      ccFntTy::SetSurf(PTR_0081176c->field_0038,(int)this_00->field_04D2,0,5,5,
                       this_00->field_04CA + -10,this_00->field_04CE + -10);
      ccFntTy::WrTxt(PTR_0081176c->field_0038,local_524,-2,-1,(uint)(message->arg0).words.low,-1,-1)
      ;
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,0,0,this_00->field_04CA,
                   this_00->field_04CE,0x18,0xd);
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,1,1,this_00->field_04CA + -2
                   ,this_00->field_04CE + -2,0x1d,0xd);
      bVar32 = 0x18;
    }
    else {
      if ((PTR_00802a28 == (ccFntTy *)0x0) || (*(void **)&PTR_00802a28->field_0x28 == (void *)0x0))
      goto cf_common_exit_00545FF6;
      iVar9 = FUN_00711370(*(void **)&PTR_00802a28->field_0x28,local_524);
      this_00->field_04CA = iVar9 + 0xc;
      iVar9 = FUN_007113e0(*(void **)&PTR_00802a28->field_0x28,local_524);
      iVar9 = iVar9 + 10;
      this_00->field_04CE = iVar9;
      if ((800 < this_00->field_04CA) || (0x96 < iVar9)) goto cf_common_exit_00545FF6;
      this_00->field_04C2 = this_00->field_00C5 + this_00->field_00B1;
      iVar23 = this_00->field_00C9 + this_00->field_00B5;
      this_00->field_04C6 = iVar23;
      iVar18 = (g_nWidth_00806730 - this_00->field_04CA) + -0x28;
      if (iVar18 < this_00->field_04C2) {
        this_00->field_04C2 = iVar18;
      }
      if (this_00->field_04C2 < 0) {
        this_00->field_04C2 = 0;
      }
      iVar9 = (DAT_00806734 - iVar9) + -0x14;
      if (iVar9 < iVar23) {
        this_00->field_04C6 = iVar9;
      }
      if (this_00->field_04C6 < 0) {
        this_00->field_04C6 = 0;
      }
      puVar17 = this_00->field_04D2;
      uVar21 = *(uint *)(puVar17 + 10);
      if (uVar21 == 0) {
        uVar21 = ((uint)puVar17[7] * *(int *)(puVar17 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar17 + 4);
      }
      puVar16 = (undefined4 *)FUN_006b4fa0((int)puVar17);
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *puVar16 = 0x3a3a3a3a;
        puVar16 = puVar16 + 1;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *(undefined1 *)puVar16 = 0x3a;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      ccFntTy::SetSurf(*(ccFntTy **)&PTR_00802a28->field_0x28,(int)this_00->field_04D2,0,5,5,
                       this_00->field_04CA + -10,this_00->field_04CE + -10);
      ccFntTy::WrTxt(*(ccFntTy **)&PTR_00802a28->field_0x28,local_524,-2,-1,
                     (uint)(message->arg0).words.low,-1,-1);
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,0,0,this_00->field_04CA,
                   this_00->field_04CE,0x6f,0xd);
      FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,1,1,this_00->field_04CA + -2
                   ,this_00->field_04CE + -2,0xb3,0xd);
      bVar32 = 0x6f;
    }
    FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)this_00->field_04D2,0,3,3,this_00->field_04CA + -6,
                 this_00->field_04CE + -6,bVar32,0xd);
cf_common_exit_00545FF6:
    if (800 < this_00->field_04CA) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0x96 < this_00->field_04CE) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    FUN_006b2800((int)PTR_008075a8,this_00->field_04D6,this_00->field_04CA,this_00->field_04CE);
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,this_00->field_04D6,0xffffffff,this_00->field_04C2,
               this_00->field_04C6);
    Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,this_00->field_04D6);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (MESS_CURSORCLASSTY_A50C < SVar6) {
    if (MESS_CURSORCLASSTY_A708 < SVar6) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (0xa6fe < SVar6) {
      local_60 = SVar6 - MESS_CURSORCLASSTY_A6FF;
      puVar16 = &local_64;
      local_5c = 0;
      local_64 = 9;
LAB_00547c2d:
      thunk_FUN_0054edf0((undefined4 *)0x5,puVar16,1,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    uVar24 = (undefined3)((uint)this_00 >> 8);
    uVar19 = (undefined2)(SVar6 + ~MESS_CURSORCLASSTY_A50C >> 0x10);
    switch(SVar6 + ~MESS_CURSORCLASSTY_A50C) {
    case MESS_ID_NONE:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
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
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = 0;
      break;
    case 1:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar9 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar23 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar23 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar23) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A != (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::PointPick
                (g_sTAllPlayers_007FA174,(uint *)CONCAT31((int3)((uint)iVar18 >> 8),DAT_0080874d),
                 iVar9 - iVar18,iVar23 - iVar10,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_ID_CREATE:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
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
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = 0;
      break;
    case MESS_SHARED_0003:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar9 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar23 = this_00->field_04B6;
      if (iVar18 < iVar23) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar23 <= iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::PointPick
                (g_sTAllPlayers_007FA174,(uint *)CONCAT31(uVar24,DAT_0080874d),iVar9 - (int)local_8,
                 iVar18 - iVar23,0);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 4:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar9 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar23 = this_00->field_04B6;
      if (iVar18 < iVar23) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar23 <= iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      STAllPlayersC::PointPick
                (g_sTAllPlayers_007FA174,(uint *)CONCAT31(uVar24,DAT_0080874d),iVar9 - (int)local_8,
                 iVar18 - iVar23,1);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0005:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar9 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar23 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar23 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar23) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_7,iVar9 - iVar18,iVar23 - iVar10);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 6:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = this_00->field_00C5;
      iVar18 = this_00->field_04B2;
      if (iVar9 < iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BA + iVar18 <= iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar23 = this_00->field_00C9;
      iVar10 = this_00->field_04B6;
      if (iVar23 < iVar10) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar10 <= iVar23) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 != (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_6,iVar9 - iVar18,iVar23 - iVar10);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 7:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
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
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 == (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = 0;
      break;
    case MESS_SHARED_0008:
      GCGameState(this_00,1);
      if (DAT_00808784 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
         (g_helpPanel_00801690->field_0172 != 2)) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar9 = this_00->field_00C5;
      local_8 = (AnonShape_005449B0_F65ED625 *)this_00->field_04B2;
      if (iVar9 < (int)local_8) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((int)(&local_8->field_0x0 + this_00->field_04BA) <= iVar9) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      iVar18 = this_00->field_00C9;
      iVar23 = this_00->field_04B6;
      if (iVar18 < iVar23) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04BE + iVar23 <= iVar18) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_04A2 != 0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if ((this_00->field_00DE != CASE_0) && (this_00->field_00DE != (CASE_2|CASE_1))) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A == (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      if (this_00->field_049A->field_0024 == (uint)DAT_0080874d) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::PointPick
                (g_sTAllPlayers_007FA174,(uint *)(uint)DAT_0080874d,iVar9 - (int)local_8,
                 iVar18 - iVar23,0);
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
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004fad60(g_cPanel_00801688,CONCAT22(uVar19,(short)this_00->field_00C5),
                         (uint)(ushort)this_00->field_00C9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xb:
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_004fae70((int)g_cPanel_00801688);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xc:
      if (g_cPanel_00801688 == (CPanelTy *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_004fae90(g_cPanel_00801688,CONCAT22(uVar19,(short)this_00->field_00C5),
                         (uint)(ushort)this_00->field_00C9);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_SHARED_0008|MESS_SHARED_0005:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_4,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    goto LAB_005470b2;
  }
  if (SVar6 == MESS_CURSORCLASSTY_A50C) {
    if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_5,0xffffffff,0xffffffff);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (MESS_CURSORCLASSTY_A504 < SVar6) {
    switch(SVar6) {
    case 0xa505:
    case MESS_CURSORCLASSTY_A507:
      goto switchD_00546ac9_caseD_a505;
    case MESS_CURSORCLASSTY_A504|MESS_ID_CREATE:
      goto switchD_00546ac9_caseD_a506;
    case MESS_CURSORCLASSTY_A500|MESS_SHARED_0008:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_0,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_CURSORCLASSTY_A500|MESS_CURSORCLASSTY_0009:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_2,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case MESS_CURSORCLASSTY_A500|MESS_SYSTEMCLASSTY_000A:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_1,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    case 0xa50b:
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::SelectObjects(g_sTAllPlayers_007FA174,CASE_3,0xffffffff,0xffffffff);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    default:
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
  }
  if (SVar6 == MESS_CURSORCLASSTY_A504) {
switchD_00546ac9_caseD_a506:
    GCGameState(this_00,1);
    if (DAT_00808784 != 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
       (g_helpPanel_00801690->field_0172 != 2)) {
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
      if (this_00->field_049A != (STFishC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_00DE = CASE_1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar9 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar9;
      FUN_006e1c20(PTR_00807598,(float)this_00->field_00DF,iVar9,0.0,(float *)&this_00->field_00EF,
                   (float *)&this_00->field_00F3);
      this_00->field_010F = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    iVar9 = thunk_FUN_00548b90((int)this_00);
    if (iVar9 != 0) {
      this_00->field_00DE = CASE_1;
      this_00->field_00DF = this_00->field_00C5 - this_00->field_04B2;
      iVar9 = this_00->field_00C9 - this_00->field_04B6;
      this_00->field_00E3 = iVar9;
      FUN_006e1c20(PTR_00807598,(float)this_00->field_00DF,iVar9,0.0,(float *)&this_00->field_00EF,
                   (float *)&this_00->field_00F3);
      this_00->field_010F = local_1c;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (this_00->field_04A2 != 0x4e) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (PTR_00807598 == (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    iVar9 = FUN_006e1dd0(PTR_00807598,this_00->field_00C5 - this_00->field_04B2,
                         this_00->field_00C9 - this_00->field_04B6,&this_00->field_00FF,
                         &this_00->field_0103,&this_00->field_0107);
    if (iVar9 == 0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    piVar25 = &this_00->field_010B;
    this_00->field_00DE = CASE_5;
    if ((-1 < this_00->field_010B) && (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0)) {
      FUN_006e8ba0(PTR_00807598,this_00->field_010B);
    }
    FUN_006e89b0(PTR_00807598,piVar25,&DAT_007c7cd8,8,2,0x45,this_00->field_00FF,this_00->field_0103
                 ,this_00->field_0107,0,1,1);
    FUN_006eaaa0(PTR_00807598,*piVar25,0);
    FUN_006ea460(PTR_00807598,*piVar25,-1);
    if (this_00->field_00A9 != 0) {
      if (this_00->field_001C == (cLoadingTy *)0xffffffff) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      FUN_006b3af0((int *)this_00->field_0060,(uint)this_00->field_001C);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    Library::DKW::DDX::FUN_006b8b10((int *)this_00->field_00AD);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar6 < MESS_CURSORCLASSTY_A501) {
    if (SVar6 == MESS_CURSORCLASSTY_A500) {
      this_00->field_04AE = 0;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (MESS_CURSORCLASSTY_A330 < SVar6) {
      if (SVar6 != MESS_CURSORCLASSTY_A4FF) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      this_00->field_04AE = 1;
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar6 == MESS_CURSORCLASSTY_A330) {
      if (PTR_00802a38 == (STPlaySystemC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      thunk_FUN_00550bb0((int)PTR_00802a38);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar6 < MESS_CURSORCLASSTY_A31D) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar6 < 0xa327) {
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_e0.previous;
        return 0;
      }
      STAllPlayersC::RestoreTmp(g_sTAllPlayers_007FA174,SVar6 - MESS_CURSORCLASSTY_A31D);
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (SVar6 != MESS_CURSORCLASSTY_A32F) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    if (g_popUp_008016D8 == (PopUpTy *)0x0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    PopUpTy::Clear(g_popUp_008016D8);
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar6 == MESS_CURSORCLASSTY_A501) goto switchD_00546ac9_caseD_a506;
  if (SVar6 != MESS_CURSORCLASSTY_A502) {
    if (SVar6 != MESS_CURSORCLASSTY_A503) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    this_00->field_04A6 = 1;
    this_00->field_04DE = 0;
    if (g_cPanel_00801688 == (CPanelTy *)0x0) {
      g_currentExceptionFrame = local_e0.previous;
      return 0;
    }
    thunk_FUN_004fad20(g_cPanel_00801688);
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
        this_00->field_00DE = CASE_2|CASE_1;
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
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
           (g_helpPanel_00801690->field_0172 != 2)) {
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
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if ((g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) &&
           (g_helpPanel_00801690->field_0172 != 2)) {
          g_currentExceptionFrame = local_e0.previous;
          return 0;
        }
        if (SVar6 != MESS_CURSORCLASSTY_A502) {
          if (this_00->field_04A2 == 0) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            STAllPlayersC::FramePick
                      (g_sTAllPlayers_007FA174,
                       CONCAT31((int3)((uint)this_00->field_00E7 >> 8),DAT_0080874d),
                       this_00->field_00DF,this_00->field_00E3,this_00->field_00E7,
                       this_00->field_00EB,(uint)(SVar6 == MESS_CURSORCLASSTY_A507));
          }
          this_00->field_00DE = 4;
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
    this_00->field_00DE = CASE_2|CASE_1;
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (CVar3 == CASE_2) {
LAB_00546f1c:
    this_00->field_00DE = 4;
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (CVar3 != CASE_5) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (SVar6 != MESS_CURSORCLASSTY_A502) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (this_00->field_00A9 == 0) {
    Library::DKW::DDX::FUN_006b8a60((byte *)this_00->field_00AD);
  }
  else if (this_00->field_001C != (cLoadingTy *)0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_0060,(uint)this_00->field_001C,0xfffffffe,this_00->field_0034,
               this_00->field_0038);
  }
  DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
    uVar21 = this_00->field_010B;
LAB_0054708b:
    FUN_006e8ba0(PTR_00807598,uVar21);
  }
LAB_00547090:
  this_00->field_00DE = CASE_0;
  this_00->field_010B = -1;
  if (this_00->field_04A2 != 0x4e) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  iVar9 = 1;
LAB_005470b2:
  TakeCmdToRun(this_00,iVar9);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
switchD_00546e07_caseD_5:
  if (SVar6 != MESS_CURSORCLASSTY_A502) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  if (this_00->field_00A9 == 0) {
    Library::DKW::DDX::FUN_006b8a60((byte *)this_00->field_00AD);
  }
  else if (this_00->field_001C != (cLoadingTy *)0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)this_00->field_0060,(uint)this_00->field_001C,0xfffffffe,this_00->field_0034,
               this_00->field_0038);
  }
  DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
  if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
    uVar21 = this_00->field_010B;
    goto LAB_0054708b;
  }
  goto LAB_00547090;
switchD_005468af_caseD_a2ff:
  if (g_opticClass_007FB2A0 == (OpticClassC *)0x0) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  thunk_FUN_004ab270(SVar6 - 0xa2ff);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
switchD_00546590_caseD_a125:
  if (DAT_00808783 != '\x03') {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  thunk_FUN_0054b540(this_00);
  if (g_intercomPanel_0080169C == (IntercomPanelTy *)0x0) {
    g_currentExceptionFrame = local_e0.previous;
    return 0;
  }
  IntercomPanelTy::SwitchIntercomPanel(g_intercomPanel_0080169C,1);
  g_currentExceptionFrame = local_e0.previous;
  return 0;
}

