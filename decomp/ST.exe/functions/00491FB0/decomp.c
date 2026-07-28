#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReadyForLoading

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004749C0 -> 00491FB0 @ 0047501C; /STBoatC+0x18 | 00491FB0 -> 006E62D0 @ 00491FE7 |
   00491FB0 parameter used as this of STFishC::sub_004162F0 @ 00492004 */

void __thiscall STBoatC::ReadyForLoading(STBoatC *this,STFishC *param_1)

{
  code *pcVar1;
  int iVar2;

  if ((((this->field_045D == CASE_F) || (this->field_045D == CASE_E)) &&
      ((STFishC *)this->field_058E == param_1)) && (this->field_0596 == 2)) {
    STPlaySystemC::sub_006E62D0
              (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)this->field_058E,(int *)&param_1
              );
    STFishC::sub_004162F0(param_1,&this->field_0588,&this->field_058A,&this->field_058C);
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

