#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintMunition

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::PaintMunition(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  uint uVar3;
  int iVar4;
  BITMAPINFO *pBVar4;
  int iVar7;
  byte bVar5;
  uint uVar6;
  int iVar8;
  CPanelTy_field_0C11State *pCVar9;
  bool bVar10;
  RecoveredGlobalRecordView_0081175C *pRVar11;
  InternalExceptionFrame local_70;
  CPanelTy *local_2c;
  int local_28;
  CPanelTy_field_0C11State *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte local_6;
  char local_5;

  if (DAT_0080874e == '\x01') {
    bVar10 = this->field_09D4 != '\x01';
  }
  else {
    bVar10 = this->field_09D4 == '\x01';
  }
  local_5 = bVar10 + '\x05';
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_2c = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  pCVar2 = local_2c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;

    iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x153,0,iVar4,"%s"
                               ,"CPanelTy::PaintMunition");
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x153);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005052A7]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)local_2c->field_0194,param_1,0x36,'\x01',
         (RecoveredRecordView_006B84D0_87AF9D9B *)local_2c->field_09D9[8]);
  pCVar9 = &pCVar2->field_0C11;
  local_6 = 0;
  local_28 = -1;
  do {
    pBVar4 = nullptr;
    if (local_5 != '\x05') {
      switch(local_28) {
      case 0:
      case 1:
      case 4:
      case 5:
        goto cf_continue_loop_00505716;
      case 2:
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(1));
        break;
      case 3:
        goto switchD_005052d8_caseD_5;
      case 6:
        goto switchD_005052d8_caseD_4;
      case 7:
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(5));
        break;
      case 8:
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(2));
        break;
      default:
        goto switchD_005052d8_default;
      }
      goto LAB_0050530c;
    }
    switch(local_28) {
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
      goto cf_continue_loop_00505716;
    case 4:
switchD_005052d8_caseD_4:
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(3));
      break;
    case 5:
switchD_005052d8_caseD_5:
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(4));
      break;
    default:
switchD_005052d8_default:
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(local_6));
    }
