#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintWeap

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::PaintWeap(CPanelTy *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  Global_sub_005259B0_param_1Enum GVar3;
  CPanelTy *pCVar5;
  int iVar6;
  uint local_EAX_218;
  UINT UVar6;
  uint uVar7;
  char *pcVar7_mg0;
  int iVar16;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  AnonShape_004F2560_DB98CB49 *pAVar12;
  char *pcVar14;
  int iVar15;
  uint uVar16;
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
  RecoveredSourceFamily_dibcopy *local_20;
  uint local_1c;
  AnonShape_004F2560_DB98CB49 *local_18;
  int local_14;
  AnonShape_004F2560_E9671A44 *local_10;
  uint local_c;
  char local_5;

  local_18 = (AnonShape_004F2560_DB98CB49 *)&this->field_0B63;
  if (param_1 == 0) {
    local_20 = (RecoveredSourceFamily_dibcopy *)this->field_019C;
    local_18 = (AnonShape_004F2560_DB98CB49 *)&this->field_0C51;
    local_28 = this->field_0058;
    local_2c = this->field_00B0;
  }
  else {
    local_20 = (RecoveredSourceFamily_dibcopy *)this->field_0184;
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
  pAVar12 = local_18;
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
  iVar7 = local_30;
  if (local_18->field_0020 != 0) {
    local_EAX_218 = thunk_FUN_005259b0(local_18->field_0020,local_18->field_0024,'\0');
    local_10 = (AnonShape_004F2560_E9671A44 *)
               FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_028E,local_EAX_218);
    iVar7 = local_30;
    local_1c = -(uint)(pAVar12->field_0x7 != '\x03') & 5;
    local_34 = local_1c + local_14;
    DibPut(local_20,local_30,local_34,'\x06',(byte *)local_10);
    uVar2 = *(ushort *)(pAVar12 + 1);
    if (uVar2 != 0xffff) {
      wsprintfA(&pCVar5->field_01E1,"%d",(uint)uVar2);
      ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar7 + 0x2f,
                       (local_10->field_0008 + -0xc) / 2 + local_1c + local_14,0x11,0xc);
      ccFntTy::WrTxt(pCVar5->field_01B8,&pCVar5->field_01E1,-3,-1,0,-1,-1);
      piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
      *piVar10 = iVar7 + 0x2f + local_28;
      piVar10[1] = local_34 + local_2c;
      piVar10[2] = 0x11;
      piVar10[3] = 0xc;
      UVar6 = thunk_FUN_00524fe0(local_18->field_0020);
      piVar10[6] = UVar6;
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
    }
    piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar10 = iVar7 + local_28;
    piVar10[1] = local_34 + local_2c;
    piVar10[2] = local_10->field_0004;
    piVar10[3] = local_10->field_0008;
    UVar6 = thunk_FUN_00524fe0(local_18->field_0020);
    piVar10[6] = UVar6;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
  }
  pAVar12 = local_18;
  GVar3 = local_18->field_001E;
  if (GVar3 == 0) {
    g_currentExceptionFrame = local_7c.previous;
    return;
  }
  if (GVar3 == 0xdd) {
    pAVar17 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_02D6;
    iVar15 = 0;
  }
  else {
    if (GVar3 != 0xde) {
      uVar7 = thunk_FUN_005259b0(GVar3,local_18->field_0022,'\0');
      local_10 = (AnonShape_004F2560_E9671A44 *)
                 FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_028E,uVar7);
      goto LAB_004f27ff;
    }
    pAVar17 = (AnonShape_GLOBAL_0081175C_57F682DD *)pCVar5->field_02D6;
    iVar15 = 1;
  }
  local_10 = (AnonShape_004F2560_E9671A44 *)FUN_0070b3a0(pAVar17,iVar15);
LAB_004f27ff:
  switch(pAVar12->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar9 = local_14 + 2;
    iVar15 = iVar7 + 1;
    break;
  default:
    if (pAVar12->field_0020 == 0) {
      local_1c = (0x24 - (((BITMAPINFO *)local_10)->bmiHeader).biHeight) / 2;
    }
    else {
      local_1c = ((-(uint)(pAVar12->field_0x7 != '\x03') & 0xfffffffa) + 0x22) -
                 (((BITMAPINFO *)local_10)->bmiHeader).biHeight;
    }
    iVar9 = local_1c + local_14;
    iVar15 = iVar7;
  }
  DibPut(local_20,iVar15,iVar9,'\x06',(byte *)local_10);
  if (pAVar12->field_001E == 0xff) {
    ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar7 + 1,local_14 + 2,local_10->field_0004,
                     local_10->field_0008);
    iVar19 = -1;
    iVar18 = -1;
    uVar16 = 1;
    iVar9 = -1;
    iVar15 = -2;
    pcVar7_mg0 = LoadResourceString(0x2715,g_hINSTANCE_00807618);
    ccFntTy::WrTxt(pCVar5->field_01B8,pcVar7_mg0,iVar15,iVar9,uVar16,iVar18,iVar19);
  }
  local_5 = '\x01';
  if (*(short *)&pAVar12->field_0x26 == -1) {
    switch(pAVar12->field_001E) {
    case 0xa3:
    case 0xa8:
    case 0xb2:
    case 0xbe:
    case 0xff:
      local_5 = '\0';
      break;
    default:
      uVar16 = 0xffffffff;
      pcVar11 = &CHAR___007c1b00;
      do {
        pcVar14 = pcVar11;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar14 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar14;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pcVar11 = pcVar14 + -uVar16;
      pcVar14 = &pCVar5->field_01E1;
      for (uVar8 = uVar16 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar16 = uVar16 & 3; pAVar12 = local_18, iVar7 = local_30, uVar16 != 0;
          uVar16 = uVar16 - 1) {
        *pcVar14 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  else {
    wsprintfA(&pCVar5->field_01E1,"%d",*(short *)&pAVar12->field_0x26);
  }
  if (local_5 != '\0') {
    local_34 = 0;
    if ((0x9b < (ushort)pAVar12->field_001E) && ((ushort)pAVar12->field_001E < 0x9f)) {
      local_34 = 4;
    }
    ccFntTy::SetSurf(pCVar5->field_01B8,(int)local_20,0,iVar7 + 0x2f,
                     (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14,0x11,0xc);
    ccFntTy::WrTxt(pCVar5->field_01B8,&pCVar5->field_01E1,-3,-1,0,-1,-1);
    piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar10 = iVar7 + 0x2f + local_28;
    piVar10[1] = (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14 + local_2c;
    piVar10[2] = 0x11;
    piVar10[3] = 0xc;
    UVar6 = thunk_FUN_00524fe0(local_18->field_001E);
    piVar10[6] = UVar6;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
    pAVar12 = local_18;
  }
  switch(pAVar12->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar10 = iVar7 + 1 + local_28;
    piVar10[1] = local_14 + 2 + local_2c;
    break;
  default:
    piVar10 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar10 = iVar7 + local_28;
    piVar10[1] = local_1c + local_14 + local_2c;
  }
  piVar10[2] = local_10->field_0004;
  piVar10[3] = local_10->field_0008;
  UVar6 = thunk_FUN_00524fe0(pAVar12->field_001E);
  piVar10[6] = UVar6;
  g_currentExceptionFrame = local_7c.previous;
  return;
}

