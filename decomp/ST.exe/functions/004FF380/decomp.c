#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update1Panel

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall CPanelTy::Update1Panel(CPanelTy *this)

{
  short sVar1;
  Global_sub_00526BA0_param_1Enum GVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 *puVar13;
  byte *pbVar14;
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
  AnonNested_005F5B80_0169_794156D7 *local_16;
  int local_10;
  uint local_c;
  uint local_8;

  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_4c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  this_00 = local_4c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_90.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x167,0,iVar5,
                                &DAT_007a4ccc,s_CPanelTy__Update1Panel_007c249c);
    if (iVar10 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar13 = (undefined4 *)&local_4c->field_0B63;
  pcVar7 = &local_48;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar7 = *puVar13;
    puVar13 = puVar13 + 1;
    pcVar7 = pcVar7 + 4;
  }
  *(undefined2 *)pcVar7 = *(undefined2 *)puVar13;
  puVar13 = (undefined4 *)&local_4c->field_0B63;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = 0;
  local_16 = (AnonNested_005F5B80_0169_794156D7 *)local_4c->field_0B4B;
  Library::DKW::TBL::FUN_006afe40((int *)&local_16,(uint *)local_4c->field_0B95);
  *(undefined4 *)(this_00->field_0B95 + 0xc) = 0;
  this_00->field_0B4B = (DArrayTy *)local_16;
  STAllPlayersC::GetPanelInfo
            (g_sTAllPlayers_007FA174,1,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0B63);
  if (local_48 != this_00->field_0B63) {
    if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    SwitchTV(this_00,1);
    PaintInfoBoat(this_00);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (this_00->field_0B80 != local_2b) {
    if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
  }
  if (this_00->field_0B63 == '\x02') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)(this_00->field_0B95 + 0xc) != local_16->field_000C) ||
       (local_47 != this_00->field_0B64)) {
      SwitchTV(this_00,1);
    }
    iVar5 = 5;
    bVar17 = true;
    pcVar7 = local_1e;
    pcVar16 = &this_00->field_0xb8d;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar17 = *pcVar7 == *pcVar16;
      pcVar7 = pcVar7 + 1;
      pcVar16 = pcVar16 + 1;
    } while (bVar17);
    if (!bVar17) {
      PaintDeep(this_00,1);
      bVar4 = (DAT_0080874e == '\x03') + 2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(local_8._1_3_,bVar4);
      if (bVar4 < 0xb) {
        uVar6 = (uint)bVar4;
        if (-1 < (int)(&this_00->field_0148)[uVar6]) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,(&this_00->field_0148)[uVar6],0xffffffff,
                     (&this_00->field_003C)[uVar6],*(uint *)(&this_00->field_0x94 + uVar6 * 4));
        }
      }
    }
    uVar6 = FUN_006b5a50((AnonShape_006B5A50_BD82F60D *)local_16,
                         (AnonShape_006B5A50_BD82F60D *)this_00->field_0B95);
    if (uVar6 != 0) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,0,0,
                 (byte *)this_00->field_0958,0,0,0,*(int *)(this_00->field_0958 + 2),0x3c);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar18 = *(undefined4 *)(this_00->field_0B95 + 0xc);
      pcVar7 = LoadResourceString(0x36b9,HINSTANCE_00807618);
      wsprintfA(*(LPSTR *)&this_00->field_0x213,s__1_s_0_d_007c245c,pcVar7,uVar18);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0184,0,2,0xf,
                       *(int *)(this_00->field_0958 + 2) + -4,0x2d);
      ccFntTy::WrTxt(this_00->field_01B8,*(uint **)&this_00->field_0x213,-2,-1,0,-1,-1);
      if (-1 < (int)this_00->field_014C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_014C,0xffffffff,this_00->field_0040,
                   this_00->field_0098);
      }
      if ((DAT_0080874e == '\x03') && (local_2c != this_00->field_0B7F)) {
        PaintEnergy(this_00,1);
      }
      local_10 = 1;
      local_c = 0;
      local_8 = local_16->field_000C;
      if (local_8 != 0) {
        iVar5 = this_00->field_0B95;
        uVar6 = *(uint *)(iVar5 + 0xc);
        do {
          if (local_c < local_8) {
            piVar8 = (int *)(local_16->field_0008 * local_c + local_16->field_001C);
          }
          else {
            piVar8 = (int *)0x0;
          }
          uVar11 = 0;
          if (uVar6 != 0) {
            if (uVar6 == 0) {
              piVar9 = (int *)0x0;
              goto LAB_004ff6e4;
            }
            do {
              piVar9 = (int *)(*(int *)(iVar5 + 8) * uVar11 + *(int *)(iVar5 + 0x1c));
LAB_004ff6e4:
              if (*piVar9 == *piVar8) {
                local_10 = 0;
                break;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar6);
          }
          if (local_10 == 0) goto LAB_004ff723;
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
      if ((local_10 != 0) && (DAT_00801678 != (int *)0x0)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*DAT_00801678 + 0x1c))(0);
      }
    }
  }
