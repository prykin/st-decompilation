#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::Update */

void __thiscall BldObjPanelTy::Update(BldObjPanelTy *this)

{
  code *pcVar1;
  BldObjPanelTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  uint uVar4;
  InternalExceptionFrame local_4c;
  BldObjPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,8,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_027E);
    if ((&this_00->field_027E)[(byte)this_00->field_0279] == 0) {
      uVar4 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar4 = *(uint *)((&this_00->field_027E)[(byte)this_00->field_0279] + 0xc);
    }
    if ((&this_00->field_027E)[(byte)this_00->field_0278] == 0) {
      uVar2 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = *(uint *)((&this_00->field_027E)[(byte)this_00->field_0278] + 0xc);
    }
    thunk_FUN_0053f510(this_00,uVar2,uVar4);
    sub_004F0C80(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\bldobj.cpp",0x5e,0,errorCode,"%s"
                             ,"BldObjPanelTy::Update");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\bldobj.cpp",0x5e);
  return;
}

