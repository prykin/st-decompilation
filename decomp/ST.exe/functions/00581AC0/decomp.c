#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jell_m.cpp
   STJellyManC::Error

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004C4550 -> 00581AC0 @ 004C4728 */

undefined4 __thiscall
STJellyManC::Error(STJellyManC *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;

  if (this->field_020F < this->field_01FD) {
    uVar3 = thunk_FUN_00582460(param_1,param_2,param_3,this->field_01ED,this->field_01F1,
                               this->field_01F5,this->field_01F9,this->field_0018,this->field_0024,
                               this->field_0201,(uint)(ushort)this->field_0205,0xffff);
    return uVar3;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0xda,0,0,"%s",
                             "STJellyManC::Error:Max jellies reached");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

