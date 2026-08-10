#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=0, unknown=0 */

byte * FUN_007175d0(byte *param_1,int param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  byte *pbVar3;
  uint size;

  size = param_2 * param_3;
  pbVar1 = Library::DKW::LIB::MemAlloc(size);
  pbVar3 = pbVar1;
  memmove(pbVar3, param_1, size); /* compiler REP MOVS byte copy */
  pbVar3 = pbVar1;
  if (-1 < (int)(size - 1)) {
    do {
      if (param_4 < *pbVar3) {
        *pbVar3 = param_4;
      }
      size = size - 1;
      pbVar3 = pbVar3 + 1;
    } while (size != 0);
  }
  return pbVar1;
}

