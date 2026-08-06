#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::DoneMMObj

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall MMObjTy::DoneMMObj(MMObjTy *this)

{
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar3;
  SpriteClassTy *this_00;
  int iVar5;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 0xd;
    puVar3 = &local_8->field_0066;
    do {
      if (*puVar3 != 0) {
        StartSystemTy::sub_006E56B0(pMVar2->field_000C,*puVar3);
      }
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    this_00 = (SpriteClassTy *)&pMVar2[1].field_0x91;
    iVar5 = 0xd;
    do {
      SpriteClassTy::CloseSprite(this_00 + -1);
      SpriteClassTy::CloseSprite(this_00);
      if (*(char *)((int)&this_00[-2].field_008D + 3) != '\0') {
        SpriteClassTy::CloseSprite(this_00 + 1);
      }
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0xe5,0,iVar3,"%s",
                             "MMObjTy::DoneMMObj");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\mmenuobj.cpp",0xe5);
  return;
}

