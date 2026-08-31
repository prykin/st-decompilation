#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /uint; every later accumulator definition is an exact full-width integer transform of that value;
   machine CFG audit: used=13, ignored=1, unknown=0 */

uint __cdecl FUN_006aff5b(int param_1)

{
  int local_EAX_38;
  int uVar1;
  uint uVar2;

  uVar2 = param_1 % 0x168;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0x168;
  }
  if (uVar2 < 0xb5) {

    uVar1 = FUN_006aff93();
  }
  else {

    local_EAX_38 = FUN_006aff93();
    uVar1 = -local_EAX_38;
  }
  return uVar1;
}

