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
  if (7 < *(int *)&this->field_0x2a9) {
    iVar2 = ReportDebugMessage(s_E____titans_Igor_to_oct_cpp_007cba18,0x21a,0,0,&DAT_007a4ccc,
                               s_STOctopusC__Bad_direction_007cba88);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    *(undefined4 *)&this->field_0x2a9 = 0;
  }
  if ((((iVar4 + -1 < *(int *)&this->field_0x299) || (*(int *)&this->field_0x299 < 0)) ||
      (iVar3 + -1 < *(int *)&this->field_0x29d)) || (*(int *)&this->field_0x29d < 0)) {
    *(int *)&this->field_0x299 = iVar4 + -1 >> 1;
    *(int *)&this->field_0x29d = iVar3 + -1 >> 1;
  }
  return;
}

