
void __thiscall CPanelTy::Update5Panel(CPanelTy *this)

{
  CPanelTy CVar1;
  code *pcVar2;
  uint uVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  CPanelTy *pCVar7;
  void *unaff_EDI;
  CPanelTy *pCVar8;
  CPanelTy *pCVar9;
  bool bVar10;
  InternalExceptionFrame IStack_88;
  CPanelTy CStack_44;
  CPanelTy CStack_43;
  CPanelTy CStack_42;
  int iStack_41;
  CPanelTy CStack_3d;
  int iStack_3c;
  CPanelTy aCStack_38 [15];
  CPanelTy CStack_29;
  CPanelTy CStack_28;
  CPanelTy CStack_27;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  CPanelTy aCStack_1a [14];
  CPanelTy *pCStack_c;
  byte bStack_8;
  undefined3 uStack_7;
  
  IStack_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_88;
  pCStack_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pCStack_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_88.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1c2,0,iVar5,&DAT_007a4ccc
                               ,s_CPanelTy__Update5Panel_007c24b8);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1c2);
    return;
  }
  pCVar7 = pCStack_c + 0xc51;
  pCVar9 = pCVar7;
  pCVar8 = &CStack_44;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(int *)pCVar8 = *(int *)pCVar9;
    pCVar9 = pCVar9 + 4;
    pCVar8 = pCVar8 + 4;
  }
  *(undefined2 *)pCVar8 = *(undefined2 *)pCVar9;
  pCVar9 = pCVar7;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(int *)pCVar9 = 0;
    pCVar9 = pCVar9 + 4;
  }
  *(undefined2 *)pCVar9 = 0;
  STAllPlayersC::GetPanelInfo(DAT_007fa174,5,(int *)pCVar7);
  if (CStack_44 != this_00[0xc51]) {
    if (DAT_008016e8 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_008016e8,'\0');
    }
    if (DAT_0080167c != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_0080167c,'\0');
    }
    if (DAT_00801698 != (int *)0x0) {
      (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    if (DAT_00802a44 != (void *)0x0) {
      thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    if (DAT_00801680 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_00801680,'\0');
    }
    SwitchTV(this_00,0);
    PaintInfoObj(this_00);
    g_currentExceptionFrame = IStack_88.previous;
    return;
  }
  if (this_00[0xc6e] != CStack_27) {
    if (DAT_008016e8 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_008016e8,'\0');
    }
    if (DAT_0080167c != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_0080167c,'\0');
    }
    if (DAT_00801698 != (int *)0x0) {
      (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    if (DAT_00802a44 != (void *)0x0) {
      thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    if (DAT_00801680 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(DAT_00801680,'\0');
    }
  }
  CVar1 = this_00[0xc51];
  if (((CVar1 == (CPanelTy)0x1) || (CVar1 == (CPanelTy)0x4)) || (CVar1 == (CPanelTy)0x3)) {
    if (((iStack_3c != *(int *)(this_00 + 0xc59)) || (CStack_43 != this_00[0xc52])) ||
       (CStack_42 != this_00[0xc53])) {
      if (DAT_008016e8 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(DAT_008016e8,'\0');
      }
      if (DAT_0080167c != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(DAT_0080167c,'\0');
      }
      if (DAT_00801698 != (int *)0x0) {
        (**(code **)(*DAT_00801698 + 0x1c))(0);
      }
      if (DAT_00802a44 != (void *)0x0) {
        thunk_FUN_00552160(DAT_00802a44,'\0','\0');
      }
      if (DAT_00801680 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(DAT_00801680,'\0');
      }
      SwitchTV(this_00,0);
    }
    if ((iStack_41 != *(int *)(this_00 + 0xc54)) || (CStack_3d != this_00[0xc58])) {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(this_00 + 0x19c),0,1,0,*(int *)(this_00 + 0xb47),0,1,0,0x4e,0x20);
      PaintName(this_00,0);
      if (-1 < (int)*(uint *)(this_00 + 0x164)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
                   *(uint *)(this_00 + 0xb0));
      }
    }
    pCVar9 = this_00 + 0xc5d;
    pCVar7 = aCStack_38;
    do {
      CVar1 = *pCVar7;
      bVar10 = (byte)CVar1 < (byte)*pCVar9;
      if (CVar1 != *pCVar9) {
LAB_00500121:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00500126;
      }
      if (CVar1 == (CPanelTy)0x0) break;
      CVar1 = pCVar7[1];
      bVar10 = (byte)CVar1 < (byte)pCVar9[1];
      if (CVar1 != pCVar9[1]) goto LAB_00500121;
      pCVar7 = pCVar7 + 2;
      pCVar9 = pCVar9 + 2;
    } while (CVar1 != (CPanelTy)0x0);
    iVar5 = 0;
LAB_00500126:
    if (iVar5 != 0) {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(this_00 + 0x19c),0,1,0,*(int *)(this_00 + 0xb47),0,1,0,0x4e,0x20);
      PaintName(this_00,0);
      if (-1 < (int)*(uint *)(this_00 + 0x164)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
                   *(uint *)(this_00 + 0xb0));
      }
    }
    if ((((CStack_29 != this_00[0xc6c]) || (CStack_42 != this_00[0xc53])) &&
        (iVar5 = *(int *)(this_00 + 0xc54), iVar5 != 0xdd)) && ((iVar5 != 0xde && (iVar5 != 0xe0))))
    {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(this_00 + 0x19c),0,1,0x1f,*(int *)(this_00 + 0xb47),0,1,0x1f,0x4e,
                 0x11);
      PaintLife(this_00,0);
      if (-1 < (int)*(uint *)(this_00 + 0x164)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
                   *(uint *)(this_00 + 0xb0));
      }
    }
    if (((DAT_0080874e == '\x03') && (this_00[0xc58] == (CPanelTy)0x3)) &&
       ((CStack_28 != this_00[0xc6d] &&
        (((iVar5 = *(int *)(this_00 + 0xc54), iVar5 != 0xdd && (iVar5 != 0xde)) && (iVar5 != 0xe0)))
        ))) {
      PaintEnergy(this_00,0);
    }
    if (((((sStack_26 != *(short *)(this_00 + 0xc6f)) || (sStack_22 != *(short *)(this_00 + 0xc73)))
         || ((sStack_1e != *(short *)(this_00 + 0xc77) ||
             ((sStack_24 != *(short *)(this_00 + 0xc71) ||
              (sStack_20 != *(short *)(this_00 + 0xc75))))))) ||
        (sStack_1c != *(short *)(this_00 + 0xc79))) &&
       (((iVar5 = *(int *)(this_00 + 0xc54), iVar5 != 0xdd && (iVar5 != 0xde)) && (iVar5 != 0xe0))))
    {
      Library::DKW::WGR::FUN_006b55f0
                (*(undefined4 **)(this_00 + 0x19c),0,1,0x2f,*(int *)(this_00 + 0xb47),0,1,0x2f,0x4e,
                 0x24);
      PaintWeap(this_00,0);
      if (-1 < (int)*(uint *)(this_00 + 0x164)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
                   *(uint *)(this_00 + 0xb0));
      }
    }
    iVar5 = 5;
    bVar10 = true;
    pCVar7 = aCStack_1a;
    pCVar9 = this_00 + 0xc7b;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar10 = *pCVar7 == *pCVar9;
      pCVar7 = pCVar7 + 1;
      pCVar9 = pCVar9 + 1;
    } while (bVar10);
    if ((!bVar10) || (CStack_42 != this_00[0xc53])) {
      PaintDeep(this_00,0);
      bVar4 = (DAT_0080874e != '\x03') + 5;
      _bStack_8 = CONCAT31(uStack_7,bVar4);
      if (bVar4 < 0xb) {
        uVar3 = (uint)bVar4;
        if (-1 < (int)*(uint *)(this_00 + uVar3 * 4 + 0x148)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(this_00 + uVar3 * 4 + 0x148),0xffffffff,
                     *(uint *)(this_00 + uVar3 * 4 + 0x3c),*(uint *)(this_00 + uVar3 * 4 + 0x94));
        }
      }
    }
  }
  g_currentExceptionFrame = IStack_88.previous;
  return;
}

