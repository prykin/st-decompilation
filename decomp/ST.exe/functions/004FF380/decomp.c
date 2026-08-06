#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::Update1Panel

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall CPanelTy::Update1Panel(CPanelTy *this)

{
  DArrayTy *pDVar1;
  ushort *puVar2;
  Global_sub_00526BA0_param_1Enum GVar3;
  CPanelTy *this_00;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  byte *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  bool bVar18;
  dword dVar19;
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
  DArrayTy *local_16;
  int local_10;
  uint local_c;
  uint local_8;

  local_90.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_90;
  local_4c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
  this_00 = local_4c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_90.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x167,0,iVar6,
                                "%s","CPanelTy::Update1Panel");
    if (iVar11 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar14 = (byte *)&local_4c->field_0B63;
  pcVar8 = &local_48;
  memmove(pcVar8, puVar14, 0x36); /* compiler REP MOVS byte copy */
  memset(&local_4c->field_0B63, 0, 0x32); /* compiler bulk-zero initialization */
  local_16 = local_4c->field_0B4B;
  Library::DKW::TBL::FUN_006afe40((int *)&local_16,&local_4c->field_0B95->flags);
  this_00->field_0B95->count = 0;
  this_00->field_0B4B = local_16;
  STAllPlayersC::GetPanelInfo
            (g_allPlayers_007FA174,1,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0B63);
  if (local_48 != this_00->field_0B63) {
    if (g_prodPanel_00801684 != nullptr) {
      ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
    }
    if (g_behPanel_00801678 != nullptr) {
      (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
    }
    if (g_sAMPanel_008016EC != nullptr) {
      (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
    }
    if (g_upgPanel_00802A48 != nullptr) {
      (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
    }
    if (g_frmPanel_0080168C != nullptr) {
      (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
    }
    SwitchTV(this_00,1);
    PaintInfoBoat(this_00);
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (this_00->field_0B80 != local_2b) {
    if (g_prodPanel_00801684 != nullptr) {
      ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
    }
    if (g_behPanel_00801678 != nullptr) {
      (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
    }
    if (g_sAMPanel_008016EC != nullptr) {
      (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
    }
    if (g_upgPanel_00802A48 != nullptr) {
      (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
    }
    if (g_frmPanel_0080168C != nullptr) {
      (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
    }
  }
  if (this_00->field_0B63 == '\x02') {
    if ((this_00->field_0B95->count != local_16->count) || (local_47 != this_00->field_0B64)) {
      SwitchTV(this_00,1);
    }
    iVar6 = 5;
    bVar18 = true;
    pcVar8 = local_1e;
    pcVar17 = &this_00->field_0xb8d;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar18 = *pcVar8 == *pcVar17;
      pcVar8 = pcVar8 + 1;
      pcVar17 = pcVar17 + 1;
    } while (bVar18);
    if (!bVar18) {
      PaintDeep(this_00,1);
      bVar5 = (DAT_0080874e == '\x03') + 2;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
      if (bVar5 < 0xb) {
        if (-1 < (int)this_00->field_0148[bVar5]) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[bVar5],0xffffffff,
                     (&this_00->field_003C)[bVar5],(&this_00->field_0094)[bVar5]);
        }
      }
    }
    uVar7 = FUN_006b5a50(local_16,(AnonShape_006B5A50_BD82F60D *)this_00->field_0B95);
    if (uVar7 != 0) {
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0,0,
                 (byte *)this_00->field_0958,0,0,0,*(int *)(this_00->field_0958 + 2),0x3c);
      dVar19 = this_00->field_0B95->count;
      pcVar8 = LoadResourceString(0x36b9,g_module_00807618);
      wsprintfA(*(LPSTR *)&this_00->field_0x213,"&1%s&0%d",pcVar8,dVar19);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0184,0,2,0xf,
                       *(int *)(this_00->field_0958 + 2) + -4,0x2d);
      ccFntTy::WrTxt(this_00->field_01B8,*(uint **)&this_00->field_0x213,-2,-1,0,-1,-1);
      if (-1 < (int)this_00->field_0148[1]) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[1],0xffffffff,
                   this_00->field_0040,this_00->field_0098);
      }
      if ((DAT_0080874e == '\x03') && (local_2c != this_00->field_0B7F)) {
        PaintEnergy(this_00,1);
      }
      local_10 = 1;
      local_c = 0;
      local_8 = local_16->count;
      if (local_8 != 0) {
        pDVar1 = this_00->field_0B95;
        uVar7 = pDVar1->count;
        do {
          if (local_c < local_8) {
            piVar9 = DArrayAt<int>(local_16, local_c);
          }
          else {
            piVar9 = nullptr;
          }
          uVar12 = 0;
          if (uVar7 != 0) {
            if (uVar7 == 0) {
              piVar10 = nullptr;
              goto LAB_004ff6e4;
            }
            do {
              piVar10 = DArrayAt<int>(pDVar1, uVar12);
LAB_004ff6e4:
              if (*piVar10 == *piVar9) {
                local_10 = 0;
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar7);
          }
          if (local_10 == 0) goto LAB_004ff723;
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
      if ((local_10 != 0) && (g_behPanel_00801678 != nullptr)) {
        (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
      }
    }
  }
LAB_004ff723:
  cVar13 = this_00->field_0B63;
  if (((cVar13 != '\x01') && (cVar13 != '\x04')) && (cVar13 != '\x03')) {
    g_currentExceptionFrame = local_90.previous;
    return;
  }
  if (((local_40 != this_00->field_0B6B) || (local_47 != this_00->field_0B64)) ||
     (local_46 != this_00->field_0B65)) {
    if (g_prodPanel_00801684 != nullptr) {
      ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
    }
    if (g_behPanel_00801678 != nullptr) {
      (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
    }
    if (g_sAMPanel_008016EC != nullptr) {
      (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
    }
    if (g_upgPanel_00802A48 != nullptr) {
      (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
    }
    if (g_frmPanel_0080168C != nullptr) {
      (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
    }
    SwitchTV(this_00,1);
  }
  iVar6 = this_00->field_0B66;
  if ((local_45 != iVar6) || (local_41 != this_00->field_0B6A)) {
    if ((local_45 == 7) || (((local_45 == 0x13 || (iVar6 == 7)) || (iVar6 == 0x13)))) {
      PaintInfoBoat(this_00);
    }
    else {
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0,
                 (byte *)this_00->field_0958,0,1,0,0x4e,0x20);
      PaintName(this_00,1);
      if (-1 < (int)this_00->field_0148[1]) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[1],0xffffffff,
                   this_00->field_0040,this_00->field_0098);
      }
    }
  }
  pbVar16 = &this_00->field_0B6F;
  pbVar15 = local_3c;
  do {
    bVar5 = *pbVar15;
    bVar18 = bVar5 < *pbVar16;
    if (bVar5 != *pbVar16) {
LAB_004ff875:
      iVar6 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
      goto LAB_004ff87a;
    }
    if (bVar5 == 0) break;
    bVar5 = pbVar15[1];
    bVar18 = bVar5 < pbVar16[1];
    if (bVar5 != pbVar16[1]) goto LAB_004ff875;
    pbVar15 = pbVar15 + 2;
    pbVar16 = pbVar16 + 2;
  } while (bVar5 != 0);
  iVar6 = 0;
LAB_004ff87a:
  if (iVar6 != 0) {
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0,
               (byte *)this_00->field_0958,0,1,0,0x4e,0x20);
    PaintName(this_00,1);
    if (-1 < (int)this_00->field_0148[1]) {
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[1],0xffffffff,
                 this_00->field_0040,this_00->field_0098);
    }
  }
  if (local_2d != this_00->field_0B7E) {
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0x1f,
               (byte *)this_00->field_0958,0,1,0x1f,0x4e,0x11);
    PaintLife(this_00,1);
    if (-1 < (int)this_00->field_0148[1]) {
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[1],0xffffffff,
                 this_00->field_0040,this_00->field_0098);
    }
  }
  if (((DAT_0080874e == '\x03') && (this_00->field_0B6A == '\x03')) &&
     (local_2c != this_00->field_0B7F)) {
    PaintEnergy(this_00,1);
  }
  iVar6 = this_00->field_0B66;
  if (((iVar6 == 7) || (iVar6 == 0x13)) || (iVar6 == 0x1b)) {
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81 != local_2a) {
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0x2f,
                 (byte *)this_00->field_0958,0,1,0x2f,0x4e,0x24);
      if (-1 < (int)this_00->field_0148[1]) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[1],0xffffffff,
                   this_00->field_0040,this_00->field_0098);
      }
    }
    GVar3 = *(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xb81;
    if (GVar3 == 0) goto cf_common_exit_004FFB91;
    if (GVar3 != local_2a) {
      uVar7 = thunk_FUN_00526ba0(GVar3,this_00->field_0xb85);
      pbVar15 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BE,uVar7
                                    );
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0xb,0x31,'\x01',pbVar15);
      pbVar15 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0184,10,0x30,'\x06',pbVar15);
      if (-1 < (int)this_00->field_0148[1]) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[1],0xffffffff,
                   this_00->field_0040,this_00->field_0098);
      }
    }
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0x3b,0x31,7,0x21,0);
    bVar5 = this_00->field_0xb86;
    cVar13 = (char)(((uint)bVar5 * 0x21) / 100);
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar13));
    if ((bVar5 != 0) && (cVar13 == '\0')) {
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
    }
    if (bVar5 < 0x46) {
      iVar6 = (-(uint)(bVar5 < 0x14) & 5) + 5;
    }
    else {
      iVar6 = 0;
    }
    uVar7 = local_8 & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,0x3c,0x52 - uVar7,
               (byte *)this_00->field_028A,0,iVar6,*(int *)(this_00->field_028A + 4) - uVar7,5,uVar7
              );
    puVar2 = this_00->field_0148[1];
  }
  else {
    if ((((((short)local_2a == *(short *)&this_00->field_0xb81) &&
          (local_26 == *(short *)&this_00->field_0xb85)) && (local_22 == this_00->field_0B89)) &&
        ((STPiece<2,2>(local_2a) == *(short *)&this_00->field_0xb83 && (local_24 == this_00->field_0B87))))
       && (local_20 == this_00->field_0B8B)) goto cf_common_exit_004FFB91;
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0184,0,1,0x2f,
               (byte *)this_00->field_0958,0,1,0x2f,0x4e,0x24);
    PaintWeap(this_00,1);
    puVar2 = this_00->field_0148[1];
  }
  if (-1 < (int)puVar2) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)puVar2,0xffffffff,this_00->field_0040,
               this_00->field_0098);
  }
cf_common_exit_004FFB91:
  iVar6 = 5;
  bVar18 = true;
  pcVar8 = local_1e;
  pcVar17 = &this_00->field_0xb8d;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar18 = *pcVar8 == *pcVar17;
    pcVar8 = pcVar8 + 1;
    pcVar17 = pcVar17 + 1;
  } while (bVar18);
  if (!bVar18) {
    PaintDeep(this_00,1);
    bVar5 = (DAT_0080874e == '\x03') + 2;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
    if (bVar5 < 0xb) {
      if (-1 < (int)this_00->field_0148[bVar5]) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[bVar5],0xffffffff,
                   (&this_00->field_003C)[bVar5],(&this_00->field_0094)[bVar5]);
      }
    }
  }
  g_currentExceptionFrame = local_90.previous;
  return;
}

