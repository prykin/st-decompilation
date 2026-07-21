#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintWeap */

void __thiscall CPanelTy::PaintWeap(CPanelTy *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  Global_sub_005259B0_param_1Enum GVar3;
  code *pcVar4;
  CPanelTy *pCVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  AnonShape_004F2560_DB98CB49 *pAVar14;
  undefined4 *puVar15;
  char *pcVar16;
  int iVar17;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar18;
  int iVar19;
  int iVar20;
  InternalExceptionFrame local_7c;
  CPanelTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  AnonShape_006B5B10_E0D06CF1 *local_20;
  uint local_1c;
  AnonShape_004F2560_DB98CB49 *local_18;
  int local_14;
  AnonShape_004F2560_E9671A44 *local_10;
  uint local_c;
  char local_5;

  local_18 = (AnonShape_004F2560_DB98CB49 *)&this->field_0B63;
  if (param_1 == 0) {
    local_20 = (AnonShape_006B5B10_E0D06CF1 *)this->field_019C;
    local_18 = (AnonShape_004F2560_DB98CB49 *)&this->field_0C51;
    local_28 = this->field_0058;
    local_2c = this->field_00B0;
  }
  else {
    local_20 = (AnonShape_006B5B10_E0D06CF1 *)this->field_0184;
    local_28 = this->field_0040;
    local_2c = this->field_0098;
  }
  local_30 = 5;
  local_14 = 0x2f;
  local_1c = 0;
  if (param_1 == 0) {
    local_24 = &this->field_0x664;
  }
  else {
    local_24 = &this->field_0x31c;
  }
  local_c = local_c & 0xffffff00;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_38 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  pAVar14 = local_18;
  pCVar5 = local_38;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar17 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x146,0,iVar6,&DAT_007a4ccc
                                ,s_CPanelTy__PaintWeap_007c1ae8);
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x146);
    return;
  }
  puVar15 = (undefined4 *)&local_38->field_0x31c;
  for (iVar6 = 0x46; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  iVar6 = local_30;
  if (local_18->field_0020 != 0) {
    uVar7 = thunk_FUN_005259b0(local_18->field_0020,local_18->field_0024,'\0');
    local_10 = (AnonShape_004F2560_E9671A44 *)
               FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_028E,uVar7);
    iVar6 = local_30;
    local_1c = -(uint)(pAVar14->field_0x7 != '\x03') & 5;
    local_34 = local_1c + local_14;
    DibPut(local_20,local_30,local_34,'\x06',(byte *)local_10);
    uVar2 = *(ushort *)(pAVar14 + 1);
    if (uVar2 != 0xffff) {
      wsprintfA(&pCVar5->field_0x1e1,&DAT_007c1890,(uint)uVar2);
      ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 0x2f,
                       (local_10->field_0008 + -0xc) / 2 + local_1c + local_14,0x11,0xc);
      ccFntTy::WrTxt(pCVar5->field_01B8,(uint *)&pCVar5->field_0x1e1,-3,-1,0,-1,-1);
      piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
      *piVar12 = iVar6 + 0x2f + local_28;
      piVar12[1] = local_34 + local_2c;
      piVar12[2] = 0x11;
      piVar12[3] = 0xc;
      UVar8 = thunk_FUN_00524fe0(local_18->field_0020);
      piVar12[6] = UVar8;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
    }
    piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + local_28;
    piVar12[1] = local_34 + local_2c;
    piVar12[2] = local_10->field_0004;
    piVar12[3] = local_10->field_0008;
    UVar8 = thunk_FUN_00524fe0(local_18->field_0020);
    piVar12[6] = UVar8;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
  }
  pAVar14 = local_18;
  GVar3 = local_18->field_001E;
  if (GVar3 == 0) {
    g_currentExceptionFrame = local_7c.previous;
    return;
  }
  if (GVar3 == 0xdd) {
    pAVar18 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_02D6;
    iVar17 = 0;
  }
  else {
    if (GVar3 != 0xde) {
      uVar7 = thunk_FUN_005259b0(GVar3,local_18->field_0022,'\0');
      local_10 = (AnonShape_004F2560_E9671A44 *)
                 FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_028E,uVar7);
      goto LAB_004f27ff;
    }
    pAVar18 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_02D6;
    iVar17 = 1;
  }
  local_10 = (AnonShape_004F2560_E9671A44 *)FUN_0070b3a0(pAVar18,iVar17);
LAB_004f27ff:
  switch(pAVar14->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar11 = local_14 + 2;
    iVar17 = iVar6 + 1;
    break;
  default:
    if (pAVar14->field_0020 == 0) {
      local_1c = (0x24 - local_10->field_0008) / 2;
    }
    else {
      local_1c = ((-(uint)(pAVar14->field_0x7 != '\x03') & 0xfffffffa) + 0x22) -
                 local_10->field_0008;
    }
    iVar11 = local_1c + local_14;
    iVar17 = iVar6;
  }
  DibPut(local_20,iVar17,iVar11,'\x06',(byte *)local_10);
  if (pAVar14->field_001E == 0xff) {
    ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 1,local_14 + 2,local_10->field_0004,
                     local_10->field_0008);
    iVar20 = -1;
    iVar19 = -1;
    uVar7 = 1;
    iVar11 = -1;
    iVar17 = -2;
    puVar9 = (uint *)LoadResourceString(0x2715,HINSTANCE_00807618);
    ccFntTy::WrTxt(pCVar5->field_01B8,puVar9,iVar17,iVar11,uVar7,iVar19,iVar20);
  }
  local_5 = '\x01';
  if (*(short *)&pAVar14->field_0x26 == -1) {
    switch(pAVar14->field_001E) {
    case 0xa3:
    case 0xa8:
    case 0xb2:
    case 0xbe:
    case 0xff:
      local_5 = '\0';
      break;
    default:
      uVar7 = 0xffffffff;
      pcVar13 = &DAT_007c1b00;
      do {
        pcVar16 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar16 + -uVar7;
      pcVar16 = &pCVar5->field_0x1e1;
      for (uVar10 = uVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar7 = uVar7 & 3; pAVar14 = local_18, iVar6 = local_30, uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar16 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar16 = pcVar16 + 1;
      }
    }
  }
  else {
    wsprintfA(&pCVar5->field_0x1e1,&DAT_007c1890,*(short *)&pAVar14->field_0x26);
  }
  if (local_5 != '\0') {
    local_34 = 0;
    if ((0x9b < (ushort)pAVar14->field_001E) && ((ushort)pAVar14->field_001E < 0x9f)) {
      local_34 = 4;
    }
    ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 0x2f,
                     (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14,0x11,0xc);
    ccFntTy::WrTxt(pCVar5->field_01B8,(uint *)&pCVar5->field_0x1e1,-3,-1,0,-1,-1);
    piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + 0x2f + local_28;
    piVar12[1] = (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14 + local_2c;
    piVar12[2] = 0x11;
    piVar12[3] = 0xc;
    UVar8 = thunk_FUN_00524fe0(local_18->field_001E);
    piVar12[6] = UVar8;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
    pAVar14 = local_18;
  }
  switch(pAVar14->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + 1 + local_28;
    piVar12[1] = local_14 + 2 + local_2c;
    break;
  default:
    piVar12 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar12 = iVar6 + local_28;
    piVar12[1] = local_1c + local_14 + local_2c;
  }
  piVar12[2] = local_10->field_0004;
  piVar12[3] = local_10->field_0008;
  UVar8 = thunk_FUN_00524fe0(pAVar14->field_001E);
  piVar12[6] = UVar8;
  g_currentExceptionFrame = local_7c.previous;
  return;
}

