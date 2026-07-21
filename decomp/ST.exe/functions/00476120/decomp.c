#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadObj */

int __thiscall STBoatC::BackUnLoadObj(STBoatC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;

  iVar2 = this->field_05D6;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (*(code *)this->vtable->field_00D8)();
    return -(uint)(iVar2 != 0);
  }
  if (iVar2 == 2) {
    iVar2 = UnLoadObj(this,2);
    return iVar2;
  }
  if (iVar2 == 5) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (*(code *)this->vtable->field_0020)();
    return iVar2;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x30fa,0,0,"%s",
                             "STBoatC::BackUnLoadObj");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 2;
}

