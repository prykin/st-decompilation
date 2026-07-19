
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::GetMessage */

undefined4 __thiscall PrividerTy::GetMessage(PrividerTy *this,int param_1)

{
  PrividerTy *pPVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *pCVar4;
  PrividerTy *this_00;
  PrividerTy PVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined1 *puVar9;
  undefined3 extraout_var_00;
  int iVar10;
  MMsgTy *this_01;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *puVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
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
  uVar7 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x61) = uVar7;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar8 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x34c,0,iVar8,
                                &DAT_007a4ccc,s_PrividerTy__GetMessage_007ccea4);
    if (iVar10 != 0) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    RaiseInternalException(iVar8,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x34c);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,param_1);
  uVar12 = *(uint *)(param_1 + 0x10);
  if (uVar12 < 0x6941) {
    if (uVar12 == 0x6940) {
      thunk_FUN_005bba40((int)this_00);
      goto switchD_005bc9da_caseD_6944;
    }
    if (uVar12 < 0x6120) {
      if (uVar12 != 0x611f) {
        if (uVar12 < 6) {
          if (uVar12 == 5) {
            PaintPrivider(this_00,'\0');
          }
          else if (uVar12 == 0) {
            NonePrivider(this_00,unaff_EDI);
          }
          else if (uVar12 == 2) {
            InitPrivider(this_00,*(char *)(*(int *)(param_1 + 0x14) + 0x14),
                         *(char *)(*(int *)(param_1 + 0x14) + 0x18));
          }
          else if (uVar12 == 3) {
            DonePrivider(this_00);
          }
          goto switchD_005bc9da_caseD_6944;
        }
        if (uVar12 != 0x6109) {
          if (uVar12 == 0x610a) {
            *(undefined4 *)(this_00 + 0x45) = 0x200;
            *(undefined4 *)(this_00 + 0x49) = 0;
            *(undefined4 *)(this_00 + 0x4d) = 0x610a;
            thunk_FUN_005b66e0(this_00);
          }
          goto switchD_005bc9da_caseD_6944;
        }
      }
    }
    else {
      if (0x6501 < uVar12) {
        if (uVar12 != 0x6502) {
          if (uVar12 == 0x693f) {
            thunk_FUN_005bb9f0((int)this_00);
          }
          goto switchD_005bc9da_caseD_6944;
        }
        PVar5 = (PrividerTy)thunk_FUN_005da940(DAT_0081176c,*(int *)(this_00 + 0x1a61));
        if (CONCAT31(extraout_var,PVar5) == 0) {
          this_00[0x1a71] = PVar5;
          iVar8 = thunk_FUN_005da980(*(int *)(this_00 + 0x1a61));
          if ((iVar8 == 0) && (iVar8 = thunk_FUN_005daa90(), iVar8 == 0)) {
            DAT_0080877e = 0;
            CloseButtons(this_00,'\0');
            if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != 0) {
              local_18 = 0x1000000;
              local_14 = 0;
              local_10 = 0;
              local_1c = 0x10101;
              thunk_FUN_005b8f40(*(void **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),&local_1c);
            }
            this_00[0x65] = (PrividerTy)0x5;
            this_00[0x1a60] = (PrividerTy)0x1;
          }
          goto switchD_005bc9da_caseD_6944;
        }
LAB_005bccb9:
        *(undefined4 *)(this_00 + 0x4d) = 0x6951;
        (*(code *)**(undefined4 **)this_00)(this_00 + 0x3d);
        goto switchD_005bc9da_caseD_6944;
      }
      if (uVar12 == 0x6501) goto switchD_005bc9da_caseD_6949;
      if (uVar12 != 0x6121) {
        if (uVar12 == 0x631f) {
          FUN_006b4170(*(int *)(this_00 + 0x1c8e),0,3,0x16,0x22c,0x16,0xff);
          ccFntTy::SetSurf(*(ccFntTy **)((int)DAT_0081176c + 0x30),*(int *)(this_00 + 0x1c8e),0,5,
                           0x16,0x226,0x16);
          ccFntTy::WrStr(*(ccFntTy **)((int)DAT_0081176c + 0x30),
                         (uint *)**(undefined4 **)(param_1 + 0x14),0,-1,3);
          if ((*(ushort *)(param_1 + 0x18) != 0xffff) || (*(short *)(param_1 + 0x1a) != -1)) {
            iVar8 = *(ushort *)(param_1 + 0x18) + 5;
            FUN_006b5b10(*(int *)(this_00 + 0x1c8e),0,iVar8,*(ushort *)(param_1 + 0x1a) + 0x19,iVar8
                         ,*(ushort *)(param_1 + 0x1a) + 0x28,9,0xd);
          }
          FUN_006b35d0(DAT_008075a8,*(uint *)(this_00 + 0x1c8a));
        }
        else if (uVar12 == 0x64ff) {
          this_00[0x1a71] = (PrividerTy)0x0;
          iVar8 = thunk_FUN_005daa90();
          if (iVar8 == 0) {
            *(undefined4 *)(this_00 + 0x31) = 0;
            pPVar1 = this_00 + 0x1d;
            *(undefined4 *)(this_00 + 0x2d) = 0x20;
            FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1a73),(undefined4 *)pPVar1);
            *(undefined4 *)(this_00 + 0x2d) = 0x28;
            uVar12 = *(uint *)(*(int *)((int)DAT_0081176c + 0x68e) + 4);
            *(uint *)(this_00 + 0x31) = uVar12 & ((int)uVar12 < 0) - 1;
            FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1a73),(undefined4 *)pPVar1);
            if (0 < *(int *)(*(int *)((int)DAT_0081176c + 0x68e) + 4)) {
              *(undefined4 *)(this_00 + 0x2d) = 0x20;
              *(undefined4 *)(this_00 + 0x31) = 1;
              FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1a73),(undefined4 *)pPVar1);
            }
            iVar8 = *(int *)(this_00 + 0x1a5b);
            if (*(int *)(iVar8 + 0x2e6) != 0) {
              puVar11 = &local_48;
              for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
              *(undefined2 *)puVar11 = 0;
              local_48._2_2_ = ((*(int *)(*(int *)((int)DAT_0081176c + 0x68e) + 4) < 1) - 1 & 2) - 1
              ;
              MMsgTy::StatePanel(*(MMsgTy **)(iVar8 + 0x2e6),(int)&local_48);
            }
          }
        }
        goto switchD_005bc9da_caseD_6944;
      }
    }
    StartSystemTy::InitChat(*(StartSystemTy **)(this_00 + 0x1a5b));
    *(undefined4 *)(this_00 + 0x45) = 0x200;
    *(undefined4 *)(this_00 + 0x49) = 0;
    *(undefined4 *)(this_00 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this_00 + 0x55) = *(undefined4 *)(param_1 + 0x18);
    thunk_FUN_005b66e0(this_00);
    goto switchD_005bc9da_caseD_6944;
  }
  if (0x8160 < uVar12) {
    switch(uVar12) {
    case 0x8161:
      FUN_006b4170(*(int *)(this_00 + 0x1c82),0,0,(uint)*(ushort *)(param_1 + 0x1a),
                   *(int *)(*(int *)(this_00 + 0x1c82) + 4),0x13,0);
      ccFntTy::SetSurf(*(ccFntTy **)((int)DAT_0081176c + 0x30),*(int *)(this_00 + 0x1c82),0,4,
                       (uint)*(ushort *)(param_1 + 0x1a),
                       *(int *)(*(int *)(this_00 + 0x1c82) + 4) + -4,0x13);
      if (this_00[0x1a5f] == (PrividerTy)0x0) {
        iVar8 = *(int *)((int)DAT_0081176c + 0x68a);
      }
      else {
        iVar8 = *(int *)((int)DAT_0081176c + 0x68e);
      }
      if (iVar8 != 0) {
        ccFntTy::WrStr(*(ccFntTy **)((int)DAT_0081176c + 0x30),
                       *(uint **)(iVar8 + 8 + (uint)*(ushort *)(param_1 + 0x14) * 0x14),2,-1,
                       (-(uint)(*(short *)(param_1 + 0x16) != 0) & 2) + 1);
      }
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(this_00 + (*(ushort *)(param_1 + 0x1a) / 0x13) * 4 + 0x1c2a)
                 ,0xfffffffe,0x7a,*(ushort *)(param_1 + 0x1a) + 0x67);
      break;
    case 0x8163:
      uVar7 = *(undefined4 *)(param_1 + 0x14);
      this_00[0x1a71] = (PrividerTy)0x0;
      *(undefined4 *)(this_00 + 0x1a61) = uVar7;
      break;
    case 0x8164:
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(this_00 + 0x1a77),param_1,0);
      break;
    case 0x8165:
      MMMObjTy::PaintSlBut((MMMObjTy *)this_00,(int)(this_00 + 0x1b08),param_1,0);
      break;
    case 0x8166:
      uVar12 = *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
      *(uint *)(this_00 + 0x1bb9) = uVar12;
      if (*(uint *)(this_00 + 0x1b9d) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(this_00 + 0x1be1),*(uint *)(this_00 + 0x1b9d),
                   *(uint *)(this_00 + 0x1ba1),*(uint *)(this_00 + 0x1bb5),uVar12);
      }
    }
    goto switchD_005bc9da_caseD_6944;
  }
  if (uVar12 == 0x8160) {
    *(undefined4 *)(param_1 + 0x18) = 0x13;
    goto switchD_005bc9da_caseD_6944;
  }
  switch(uVar12) {
  case 0x6942:
    *(undefined4 *)(this_00 + 0x45) = 0x200;
    *(undefined4 *)(this_00 + 0x49) = 0;
    *(undefined4 *)(this_00 + 0x4d) = 0x6102;
    *(undefined4 *)(this_00 + 0x51) = *(undefined4 *)(param_1 + 0x14);
    thunk_FUN_005b66e0(this_00);
    break;
  case 0x6943:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x6942,*(undefined4 *)(param_1 + 0x14),0);
    CloseButtons(this_00,'\x01');
    this_01 = *(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6);
    goto LAB_005bcd75;
  case 0x6949:
