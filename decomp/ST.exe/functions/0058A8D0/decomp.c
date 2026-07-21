#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::Bad */

void __thiscall STOctopusC::Bad(STOctopusC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = (int)g_worldGrid.sizeY;
  iVar4 = (int)g_worldGrid.sizeX;
  if (7 < this->field_02A9) {
    iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\to_oct.cpp",0x21a,0,0,"%s",
                               "STOctopusC::Bad direction");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    this->field_02A9 = 0;
  }
  if ((((iVar4 + -1 < this->field_0299) || (this->field_0299 < 0)) ||
      (iVar3 + -1 < this->field_029D)) || (this->field_029D < 0)) {
    this->field_0299 = iVar4 + -1 >> 1;
    this->field_029D = iVar3 + -1 >> 1;
  }
  return;
}

