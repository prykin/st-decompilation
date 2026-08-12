#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadObj */

int __thiscall STBoatC::BackUnLoadObj(STBoatC *this,int *param_1)

{
  STBoatC_field_05D6State SVar1;
  int local_EAX_21;
  int iVar3;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_retaddr;

  SVar1 = this->field_05D6;
  if ((SVar1 == 0) || (SVar1 == CASE_1)) {
    iVar3 = this->vfunc_D8();
    return -(uint)(iVar3 != 0);
  }
  if (SVar1 == CASE_2) {
    local_EAX_21 = UnLoadObj(this,2);
    return local_EAX_21;
  }
  if (SVar1 == CASE_5) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar3 = this->StopMove(unaff_retaddr);
    return iVar3;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x30fa,0,0,"%s",
                             "STBoatC::BackUnLoadObj");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 2;
}