switchD_005bc9da_caseD_6949:
    uVar6 = thunk_FUN_005da940(DAT_0081176c,*(int *)(this_00 + 0x1a61));
    if (CONCAT31(extraout_var_00,uVar6) != 0) goto LAB_005bccb9;
    iVar8 = thunk_FUN_005da980(*(int *)(this_00 + 0x1a61));
    if (iVar8 != 0) break;
    if (*(int *)(*(int *)(this_00 + 0x1c92) + 8) < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined4 **)(*(int *)(this_00 + 0x1c92) + 0x14);
    }
    iVar8 = thunk_FUN_005dab70(0,uVar7);
    if (iVar8 != 0) {
      if (*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
        MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x2134,'\0',
                           (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
      }
      break;
    }
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x611f,(-(uint)(*(int *)(param_1 + 0x10) != 0x6501) & 8) + 4,0x11);
    CloseButtons(this_00,'\x01');
    this_01 = *(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6);
    goto LAB_005bcd75;
  case 0x694e:
    iVar8 = thunk_FUN_005dab70(*(int *)(this_00 + 0x1a61),&DAT_008016a0);
    if (iVar8 == 0) {
      this_00[0x1a71] = (PrividerTy)0x1;
      *(undefined4 *)(this_00 + 0x1a69) = *(undefined4 *)(this_00 + 0x61);
      *(undefined4 *)(this_00 + 0x1a6d) = 0;
      pCVar4 = DAT_00802a30;
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
        DAT_00802a30[0x493] = (CursorClassTy)0x5;
        *(undefined2 *)(pCVar4 + 0x494) = 0xffff;
        CursorClassTy::SetGCType(pCVar4,0,uVar2,uVar7);
        CursorClassTy::DrawSprite(pCVar4,*(int *)(pCVar4 + 0xc5),*(int *)(pCVar4 + 0xc9));
        pCVar4[0xd2] = (CursorClassTy)0x0;
        *(undefined4 *)(pCVar4 + 0x4df) = 0xffffffff;
      }
    }
    break;
  case 0x6951:
    DAT_0080877e = 1;
    thunk_FUN_005b6350(this_00,0x610a,0,0);
    CloseButtons(this_00,'\x01');
    this_01 = *(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6);
