#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065339F
   -> TEST TEST EAX,EAX */

int __cdecl FUN_0064eb20(RecoveredRecord_0064EB20_CBD2CC1E *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[10].field_0x8)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return (uint)(-1 < param_1->field_0010);
}

