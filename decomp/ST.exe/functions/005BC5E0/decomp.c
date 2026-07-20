
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::GetMessage */

undefined4 __thiscall PrividerTy::GetMessage(PrividerTy *this,int param_1)

{
  undefined1 *puVar1;
  StartSystemTy *pSVar2;
  undefined4 uVar3;
  code *pcVar4;
  CursorClassTy *pCVar5;
  PrividerTy *this_00;
  undefined1 uVar6;
  DWORD DVar7;
  int iVar8;
  undefined3 extraout_var;
  HoloTy *pHVar9;
  undefined3 extraout_var_00;
  undefined4 uVar10;
  int iVar11;
  MMsgTy *pMVar12;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *puVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
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
  DVar7 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar7;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar8 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x34c,0,iVar8,
                                &DAT_007a4ccc,s_PrividerTy__GetMessage_007ccea4);
    if (iVar11 != 0) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return uVar10;
    }
    RaiseInternalException(iVar8,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x34c);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,param_1);
  uVar14 = *(uint *)(param_1 + 0x10);
  if (uVar14 < 0x6941) {
    if (uVar14 == 0x6940) {
      thunk_FUN_005bba40((AnonShape_005BBA40_15493F88 *)this_00);
      goto cf_common_exit_005BCF7F;
    }
    if (uVar14 < 0x6120) {
      if (uVar14 != 0x611f) {
        if (uVar14 < 6) {
          if (uVar14 == 5) {
            PaintPrivider(this_00,'\0');
          }
          else if (uVar14 == 0) {
            NonePrivider(this_00,unaff_EDI);
          }
          else if (uVar14 == 2) {
            InitPrivider(this_00,*(char *)(*(int *)(param_1 + 0x14) + 0x14),
                         *(char *)(*(int *)(param_1 + 0x14) + 0x18));
          }
          else if (uVar14 == 3) {
            DonePrivider(this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
        if (uVar14 != 0x6109) {
          if (uVar14 == 0x610a) {
            this_00->field_0045 = 0x200;
            this_00->field_0049 = 0;
            this_00->field_004D = 0x610a;
            thunk_FUN_005b66e0((STJellyGunC *)this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
      }
    }
    else {
      if (0x6501 < uVar14) {
        if (uVar14 != 0x6502) {
          if (uVar14 == 0x693f) {
            thunk_FUN_005bb9f0((AnonShape_005BB9F0_E38C41BB *)this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
        uVar6 = thunk_FUN_005da940(PTR_0081176c,this_00->field_1A61);
        if (CONCAT31(extraout_var,uVar6) == 0) {
          this_00->field_1A71 = uVar6;
          iVar8 = thunk_FUN_005da980(this_00->field_1A61);
          if ((iVar8 == 0) && (iVar8 = thunk_FUN_005daa90(), iVar8 == 0)) {
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
      if (uVar14 == 0x6501) goto switchD_005bc9da_caseD_6949;
      if (uVar14 != 0x6121) {
        if (uVar14 == 0x631f) {
          FUN_006b4170(this_00->field_1C8E,0,3,0x16,0x22c,0x16,0xff);
          ccFntTy::SetSurf((ccFntTy *)PTR_0081176c->field_0030,this_00->field_1C8E,0,5,0x16,0x226,
                           0x16);
          ccFntTy::WrStr((ccFntTy *)PTR_0081176c->field_0030,
                         (uint *)**(undefined4 **)(param_1 + 0x14),0,-1,3);
          if ((*(ushort *)(param_1 + 0x18) != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
            iVar8 = *(ushort *)(param_1 + 0x18) + 5;
            FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C8E,0,iVar8,
                         *(ushort *)(param_1 + 0x1a) + 0x19,iVar8,*(ushort *)(param_1 + 0x1a) + 0x28
                         ,9,0xd);
          }
          FUN_006b35d0(DAT_008075a8,this_00->field_1C8A);
        }
        else if (uVar14 == 0x64ff) {
          this_00->field_1A71 = 0;
          iVar8 = thunk_FUN_005daa90();
          if (iVar8 == 0) {
            this_00->field_0031 = 0;
            puVar1 = &this_00->field_0x1d;
            this_00->field_002D = 0x20;
            FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            this_00->field_002D = 0x28;
            uVar14 = *(uint *)(PTR_0081176c->field_068E + 4);
            this_00->field_0031 = uVar14 & ((int)uVar14 < 0) - 1;
            FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            if (0 < *(int *)(PTR_0081176c->field_068E + 4)) {
              this_00->field_002D = 0x20;
              this_00->field_0031 = 1;
              FUN_006e6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            }
            pSVar2 = this_00->field_1A5B;
            if (pSVar2->field_02E6 != (MMsgTy *)0x0) {
              puVar13 = &local_48;
              for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar13 = 0;
                puVar13 = puVar13 + 1;
              }
              *(undefined2 *)puVar13 = 0;
              local_48._2_2_ = ((*(int *)(PTR_0081176c->field_068E + 4) < 1) - 1 & 2) - 1;
              MMsgTy::StatePanel(pSVar2->field_02E6,(int)&local_48);
            }
          }
        }
        goto cf_common_exit_005BCF7F;
      }
    }
    StartSystemTy::InitChat(this_00->field_1A5B);
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = *(undefined4 *)(param_1 + 0x10);
    this_00->field_0051 = *(undefined4 *)(param_1 + 0x14);
    this_00->field_0055 = *(undefined4 *)(param_1 + 0x18);
    thunk_FUN_005b66e0((STJellyGunC *)this_00);
    goto cf_common_exit_005BCF7F;
  }
  if (0x8160 < uVar14) {
    switch(uVar14) {
    case 0x8161:
      FUN_006b4170((int)this_00->field_1C82,0,0,(uint)*(ushort *)(param_1 + 0x1a),
                   this_00->field_1C82->field_0004,0x13,0);
      ccFntTy::SetSurf((ccFntTy *)PTR_0081176c->field_0030,(int)this_00->field_1C82,0,4,
                       (uint)*(ushort *)(param_1 + 0x1a),this_00->field_1C82->field_0004 + -4,0x13);
      if (this_00->field_1A5F == '\0') {
        iVar8 = PTR_0081176c->field_068A;
      }
      else {
        iVar8 = PTR_0081176c->field_068E;
      }
      if (iVar8 != 0) {
        ccFntTy::WrStr((ccFntTy *)PTR_0081176c->field_0030,
                       *(uint **)(iVar8 + 8 + (uint)*(ushort *)(param_1 + 0x14) * 0x14),2,-1,
                       (-(uint)(*(short *)(param_1 + 0x16) != 0) & 2) + 1);
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,(&this_00->field_1C2A)[*(ushort *)(param_1 + 0x1a) / 0x13],0xfffffffe,
                 0x7a,*(ushort *)(param_1 + 0x1a) + 0x67);
      break;
    case 0x8163:
      uVar10 = *(undefined4 *)(param_1 + 0x14);
      this_00->field_1A71 = 0;
      this_00->field_1A61 = uVar10;
      break;
    case 0x8164:
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_1A77,param_1,0);
      break;
    case 0x8165:
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_00,(AnonShape_005B6560_61F462DF *)&this_00->field_1B08,param_1,0);
      break;
    case 0x8166:
      uVar14 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
      this_00->field_1BB9 = uVar14;
      if (this_00->field_1B9D != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1BE1,this_00->field_1B9D,this_00->field_1BA1,
                   this_00->field_1BB5,uVar14);
      }
    }
    goto cf_common_exit_005BCF7F;
  }
  if (uVar14 == 0x8160) {
    *(undefined4 *)(param_1 + 0x18) = 0x13;
    goto cf_common_exit_005BCF7F;
  }
  switch(uVar14) {
  case 0x6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_005b66e0((STJellyGunC *)this_00);
    break;
  case 0x6943:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x6942,*(undefined4 *)(param_1 + 0x14),0);
    CloseButtons(this_00,'\x01');
    pMVar12 = this_00->field_1A5B->field_02E6;
    goto cf_common_exit_005BCD75;
  case 0x6949:
switchD_005bc9da_caseD_6949:
    uVar6 = thunk_FUN_005da940(PTR_0081176c,this_00->field_1A61);
    if (CONCAT31(extraout_var_00,uVar6) != 0) goto LAB_005bccb9;
    iVar8 = thunk_FUN_005da980(this_00->field_1A61);
    if (iVar8 != 0) break;
    if (*(int *)(this_00->field_1C92 + 8) < 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = **(undefined4 **)(this_00->field_1C92 + 0x14);
    }
    iVar8 = thunk_FUN_005dab70(0,uVar10);
    if (iVar8 != 0) {
      pMVar12 = this_00->field_1A5B->field_02E6;
      if (pMVar12 != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(pMVar12,0x2134,'\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0
                           ,0,0);
      }
      break;
    }
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x611f,(-(uint)(*(int *)(param_1 + 0x10) != 0x6501) & 8) + 4,0x11);
    CloseButtons(this_00,'\x01');
    pMVar12 = this_00->field_1A5B->field_02E6;
    goto cf_common_exit_005BCD75;
  case 0x694e:
    iVar8 = thunk_FUN_005dab70(this_00->field_1A61,&DAT_008016a0);
    if (iVar8 == 0) {
      this_00->field_1A71 = 1;
      this_00->field_1A69 = this_00->field_0061;
      this_00->field_1A6D = 0;
      pCVar5 = PTR_00802a30;
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        uVar10 = PTR_00802a30->field_00C9;
        uVar3 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 5;
        pCVar5->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar5,CASE_0,uVar3,uVar10);
        CursorClassTy::DrawSprite(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_0xd2 = 0;
        *(undefined4 *)&pCVar5->field_0x4df = 0xffffffff;
      }
    }
    break;
  case 0x6951:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    CloseButtons(this_00,'\x01');
    pMVar12 = this_00->field_1A5B->field_02E6;
cf_common_exit_005BCD75:
    if (pMVar12 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(pMVar12,1,0,1);
    }
    break;
  case 0x6952:
    this_00->field_1A71 = 0;
    pCVar5 = PTR_00802a30;
    DAT_0080877e = 1;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      uVar10 = PTR_00802a30->field_00C9;
      uVar3 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      pCVar5->field_0494 = 0xffff;
      CursorClassTy::SetGCType(pCVar5,CASE_0,uVar3,uVar10);
      CursorClassTy::DrawSprite(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
      pCVar5->field_0xd2 = 0;
      *(undefined4 *)&pCVar5->field_0x4df = 0xffffffff;
    }
    if (this_00->field_1A5F == '\0') {
      thunk_FUN_005b6350(this_00,0x6942,*(undefined4 *)(param_1 + 0x14),0);
      CloseButtons(this_00,'\x01');
      pMVar12 = this_00->field_1A5B->field_02E6;
      if (pMVar12 != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(pMVar12,1,0,1);
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
                   (uint)&this_00->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x197);
      pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar9 == (HoloTy *)0x0) {
        pHVar9 = (HoloTy *)0x0;
      }
      else {
        pHVar9->field_0002 = 1;
        pHVar9->field_0000 = 0;
        pHVar9->field_0003 = 0xffffffff;
        pHVar9->field_0001 = CASE_2;
        pHVar9->field_0007 = 0;
        pHVar9->field_000B = 0;
        *(undefined4 *)&pHVar9->field_0xf = 0;
        *(undefined4 *)&pHVar9->field_0x1b = 1;
        pHVar9->field_0013 = 1;
        pHVar9->field_0017 = 0xffffffff;
        pHVar9->field_0027 = 0;
        pHVar9->field_0023 = 0;
        pHVar9->field_002F = 1;
        pHVar9->field_002B = 1;
      }
      this_00->field_1C9A = pHVar9;
      if (pHVar9 != (HoloTy *)0x0) {
        uVar16 = 0;
        cVar15 = '\x01';
        uVar14 = 0x10;
        iVar11 = 1;
        iVar8 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar14 = HoloTy::Init(this_00->field_1C9A,CASE_1,0x79,0x197,iVar8,iVar11,uVar14,cVar15,
                              uVar16);
        if (uVar14 != 0) {
          pHVar9 = this_00->field_1C9A;
          pHVar9->field_0002 = 1;
          pHVar9->field_0017 = pHVar9->field_0013;
          uVar14 = this_00->field_1C9A->field_0003;
          if (-1 < (int)uVar14) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar14);
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
  uVar10 = MMObjTy::GetMessage((MMObjTy *)this_00,param_1);
  return uVar10;
}

