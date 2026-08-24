#include "../../pseudocode_runtime.h"


undefined1 FUN_00672b30(void)

{
  byte uVar1;
  if (DAT_00857560 != 0) {
    /* ST_CALLSITE[00672B3F]: CALL dword ptr [EAX + 0xc] */
    uVar1 = (*STField<code *>(PTR_0081194c,0xC))(DAT_00857560);
    return uVar1;
  }
  return 0;
}

