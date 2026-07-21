#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::SetSprRange */

void __thiscall STCrabC::SetSprRange(STCrabC *this,uint param_1)

{
  code *pcVar1;
  int iVar2;

  if (7 < param_1) {
    iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\to_crab.cpp",0x7a,0,0,"%s",
                               "STCrabC::SetSprRange - Bad direction");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    param_1 = 0;
  }
  iVar2 = param_1 * 6;
  this->field_006C = (short)iVar2;
  thunk_FUN_004abce0(&this->field_01D5,0xe,iVar2,iVar2 + 5,'\0');
  return;
}

