#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00650f50(RecoveredRecord_00650F50_B7B27450 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[10].field_0x8)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((-1 < param_1->field_0010) && (param_1->field_0010 < 3)) {
    return 1;
  }
  return 0;
}

