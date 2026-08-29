#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00659669
   -> TEST TEST EAX,EAX */

int __cdecl FUN_006525e0(RecoveredRecordView_006525E0_3E62F5FD *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (*(short *)param_1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (7 < *(short *)param_1) {
    if (param_1->field_00D7 == '\b') {
      return (uint)(-1 < *(int *)&param_1->field_0x10);
    }
    return 0;
  }
  *(undefined4 *)&param_1->field_0x24 = 0;
  return (uint)(-1 < *(int *)&param_1->field_0x10);
}

