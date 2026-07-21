#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401CC6|005BC5E0; family_names=PrividerTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:10,18:5,1c:0} */

int __thiscall PrividerTy::GetMessage(PrividerTy *this,STMessage *message)

{
  undefined1 *puVar1;
  ushort uVar2;
  STMessageId SVar3;
  StartSystemTy *pSVar4;
  STMessageArg SVar5;
  code *pcVar6;
  CursorClassTy *pCVar7;
  PrividerTy *this_00;
  undefined1 uVar8;
  DWORD DVar9;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  HoloTy *pHVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  undefined4 uVar12;
  int iVar13;
  MMsgTy *pMVar14;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *unaff_EDI;
  undefined4 *puVar15;
  uint uVar16;
  char cVar17;
  uint uVar18;
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
  DVar9 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar9;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar10 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x34c,0,iVar10,
                                "%s","PrividerTy::GetMessage");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar10,0,"E:\\__titans\\Start\\prov_obj.cpp",0x34c);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,(int)message);
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
            PaintPrivider(this_00,'\0');
          }
          else if (SVar3 == MESS_ID_NONE) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            NonePrivider(this_00,unaff_EDI);
          }
          else if (SVar3 == MESS_ID_CREATE) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            InitPrivider(this_00,*(char *)((message->arg0).u32 + 0x14),
                         *(char *)((message->arg0).u32 + 0x18));
          }
          else if (SVar3 == MESS_SHARED_0003) {
            DonePrivider(this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
        if (SVar3 != MESS_SHARED_6109) {
          if (SVar3 == MESS_SHARED_610A) {
            this_00->field_0045 = 0x200;
            this_00->field_0049 = 0;
            this_00->field_004D = 0x610a;
            thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
      }
    }
    else {
      if (MESS_SHARED_6501 < SVar3) {
        if (SVar3 != MESS_PRIVIDERTY_6502) {
          if (SVar3 == MESS_PRIVIDERTY_693F) {
            thunk_FUN_005bb9f0((AnonShape_005BB9F0_E38C41BB *)this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
        uVar8 = thunk_FUN_005da940(PTR_0081176c,this_00->field_1A61);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar8) == 0) {
          this_00->field_1A71 = uVar8;
          iVar10 = thunk_FUN_005da980(this_00->field_1A61);
          if ((iVar10 == 0) && (iVar10 = thunk_FUN_005daa90(), iVar10 == 0)) {
            DAT_0080877e = 0;
            CloseButtons(this_00,'\0');
            if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
              local_18 = 0x1000000;
              local_14 = 0;
              local_10 = 0;
              local_1c = 0x10101;
              thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_1c);
            }
            this_00->field_0065 = CASE_5;
            this_00->field_1A60 = 1;
          }
          goto cf_common_exit_005BCF7F;
        }
LAB_005bccb9:
        this_00->field_004D = 0x6951;
        (*this_00->vtable->GetMessage)(this_00,(int)&this_00->field_0x3d);
        goto cf_common_exit_005BCF7F;
      }
      if (SVar3 == MESS_SHARED_6501) goto switchD_005bc9da_caseD_6949;
      if (SVar3 != MESS_SHARED_6121) {
        if (SVar3 == MESS_PRIVIDERTY_631F) {
          FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C8E,0,3,0x16,0x22c,0x16,0xff);
          ccFntTy::SetSurf(PTR_0081176c->field_0030,(int)this_00->field_1C8E,0,5,0x16,0x226,0x16);
          ccFntTy::WrStr(PTR_0081176c->field_0030,*(uint **)(message->arg0).ptr,0,-1,3);
          uVar2 = (message->arg1).words.low;
          if ((uVar2 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
            uVar16 = (uint)(message->arg1).words.high;
            iVar10 = uVar2 + 5;
            FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C8E,0,iVar10,uVar16 + 0x19,
                         iVar10,uVar16 + 0x28,9,0xd);
          }
          FUN_006b35d0(DAT_008075a8,this_00->field_1C8A);
        }
        else if (SVar3 == MESS_SHARED_64FF) {
          this_00->field_1A71 = 0;
          iVar10 = thunk_FUN_005daa90();
          if (iVar10 == 0) {
            this_00->field_0031 = 0;
            puVar1 = &this_00->field_0x1d;
            this_00->field_002D = 0x20;
            FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            this_00->field_002D = 0x28;
            uVar16 = *(uint *)(PTR_0081176c->field_068E + 4);
            this_00->field_0031 = uVar16 & ((int)uVar16 < 0) - 1;
            FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            if (0 < *(int *)(PTR_0081176c->field_068E + 4)) {
              this_00->field_002D = 0x20;
              this_00->field_0031 = 1;
              FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            }
            pSVar4 = this_00->field_1A5B;
            if (pSVar4->field_02E6 != (MMsgTy *)0x0) {
              puVar15 = &local_48;
              for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar15 = 0;
                puVar15 = puVar15 + 1;
              }
              *(undefined2 *)puVar15 = 0;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_48._2_2_ = ((*(int *)(PTR_0081176c->field_068E + 4) < 1) - 1 & 2) - 1;
              MMsgTy::StatePanel(pSVar4->field_02E6,(int)&local_48);
            }
          }
        }
        goto cf_common_exit_005BCF7F;
      }
    }
    StartSystemTy::InitChat(this_00->field_1A5B);
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = message->id;
    this_00->field_0051 = message->arg0;
    this_00->field_0055 = message->arg1;
    thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
    goto cf_common_exit_005BCF7F;
  }
  if (MESS_SHARED_8160 < SVar3) {
    switch(SVar3) {
    case MESS_SIDTY_8161:
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C82,0,0,
                   (uint)(message->arg1).words.high,this_00->field_1C82->field_0004,0x13,0);
      ccFntTy::SetSurf(PTR_0081176c->field_0030,(int)this_00->field_1C82,0,4,
                       (uint)(message->arg1).words.high,this_00->field_1C82->field_0004 + -4,0x13);
      if (this_00->field_1A5F == '\0') {
        iVar10 = PTR_0081176c->field_068A;
      }
      else {
        iVar10 = PTR_0081176c->field_068E;
      }
      if (iVar10 != 0) {
        ccFntTy::WrStr(PTR_0081176c->field_0030,
                       *(uint **)(iVar10 + 8 + (uint)(message->arg0).words.low * 0x14),2,-1,
                       (-(uint)((message->arg0).words.high != 0) & 2) + 1);
      }
      uVar16 = (uint)(message->arg1).words.high;
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,(&this_00->field_1C2A)[uVar16 / 0x13],0xfffffffe,0x7a,uVar16 + 0x67);
      break;
    case MESS_SIDTY_8163:
      SVar5 = message->arg0;
      this_00->field_1A71 = 0;
      this_00->field_1A61 = SVar5;
      break;
    case MESS_OPTPANELTY_8164:
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_1A77,
                 (int)message,0);
      break;
    case MESS_OPTPANELTY_8165:
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_1B08,
                 (int)message,0);
      break;
    case MESS_SHARED_8166:
      uVar16 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      this_00->field_1BB9 = uVar16;
      if (this_00->field_1B9D != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1BE1,this_00->field_1B9D,this_00->field_1BA1,
                   this_00->field_1BB5,uVar16);
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
    thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
    break;
  case MESS_WAITTY_6943:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x6942,message->arg0,0);
    CloseButtons(this_00,'\x01');
    pMVar14 = this_00->field_1A5B->field_02E6;
    goto cf_common_exit_005BCD75;
  case MESS_FSGSTY_6949:
