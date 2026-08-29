#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00657326
   -> TEST TEST EAX,EAX | 00652810 @ 006573C8 -> TEST TEST EAX,EAX */

int __cdecl FUN_006511a0(RecoveredRecord_006511A0_EA666092 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[10].field_0x8)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return (uint)(-1 < param_1->field_0010);
}

