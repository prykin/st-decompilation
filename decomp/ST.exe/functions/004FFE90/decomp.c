
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update5Panel */

void __thiscall CPanelTy::Update5Panel(CPanelTy *this)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  CPanelTy *this_00;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  void *unaff_EDI;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  InternalExceptionFrame local_88;
  char local_44;
  char local_43;
  char local_42;
  int local_41;
  char local_3d;
  int local_3c;
  byte local_38 [15];
  char local_29;
  char local_28;
  char local_27;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  char local_1a [14];
  CPanelTy *local_c;
  byte local_8;
  undefined3 uStack_7;
  
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1c2,0,iVar6,&DAT_007a4ccc
                               ,s_CPanelTy__Update5Panel_007c24b8);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1c2);
    return;
  }
  puVar1 = &local_c->field_0C51;
  puVar8 = (undefined4 *)puVar1;
  pcVar10 = &local_44;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    pcVar10 = pcVar10 + 4;
  }
  *(undefined2 *)pcVar10 = *(undefined2 *)puVar8;
  puVar8 = (undefined4 *)puVar1;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,5,(AnonShape_0043BEB0_1C00EC12 *)puVar1);
  if (local_44 != this_00->field_0C51) {
    if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
    }
    if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
    }
    if (DAT_00801698 != (int *)0x0) {
      (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    if (DAT_00802a44 != (void *)0x0) {
      thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
    }
    SwitchTV(this_00,0);
    PaintInfoObj(this_00);
    g_currentExceptionFrame = local_88.previous;
    return;
  }
  if (this_00->field_0C6E != local_27) {
    if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
    }
    if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
    }
    if (DAT_00801698 != (int *)0x0) {
      (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    if (DAT_00802a44 != (void *)0x0) {
      thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
    }
  }
  cVar2 = this_00->field_0C51;
  if (((cVar2 == '\x01') || (cVar2 == '\x04')) || (cVar2 == '\x03')) {
    if (((local_3c != *(int *)&this_00->field_0xc59) || (local_43 != this_00->field_0C52)) ||
       (local_42 != this_00->field_0C53)) {
      if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
      }
      if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
      }
      if (DAT_00801698 != (int *)0x0) {
        (**(code **)(*DAT_00801698 + 0x1c))(0);
      }
      if (DAT_00802a44 != (void *)0x0) {
        thunk_FUN_00552160(DAT_00802a44,'\0','\0');
      }
      if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
      }
      SwitchTV(this_00,0);
    }
    if ((local_41 != this_00->field_0C54) || (local_3d != this_00->field_0C58)) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_019C,0,1,0,
                 (byte *)this_00->field_0B47,0,1,0,0x4e,0x20);
      PaintName(this_00,0);
      if (-1 < (int)this_00->field_0164) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
                   this_00->field_00B0);
      }
    }
    pbVar11 = &this_00->field_0C5D;
    pbVar9 = local_38;
    do {
      bVar5 = *pbVar9;
      bVar13 = bVar5 < *pbVar11;
      if (bVar5 != *pbVar11) {
LAB_00500121:
        iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00500126;
      }
      if (bVar5 == 0) break;
      bVar5 = pbVar9[1];
      bVar13 = bVar5 < pbVar11[1];
      if (bVar5 != pbVar11[1]) goto LAB_00500121;
      pbVar9 = pbVar9 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar5 != 0);
    iVar6 = 0;
LAB_00500126:
    if (iVar6 != 0) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_019C,0,1,0,
                 (byte *)this_00->field_0B47,0,1,0,0x4e,0x20);
      PaintName(this_00,0);
      if (-1 < (int)this_00->field_0164) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
                   this_00->field_00B0);
      }
    }
    if ((((local_29 != this_00->field_0C6C) || (local_42 != this_00->field_0C53)) &&
        (iVar6 = this_00->field_0C54, iVar6 != 0xdd)) && ((iVar6 != 0xde && (iVar6 != 0xe0)))) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_019C,0,1,0x1f,
                 (byte *)this_00->field_0B47,0,1,0x1f,0x4e,0x11);
      PaintLife(this_00,0);
      if (-1 < (int)this_00->field_0164) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
                   this_00->field_00B0);
      }
    }
    if (((DAT_0080874e == '\x03') && (this_00->field_0C58 == '\x03')) &&
       ((local_28 != this_00->field_0xc6d &&
        (((iVar6 = this_00->field_0C54, iVar6 != 0xdd && (iVar6 != 0xde)) && (iVar6 != 0xe0)))))) {
      PaintEnergy(this_00,0);
    }
    if (((((local_26 != this_00->field_0C6F) || (local_22 != this_00->field_0C73)) ||
         ((local_1e != this_00->field_0C77 ||
          ((local_24 != this_00->field_0C71 || (local_20 != this_00->field_0C75)))))) ||
        (local_1c != this_00->field_0C79)) &&
       (((iVar6 = this_00->field_0C54, iVar6 != 0xdd && (iVar6 != 0xde)) && (iVar6 != 0xe0)))) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B84D0_7C7D97C6 *)this_00->field_019C,0,1,0x2f,
                 (byte *)this_00->field_0B47,0,1,0x2f,0x4e,0x24);
      PaintWeap(this_00,0);
      if (-1 < (int)this_00->field_0164) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0164,0xffffffff,this_00->field_0058,
                   this_00->field_00B0);
      }
    }
    iVar6 = 5;
    bVar13 = true;
    pcVar10 = local_1a;
    pcVar12 = &this_00->field_0xc7b;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar13 = *pcVar10 == *pcVar12;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    } while (bVar13);
    if ((!bVar13) || (local_42 != this_00->field_0C53)) {
      PaintDeep(this_00,0);
      bVar5 = (DAT_0080874e != '\x03') + 5;
      _local_8 = CONCAT31(uStack_7,bVar5);
      if (bVar5 < 0xb) {
        uVar4 = (uint)bVar5;
        if (-1 < (int)(&this_00->field_0148)[uVar4]) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,(&this_00->field_0148)[uVar4],0xffffffff,
                     (&this_00->field_003C)[uVar4],*(uint *)(&this_00->field_0x94 + uVar4 * 4));
        }
      }
    }
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

