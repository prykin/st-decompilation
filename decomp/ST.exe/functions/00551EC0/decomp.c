#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintIndicators */

void __thiscall TradePanelTy::PaintIndicators(TradePanelTy *this)

{
  char *resourceString;
  ushort uVar1;
  TradePanelTy *pTVar3;
  int iVar4;
  LPSTR text;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar5;
  int iVar8;
  uint uVar6;
  byte bVar7;
  int iVar9;
  int iVar10;
  uint *puVar11;
  InternalExceptionFrame local_54;
  TradePanelTy *local_10;
  int local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pTVar3 = local_10;
  if (iVar4 == 0) {
    resourceString = &local_10->field_018D;
    /* ST_CALLSITE[00551F15]: CALL dword ptr [0x0085bde8] */
    wsprintfA(resourceString,"%6d",
              (uint)(ushort)(&local_10->field_01BC)[(byte)local_10->field_01D0]);

    ccFntTy::SetSurf(pTVar3->field_01DD,pTVar3->field_0068,0,0x67,0x36,0x23,0xc);

    ccFntTy::WrStr(pTVar3->field_01DD,resourceString,-1,-1,-(uint)(pTVar3->field_01D0 != '\0') & 2);
    if (pTVar3->field_01BB == '\0') {
      local_8 = 0;
      iVar4 = 0xb4;
      local_c = 2;
      do {
        puVar11 = nullptr;
        iVar10 = 0;
        iVar9 = 1;
        bVar7 = 0;
        uVar6 = 0xffffffff;
        /* ST_CALLSITE[00551F87]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
        text = thunk_FUN_00571240("BKG_AMOUNTRC",0);
        /* ST_CALLSITE[00551F99]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/int;/SubmarineTitans/Recovered/Enums/Global_mfRLoad_param_2Enum;pointer:/char;/uint;/byte;/int;/int;pointer:/undefined4 */
        pRVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                           (PTR_00806794,CASE_1,text,uVar6,bVar7,iVar9,iVar10,puVar11);
        /* ST_CALLSITE[00551FAB]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pTVar3->field_0068,iVar4 + -3,0x45,'\x01',pRVar5);
        bVar7 = pTVar3->field_01D0;
        uVar1 = *(ushort *)(&pTVar3->field_0x1ad + (local_8 + (uint)bVar7 * 2) * 4);
        if (uVar1 == 0) {
          iVar9 = 0;
        }
        else if ((DAT_0080874e == '\x03') && (bVar7 == 0)) {
          iVar9 = (uint)(ushort)pTVar3->field_01BC * (uint)uVar1;
        }
        else {
          iVar9 = (int)((ulonglong)(ushort)(&pTVar3->field_01BC)[bVar7] /
                       (ulonglong)(longlong)(int)(uint)uVar1);
        }
        /* ST_CALLSITE[00552017]: CALL dword ptr [0x0085bde8] */
        wsprintfA(resourceString,"%6d",iVar9);

        ccFntTy::SetSurf(pTVar3->field_01DD,pTVar3->field_0068,0,iVar4,0x48,0x23,0xc);

        ccFntTy::WrStr(pTVar3->field_01DD,resourceString,-1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5);
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 0x39;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x111,0,iVar4,"%s",
                             "TradePanelTy::PaintIndicators");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x111);
  return;
}

