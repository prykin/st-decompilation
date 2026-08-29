#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintBioSonar

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_0C29 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C29State. Cases:
   CASE_0=0;CASE_21=33;CASE_28=40;CASE_FF=255 */

void __thiscall CPanelTy::PaintBioSonar(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  char *pcVar4;
  int iVar7;
  CPanelTy_field_0C29State CVar5;
  int iVar6;
  int iVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    /* ST_CALLSITE[00505E31]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)local_c->field_02B2,1);
    /* ST_CALLSITE[00505E44]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x33,0x7b,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
    if (pCVar2->field_0C2F != 0) {

      ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0x24,0x4c,0xa4,0x2b);
      pcVar4 = LoadResourceString(0x38ae,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00505E9A]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%d\n%s",(uint)(ushort)pCVar2->field_0C2F,pcVar4);

      ccFntTy::WrTxt(pCVar2->field_01B8,(char *)&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    if (pCVar2->field_0C29 != CASE_FF) {
      if (CASE_21 < pCVar2->field_0C29) {
        pCVar2->field_0C29 = CASE_21;
      }
      CVar5 = CASE_0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0C29 != CASE_0) {
        do {
          /* ST_CALLSITE[00505EEE]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B6,1);
          /* ST_CALLSITE[00505F0F]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,(local_8 & 0xff) * 4 + 0x35,
                 0x7d,'\x01',(RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
          CVar5 = CVar5 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(CVar5));
        } while (CVar5 < pCVar2->field_0C29);
      }
      if (CVar5 < CASE_21) {
        iVar6 = 0x21 - (local_8 & 0xff);
        iVar8 = (local_8 & 0xff) * 4 + 0x35;
        do {
          /* ST_CALLSITE[00505F4A]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02B6,0);
          /* ST_CALLSITE[00505F5C]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar8,0x7d,'\x01',
                 (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar3);
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x19a,0,iVar3,"%s",
                             "CPanelTy::PaintBioSonar");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x19a);
  return;
}

