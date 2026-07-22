#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadObj */

int __thiscall STBoatC::BackUnLoadObj(STBoatC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_retaddr;

  iVar2 = this->field_05D6;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    iVar2 = (*this->vtable->vfunc_D8)();
    return -(uint)(iVar2 != 0);
  }
  if (iVar2 == 2) {
    iVar2 = UnLoadObj(this,2);
    return iVar2;
  }
  if (iVar2 == 5) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar2 = (*this->vtable->StopMove)(this,unaff_retaddr);
    return iVar2;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x30fa,0,0,"%s",
                             "STBoatC::BackUnLoadObj");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 2;
}

