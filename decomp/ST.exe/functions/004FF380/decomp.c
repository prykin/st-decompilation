
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update1Panel */

void __thiscall CPanelTy::Update1Panel(CPanelTy *this)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 unaff_ESI;
  CPanelTy *pCVar13;
  void *unaff_EDI;
  CPanelTy *pCVar14;
  bool bVar15;
  undefined4 uVar16;
  InternalExceptionFrame local_90;
  CPanelTy *local_4c;
  CPanelTy local_48;
  CPanelTy local_47;
  CPanelTy local_46;
  int local_45;
  CPanelTy local_41;
  int local_40;
  CPanelTy local_3c [15];
  CPanelTy local_2d;
  CPanelTy local_2c;
  CPanelTy local_2b;
  undefined4 local_2a;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  CPanelTy local_1e [8];
  int local_16;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_4c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_4c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_90.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x167,0,iVar4,
                                &DAT_007a4ccc,s_CPanelTy__Update1Panel_007c249c);
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x167);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pCVar13 = local_4c + 0xb63;
  pCVar14 = &local_48;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar14 = *(undefined4 *)pCVar13;
    pCVar13 = pCVar13 + 4;
    pCVar14 = pCVar14 + 4;
  }
  *(undefined2 *)pCVar14 = *(undefined2 *)pCVar13;
  pCVar13 = local_4c + 0xb63;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar13 = 0;
    pCVar13 = pCVar13 + 4;
  }
  *(undefined2 *)pCVar13 = 0;
  local_16 = *(int *)(local_4c + 0xb4b);
  Library::DKW::TBL::FUN_006afe40(&local_16,*(uint **)(local_4c + 0xb95));
  *(undefined4 *)(*(int *)(this_00 + 0xb95) + 0xc) = 0;
  *(int *)(this_00 + 0xb4b) = local_16;
  STAllPlayersC::GetPanelInfo(DAT_007fa174,1,(int *)(this_00 + 0xb63));
  if (local_48 != this_00[0xb63]) {
    if (DAT_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    SwitchTV(this_00,1);
    PaintInfoBoat(this_00);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (this_00[0xb80] != local_2b) {
    if (DAT_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
  }
  if (this_00[0xb63] == (CPanelTy)0x2) {
    if ((*(int *)(*(int *)(this_00 + 0xb95) + 0xc) != *(int *)(local_16 + 0xc)) ||
       (local_47 != this_00[0xb64])) {
      SwitchTV(this_00,1);
    }
    iVar4 = 5;
    bVar15 = true;
    pCVar13 = local_1e;
    pCVar14 = this_00 + 0xb8d;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar15 = *pCVar13 == *pCVar14;
      pCVar13 = pCVar13 + 1;
      pCVar14 = pCVar14 + 1;
    } while (bVar15);
    if (!bVar15) {
      PaintDeep(this_00,1);
      bVar3 = (DAT_0080874e == '\x03') + 2;
      local_8 = CONCAT31(local_8._1_3_,bVar3);
      if (bVar3 < 0xb) {
        uVar5 = (uint)bVar3;
        if (-1 < (int)*(uint *)(this_00 + uVar5 * 4 + 0x148)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + uVar5 * 4 + 0x148),0xffffffff,
                     *(uint *)(this_00 + uVar5 * 4 + 0x3c),*(uint *)(this_00 + uVar5 * 4 + 0x94));
        }
      }
    }
    uVar5 = FUN_006b5a50(local_16,*(int *)(this_00 + 0xb95));
    if (uVar5 != 0) {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(this_00 + 0x184),0,0,0,*(int *)(this_00 + 0x958),0,0,0,
                 *(int *)(*(int *)(this_00 + 0x958) + 4),0x3c);
      uVar16 = *(undefined4 *)(*(int *)(this_00 + 0xb95) + 0xc);
      uVar6 = FUN_006b0140(0x36b9,DAT_00807618);
      wsprintfA(*(LPSTR *)(this_00 + 0x213),s__1_s_0_d_007c245c,uVar6,uVar16);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1b8),*(int *)(this_00 + 0x184),0,2,0xf,
                       *(int *)(*(int *)(this_00 + 0x958) + 4) + -4,0x2d);
      ccFntTy::WrTxt(*(ccFntTy **)(this_00 + 0x1b8),*(uint **)(this_00 + 0x213),-2,-1,0,-1,-1);
      if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                   *(uint *)(this_00 + 0x98));
      }
      if ((DAT_0080874e == '\x03') && (local_2c != this_00[0xb7f])) {
        PaintEnergy(this_00,1);
      }
      local_10 = 1;
      local_c = 0;
      local_8 = *(uint *)(local_16 + 0xc);
      if (local_8 != 0) {
        iVar4 = *(int *)(this_00 + 0xb95);
        uVar5 = *(uint *)(iVar4 + 0xc);
        do {
          if (local_c < local_8) {
            piVar7 = (int *)(*(int *)(local_16 + 8) * local_c + *(int *)(local_16 + 0x1c));
          }
          else {
            piVar7 = (int *)0x0;
          }
          uVar11 = 0;
          if (uVar5 != 0) {
            if (uVar5 == 0) {
              piVar8 = (int *)0x0;
              goto LAB_004ff6e4;
            }
            do {
              piVar8 = (int *)(*(int *)(iVar4 + 8) * uVar11 + *(int *)(iVar4 + 0x1c));
LAB_004ff6e4:
              if (*piVar8 == *piVar7) {
                local_10 = 0;
                break;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar5);
          }
          if (local_10 == 0) goto LAB_004ff723;
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
      if ((local_10 != 0) && (DAT_00801678 != (int *)0x0)) {
        (**(code **)(*DAT_00801678 + 0x1c))(0);
      }
    }
  }
LAB_004ff723:
  CVar1 = this_00[0xb63];
  if (((CVar1 != (CPanelTy)0x1) && (CVar1 != (CPanelTy)0x4)) && (CVar1 != (CPanelTy)0x3)) {
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (((local_40 != *(int *)(this_00 + 0xb6b)) || (local_47 != this_00[0xb64])) ||
     (local_46 != this_00[0xb65])) {
    if (DAT_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    SwitchTV(this_00,1);
  }
  iVar4 = *(int *)(this_00 + 0xb66);
  if ((local_45 != iVar4) || (local_41 != this_00[0xb6a])) {
    if ((local_45 == 7) || (((local_45 == 0x13 || (iVar4 == 7)) || (iVar4 == 0x13)))) {
      PaintInfoBoat(this_00);
    }
    else {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(this_00 + 0x184),0,1,0,*(int *)(this_00 + 0x958),0,1,0,0x4e,0x20);
      PaintName(this_00,1);
      if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                   *(uint *)(this_00 + 0x98));
      }
    }
  }
  pCVar14 = this_00 + 0xb6f;
  pCVar13 = local_3c;
  do {
    CVar1 = *pCVar13;
    bVar15 = (byte)CVar1 < (byte)*pCVar14;
    if (CVar1 != *pCVar14) {
LAB_004ff875:
      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_004ff87a;
    }
    if (CVar1 == (CPanelTy)0x0) break;
    CVar1 = pCVar13[1];
    bVar15 = (byte)CVar1 < (byte)pCVar14[1];
    if (CVar1 != pCVar14[1]) goto LAB_004ff875;
    pCVar13 = pCVar13 + 2;
    pCVar14 = pCVar14 + 2;
  } while (CVar1 != (CPanelTy)0x0);
  iVar4 = 0;
