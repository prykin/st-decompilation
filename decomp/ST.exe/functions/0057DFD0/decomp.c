#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STResourceC::SetResource

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall STResourceC::SetResource(STResourceC *this,int param_1,int param_2)

{
  int iVar2;

  if (this->field_0255 == 0xdd) {
    if (param_1 < 1000000) goto cf_common_exit_0057E045;
    iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x36,0,0,"%s",
                               "STResourceC::SetResource - value too big");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if ((this->field_0255 != 0xde) || (param_1 < 1000000)) goto cf_common_exit_0057E045;
    iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x3c,0,0,"%s",
                               "STResourceC::SetResource - value too big");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  param_1 = 999999;
cf_common_exit_0057E045:
  this->field_0259 = param_1;
  if (param_1 < 1) {
    if (param_2 != 0) {
      /* ST_CALLSITE[0057E05A]: CALL 0x00403a30; direct=00403A30 STResourceC::sub_00580D30 */
      sub_00580D30(this,1);
    }
    thunk_FUN_00580fa0();
  }
  return;
}

