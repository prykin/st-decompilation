#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackLoadObj */

int __thiscall STBoatC::BackLoadObj(STBoatC *this,int *param_1)

{
  code *pcVar1;
  int iVar2;

  if (param_1 == (int *)0x0) {
    sub_00492420(this);
  }
  iVar2 = this->field_0596;
  if (iVar2 == 0) {
    iVar2 = sub_00460360(this);
    return iVar2;
  }
  if (iVar2 == 1) {
    iVar2 = (*this->vtable->vfunc_D8)();
    return -(uint)(iVar2 != 0);
  }
  if (iVar2 == 2) {
    FUN_006e62d0(g_playSystem_00802A38,this->field_058E,(int *)&param_1);
    if ((param_1 != (int *)0x0) && (param_1[6] == this->field_058E)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0xac))(this->field_0018);
      iVar2 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar2 != 0);
    }
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2f2d,0,0,"%s",
                               "STBoatC::BackLoadObj LOADOBJ_WAITOBJ");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (iVar2 != 3) {
    return 2;
  }
  iVar2 = this->field_059A;
  if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) {
    if ((iVar2 != 3) && (iVar2 != 4)) {
      iVar2 = LoadObj(this,2);
      return iVar2;
    }
    this->field_059A = 5;
    iVar2 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar2 != 0) & 0xfffffffd) + 2;
  }
  FUN_006ea2f0(this->field_0211,this->field_01ED);
  iVar2 = (*this->vtable->vfunc_D8)();
  return -(uint)(iVar2 != 0);
}