LAB_005bcd75:
    if (this_01 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_01,1,0,1);
    }
    break;
  case 0x6952:
    this_00[0x1a71] = (PrividerTy)0x0;
    pCVar4 = DAT_00802a30;
    DAT_0080877e = 1;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(pCVar4 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(pCVar4,0,uVar2,uVar7);
      CursorClassTy::DrawSprite(pCVar4,*(int *)(pCVar4 + 0xc5),*(int *)(pCVar4 + 0xc9));
      pCVar4[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(pCVar4 + 0x4df) = 0xffffffff;
    }
    if (this_00[0x1a5f] == (PrividerTy)0x0) {
      thunk_FUN_005b6350(this_00,0x6942,*(undefined4 *)(param_1 + 0x14),0);
      CloseButtons(this_00,'\x01');
      if (*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
        MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),1,0,1);
      }
    }
    else {
      CloseButtons(this_00,'\0');
      if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != 0) {
        local_2c = 0x10100;
        local_24 = 0;
        local_28 = 0x100;
        local_20 = 0;
        thunk_FUN_005b8f40(*(void **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),&local_2c);
      }
      this_00[0x65] = (PrividerTy)0x5;
      this_00[0x1a60] = (PrividerTy)0x0;
      local_8 = 0xffffffff;
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x1c8a));
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   *(int *)(this_00 + 0x1a5b) + 0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x197);
      puVar9 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9[2] = 1;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 3) = 0xffffffff;
        puVar9[1] = 2;
        *(undefined4 *)(puVar9 + 7) = 0;
        *(undefined4 *)(puVar9 + 0xb) = 0;
        *(undefined4 *)(puVar9 + 0xf) = 0;
        *(undefined4 *)(puVar9 + 0x1b) = 1;
        *(undefined4 *)(puVar9 + 0x13) = 1;
        *(undefined4 *)(puVar9 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar9 + 0x27) = 0;
        *(undefined4 *)(puVar9 + 0x23) = 0;
        *(undefined4 *)(puVar9 + 0x2f) = 1;
        *(undefined4 *)(puVar9 + 0x2b) = 1;
      }
      *(undefined1 **)(this_00 + 0x1c9a) = puVar9;
      if (puVar9 != (undefined1 *)0x0) {
        uVar14 = 0;
        cVar13 = '\x01';
        uVar12 = 0x10;
        iVar10 = 1;
        iVar8 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar12 = HoloTy::Init(*(HoloTy **)(this_00 + 0x1c9a),1,0x79,0x197,iVar8,iVar10,uVar12,cVar13
                              ,uVar14);
        if (uVar12 != 0) {
          iVar8 = *(int *)(this_00 + 0x1c9a);
          *(undefined1 *)(iVar8 + 2) = 1;
          *(undefined4 *)(iVar8 + 0x17) = *(undefined4 *)(iVar8 + 0x13);
          if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1c9a) + 3)) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1c9a) + 3));
          }
          FUN_006b3af0(DAT_008075a8,*(uint *)(this_00 + 0x1c8a));
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
      }
    }
  }
switchD_005bc9da_caseD_6944:
  g_currentExceptionFrame = local_8c.previous;
  uVar7 = thunk_FUN_005b6430();
  return uVar7;
}