LAB_004ff723:
  cVar12 = this_00->field_0B63;
  if (((cVar12 != '\x01') && (cVar12 != '\x04')) && (cVar12 != '\x03')) {
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (((local_40 != *(int *)&this_00->field_0xb6b) || (local_47 != this_00->field_0B64)) ||
     (local_46 != this_00->field_0B65)) {
    if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
      ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
    }
    if (DAT_00801678 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    if (DAT_008016ec != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    if (DAT_00802a48 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    if (DAT_0080168c != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    SwitchTV(this_00,1);
  }
  iVar5 = this_00->field_0B66;
  if ((local_45 != iVar5) || (local_41 != this_00->field_0B6A)) {
    if ((local_45 == 7) || (((local_45 == 0x13 || (iVar5 == 7)) || (iVar5 == 0x13)))) {
      PaintInfoBoat(this_00);
    }
    else {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,1,0,
                 (byte *)this_00->field_0958,0,1,0,0x4e,0x20);
      PaintName(this_00,1);
      if (-1 < (int)this_00->field_014C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_014C,0xffffffff,this_00->field_0040,
                   this_00->field_0098);
      }
    }
  }
  pbVar15 = &this_00->field_0B6F;
  pbVar14 = local_3c;
  do {
    bVar4 = *pbVar14;
    bVar17 = bVar4 < *pbVar15;
    if (bVar4 != *pbVar15) {
LAB_004ff875:
      iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_004ff87a;
    }
    if (bVar4 == 0) break;
    bVar4 = pbVar14[1];
    bVar17 = bVar4 < pbVar15[1];
    if (bVar4 != pbVar15[1]) goto LAB_004ff875;
    pbVar14 = pbVar14 + 2;
    pbVar15 = pbVar15 + 2;
  } while (bVar4 != 0);
  iVar5 = 0;
LAB_004ff87a:
  if (iVar5 != 0) {
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,1,0,(byte *)this_00->field_0958,
               0,1,0,0x4e,0x20);
    PaintName(this_00,1);
    if (-1 < (int)this_00->field_014C) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_014C,0xffffffff,this_00->field_0040,this_00->field_0098
                );
    }
  }
  if (local_2d != this_00->field_0B7E) {
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,1,0x1f,
               (byte *)this_00->field_0958,0,1,0x1f,0x4e,0x11);
    PaintLife(this_00,1);
    if (-1 < (int)this_00->field_014C) {
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_014C,0xffffffff,this_00->field_0040,this_00->field_0098
                );
    }
  }
  if (((DAT_0080874e == '\x03') && (this_00->field_0B6A == '\x03')) &&
     (local_2c != this_00->field_0B7F)) {
    PaintEnergy(this_00,1);
  }
  iVar5 = this_00->field_0B66;
  if (((iVar5 == 7) || (iVar5 == 0x13)) || (iVar5 == 0x1b)) {
    if (this_00->field_0B81 != local_2a) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,1,0x2f,
                 (byte *)this_00->field_0958,0,1,0x2f,0x4e,0x24);
      if (-1 < (int)this_00->field_014C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_014C,0xffffffff,this_00->field_0040,
                   this_00->field_0098);
      }
    }
    GVar2 = this_00->field_0B81;
    if (GVar2 == 0) goto cf_common_exit_004FFB91;
    if (GVar2 != local_2a) {
      uVar6 = thunk_FUN_00526ba0(GVar2,this_00->field_0B85);
      pbVar14 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BE,uVar6
                                    );
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0xb,0x31,'\x01',pbVar14);
      pbVar14 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,10,0x30,'\x06',pbVar14);
      if (-1 < (int)this_00->field_014C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_014C,0xffffffff,this_00->field_0040,
                   this_00->field_0098);
      }
    }
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,0x3b,0x31,7,0x21,0);
    bVar4 = this_00->field_0B86;
    cVar12 = (char)(((uint)bVar4 * 0x21) / 100);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = CONCAT31(local_8._1_3_,cVar12);
    if ((bVar4 != 0) && (cVar12 == '\0')) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    if (bVar4 < 0x46) {
      iVar5 = (-(uint)(bVar4 < 0x14) & 5) + 5;
    }
    else {
      iVar5 = 0;
    }
    uVar6 = local_8 & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,0x3c,0x52 - uVar6,
               (byte *)this_00->field_028A,0,iVar5,*(int *)(this_00->field_028A + 4) - uVar6,5,uVar6
              );
    uVar6 = this_00->field_014C;
  }
  else {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((((((short)local_2a == *(short *)&this_00->field_0B81) &&
          (sVar1._0_1_ = this_00->field_0B85, sVar1._1_1_ = this_00->field_0B86, local_26 == sVar1))
         && (local_22 == *(short *)&this_00->field_0xb89)) &&
        ((local_2a._2_2_ == *(short *)((int)&this_00->field_0B81 + 2) &&
         (local_24 == *(short *)&this_00->field_0xb87)))) &&
       (local_20 == *(short *)&this_00->field_0xb8b)) goto cf_common_exit_004FFB91;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0184,0,1,0x2f,
               (byte *)this_00->field_0958,0,1,0x2f,0x4e,0x24);
    PaintWeap(this_00,1);
    uVar6 = this_00->field_014C;
  }
  if (-1 < (int)uVar6) {
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,uVar6,0xffffffff,this_00->field_0040,this_00->field_0098);
  }
cf_common_exit_004FFB91:
  iVar5 = 5;
  bVar17 = true;
  pcVar7 = local_1e;
  pcVar16 = &this_00->field_0xb8d;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar17 = *pcVar7 == *pcVar16;
    pcVar7 = pcVar7 + 1;
    pcVar16 = pcVar16 + 1;
  } while (bVar17);
  if (!bVar17) {
    PaintDeep(this_00,1);
    bVar4 = (DAT_0080874e == '\x03') + 2;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = CONCAT31(local_8._1_3_,bVar4);
    if (bVar4 < 0xb) {
      uVar6 = (uint)bVar4;
      if (-1 < (int)(&this_00->field_0148)[uVar6]) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,(&this_00->field_0148)[uVar6],0xffffffff,
                   (&this_00->field_003C)[uVar6],*(uint *)(&this_00->field_0x94 + uVar6 * 4));
      }
    }
  }
  g_currentExceptionFrame = local_90.previous;
  return;
}

