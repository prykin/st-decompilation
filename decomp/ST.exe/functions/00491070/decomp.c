#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReleaseLoad */

void __thiscall STBoatC::ReleaseLoad(STBoatC *this,uint param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;

  if (this->field_07C2 < 1) {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x4f96,0,0,"%s",
                               s_STBoatC__ReleaseLoad_data_lload<_007aba78);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    iVar2 = this->field_07C2 + -1;
    this->field_07C2 = iVar2;
    if (iVar2 == 0) {
      this->field_05A2 = 0;
      piVar3 = &this->field_02CC;
      iVar2 = 0;
      do {
        if (*piVar3 == 1) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < 0x17);
      if ((this->field_045D == CASE_14) && (iVar2 == 0x17)) {
        param_1 = PTR_00802a38->field_00E4;
        CmdToObj(this,CASE_3,&param_1);
      }
      this->field_0314 = 0;
      this->field_0076 = 1;
      return;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar2 = (**(code **)&this->vtable->field_0xac)(param_1);
    if (iVar2 == 1) {
      this->field_05C0 = 2;
    }
  }
  return;
}

