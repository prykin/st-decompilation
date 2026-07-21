#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::ShowSprites */

void __thiscall MMsgTy::ShowSprites(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_1CFB != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)local_8->field_1D3F,local_8->field_1CFB,0xfffffffe,local_8->field_1D13,
                 local_8->field_1D17);
    }
    iVar3 = 0;
    if (pMVar2->field_009A != 0) {
      puVar5 = &pMVar2->field_00E7;
      do {
        if (*puVar5 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)puVar5[0x11],*puVar5,0xfffffffe,puVar5[6],puVar5[7]);
        }
        iVar3 = iVar3 + 1;
        puVar5 = (uint *)((int)puVar5 + 0x1fb);
      } while (iVar3 < (int)(uint)pMVar2->field_009A);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x4b,0,iVar3,"%s",
                             "MMsgTy::ShowSprites");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x4b);
  return;
}

