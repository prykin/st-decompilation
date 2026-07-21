#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::SetImages

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00543600 -> 00543AD0 @ 00543680 | 0054BF40 -> 00543AD0 @ 0054C073 | 0054BF40 ->
   00543AD0 @ 0054C358 | 0054BF40 -> 00543AD0 @ 0054C397 | 0054BF40 -> 00543AD0 @ 0054C3D6 */

void __thiscall
CursorClassTy::SetImages
          (CursorClassTy *this,undefined4 param_1,char *text,undefined4 param_3,BITMAPINFO *param_4,
          uint param_5,int param_6,int param_7)

{
  code *pcVar1;
  CursorClassTy *pCVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0xa8,0,iVar3,
                               "%s","CursorClassTy::SetImages");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(-0x34,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0xa9);
    return;
  }
  local_8->field_00B9 = -(int)param_4;
  local_8->field_00A9 = param_1;
  local_8->field_00BD = -param_5;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(local_8->field_0018 + 4))(DAT_00806784,7,0,text,0xffffffff);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  Library::DKW::DDX::FUN_006b85d0
            ((uint *)pCVar2->field_00AD,(int)*(short *)(pCVar2->field_0069 + 0x23),
             (BITMAPINFO *)(pCVar2->field_0069 + 0x2d),0x8000000,0,param_4,param_5);
  pCVar2->field_0058 = param_3;
  if (pCVar2->field_001C != 0xffffffff) {
    Library::DKW::DDX::FUN_006b34d0
              ((uint *)pCVar2->field_0060,pCVar2->field_001C,0xfffffffe,pCVar2->field_0034,
               pCVar2->field_0038);
  }
  if (param_6 < 0) {
    pCVar2->field_00B1 = pCVar2->field_003C - (int)param_4;
  }
  else {
    pCVar2->field_00B1 = param_6 - (int)param_4;
  }
  if (param_7 < 0) {
    pCVar2->field_00B5 = pCVar2->field_0040 - param_5;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  pCVar2->field_00B5 = param_7 - param_5;
  g_currentExceptionFrame = local_4c.previous;
  return;
}