LAB_004ff87a:
  if (iVar4 != 0) {
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x184),0,1,0,*(int *)(this_00 + 0x958),0,1,0,0x4e,0x20);
    PaintName(this_00,1);
    if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                 *(uint *)(this_00 + 0x98));
    }
  }
  if (local_2d != this_00[0xb7e]) {
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x184),0,1,0x1f,*(int *)(this_00 + 0x958),0,1,0x1f,0x4e,
               0x11);
    PaintLife(this_00,1);
    if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                 *(uint *)(this_00 + 0x98));
    }
  }
  if (((DAT_0080874e == '\x03') && (this_00[0xb6a] == (CPanelTy)0x3)) &&
     (local_2c != this_00[0xb7f])) {
    PaintEnergy(this_00,1);
  }
  iVar4 = *(int *)(this_00 + 0xb66);
  if (((iVar4 == 7) || (iVar4 == 0x13)) || (iVar4 == 0x1b)) {
    if (*(int *)(this_00 + 0xb81) != local_2a) {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(this_00 + 0x184),0,1,0x2f,*(int *)(this_00 + 0x958),0,1,0x2f,0x4e,
                 0x24);
      if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                   *(uint *)(this_00 + 0x98));
      }
    }
    iVar4 = *(int *)(this_00 + 0xb81);
    if (iVar4 == 0) goto LAB_004ffb91;
    if (iVar4 != local_2a) {
      uVar5 = thunk_FUN_00526ba0(iVar4,(char)this_00[0xb85]);
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2be),uVar5);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x184),0xb,0x31,'\x01',pbVar9);
      pbVar9 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2ca),1);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x184),10,0x30,'\x06',pbVar9);
      if (-1 < (int)*(uint *)(this_00 + 0x14c)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x14c),0xffffffff,*(uint *)(this_00 + 0x40),
                   *(uint *)(this_00 + 0x98));
      }
    }
    FUN_006b4170(*(int *)(this_00 + 0x184),0,0x3b,0x31,7,0x21,0);
    CVar1 = this_00[0xb86];
    cVar12 = (char)(((uint)(byte)CVar1 * 0x21) / 100);
    local_8 = CONCAT31(local_8._1_3_,cVar12);
    if ((CVar1 != (CPanelTy)0x0) && (cVar12 == '\0')) {
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    if ((byte)CVar1 < 0x46) {
      iVar4 = (-(uint)((byte)CVar1 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = local_8 & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x184),0,0x3c,0x52 - uVar5,*(int *)(this_00 + 0x28a),0,
               iVar4,*(int *)(*(int *)(this_00 + 0x28a) + 8) - uVar5,5,uVar5);
    uVar5 = *(uint *)(this_00 + 0x14c);
  }
  else {
    if ((((((short)local_2a == *(short *)(this_00 + 0xb81)) &&
          (local_26 == *(short *)(this_00 + 0xb85))) && (local_22 == *(short *)(this_00 + 0xb89)))
        && ((local_2a._2_2_ == *(short *)(this_00 + 0xb83) &&
            (local_24 == *(short *)(this_00 + 0xb87))))) &&
       (local_20 == *(short *)(this_00 + 0xb8b))) goto LAB_004ffb91;
    Library::DKW::WGR::FUN_006b55f0
              (*(undefined4 **)(this_00 + 0x184),0,1,0x2f,*(int *)(this_00 + 0x958),0,1,0x2f,0x4e,
               0x24);
    PaintWeap(this_00,1);
    uVar5 = *(uint *)(this_00 + 0x14c);
  }
  if (-1 < (int)uVar5) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,uVar5,0xffffffff,*(uint *)(this_00 + 0x40),*(uint *)(this_00 + 0x98));
  }
LAB_004ffb91:
  iVar4 = 5;
  bVar15 = true;
  pCVar13 = local_1e;
  pCVar14 = this_00 + 0xb8d;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar15 = *pCVar13 == *pCVar14;
    pCVar13 = pCVar13 + 1;
    pCVar14 = pCVar14 + 1;
  } while (bVar15);
  if (!bVar15) {
    PaintDeep(this_00,1);
    bVar3 = (DAT_0080874e == '\x03') + 2;
    local_8 = CONCAT31(local_8._1_3_,bVar3);
    if (bVar3 < 0xb) {
      uVar5 = (uint)bVar3;
      if (-1 < (int)*(uint *)(this_00 + uVar5 * 4 + 0x148)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + uVar5 * 4 + 0x148),0xffffffff,
                   *(uint *)(this_00 + uVar5 * 4 + 0x3c),*(uint *)(this_00 + uVar5 * 4 + 0x94));
      }
    }
  }
  g_currentExceptionFrame = local_90.previous;
  return;
}

