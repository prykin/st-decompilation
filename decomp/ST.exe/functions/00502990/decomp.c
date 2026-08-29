#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::PaintCtrlBoatSI

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_14=20;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37

   [STSwitchEnumApplier] Switch target field_0B9E uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B9EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STSwitchEnumApplier] Switch target field_0B99 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0B99State. Cases:
   CASE_8=8;CASE_9=9;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_1A=26;CASE_1B=27;CASE_1D=29;CASE_23=35;CASE_24=36;CASE_25=37;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::PaintCtrlBoatSI(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  int iVar5;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  RecoveredSourceFamily_dibcopy *pRVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x1ed,0,iVar3,"%s"
                               ,"CPanelTy::PaintCtrlBoatSI");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x1ed);
    return;
  }
  switch(local_c->field_0B9E) {
  case CASE_0:
    /* ST_CALLSITE[005029F2]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(local_c->field_018C,0,0x46,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)local_c->field_0974[0]);
    /* ST_CALLSITE[00502A0B]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(pCVar2->field_018C,0x31,0,'\x06',
           (RecoveredRecordView_006B84D0_87AF9D9B *)pCVar2->field_0974[2]);
    break;
  case CASE_1:
    /* ST_CALLSITE[00502A2C]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(local_c->field_018C,0,0x46,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)local_c->field_0974[5]);
    if (pCVar2->field_0B99 == CASE_BD) {
      pRVar4 = (RecoveredRecordView_006B84D0_87AF9D9B *)pCVar2->field_0974[2];
LAB_00502b2d:
      pRVar8 = pCVar2->field_018C;
    }
    else {
      pRVar4 = (RecoveredRecordView_006B84D0_87AF9D9B *)pCVar2->field_0974[6];
      pRVar8 = pCVar2->field_018C;
    }
    goto LAB_00502b3b;
  case CASE_2:
    /* ST_CALLSITE[00502A79]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(local_c->field_018C,0,0x46,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)local_c->field_0974[5]);
    /* ST_CALLSITE[00502A92]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(pCVar2->field_018C,0x31,0,'\x06',
           (RecoveredRecordView_006B84D0_87AF9D9B *)pCVar2->field_0974[6]);
    break;
  case CASE_3:
    /* ST_CALLSITE[00502AEA]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(local_c->field_018C,0,0x46,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)local_c->field_0974[0]);
    switch(pCVar2->field_0B99) {
    case CASE_9:
    case CASE_15:
    case CASE_A6:
    case CASE_A7:
    case CASE_AF:
    case CASE_BD:
      pRVar4 = (RecoveredRecordView_006B84D0_87AF9D9B *)pCVar2->field_0974[2];
      pRVar8 = pCVar2->field_018C;
      break;
    default:
      pRVar4 = (RecoveredRecordView_006B84D0_87AF9D9B *)pCVar2->field_0974[7];
      goto LAB_00502b2d;
    }
LAB_00502b3b:
    /* ST_CALLSITE[00502B3B]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(pRVar8,0x31,0,'\x06',pRVar4);
    break;
  case CASE_4:
    /* ST_CALLSITE[00502AB3]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(local_c->field_018C,0,0x46,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)local_c->field_0974[0]);
    /* ST_CALLSITE[00502ACC]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(pCVar2->field_018C,0x31,0,'\x06',
           (RecoveredRecordView_006B84D0_87AF9D9B *)pCVar2->field_0974[2]);
  }
  if (pCVar2->field_0B9E == CASE_1) {
    switch(pCVar2->field_0B99) {
    case CASE_1A:
      /* ST_CALLSITE[00502B7C]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B2,3);
      /* ST_CALLSITE[00502B92]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut(pCVar2->field_018C,0x3c,0x84,'\x01',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
      bVar5 = 0;
      local_8 = local_8 & 0xffffff00;
      if ((pCVar2->field_0BB6 & 0xfe) != 0) {
        do {
          /* ST_CALLSITE[00502BB2]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B6,3);
          /* ST_CALLSITE[00502BD7]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut(pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',
                 (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
          bVar5 = bVar5 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
        } while (bVar5 < (byte)pCVar2->field_0BB6 >> 1);
      }
      if (bVar5 < 0x14) {
        iVar6 = 0x14 - (local_8 & 0xff);
        iVar7 = (local_8 & 0xff) * 4 + 0x3f;
        do {
          /* ST_CALLSITE[00502C18]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B6,0);
          /* ST_CALLSITE[00502C2D]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut(pCVar2->field_018C,iVar7,0x87,'\x01',
                 (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
          iVar7 = iVar7 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      break;
    case CASE_1B:
    case CASE_1D:
    case CASE_23:
    case CASE_24:
      if (pCVar2->field_0BCD != -1) {
        /* ST_CALLSITE[00502C56]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B2,3);
        /* ST_CALLSITE[00502C6C]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut(pCVar2->field_018C,0x3c,0x84,'\x01',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
        bVar5 = 0;
        local_8 = local_8 & 0xffffff00;
        if (pCVar2->field_0BCD != '\0') {
          do {
            /* ST_CALLSITE[00502C8C]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
            pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B6,1);
            /* ST_CALLSITE[00502CB1]: CALL 0x00403229; direct=00403229 DibPut */
            DibPut(pCVar2->field_018C,(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',
                   (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
            bVar5 = bVar5 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
          } while (bVar5 < (byte)pCVar2->field_0BCD);
        }
        if (bVar5 < 0x14) {
          iVar6 = 0x14 - (local_8 & 0xff);
          iVar7 = (local_8 & 0xff) * 4 + 0x3f;
          do {
            /* ST_CALLSITE[00502CEC]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
            pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B6,0);
            /* ST_CALLSITE[00502D01]: CALL 0x00403229; direct=00403229 DibPut */
            DibPut(pCVar2->field_018C,iVar7,0x87,'\x01',
                   (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
            iVar7 = iVar7 + 4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
    }
  }
  if (-1 < (int)pCVar2->field_0148[3]) {

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)pCVar2->field_0148[3],0xffffffff,
               pCVar2->field_0048,pCVar2->field_00A0);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