LAB_0050530c:
    local_24 = pCVar9;
    if (g_allPlayers_007FA174 != nullptr) {
      switch(local_28) {
      case 0:
        local_10 = 0xf;
        local_c = 0xe;
        if (*pCVar9 == CASE_0) {
LAB_005053b0:
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
          iVar8 = 1;
        }
        else {
          if (DAT_0080874e == '\x01') {
            iVar8 = 6;
          }
          else {
            if (DAT_0080874e != '\x02') goto LAB_005053b0;
            iVar8 = 0x83;
          }

          iVar8 = thunk_FUN_004e60d0((uint)DAT_0080874d,iVar8);
          iVar8 = iVar8 + 5;
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
        }
        break;
      case 1:
        local_10 = 0xf;
        local_c = 0x1a;
        if (*pCVar9 == CASE_0) {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
          iVar8 = 2;
        }
        else if (DAT_0080874e == '\x01') {

          iVar8 = thunk_FUN_004e60d0((uint)DAT_0080874d,6);
          iVar8 = iVar8 + 10;
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
        }
        else if (DAT_0080874e == '\x02') {

          iVar8 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x83);
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
          iVar8 = iVar8 + 10;
        }
        else {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
          iVar8 = 2;
        }
        break;
      case 2:
        local_10 = 0x16;
        local_c = 0xf;
        if (*pCVar9 == CASE_0) {
          iVar8 = 9;
LAB_00505581:
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
        }
        else {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
          iVar8 = 0x1d;
        }
        break;
      case 3:
        local_10 = 0x1d;
        local_c = 0x31;
        if (*pCVar9 == CASE_0) {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
          iVar8 = 4;
        }
        else {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
          iVar8 = 0x10;
        }
        break;
      case 4:
        local_10 = 0x1b;
        local_c = 0x25;
        if (*pCVar9 == CASE_0) {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
          iVar8 = 6;
        }
        else {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
          iVar8 = 0x17;
        }
        break;
      case 5:
        local_10 = 0x28;
        local_c = 0x32;
        if (*pCVar9 == CASE_0) {
          iVar8 = 5;
          goto LAB_00505581;
        }
        pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
        iVar8 = 0x19;
        break;
      case 6:
        local_10 = 0x1f;
        local_c = 0x22;
        if (*pCVar9 == CASE_0) {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
          iVar8 = 7;
        }
        else {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
          iVar8 = 0x18;
        }
        break;
      case 7:
        local_10 = 0x1e;
        local_c = 0x3b;
        if (*pCVar9 == CASE_0) {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
          iVar8 = 8;
        }
        else {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
          iVar8 = 0x16;
        }
        break;
      case 8:
        local_10 = 0x28;
        local_c = 0x19;
        if (*pCVar9 == CASE_0) {
          iVar8 = 3;
          goto LAB_00505581;
        }
        pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
        iVar8 = 0xf;
        break;
      case -1:
        local_10 = 0xf;
        local_c = 4;
        if (DAT_0080874e == '\x01') {

          iVar8 = thunk_FUN_004e60d0((uint)DAT_0080874d,6);
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
        }
        else if (DAT_0080874e == '\x02') {

          iVar8 = thunk_FUN_004e60d0((uint)DAT_0080874d,0x83);
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_028E;
        }
        else {
          pRVar11 = (RecoveredGlobalRecordView_0081175C *)pCVar2->field_0292;
          iVar8 = 0;
        }
        break;
      default:
        goto switchD_00505324_default;
      }
      /* ST_CALLSITE[00505588]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar4 = FUN_0070b3a0(pRVar11,iVar8);
    }
switchD_00505324_default:
    if (pBVar4 != nullptr) {
      /* ST_CALLSITE[005055B0]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_10 + 0xf + param_1,
             local_c + 0x36,'\x06',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar4);
    }
    uVar3 = local_14;
    if (*pCVar9 == CASE_0) {
      local_1c = 0;
    }
    else {
      local_1c = ((uint)*(ushort *)(pCVar9 + 2) * 0xf) / (uint)*(ushort *)(pCVar9 + 4);
    }
    local_18 = local_18 & 0xffffff00;
    if (local_1c != 0) {
      uVar6 = 0;
      local_20 = (local_14 & 0xff) * 0xb + 0x3b;
      do {
        /* ST_CALLSITE[00505608]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B6,3);
        /* ST_CALLSITE[00505623]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 0x4d + uVar6 * 4,
               local_20,'\x01',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar4);
        bVar5 = (byte)local_18 + 1;
        local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar5));
        uVar6 = (uint)bVar5;
      } while (uVar6 < local_1c);
    }
    if ((byte)local_18 < 0xf) {
      local_20 = (uVar3 & 0xff) * 0xb + 0x3b;
      iVar8 = 0xf - (local_18 & 0xff);
      local_1c = param_1 + 0x4d + (local_18 & 0xff) * 4;
      do {
        /* ST_CALLSITE[0050567C]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B6,0);
        /* ST_CALLSITE[00505693]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,local_1c,local_20,'\x01',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar4);
        local_1c = local_1c + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    /* ST_CALLSITE[005056BD]: CALL dword ptr [0x0085bde8] */
    wsprintfA(&pCVar2->field_01E1,"%d",(uint)*(ushort *)(local_24 + 2));

    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,param_1 + 0x8f,
                     (uVar3 & 0xff) * 0xb + 0x39,0x23,0xc);

    ccFntTy::WrTxt(pCVar2->field_01B8,&pCVar2->field_01E1,-3,-1,0,-1,-1);
    pCVar9 = local_24;
cf_continue_loop_00505716:
    local_6 = local_6 + 1;
    local_28 = local_28 + 1;
    pCVar9 = pCVar9 + 6;
    if (9 < local_6) {
      g_currentExceptionFrame = local_70.previous;
      return;
    }
  } while( true );
}

