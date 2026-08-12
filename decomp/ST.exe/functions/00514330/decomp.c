#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::BwdBut */

void __thiscall HelpPanelTy::BwdBut(HelpPanelTy *this)

{
  HelpPanelTy_field_01CBDArray *pHVar1;
  void *pvVar2;
  int errorCode;
  uint uVar4;
  int iVar5;
  HelpPanelTy_field_01CBElement *element_01cb;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (0 < (int)local_8->field_01CF) {
      pHVar1 = local_8->field_01CB;
      uVar4 = local_8->field_01CF - 1;
      local_8->field_01CF = uVar4;
      if (uVar4 < pHVar1->count) {
        element_01cb = DArrayAt<HelpPanelTy_field_01CBElement>(pHVar1, uVar4);
      }
      else {
        element_01cb = nullptr;
      }
      if (element_01cb != nullptr) {
        local_8->field_01A1 = 0;
        local_8->field_01A7 = 0;
        local_8->field_01A3 = nullptr;
        uVar4 = element_01cb->variant_0005;
        pvVar2 = element_01cb->variant_0001;
        switch(element_01cb->field_0000) {
        case 0:
          HomeBut(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 1:
          RCProc(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 2:
          ObjProc(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 3:
          SubProc(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 4:
          ArmProc(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 5:
          TechProc(local_8,(uint)pvVar2,(byte)uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 6:
          TTreeProc(local_8,(uint)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 7:
          MObjProc(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 8:
          TipProc(local_8,pvVar2,uVar4,'\0');
          break;
        case 10:
          IndexBut(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xb:
          SpecProc(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xc:
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
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x317,0,errorCode,
                             "%s","HelpPanelTy::BwdBut");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x317);
  return;
}