switchD_005bc9da_caseD_6949:
    uVar8 = thunk_FUN_005da940(PTR_0081176c,this_00->field_1A61);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var_00,uVar8) != 0) goto LAB_005bccb9;
    iVar10 = thunk_FUN_005da980(this_00->field_1A61);
    if (iVar10 != 0) break;
    if ((int)this_00->field_1C92->field_0008 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)this_00->field_1C92->field_0014;
    }
    iVar10 = thunk_FUN_005dab70(0,uVar12);
    if (iVar10 != 0) {
      pMVar14 = this_00->field_1A5B->field_02E6;
      if (pMVar14 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(pMVar14,0x2134,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0
                           ,0,0);
      }
      break;
    }
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x611f,(-(uint)(message->id != MESS_SHARED_6501) & 8) + 4,0x11);
    CloseButtons(this_00,'\x01');
    pMVar14 = this_00->field_1A5B->field_02E6;
    goto cf_common_exit_005BCD75;
  case 0x694e:
    iVar10 = thunk_FUN_005dab70(this_00->field_1A61,&DAT_008016a0);
    if (iVar10 == 0) {
      this_00->field_1A71 = 1;
      this_00->field_1A69 = this_00->field_0061;
      this_00->field_1A6D = 0;
      pCVar7 = PTR_00802a30;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        iVar10 = PTR_00802a30->field_00C9;
        iVar13 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 5;
        pCVar7->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar7,CASE_0,iVar13,iVar10);
        CursorClassTy::DrawSprite(pCVar7,pCVar7->field_00C5,pCVar7->field_00C9);
        pCVar7->field_00D2 = 0;
        pCVar7->field_04DF = 0xffffffff;
      }
    }
    break;
  case MESS_SHARED_6951:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    CloseButtons(this_00,'\x01');
    pMVar14 = this_00->field_1A5B->field_02E6;
