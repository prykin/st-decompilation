#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=006925C6 MOV EDI,dword ptr [EBP + 0x8];
   first-use mask */

undefined4 __thiscall FUN_006925b0(void *this,ushort param_1,int param_2,int param_3,int param_4)

{
  if (param_3 == 0) {
    param_4 = param_4 + -1;
  }
  return *(undefined4 *)
          ((int)this +
          ((param_4 + (uint)param_1 + (param_3 * 3 + 0x90) * 2) * 5 + (param_2 - 1U & 0xffff)) * 4);
}

