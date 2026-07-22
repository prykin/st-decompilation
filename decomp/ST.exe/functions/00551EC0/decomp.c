#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintIndicators */

void __thiscall TradePanelTy::PaintIndicators(TradePanelTy *this)

{
  undefined1 *resourceString;
  ushort uVar1;
  code *pcVar2;
  TradePanelTy *pTVar3;
  int iVar4;
  LPSTR text;
  ushort *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
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
    resourceString = &local_10->field_0x18d;
    wsprintfA(resourceString,"%6d",
              (uint)(ushort)(&local_10->field_01BC)[(byte)local_10->field_01D0]);
    ccFntTy::SetSurf(pTVar3->field_01DD,pTVar3->field_0068,0,0x67,0x36,0x23,0xc);
    ccFntTy::WrStr(pTVar3->field_01DD,(uint *)resourceString,-1,-1,
                   -(uint)(pTVar3->field_01D0 != '\0') & 2);
    if (pTVar3->field_01BB == '\0') {
      local_8 = 0;
      iVar4 = 0xb4;
      local_c = 2;
      do {
        puVar10 = (undefined4 *)0x0;
        iVar9 = 0;
        iVar8 = 1;
        bVar7 = 0;
        uVar6 = 0xffffffff;
        text = thunk_FUN_00571240("BKG_AMOUNTRC",0);
        puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_1,text,uVar6,bVar7,iVar8,iVar9,puVar10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pTVar3->field_0068,iVar4 + -3,0x45,'\x01',
               (byte *)puVar5);
        bVar7 = pTVar3->field_01D0;
        uVar1 = *(ushort *)(&pTVar3->field_0x1ad + (local_8 + (uint)bVar7 * 2) * 4);
        if (uVar1 == 0) {
          iVar8 = 0;
        }
        else if ((DAT_0080874e == '\x03') && (bVar7 == 0)) {
          iVar8 = (uint)(ushort)pTVar3->field_01BC * (uint)uVar1;
        }
        else {
          iVar8 = (int)((ulonglong)(ushort)(&pTVar3->field_01BC)[bVar7] /
                       (ulonglong)(longlong)(int)(uint)uVar1);
        }
        wsprintfA(resourceString,"%6d",iVar8);
        ccFntTy::SetSurf(pTVar3->field_01DD,pTVar3->field_0068,0,iVar4,0x48,0x23,0xc);
        ccFntTy::WrStr(pTVar3->field_01DD,(uint *)resourceString,-1,-1,
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

