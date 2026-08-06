#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::Bad

   [STPrototypeApplier] Propagated return.
   Evidence: 00579170 returns return of FUN_004961b0 @ 0057927A | 00579170 returns return of
   FUN_004961b0 @ 00579284
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=bool __thiscall
   Bad(STCrabC * this) Evidence: every machine RET purges exactly 0 explicit stack bytes; current
   signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=0057927A RET | 00579284 RET */

bool __thiscall STCrabC::Bad(STCrabC *this)

{
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int local_EAX_200;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar7 = (int)g_worldGrid.sizeX;
  iVar6 = (int)g_worldGrid.sizeY;
  if ((((iVar7 + -1 < this->field_026D) || (this->field_026D < 0)) ||
      (iVar6 + -1 < this->field_0271)) || (this->field_0271 < 0)) {
    iVar3 = ReportDebugMessage("E:\\__titans\\Igor\\to_crab.cpp",0x202,0,0,"%s",
                               "STCrabC::Bad birth coordinate - adjusting");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    this->field_026D = iVar7 + -1 >> 1;
    this->field_0271 = iVar6 + -1 >> 1;
  }
  if ((this->field_0275 < 0) || (4 < this->field_0275)) {
    iVar4 = ReportDebugMessage("E:\\__titans\\Igor\\to_crab.cpp",0x207,0,0,"%s",
                               "STCrabC::Bad birth coordinate - adjusting");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    this->field_0275 = 0;
  }
  if (0x167 < this->field_027D) {
    local_EAX_200 =
         ReportDebugMessage("E:\\__titans\\Igor\\to_crab.cpp",0x20c,0,0,"%s",
                            "STCrabC::Bad coordinates - adjusting ");
    if (local_EAX_200 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    this->field_027D = 0;
  }
  iVar6 = 0;
  do {
    iVar5 = thunk_FUN_004961b0((short)this->field_026D,(short)this->field_0271,(short)iVar6);
    if (iVar5 != 0) {
      this->field_0275 = iVar6;
      return SUB41(iVar5,0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  return false;
}

