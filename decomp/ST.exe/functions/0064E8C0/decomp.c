#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0064e8c0(RecoveredRecord_0064E8C0_55D619B7 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[10].field_0x8)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((-1 < param_1->field_0010) && (param_1->field_0010 < 0x100)) {
    return 1;
  }
  return 0;
}

