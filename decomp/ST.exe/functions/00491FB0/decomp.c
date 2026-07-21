#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReadyForLoading */

void __thiscall STBoatC::ReadyForLoading(STBoatC *this,void *param_1)

{
  code *pcVar1;
  int iVar2;

  if ((((this->field_045D == CASE_F) || (this->field_045D == CASE_E)) &&
      ((void *)this->field_058E == param_1)) && (this->field_0596 == 2)) {
    FUN_006e62d0(PTR_00802a38,(int)this->field_058E,(int *)&param_1);
    thunk_FUN_004162f0(param_1,&this->field_0588,&this->field_058A,&this->field_058C);
    this->field_0596 = 3;
    this->field_059A = 0;
    return;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x50bb,0,0,"%s",
                             "STBoatC::ReadyForLoading incorrect call");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

