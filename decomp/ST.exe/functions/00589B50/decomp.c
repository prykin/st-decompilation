#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::SetSprRange */

void __thiscall STOctopusC::SetSprRange(STOctopusC *this,uint param_1)

{
  code *pcVar1;
  int iVar2;

  if (7 < param_1) {
    iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\to_oct.cpp",0x71,0,0,"%s",
                               "STOctopusC::SetSprRange - Bad direction");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    param_1 = 0;
  }
  if ((this->field_02A5 != 0xf8) && (this->field_02A5 != 0xf9)) {
    iVar2 = param_1 * 6;
    this->field_006C = (short)iVar2;
    thunk_FUN_004abce0(&this->field_01D5,0xe,iVar2,iVar2 + 5,'\0');
    return;
  }
  iVar2 = param_1 * 8;
  this->field_006C = (short)iVar2;
  thunk_FUN_004abce0(&this->field_01D5,0xe,iVar2,iVar2 + 7,'\0');
  return;
}

