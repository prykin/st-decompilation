#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::Bad

   [STPrototypeApplier] Propagated return.
   Evidence: 00579170 returns return of FUN_004961b0 @ 0057927A | 00579170 returns return of
   FUN_004961b0 @ 00579284 */

bool __thiscall STCrabC::Bad(STCrabC *this,int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar5 = (int)g_worldGrid.sizeX;
  iVar4 = (int)g_worldGrid.sizeY;
  if ((((iVar5 + -1 < *(int *)&this->field_0x26d) || (*(int *)&this->field_0x26d < 0)) ||
      (iVar4 + -1 < *(int *)&this->field_0x271)) || (*(int *)&this->field_0x271 < 0)) {
    iVar3 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x202,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_birth_coordinate___a_007cade4);
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    *(int *)&this->field_0x26d = iVar5 + -1 >> 1;
    *(int *)&this->field_0x271 = iVar4 + -1 >> 1;
  }
  if (((int)this->field_0275 < 0) || (4 < (int)this->field_0275)) {
    iVar4 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x207,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_birth_coordinate___a_007cade4);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    this->field_0275 = 0;
  }
  if (0x167 < (int)this->field_027D) {
    iVar4 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x20c,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_coordinates___adjus_007cadb4);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
      return (bool)uVar2;
    }
    this->field_027D = 0;
  }
  iVar4 = 0;
  do {
    iVar5 = thunk_FUN_004961b0(*(short *)&this->field_0x26d,*(short *)&this->field_0x271,
                               (short)iVar4);
    if (iVar5 != 0) {
      this->field_0275 = iVar4;
      return SUB41(iVar5,0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  return false;
}

