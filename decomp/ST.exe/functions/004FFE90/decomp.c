
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update5Panel */

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
  InternalExceptionFrame local_88;
  CPanelTy local_44;
  CPanelTy local_43;
  CPanelTy local_42;
  int local_41;
  CPanelTy local_3d;
  int local_3c;
  CPanelTy local_38 [15];
  CPanelTy local_29;
  CPanelTy local_28;
  CPanelTy local_27;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  CPanelTy local_1a [14];
  CPanelTy *local_c;
  byte local_8;
  undefined3 uStack_7;
  
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_c = this;
  iVar5 = __setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_88.previous;
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
  pCVar7 = local_c + 0xc51;
  pCVar9 = pCVar7;
  pCVar8 = &local_44;
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
  thunk_FUN_0043beb0(DAT_007fa174,5,(int *)pCVar7);
  if (local_44 != this_00[0xc51]) {
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
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  if (this_00[0xc6e] != local_27) {
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
    if (((local_3c != *(int *)(this_00 + 0xc59)) || (local_43 != this_00[0xc52])) ||
       (local_42 != this_00[0xc53])) {
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
    if ((local_41 != *(int *)(this_00 + 0xc54)) || (local_3d != this_00[0xc58])) {
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x19c),0,1,0,*(int *)(this_00 + 0xb47),0,1,0,0x4e,0x20
                  );
      PaintName(this_00,0);
      if (-1 < (int)*(uint *)(this_00 + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
                     *(uint *)(this_00 + 0xb0));
      }
    }
    pCVar9 = this_00 + 0xc5d;
    pCVar7 = local_38;
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
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x19c),0,1,0,*(int *)(this_00 + 0xb47),0,1,0,0x4e,0x20
                  );
      PaintName(this_00,0);
      if (-1 < (int)*(uint *)(this_00 + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
                     *(uint *)(this_00 + 0xb0));
      }
    }
    if ((((local_29 != this_00[0xc6c]) || (local_42 != this_00[0xc53])) &&
        (iVar5 = *(int *)(this_00 + 0xc54), iVar5 != 0xdd)) && ((iVar5 != 0xde && (iVar5 != 0xe0))))
    {
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x19c),0,1,0x1f,*(int *)(this_00 + 0xb47),0,1,0x1f,
                   0x4e,0x11);
      PaintLife(this_00,0);
      if (-1 < (int)*(uint *)(this_00 + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
                     *(uint *)(this_00 + 0xb0));
      }
    }
    if (((DAT_0080874e == '\x03') && (this_00[0xc58] == (CPanelTy)0x3)) &&
       ((local_28 != this_00[0xc6d] &&
        (((iVar5 = *(int *)(this_00 + 0xc54), iVar5 != 0xdd && (iVar5 != 0xde)) && (iVar5 != 0xe0)))
        ))) {
      PaintEnergy(this_00,0);
    }
    if (((((local_26 != *(short *)(this_00 + 0xc6f)) || (local_22 != *(short *)(this_00 + 0xc73)))
         || ((local_1e != *(short *)(this_00 + 0xc77) ||
             ((local_24 != *(short *)(this_00 + 0xc71) || (local_20 != *(short *)(this_00 + 0xc75)))
             )))) || (local_1c != *(short *)(this_00 + 0xc79))) &&
       (((iVar5 = *(int *)(this_00 + 0xc54), iVar5 != 0xdd && (iVar5 != 0xde)) && (iVar5 != 0xe0))))
    {
      FUN_006b55f0(*(undefined4 **)(this_00 + 0x19c),0,1,0x2f,*(int *)(this_00 + 0xb47),0,1,0x2f,
                   0x4e,0x24);
      PaintWeap(this_00,0);
      if (-1 < (int)*(uint *)(this_00 + 0x164)) {
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x164),0xffffffff,*(uint *)(this_00 + 0x58),
                     *(uint *)(this_00 + 0xb0));
      }
    }
    iVar5 = 5;
    bVar10 = true;
    pCVar7 = local_1a;
    pCVar9 = this_00 + 0xc7b;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar10 = *pCVar7 == *pCVar9;
      pCVar7 = pCVar7 + 1;
      pCVar9 = pCVar9 + 1;
    } while (bVar10);
    if ((!bVar10) || (local_42 != this_00[0xc53])) {
      PaintDeep(this_00,0);
      bVar4 = (DAT_0080874e != '\x03') + 5;
      _local_8 = CONCAT31(uStack_7,bVar4);
      if (bVar4 < 0xb) {
        uVar3 = (uint)bVar4;
        if (-1 < (int)*(uint *)(this_00 + uVar3 * 4 + 0x148)) {
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + uVar3 * 4 + 0x148),0xffffffff,
                       *(uint *)(this_00 + uVar3 * 4 + 0x3c),*(uint *)(this_00 + uVar3 * 4 + 0x94));
        }
      }
    }
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

