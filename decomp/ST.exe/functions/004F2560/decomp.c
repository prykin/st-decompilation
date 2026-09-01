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
  int local_EAX_218;
  int iVar7;
  int uVar7;
  char *pcVar7_mg0;
  int iVar16;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  AnonShape_004F2560_DB98CB49 *pAVar13;
  char *pcVar15;
  uint uVar16;
  RecoveredGlobalRecordView_0081175C *pRVar17;
  int iVar18;
  int iVar19;
  InternalExceptionFrame local_7c;
  CPanelTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  uint local_1c;
  AnonShape_004F2560_DB98CB49 *local_18;
  int local_14;
  AnonShape_004F2560_E9671A44 *local_10;
  uint local_c;
  char local_5;

  local_18 = (AnonShape_004F2560_DB98CB49 *)&this->field_0B63;
  if (param_1 == 0) {
    local_20 = this->field_019C;
    local_18 = (AnonShape_004F2560_DB98CB49 *)&this->field_0C51;
    local_28 = this->field_0058;
    local_2c = this->field_00B0;
  }
  else {
    local_20 = this->field_0184;
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
  iVar8 = local_30;
  if (local_18->field_0020 != 0) {

    local_EAX_218 = thunk_FUN_005259b0(local_18->field_0020,local_18->field_0024,'\0');
    local_10 = (AnonShape_004F2560_E9671A44 *)
               /* ST_CALLSITE[004F2647]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
               FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar5->field_028E,local_EAX_218);
    iVar8 = local_30;
    local_1c = -(uint)(pAVar13->field_0x7 != '\x03') & 5;
    local_34 = local_1c + local_14;
    /* ST_CALLSITE[004F2673]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)local_20,local_30,local_34,'\x06',
           (RecoveredRecordView_006B84D0_87AF9D9B *)local_10);
    uVar2 = *(ushort *)(pAVar13 + 1);
    if (uVar2 != 0xffff) {
      /* ST_CALLSITE[004F269B]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&pCVar5->field_01E1,"%d",(uint)uVar2);

      ccFntTy::SetSurf(pCVar5->field_01B8,local_20,0,iVar8 + 0x2f,
                       (local_10->field_0008 + -0xc) / 2 + local_1c + local_14,0x11,0xc);

      ccFntTy::WrTxt(pCVar5->field_01B8,&pCVar5->field_01E1,-3,-1,0,-1,-1);
      piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
      *piVar11 = iVar8 + 0x2f + local_28;
      piVar11[1] = local_34 + local_2c;
      piVar11[2] = 0x11;
      piVar11[3] = 0xc;

      iVar7 = thunk_FUN_00524fe0(local_18->field_0020);
      piVar11[6] = iVar7;
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
    }
    piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar11 = iVar8 + local_28;
    piVar11[1] = local_34 + local_2c;
    piVar11[2] = local_10->field_0004;
    piVar11[3] = local_10->field_0008;

    iVar7 = thunk_FUN_00524fe0(local_18->field_0020);
    piVar11[6] = iVar7;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
  }
  pAVar13 = local_18;
  GVar3 = local_18->field_001E;
  if (GVar3 == 0) {
    g_currentExceptionFrame = local_7c.previous;
    return;
  }
  if (GVar3 == 0xdd) {
    pRVar17 = (RecoveredGlobalRecordView_0081175C *)pCVar5->field_02D6;
    iVar7 = 0;
  }
  else {
    if (GVar3 != 0xde) {

      uVar7 = thunk_FUN_005259b0(GVar3,local_18->field_0022,'\0');
      local_10 = (AnonShape_004F2560_E9671A44 *)
                 FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar5->field_028E,uVar7);
      goto LAB_004f27ff;
    }
    pRVar17 = (RecoveredGlobalRecordView_0081175C *)pCVar5->field_02D6;
    iVar7 = 1;
  }
  local_10 = (AnonShape_004F2560_E9671A44 *)FUN_0070b3a0(pRVar17,iVar7);
LAB_004f27ff:
  switch(pAVar13->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    iVar10 = local_14 + 2;
    iVar7 = iVar8 + 1;
    break;
  default:
    if (pAVar13->field_0020 == 0) {
      local_1c = (0x24 - (((BITMAPINFO *)local_10)->bmiHeader).biHeight) / 2;
    }
    else {
      local_1c = ((-(uint)(pAVar13->field_0x7 != '\x03') & 0xfffffffa) + 0x22) -
                 (((BITMAPINFO *)local_10)->bmiHeader).biHeight;
    }
    iVar10 = local_1c + local_14;
    iVar7 = iVar8;
  }
  /* ST_CALLSITE[004F2870]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)local_20,iVar7,iVar10,'\x06',
         (RecoveredRecordView_006B84D0_87AF9D9B *)local_10);
  if (pAVar13->field_001E == 0xff) {

    ccFntTy::SetSurf(pCVar5->field_01B8,local_20,0,iVar8 + 1,local_14 + 2,local_10->field_0004,
                     local_10->field_0008);
    iVar19 = -1;
    iVar18 = -1;
    uVar16 = 1;
    iVar10 = -1;
    iVar7 = -2;
    /* ST_CALLSITE[004F28BC]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar7_mg0 = LoadResourceString(0x2715,g_hINSTANCE_00807618);

    ccFntTy::WrTxt(pCVar5->field_01B8,pcVar7_mg0,iVar7,iVar10,uVar16,iVar18,iVar19);
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
      uVar16 = 0xffffffff;
      pcVar12 = &CHAR___007c1b00;
      do {
        pcVar15 = pcVar12;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar15 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar15;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pcVar12 = pcVar15 + -uVar16;
      pcVar15 = &pCVar5->field_01E1;
      for (uVar9 = uVar16 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar16 = uVar16 & 3; pAVar13 = local_18, iVar8 = local_30, uVar16 != 0;
          uVar16 = uVar16 - 1) {
        *pcVar15 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
  }
  else {
    /* ST_CALLSITE[004F28ED]: CALL dword ptr [0x0085bde8] */
    wsprintfA(&pCVar5->field_01E1,"%d",*(short *)&pAVar13->field_0x26);
  }
  if (local_5 != '\0') {
    local_34 = 0;
    if ((0x9b < (ushort)pAVar13->field_001E) && ((ushort)pAVar13->field_001E < 0x9f)) {
      local_34 = 4;
    }

    ccFntTy::SetSurf(pCVar5->field_01B8,local_20,0,iVar8 + 0x2f,
                     (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14,0x11,0xc);

    ccFntTy::WrTxt(pCVar5->field_01B8,&pCVar5->field_01E1,-3,-1,0,-1,-1);
    piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar11 = iVar8 + 0x2f + local_28;
    piVar11[1] = (local_10->field_0008 + -0xc) / 2 + local_34 + local_1c + local_14 + local_2c;
    piVar11[2] = 0x11;
    piVar11[3] = 0xc;

    iVar7 = thunk_FUN_00524fe0(local_18->field_001E);
    piVar11[6] = iVar7;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
    pAVar13 = local_18;
  }
  switch(pAVar13->field_001E) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
  case 0xff:
    piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar11 = iVar8 + 1 + local_28;
    piVar11[1] = local_14 + 2 + local_2c;
    break;
  default:
    piVar11 = (int *)(local_24 + (local_c & 0xff) * 0x1c);
    *piVar11 = iVar8 + local_28;
    piVar11[1] = local_1c + local_14 + local_2c;
  }
  piVar11[2] = local_10->field_0004;
  piVar11[3] = local_10->field_0008;

  iVar8 = thunk_FUN_00524fe0(pAVar13->field_001E);
  piVar11[6] = iVar8;
  g_currentExceptionFrame = local_7c.previous;
  return;
}

