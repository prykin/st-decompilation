#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::PaintPlayPanel

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall PlayPanelTy::PaintPlayPanel(PlayPanelTy *this)

{
  char cVar1;
  byte bVar2;
  PlayPanelTy *pPVar4;
  int iVar5;
  BITMAPINFO *pBVar5;
  UINT resourceId;
  char *pcVar6_mg0;
  int iVar9;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar10;
  size_t _Count;
  char *pcVar11;
  int iVar12;
  int iVar13;
  InternalExceptionFrame local_58;
  PlayPanelTy *local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pPVar4 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\playpan.cpp",0x11f,0,iVar5,"%s"
                               ,"PlayPanelTy::PaintPlayPanel");
    if (iVar9 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\playpan.cpp",0x11f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0053AC49]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)local_14->field_0068,0x1d,0x13,'\x01',
         (RecoveredRecordView_006B84D0_87AF9D9B *)local_14->field_01CD);
  local_c = 0x1b;
  local_10 = 8;
  iVar10 = 0;
  do {
    uVar7 = local_c;
    uVar6 = iVar10 + pPVar4->field_01C9;
    if (uVar6 < DAT_00808aaf) {
      local_8 = iVar10;
      /* ST_CALLSITE[0053AC98]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar5 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pPVar4->field_01D1,
                            (byte)(&DAT_00808af4)[uVar6 * 0x9c] + 9);
      /* ST_CALLSITE[0053ACA7]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)pPVar4->field_0068,0x22,uVar7,'\x01',
             (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5);

      ccFntTy::SetSurf(pPVar4->field_01DD,(int)pPVar4->field_0068,0,0x37,uVar7,0x10,0xc);
      bVar2 = g_bulkInitializedRecords_008087C7
              [(byte)(&DAT_00808af4)[(iVar10 + pPVar4->field_01C9) * 0x9c]].field_0021;
      if (bVar2 == 1) {
        resourceId = 0x2742;
      }
      else if (bVar2 == 2) {
        resourceId = 0x2743;
      }
      else if (bVar2 == 3) {
        resourceId = 0x2745;
      }
      else {
        resourceId = 10000;
      }
      uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar12 = -1;
      /* ST_CALLSITE[0053AD32]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mg0 = LoadResourceString(resourceId,g_hINSTANCE_00807618);

      ccFntTy::WrStr(pPVar4->field_01DD,pcVar6_mg0,iVar12,iVar13,uVar6);

      ccFntTy::SetSurf(pPVar4->field_01DD,(int)pPVar4->field_0068,0,0x68,uVar7,0x10e,0xc);

      iVar12 = FUN_00711110(pPVar4->field_01DD,
                            &CHAR_00h_00808ab0 + (iVar10 + pPVar4->field_01C9) * 0x9c);
      if (iVar12 < 0x10e) {
        uVar6 = 0xffffffff;
        pcVar8 = &CHAR_00h_00808ab0 + (iVar10 + pPVar4->field_01C9) * 0x9c;
        do {
          pcVar11 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar8 = pcVar11 + -uVar6;
        pcVar11 = (char *)&DAT_0080f33a;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; iVar10 = local_8, uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      else {
        uVar6 = 0xffffffff;
        pcVar8 = &CHAR_00h_00808ab0 + (iVar10 + pPVar4->field_01C9) * 0x9c;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        local_8 = ~uVar6 - 1;
        _Count = 0x14;
        do {
          _Count = _Count + 1;
          Library::MSVCRT::_strncpy
                    ((char *)&DAT_0080f33a,&CHAR_00h_00808ab0 + (iVar10 + pPVar4->field_01C9) * 0x9c
                     ,_Count);

          iVar12 = FUN_00711110(pPVar4->field_01DD,(char *)&DAT_0080f33a);
          if (0x10d < iVar12) break;
        } while ((int)_Count < local_8);
      }

      ccFntTy::WrStr(pPVar4->field_01DD,(char *)&DAT_0080f33a,5,-1,(DAT_0080874e != '\x03') - 1 & 5);
    }
    iVar10 = iVar10 + 1;
    local_c = local_c + 0xf;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      local_8 = iVar10;

      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,pPVar4->field_0060,0xffffffff,pPVar4->field_003C,
                 pPVar4->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
  } while( true );
}

