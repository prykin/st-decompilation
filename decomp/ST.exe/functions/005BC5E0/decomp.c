#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401CC6|005BC5E0; family_names=PrividerTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:10,18:5,1c:0} */

int __thiscall PrividerTy::GetMessage(PrividerTy *this,STMessage *message)

{
  byte *puVar1;
  ushort uVar2;
  STMessageId SVar3;
  StartSystemTy *pSVar4;
  DWORD DVar5;
  STMessageArg SVar6;
  CursorClassTy *pCVar8;
  PrividerTy *this_00;
  byte uVar9;
  DWORD DVar9_mg0;
  int local_EAX_61;
  int iVar11_mg5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar11_mg2;
  int iVar11_mg3;
  HoloTy *pHVar10;
  uint uVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar11_mgC;
  uint uVar11;
  int iVar11_mgD;
  int iVar11_mgA;
  int iVar10;
  int iVar13;
  int iVar12;
  MMsgTy *pMVar13;
  int iVar15;
  byte bVar16;
  char cVar17;
  uint uVar19;
  InternalExceptionFrame local_8c;
  undefined4 local_48;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  PrividerTy *local_c;
  uint local_8;

  local_c = this;
  DVar9_mg0 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar9_mg0;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_EAX_61 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_61 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x34c,0,local_EAX_61,
                                "%s","PrividerTy::GetMessage");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_61,0,"E:\\__titans\\Start\\prov_obj.cpp",0x34c);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,message);
  SVar3 = message->id;
  if (SVar3 < MESS_FSGSTY_6941) {
    if (SVar3 == MESS_SHARED_6940) {
      thunk_FUN_005bba40((AnonShape_005BB9F0_E38C41BB *)this_00);
      goto cf_common_exit_005BCF7F;
    }
    if (SVar3 < MESS_SHARED_6120) {
      if (SVar3 != MESS_SHARED_611F) {
        if (SVar3 < 6) {
          if (SVar3 == MESS_SHARED_0005) {
            /* ST_CALLSITE[005BC6AB]: CALL 0x00405e52; direct=00405E52 PrividerTy::PaintPrivider */
            PaintPrivider(this_00,'\0');
          }
          else if (SVar3 == MESS_ID_NONE) {
            /* ST_CALLSITE[005BC69E]: CALL 0x0040429b; direct=0040429B PrividerTy::NonePrivider */
            NonePrivider(this_00);
          }
          else if (SVar3 == MESS_ID_CREATE) {
            /* ST_CALLSITE[005BC692]: CALL 0x00403b8e; direct=00403B8E PrividerTy::InitPrivider */
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            InitPrivider(this_00,*(char *)((message->arg0).u32 + 0x14),
                         *(char *)((message->arg0).u32 + 0x18));
          }
          else if (SVar3 == MESS_SHARED_0003) {
            /* ST_CALLSITE[005BC67B]: CALL 0x004022f7; direct=004022F7 PrividerTy::DonePrivider */
            DonePrivider(this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
        if (SVar3 != MESS_SHARED_6109) {
          if (SVar3 == MESS_SHARED_610A) {
            this_00->field_0045 = 0x200;
            this_00->field_0049 = 0;
            this_00->field_004D = 0x610a;
            thunk_FUN_005b66e0((MTaskTy *)this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
      }
    }
    else {
      if (MESS_SHARED_6501 < SVar3) {
        if (SVar3 != MESS_PRIVIDERTY_6502) {
          if (SVar3 == MESS_PRIVIDERTY_693F) {
            /* ST_CALLSITE[005BC8F8]: CALL 0x0040585d; direct=0040585D PrividerTy::sub_005BB9F0 */
            sub_005BB9F0(this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
        /* ST_CALLSITE[005BC90F]: CALL 0x00404fca; direct=00404FCA StartSystemTy::sub_005DA940 */
        uVar9 = StartSystemTy::sub_005DA940
                          (g_startSystem_0081176C,this_00->array_00BC[0xc].field_01E1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar9) == 0) {
          iVar12 = this_00->array_00BC[0xc].field_01E1;
          this_00->array_00BC[0xc].field_01F1 = uVar9;
          iVar11_mg2 = thunk_FUN_005da980(iVar12);
          if ((iVar11_mg2 == 0) && (iVar11_mg3 = thunk_FUN_005daa90(), iVar11_mg3 == 0)) {
            DAT_0080877e = 0;
            /* ST_CALLSITE[005BC957]: CALL 0x00404c8c; direct=00404C8C PrividerTy::CloseButtons */
            CloseButtons(this_00,'\0');
            pSVar4 = this_00->array_00BC[0xc].field_01DB;
            if (pSVar4->field_02E6 != nullptr) {
              local_18 = 0x1000000;
              local_14 = 0;
              local_10 = 0;
              local_1c = 0x10101;
              MMsgTy::thunk_FUN_005b8f40(pSVar4->field_02E6,&local_1c);
            }
            this_00->field_0065 = CASE_5;
            this_00->array_00BC[0xc].field_01E0 = 1;
          }
          goto cf_common_exit_005BCF7F;
        }
LAB_005bccb9:
        this_00->field_004D = 0x6951;
        /* ST_CALLSITE[005BCCC8]: CALL dword ptr [EDX] */
        this_00->GetMessage((STMessage *)&this_00->field_0x3d);
        goto cf_common_exit_005BCF7F;
      }
      if (SVar3 == MESS_SHARED_6501) goto switchD_005bc9da_caseD_6949;
      if (SVar3 != MESS_SHARED_6121) {
        if (SVar3 == MESS_PRIVIDERTY_631F) {
          FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1C8E,0,3,0x16,0x22c,0x16,0xff
                      );
          ccFntTy::SetSurf((ccFntTy *)g_startSystem_0081176C->field_0030,(int)this_00->field_1C8E,0,
                           5,0x16,0x226,0x16);
          ccFntTy::WrStr((ccFntTy *)g_startSystem_0081176C->field_0030,*(char **)(message->arg0).ptr
                         ,0,-1,3);
          uVar2 = (message->arg1).words.low;
          if ((uVar2 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
            uVar19 = (uint)(message->arg1).words.high;
            iVar12 = uVar2 + 5;
            FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1C8E,0,iVar12,uVar19 + 0x19,
                         iVar12,uVar19 + 0x28,9,0xd);
          }
          FUN_006b35d0((int *)g_ddxContext_008075A8,this_00->field_1C8A);
        }
        else if (SVar3 == MESS_SHARED_64FF) {
          this_00->array_00BC[0xc].field_01F1 = 0;
          iVar11_mg5 = thunk_FUN_005daa90();
          if (iVar11_mg5 == 0) {
            this_00->field_0031 = 0;
            uVar11 = this_00->array_00BC[0xc].field_01F3;
            puVar1 = &this_00->field_0x1d;
            this_00->field_002D = 0x20;
            FUN_006e6080(this_00,2,uVar11,(undefined4 *)puVar1);
            this_00->field_002D = 0x28;
            uVar19 = *(uint *)(g_startSystem_0081176C->field_068E + 4);
            uVar11 = this_00->array_00BC[0xc].field_01F3;
            this_00->field_0031 = uVar19 & ((int)uVar19 < 0) - 1;
            FUN_006e6080(this_00,2,uVar11,(undefined4 *)puVar1);
            if (0 < *(int *)(g_startSystem_0081176C->field_068E + 4)) {
              uVar11 = this_00->array_00BC[0xc].field_01F3;
              this_00->field_002D = 0x20;
              this_00->field_0031 = 1;
              FUN_006e6080(this_00,2,uVar11,(undefined4 *)puVar1);
            }
            pSVar4 = this_00->array_00BC[0xc].field_01DB;
            if (pSVar4->field_02E6 != nullptr) {
              memset(&local_48, 0, 0x1a); /* compiler bulk-zero initialization */
              STPiece<2,2>(local_48) = ((*(int *)(g_startSystem_0081176C->field_068E + 4) < 1) - 1 & 2) - 1;
              /* ST_CALLSITE[005BC7FD]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
              MMsgTy::StatePanel(pSVar4->field_02E6,(int)&local_48);
            }
          }
        }
        goto cf_common_exit_005BCF7F;
      }
    }
    /* ST_CALLSITE[005BC8B7]: CALL 0x00405510; direct=00405510 StartSystemTy::InitChat */
    StartSystemTy::InitChat(this_00->array_00BC[0xc].field_01DB);
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = message->id;
    this_00->field_0051 = message->arg0;
    this_00->field_0055 = message->arg1;
    thunk_FUN_005b66e0((MTaskTy *)this_00);
    goto cf_common_exit_005BCF7F;
  }
  if (MESS_SHARED_8160 < SVar3) {
    switch(SVar3) {
    case MESS_SIDTY_8161:
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_1C82,0,0,
                   (uint)(message->arg1).words.high,
                   ((RecoveredSourceFamily_dibcopy *)this_00->field_1C82)->field_0004,0x13,0);
      ccFntTy::SetSurf((ccFntTy *)g_startSystem_0081176C->field_0030,(int)this_00->field_1C82,0,4,
                       (uint)(message->arg1).words.high,*(int *)(this_00->field_1C82 + 2) + -4,0x13);
      if (this_00->array_00BC[0xc].field_01DF == '\0') {
        iVar12 = g_startSystem_0081176C->field_068A;
      }
      else {
        iVar12 = g_startSystem_0081176C->field_068E;
      }
      if (iVar12 != 0) {
        ccFntTy::WrStr((ccFntTy *)g_startSystem_0081176C->field_0030,
                       *(char **)(iVar12 + 8 + (uint)(message->arg0).words.low * 0x14),2,-1,
                       (-(uint)((message->arg0).words.high != 0) & 2) + 1);
      }
      uVar19 = (uint)(message->arg1).words.high;
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,this_00->field_1C2A[uVar19 / 0x13],0xfffffffe,0x7a,
                 uVar19 + 0x67);
      break;
    case MESS_SIDTY_8163:
      SVar6 = message->arg0;
      this_00->array_00BC[0xc].field_01F1 = 0;
      this_00->array_00BC[0xc].field_01E1 = SVar6;
      break;
    case MESS_OPTPANELTY_8164:
      /* ST_CALLSITE[005BCF29]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,
                 (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->array_00BC[0xc].field_01F7,
                 (int)message,0);
      break;
    case MESS_OPTPANELTY_8165:
      /* ST_CALLSITE[005BCF3B]: CALL 0x004031d4; direct=004031D4 MMMObjTy::PaintSlBut */
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B08,
                 (int)message,0);
      break;
    case MESS_SHARED_8166:
      uVar19 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      this_00->field_1BB9 = uVar19;
      if (this_00->field_1B9D != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1BE1,this_00->field_1B9D,this_00->field_1BA1,
                   this_00->field_1BB5,uVar19);
      }
    }
    goto cf_common_exit_005BCF7F;
  }
  if (SVar3 == MESS_SHARED_8160) {
    (message->arg1).u32 = 0x13;
    goto cf_common_exit_005BCF7F;
  }
  switch(SVar3) {
  case MESS_CHOOSEMAPTY_6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = message->arg0;
    thunk_FUN_005b66e0((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_6943:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x6942,(message->arg0).u32,0);
    /* ST_CALLSITE[005BC9FD]: CALL 0x00404c8c; direct=00404C8C PrividerTy::CloseButtons */
    CloseButtons(this_00,'\x01');
    pMVar13 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    goto cf_common_exit_005BCD75;
  case MESS_FSGSTY_6949:
switchD_005bc9da_caseD_6949:
    /* ST_CALLSITE[005BCCB0]: CALL 0x00404fca; direct=00404FCA StartSystemTy::sub_005DA940 */
    uVar9 = StartSystemTy::sub_005DA940(g_startSystem_0081176C,this_00->array_00BC[0xc].field_01E1);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var_00,uVar9) != 0) goto LAB_005bccb9;
    iVar11_mgC = thunk_FUN_005da980(this_00->array_00BC[0xc].field_01E1);
    if (iVar11_mgC != 0) break;
    if ((int)this_00->field_1C92->elementSize < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)this_00->field_1C92->growCapacity;
    }
    iVar11_mgD = thunk_FUN_005dab70(0,uVar11);
    if (iVar11_mgD != 0) {
      pMVar13 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
      if (pMVar13 != nullptr) {
        /* ST_CALLSITE[005BCD2D]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
        MMsgTy::SetMessage(pMVar13,0x2134,'\0',nullptr,nullptr,nullptr
                           ,0,0);
      }
      break;
    }
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x611f,(-(uint)(message->id != MESS_SHARED_6501) & 8) + 4,0x11);
    /* ST_CALLSITE[005BCD64]: CALL 0x00404c8c; direct=00404C8C PrividerTy::CloseButtons */
    CloseButtons(this_00,'\x01');
    pMVar13 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
    goto cf_common_exit_005BCD75;
  case 0x694e:
    iVar11_mgA = thunk_FUN_005dab70(this_00->array_00BC[0xc].field_01E1,&CHAR_00h_008016a0);
    if (iVar11_mgA == 0) {
      DVar5 = this_00->field_0061;
      this_00->array_00BC[0xc].field_01F1 = 1;
      this_00->array_00BC[0xc].field_01E9 = DVar5;
      this_00->array_00BC[0xc].field_01ED = 0;
      pCVar8 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 != nullptr) {
        iVar12 = g_cursorClass_00802A30->field_00C9;
        iVar15 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_5;
        pCVar8->field_0494 = 0xffff;
        /* ST_CALLSITE[005BCDF2]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        CursorClassTy::SetGCType(pCVar8,CASE_0,iVar15,iVar12);
        /* ST_CALLSITE[005BCE07]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        CursorClassTy::DrawSprite(pCVar8,pCVar8->field_00C5,pCVar8->field_00C9);
        pCVar8->field_00D2 = 0;
        pCVar8->field_04DF = -1;
      }
    }
    break;
  case MESS_SHARED_6951:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    /* ST_CALLSITE[005BCA4F]: CALL 0x00404c8c; direct=00404C8C PrividerTy::CloseButtons */
    CloseButtons(this_00,'\x01');
    pMVar13 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
cf_common_exit_005BCD75:
    if (pMVar13 != nullptr) {
      /* ST_CALLSITE[005BCD82]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
      MMsgTy::HidePanel(pMVar13,1,0,1);
    }
    break;
  case MESS_PRIVIDERTY_6952:
    this_00->array_00BC[0xc].field_01F1 = 0;
    pCVar8 = g_cursorClass_00802A30;
    DAT_0080877e = 1;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar12 = g_cursorClass_00802A30->field_00C9;
      iVar15 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar8->field_0494 = 0xffff;
      /* ST_CALLSITE[005BCAA5]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(pCVar8,CASE_0,iVar15,iVar12);
      /* ST_CALLSITE[005BCABA]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(pCVar8,pCVar8->field_00C5,pCVar8->field_00C9);
      pCVar8->field_00D2 = 0;
      pCVar8->field_04DF = -1;
    }
    if (this_00->array_00BC[0xc].field_01DF == '\0') {
      thunk_FUN_005b6350(this_00,0x6942,(message->arg0).u32,0);
      /* ST_CALLSITE[005BCAF4]: CALL 0x00404c8c; direct=00404C8C PrividerTy::CloseButtons */
      CloseButtons(this_00,'\x01');
      pMVar13 = (this_00->array_00BC[0xc].field_01DB)->field_02E6;
      if (pMVar13 != nullptr) {
        /* ST_CALLSITE[005BCB11]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
        MMsgTy::HidePanel(pMVar13,1,0,1);
      }
    }
    else {
      /* ST_CALLSITE[005BCB1D]: CALL 0x00404c8c; direct=00404C8C PrividerTy::CloseButtons */
      CloseButtons(this_00,'\0');
      pSVar4 = this_00->array_00BC[0xc].field_01DB;
      if (pSVar4->field_02E6 != nullptr) {
        local_2c = 0x10100;
        local_24 = 0;
        local_28 = 0x100;
        local_20 = 0;
        MMsgTy::thunk_FUN_005b8f40(pSVar4->field_02E6,&local_2c);
      }
      uVar19 = this_00->field_1C8A;
      this_00->field_0065 = CASE_5;
      this_00->array_00BC[0xc].field_01E0 = 0;
      local_8 = 0xffffffff;
      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar19);
      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   (ushort *)&(this_00->array_00BC[0xc].field_01DB)->field_0140);
      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x79,0x197);
      pHVar10 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar10 == nullptr) {
        pHVar10 = nullptr;
      }
      else {
        pHVar10->field_0002 = 1;
        pHVar10->field_0000 = 0;
        *(undefined4 *)&pHVar10->field_0x3 = 0xffffffff;
        pHVar10->field_0001 = CASE_2;
        pHVar10->field_0007 = nullptr;
        pHVar10->field_000B = nullptr;
        pHVar10->field_000F = 0;
        *(undefined4 *)&pHVar10->field_0x1b = 1;
        pHVar10->field_0013 = 1;
        pHVar10->field_0017 = -1;
        pHVar10->field_0027 = 0;
        pHVar10->field_0023 = 0;
        pHVar10->field_002F = 1;
        pHVar10->field_002B = 1;
      }
      this_00->field_1C9A = pHVar10;
      if (pHVar10 != nullptr) {
        uVar19 = 0;
        cVar17 = '\x01';
        bVar16 = 0x10;
        iVar15 = 1;
        iVar12 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x79,0x197,0x22e,0x2e);
        /* ST_CALLSITE[005BCC41]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
        uVar18 = HoloTy::Init(this_00->field_1C9A,CASE_1,0x79,0x197,iVar12,iVar15,bVar16,cVar17,
                              uVar19);
        if (uVar18 != 0) {
          pHVar10 = this_00->field_1C9A;
          pHVar10->field_0002 = 1;
          pHVar10->field_0017 = pHVar10->field_0013;
          uVar19 = *(uint *)&this_00->field_1C9A->field_0x3;
          if (-1 < (int)uVar19) {
            Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar19);
          }
          FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_1C8A);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      }
    }
  }
cf_common_exit_005BCF7F:
  g_currentExceptionFrame = local_8c.previous;
  /* ST_CALLSITE[005BCF8E]: CALL 0x00401280; direct=00401280 MMObjTy::GetMessage */
  iVar10 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar10;
}

