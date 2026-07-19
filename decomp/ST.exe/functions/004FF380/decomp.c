
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update1Panel */

void __thiscall CPanelTy::Update1Panel(CPanelTy *this)

{
  Global_sub_00526BA0_param_1Enum GVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  undefined4 unaff_ESI;
  undefined4 *puVar12;
  byte *pbVar13;
  char *pcVar14;
  void *unaff_EDI;
  byte *pbVar15;
  char *pcVar16;
  bool bVar17;
  undefined4 uVar18;
  InternalExceptionFrame local_90;
  CPanelTy *local_4c;
  char local_48;
  char local_47;
  char local_46;
  int local_45;
  char local_41;
  int local_40;
  byte local_3c [15];
  char local_2d;
  char local_2c;
  char local_2b;
  undefined4 local_2a;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  char local_1e [8];
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
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x167,0,iVar4,&DAT_007a4ccc
                               ,s_CPanelTy__Update1Panel_007c249c);
    if (iVar9 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x167);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar12 = (undefined4 *)&local_4c->field_0B63;
  pcVar14 = &local_48;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pcVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    pcVar14 = pcVar14 + 4;
  }
  *(undefined2 *)pcVar14 = *(undefined2 *)puVar12;
  puVar12 = (undefined4 *)&local_4c->field_0B63;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = 0;
  local_16 = *(int *)&local_4c->field_0xb4b;
  Library::DKW::TBL::FUN_006afe40(&local_16,*(uint **)&local_4c->field_0xb95);
  *(undefined4 *)(*(int *)&this_00->field_0xb95 + 0xc) = 0;
  *(int *)&this_00->field_0xb4b = local_16;
  STAllPlayersC::GetPanelInfo(DAT_007fa174,1,(int *)&this_00->field_0B63);
  if (local_48 != this_00->field_0B63) {
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
  if (this_00->field_0B80 != local_2b) {
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
  if (this_00->field_0B63 == '\x02') {
    if ((*(int *)(*(int *)&this_00->field_0xb95 + 0xc) != *(int *)(local_16 + 0xc)) ||
       (local_47 != this_00->field_0xb64)) {
      SwitchTV(this_00,1);
    }
    iVar4 = 5;
    bVar17 = true;
    pcVar14 = local_1e;
    pcVar16 = &this_00->field_0xb8d;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar17 = *pcVar14 == *pcVar16;
      pcVar14 = pcVar14 + 1;
      pcVar16 = pcVar16 + 1;
    } while (bVar17);
    if (!bVar17) {
      PaintDeep(this_00,1);
      bVar3 = (DAT_0080874e == '\x03') + 2;
      local_8 = CONCAT31(local_8._1_3_,bVar3);
      if (bVar3 < 0xb) {
        uVar5 = (uint)bVar3;
        if (-1 < (int)*(uint *)(&this_00->field_0x148 + uVar5 * 4)) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)(&this_00->field_0x148 + uVar5 * 4),0xffffffff,
                     *(uint *)(&this_00->field_0x3c + uVar5 * 4),
                     *(uint *)(&this_00->field_0x94 + uVar5 * 4));
        }
      }
    }
    uVar5 = FUN_006b5a50(local_16,*(int *)&this_00->field_0xb95);
    if (uVar5 != 0) {
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)this_00->field_0184,0,0,0,*(int *)&this_00->field_0x958,0,0,0,
                 *(int *)(*(int *)&this_00->field_0x958 + 4),0x3c);
      uVar18 = *(undefined4 *)(*(int *)&this_00->field_0xb95 + 0xc);
      uVar6 = FUN_006b0140(0x36b9,DAT_00807618);
      wsprintfA(*(LPSTR *)&this_00->field_0x213,s__1_s_0_d_007c245c,uVar6,uVar18);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0184,0,2,0xf,
                       *(int *)(*(int *)&this_00->field_0x958 + 4) + -4,0x2d);
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,*(uint **)&this_00->field_0x213,-2,-1,0,-1,
                     -1);
      if (-1 < (int)*(uint *)&this_00->field_0x14c) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)&this_00->field_0x14c,0xffffffff,this_00->field_0040,
                   this_00->field_0098);
      }
      if ((DAT_0080874e == '\x03') && (local_2c != this_00->field_0B7F)) {
        PaintEnergy(this_00,1);
      }
      local_10 = 1;
      local_c = 0;
      local_8 = *(uint *)(local_16 + 0xc);
      if (local_8 != 0) {
        iVar4 = *(int *)&this_00->field_0xb95;
        uVar5 = *(uint *)(iVar4 + 0xc);
        do {
          if (local_c < local_8) {
            piVar7 = (int *)(*(int *)(local_16 + 8) * local_c + *(int *)(local_16 + 0x1c));
          }
          else {
            piVar7 = (int *)0x0;
          }
          uVar10 = 0;
          if (uVar5 != 0) {
            if (uVar5 == 0) {
              piVar8 = (int *)0x0;
              goto LAB_004ff6e4;
            }
            do {
              piVar8 = (int *)(*(int *)(iVar4 + 8) * uVar10 + *(int *)(iVar4 + 0x1c));
LAB_004ff6e4:
              if (*piVar8 == *piVar7) {
                local_10 = 0;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar5);
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
  cVar11 = this_00->field_0B63;
  if (((cVar11 != '\x01') && (cVar11 != '\x04')) && (cVar11 != '\x03')) {
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (((local_40 != *(int *)&this_00->field_0xb6b) || (local_47 != this_00->field_0xb64)) ||
     (local_46 != this_00->field_0B65)) {
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
  iVar4 = *(int *)&this_00->field_0xb66;
  if ((local_45 != iVar4) || (local_41 != this_00->field_0xb6a)) {
    if ((local_45 == 7) || (((local_45 == 0x13 || (iVar4 == 7)) || (iVar4 == 0x13)))) {
      PaintInfoBoat(this_00);
    }
    else {
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)this_00->field_0184,0,1,0,*(int *)&this_00->field_0x958,0,1,0,0x4e,
                 0x20);
      PaintName(this_00,1);
      if (-1 < (int)*(uint *)&this_00->field_0x14c) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)&this_00->field_0x14c,0xffffffff,this_00->field_0040,
                   this_00->field_0098);
      }
    }
  }
  pbVar15 = &this_00->field_0xb6f;
  pbVar13 = local_3c;
  do {
    bVar3 = *pbVar13;
    bVar17 = bVar3 < *pbVar15;
    if (bVar3 != *pbVar15) {
LAB_004ff875:
      iVar4 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_004ff87a;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar13[1];
    bVar17 = bVar3 < pbVar15[1];
    if (bVar3 != pbVar15[1]) goto LAB_004ff875;
    pbVar13 = pbVar13 + 2;
    pbVar15 = pbVar15 + 2;
  } while (bVar3 != 0);
  iVar4 = 0;
LAB_004ff87a:
  if (iVar4 != 0) {
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_0184,0,1,0,*(int *)&this_00->field_0x958,0,1,0,0x4e,0x20
              );
    PaintName(this_00,1);
    if (-1 < (int)*(uint *)&this_00->field_0x14c) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)&this_00->field_0x14c,0xffffffff,this_00->field_0040,
                 this_00->field_0098);
    }
  }
  if (local_2d != this_00->field_0B7E) {
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_0184,0,1,0x1f,*(int *)&this_00->field_0x958,0,1,0x1f,
               0x4e,0x11);
    PaintLife(this_00,1);
    if (-1 < (int)*(uint *)&this_00->field_0x14c) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)&this_00->field_0x14c,0xffffffff,this_00->field_0040,
                 this_00->field_0098);
    }
  }
  if (((DAT_0080874e == '\x03') && (this_00->field_0xb6a == '\x03')) &&
     (local_2c != this_00->field_0B7F)) {
    PaintEnergy(this_00,1);
  }
  iVar4 = *(int *)&this_00->field_0xb66;
  if (((iVar4 == 7) || (iVar4 == 0x13)) || (iVar4 == 0x1b)) {
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81 != local_2a) {
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)this_00->field_0184,0,1,0x2f,*(int *)&this_00->field_0x958,0,1,0x2f,
                 0x4e,0x24);
      if (-1 < (int)*(uint *)&this_00->field_0x14c) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)&this_00->field_0x14c,0xffffffff,this_00->field_0040,
                   this_00->field_0098);
      }
    }
    GVar1 = *(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81;
    if (GVar1 == 0) goto LAB_004ffb91;
    if (GVar1 != local_2a) {
      uVar5 = thunk_FUN_00526ba0(GVar1,this_00->field_0xb85);
      pbVar13 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2be,uVar5);
      thunk_FUN_00540760((undefined4 *)this_00->field_0184,0xb,0x31,'\x01',pbVar13);
      pbVar13 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2ca,1);
      thunk_FUN_00540760((undefined4 *)this_00->field_0184,10,0x30,'\x06',pbVar13);
      if (-1 < (int)*(uint *)&this_00->field_0x14c) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)&this_00->field_0x14c,0xffffffff,this_00->field_0040,
                   this_00->field_0098);
      }
    }
    FUN_006b4170(this_00->field_0184,0,0x3b,0x31,7,0x21,0);
    bVar3 = this_00->field_0xb86;
    cVar11 = (char)(((uint)bVar3 * 0x21) / 100);
    local_8 = CONCAT31(local_8._1_3_,cVar11);
    if ((bVar3 != 0) && (cVar11 == '\0')) {
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    if (bVar3 < 0x46) {
      iVar4 = (-(uint)(bVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = local_8 & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_0184,0,0x3c,0x52 - uVar5,*(int *)&this_00->field_0x28a,0
               ,iVar4,*(int *)(*(int *)&this_00->field_0x28a + 8) - uVar5,5,uVar5);
    uVar5 = *(uint *)&this_00->field_0x14c;
  }
  else {
    if ((((((short)local_2a == *(short *)&this_00->field_0xb81) &&
          (local_26 == *(short *)&this_00->field_0xb85)) &&
         (local_22 == *(short *)&this_00->field_0xb89)) &&
        ((local_2a._2_2_ == *(short *)&this_00->field_0xb83 &&
         (local_24 == *(short *)&this_00->field_0xb87)))) &&
       (local_20 == *(short *)&this_00->field_0xb8b)) goto LAB_004ffb91;
    Library::DKW::WGR::FUN_006b55f0
              ((undefined4 *)this_00->field_0184,0,1,0x2f,*(int *)&this_00->field_0x958,0,1,0x2f,
               0x4e,0x24);
    PaintWeap(this_00,1);
    uVar5 = *(uint *)&this_00->field_0x14c;
  }
  if (-1 < (int)uVar5) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,uVar5,0xffffffff,this_00->field_0040,this_00->field_0098);
  }
LAB_004ffb91:
  iVar4 = 5;
  bVar17 = true;
  pcVar14 = local_1e;
  pcVar16 = &this_00->field_0xb8d;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar17 = *pcVar14 == *pcVar16;
    pcVar14 = pcVar14 + 1;
    pcVar16 = pcVar16 + 1;
  } while (bVar17);
  if (!bVar17) {
    PaintDeep(this_00,1);
    bVar3 = (DAT_0080874e == '\x03') + 2;
    local_8 = CONCAT31(local_8._1_3_,bVar3);
    if (bVar3 < 0xb) {
      uVar5 = (uint)bVar3;
      if (-1 < (int)*(uint *)(&this_00->field_0x148 + uVar5 * 4)) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(&this_00->field_0x148 + uVar5 * 4),0xffffffff,
                   *(uint *)(&this_00->field_0x3c + uVar5 * 4),
                   *(uint *)(&this_00->field_0x94 + uVar5 * 4));
      }
    }
  }
  g_currentExceptionFrame = local_90.previous;
  return;
}

