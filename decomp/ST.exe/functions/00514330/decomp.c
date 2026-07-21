#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::BwdBut */

void __thiscall HelpPanelTy::BwdBut(HelpPanelTy *this)

{
  DArrayTy *pDVar1;
  void *pvVar2;
  code *pcVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (0 < (int)local_8->field_01CF) {
      pDVar1 = local_8->field_01CB;
      uVar4 = local_8->field_01CF - 1;
      local_8->field_01CF = uVar4;
      if (uVar4 < pDVar1->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar4) (runtime stride) */
        puVar6 = (undefined1 *)(pDVar1->elementSize * uVar4 + (int)pDVar1->data);
      }
      else {
        puVar6 = (undefined1 *)0x0;
      }
      if (puVar6 != (undefined1 *)0x0) {
        local_8->field_01A1 = 0;
        local_8->field_01A7 = 0;
        local_8->field_01A3 = 0;
        uVar4 = *(uint *)(puVar6 + 5);
        pvVar2 = *(void **)(puVar6 + 1);
        switch(*puVar6) {
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

