#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0064ea60(RecoveredRecord_0064EA60_9905C978 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[0x11].field_0x4)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((-1 < param_1->field_0008) && (param_1->field_0008 < 0x21)) {
    return 1;
  }
  return 0;
}

