#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00608E90 @ 0060926E -> read as EAX on
   every CFG path | 00608E90 @ 00609288 -> read as EAX on every CFG path */

int __thiscall FUN_0060cb60(void *this,int param_1)

{
  uint *puVar1;
  puVar1 = Library::DKW::LIB::MemAlloc(param_1 * 0x44);
  STField<undefined4 *>(this,0x244) = puVar1;
  *puVar1 = 0;
  if (STField<int>(this,0x244) != 0) {
    STField<int>(this,0x23c) = param_1;
    STField<undefined4>(this,0x238) = 10;
    return 1;
  }
  STField<undefined4>(this,0x238) = 10;
  return 0;
}