cf_common_exit_005BCD75:
    if (pMVar14 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar14,1,0,1);
    }
    break;
  case MESS_PRIVIDERTY_6952:
    this_00->field_1A71 = 0;
    pCVar7 = PTR_00802a30;
    DAT_0080877e = 1;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      iVar10 = PTR_00802a30->field_00C9;
      iVar13 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      pCVar7->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar7,CASE_0,iVar13,iVar10);
      CursorClassTy::DrawSprite(pCVar7,pCVar7->field_00C5,pCVar7->field_00C9);
      pCVar7->field_00D2 = 0;
      pCVar7->field_04DF = 0xffffffff;
    }
    if (this_00->field_1A5F == '\0') {
      thunk_FUN_005b6350(this_00,0x6942,message->arg0,0);
      CloseButtons(this_00,'\x01');
      pMVar14 = this_00->field_1A5B->field_02E6;
      if (pMVar14 != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(pMVar14,1,0,1);
      }
    }
    else {
      CloseButtons(this_00,'\0');
      if (this_00->field_1A5B->field_02E6 != (MMsgTy *)0x0) {
        local_2c = 0x10100;
        local_24 = 0;
        local_28 = 0x100;
        local_20 = 0;
        thunk_FUN_005b8f40(this_00->field_1A5B->field_02E6,&local_2c);
      }
      this_00->field_0065 = CASE_5;
      this_00->field_1A60 = 0;
      local_8 = 0xffffffff;
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_1C8A);
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   (uint)&this_00->field_1A5B->field_0140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x197);
      pHVar11 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar11 == (HoloTy *)0x0) {
        pHVar11 = (HoloTy *)0x0;
      }
      else {
        pHVar11->field_0002 = 1;
        pHVar11->field_0000 = 0;
        pHVar11->field_0003 = -1;
        pHVar11->field_0001 = CASE_2;
        pHVar11->field_0007 = 0;
        pHVar11->field_000B = 0;
        *(undefined4 *)&pHVar11->field_0xf = 0;
        *(undefined4 *)&pHVar11->field_0x1b = 1;
        pHVar11->field_0013 = 1;
        pHVar11->field_0017 = -1;
        pHVar11->field_0027 = 0;
        pHVar11->field_0023 = 0;
        pHVar11->field_002F = 1;
        pHVar11->field_002B = 1;
      }
      this_00->field_1C9A = pHVar11;
      if (pHVar11 != (HoloTy *)0x0) {
        uVar18 = 0;
        cVar17 = '\x01';
        uVar16 = 0x10;
        iVar13 = 1;
        iVar10 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar16 = HoloTy::Init(this_00->field_1C9A,CASE_1,0x79,0x197,iVar10,iVar13,uVar16,cVar17,
                              uVar18);
        if (uVar16 != 0) {
          pHVar11 = this_00->field_1C9A;
          pHVar11->field_0002 = 1;
          pHVar11->field_0017 = pHVar11->field_0013;
          uVar16 = this_00->field_1C9A->field_0003;
          if (-1 < (int)uVar16) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar16);
          }
          FUN_006b3af0(DAT_008075a8,this_00->field_1C8A);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
      }
    }
  }
cf_common_exit_005BCF7F:
  g_currentExceptionFrame = local_8c.previous;
  iVar10 = MMObjTy::GetMessage((MMObjTy *)this_00,message);
  return iVar10;
}

