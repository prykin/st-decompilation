#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackPatrol */

int __thiscall STBoatC::BackPatrol(STBoatC *this,int *param_1)

{
  int local_EAX_17;
  int local_EAX_35;
  int iVar2;
  int iVar3;

  if (this->field_0497 == 0) {
    /* ST_CALLSITE[00465BF1]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    local_EAX_17 = sub_00460360(this);
    return local_EAX_17;
  }
  if (this->field_0497 == 1) {
    local_EAX_35 = thunk_FUN_004620f0(this);
    return local_EAX_35;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1c52,0,0,"%s",
                             "STBoatC::BackPatrol");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return -1;
}

