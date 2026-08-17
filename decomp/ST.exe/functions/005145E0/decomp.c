#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::FwdBut */

void __thiscall HelpPanelTy::FwdBut(HelpPanelTy *this)

{
  HelpPanelTy_field_01CBDArray *pHVar1;
  void *pvVar2;
  int errorCode;
  int iVar4;
  uint uVar5;
  HelpPanelTy_field_01CBElement *element_01cb;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    pHVar1 = local_8->field_01CB;
    if ((int)local_8->field_01CF < (int)(pHVar1->count - 1)) {
      uVar5 = local_8->field_01CF + 1;
      local_8->field_01CF = uVar5;
      if (uVar5 < pHVar1->count) {
        element_01cb = DArrayAt<HelpPanelTy_field_01CBElement>(pHVar1, uVar5);
      }
      else {
        element_01cb = nullptr;
      }
      if (element_01cb != nullptr) {
        local_8->field_01A1 = 0;
        local_8->field_01A7 = 0;
        local_8->field_01A3 = nullptr;
        uVar5 = element_01cb->variant_0005;
        pvVar2 = element_01cb->variant_0001;
        switch(element_01cb->field_0000) {
        case 0:
          /* ST_CALLSITE[00514687]: CALL 0x004029c8; direct=004029C8 HelpPanelTy::HomeBut */
          HomeBut(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 1:
          /* ST_CALLSITE[005146C4]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
          RCProc(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 2:
          /* ST_CALLSITE[0051471E]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
          ObjProc(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 3:
          /* ST_CALLSITE[00514707]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
          SubProc(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 4:
          /* ST_CALLSITE[00514735]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
          ArmProc(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 5:
          /* ST_CALLSITE[005146F1]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
          TechProc(local_8,(uint)pvVar2,(byte)uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 6:
          /* ST_CALLSITE[005146DA]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
          TTreeProc(local_8,(uint)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 7:
          /* ST_CALLSITE[005146AD]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
          MObjProc(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 8:
          /* ST_CALLSITE[00514779]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
          TipProc(local_8,pvVar2,uVar5,'\0');
          break;
        case 10:
          /* ST_CALLSITE[0051469A]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
          IndexBut(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xb:
          /* ST_CALLSITE[0051474C]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
          SpecProc(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xc:
          /* ST_CALLSITE[00514762]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
          NatProc(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x327,0,errorCode,
                             "%s","HelpPanelTy::FwdBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x327);
  return;
}

