#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackPatrol */

int __thiscall STBoatC::BackPatrol(STBoatC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;

  if (this->field_0497 == 0) {
    iVar2 = sub_00460360(this);
    return iVar2;
  }
  if (this->field_0497 == 1) {
    iVar2 = thunk_FUN_004620f0(this);
    return iVar2;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1c52,0,0,"%s",
                             "STBoatC::BackPatrol");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return -1;
}

