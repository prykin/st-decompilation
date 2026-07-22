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
  uint *resourceString;
  uint uVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  AnonShape_004F2560_DB98CB49 *pAVar13;
  char *pcVar15;
  int iVar16;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar17;
  int iVar18;
  int iVar19;
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
  pAVar13 = local_18;
  pCVar5 = local_38;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x146,0,iVar6,"%s"
                                ,"CPanelTy::PaintWeap");
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x146);
    return;
  }
  memset(&local_38->field_0x31c, 0, 0x118); /* compiler bulk-zero initialization */
  iVar6 = local_30;
  if (local_18->field_0020 != 0) {
    uVar7 = thunk_FUN_005259b0(local_18->field_0020,local_18->field_0024,'\0');
    local_10 = (AnonShape_004F2560_E9671A44 *)
               FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_028E,uVar7);
    iVar6 = local_30;
    local_1c = -(uint)(pAVar13->field_0x7 != '\x03') & 5;
    local_34 = local_1c + local_14;
    DibPut(local_20,local_30,local_34,'\x06',(byte *)local_10);
    uVar2 = *(ushort *)(pAVar13 + 1);
    if (uVar2 != 0xffff) {
      wsprintfA(&pCVar5->field_0x1e1,"%d",(uint)uVar2);
      ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 0x2f,
                       (local_10->field_0008 + -0xc) / 2 + local_1c + local_14,0x11,0xc);
      ccFntTy::WrTxt(pCVar5->field_01B8,(uint *)&pCVar5->field_0x1e1,-3,-1,0,-1,-1);
      piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
      *piVar11 = iVar6 + 0x2f + local_28;
      piVar11[1] = local_34 + local_2c;
      piVar11[2] = 0x11;
      piVar11[3] = 0xc;
      UVar8 = thunk_FUN_00524fe0(local_18->field_0020);
      piVar11[6] = UVar8;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
    }
    piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar11 = iVar6 + local_28;
    piVar11[1] = local_34 + local_2c;
    piVar11[2] = local_10->field_0004;
    piVar11[3] = local_10->field_0008;
    UVar8 = thunk_FUN_00524fe0(local_18->field_0020);
    piVar11[6] = UVar8;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
  }
  pAVar13 = local_18;
  GVar3 = local_18->field_001E;
  if (GVar3 == 0) {
    g_currentExceptionFrame = local_7c.previous;
    return;
  }
  if (GVar3 == 0xdd) {
    pAVar17 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_02D6;
    iVar16 = 0;
  }
  else {
    if (GVar3 != 0xde) {
      uVar7 = thunk_FUN_005259b0(GVar3,local_18->field_0022,'\0');
      local_10 = (AnonShape_004F2560_E9671A44 *)
                 FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_028E,uVar7);
      goto LAB_004f27ff;
    }
    pAVar17 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_02D6;
    iVar16 = 1;
  }
  local_10 = (AnonShape_004F2560_E9671A44 *)FUN_0070b3a0(pAVar17,iVar16);
LAB_004f27ff:
  switch(pAVar13->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar10 = local_14 + 2;
    iVar16 = iVar6 + 1;
    break;
  default:
    if (pAVar13->field_0020 == 0) {
      local_1c = (0x24 - local_10->field_0008) / 2;
    }
    else {
      local_1c = ((-(uint)(pAVar13->field_0x7 != '\x03') & 0xfffffffa) + 0x22) -
                 local_10->field_0008;
    }
    iVar10 = local_1c + local_14;
    iVar16 = iVar6;
  }
  DibPut(local_20,iVar16,iVar10,'\x06',(byte *)local_10);
  if (pAVar13->field_001E == 0xff) {
    ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 1,local_14 + 2,local_10->field_0004,
                     local_10->field_0008);
    iVar19 = -1;
    iVar18 = -1;
    uVar7 = 1;
    iVar10 = -1;
    iVar16 = -2;
    resourceString = (uint *)LoadResourceString(0x2715,g_module_00807618);
    ccFntTy::WrTxt(pCVar5->field_01B8,resourceString,iVar16,iVar10,uVar7,iVar18,iVar19);
  }
  local_5 = '\x01';
  if (*(short *)&pAVar13->field_0x26 == -1) {
    switch(pAVar13->field_001E) {
    case 0xa3:
    case 0xa8:
    case 0xb2:
    case 0xbe:
    case 0xff:
      local_5 = '\0';
      break;
    default:
      uVar7 = 0xffffffff;
      pcVar12 = &DAT_007c1b00;
      do {
        pcVar15 = pcVar12;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar15;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar12 = pcVar15 + -uVar7;
      pcVar15 = &pCVar5->field_0x1e1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; pAVar13 = local_18, iVar6 = local_30, uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
  }
  else {
    wsprintfA(&pCVar5->field_0x1e1,"%d",*(short *)&pAVar13->field_0x26);
  }
  if (local_5 != '\0') {
    local_34 = 0;
    if ((0x9b < (ushort)pAVar13->field_001E) && ((ushort)pAVar13->field_001E < 0x9f)) {
      local_34 = 4;
    }
    ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar6 + 0x2f,
                     (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14,0x11,0xc);
    ccFntTy::WrTxt(pCVar5->field_01B8,(uint *)&pCVar5->field_0x1e1,-3,-1,0,-1,-1);
    piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar11 = iVar6 + 0x2f + local_28;
    piVar11[1] = (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14 + local_2c;
    piVar11[2] = 0x11;
    piVar11[3] = 0xc;
    UVar8 = thunk_FUN_00524fe0(local_18->field_001E);
    piVar11[6] = UVar8;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
    pAVar13 = local_18;
  }
  switch(pAVar13->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar11 = iVar6 + 1 + local_28;
    piVar11[1] = local_14 + 2 + local_2c;
    break;
  default:
    piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar11 = iVar6 + local_28;
    piVar11[1] = local_1c + local_14 + local_2c;
  }
  piVar11[2] = local_10->field_0004;
  piVar11[3] = local_10->field_0008;
  UVar8 = thunk_FUN_00524fe0(pAVar13->field_001E);
  piVar11[6] = UVar8;
  g_currentExceptionFrame = local_7c.previous;
  return;
}

