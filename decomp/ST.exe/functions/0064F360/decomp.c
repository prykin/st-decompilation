#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0064f360(RecoveredRecord_0064F360_F7C216AE *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[10].field_0x8)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((-1 < param_1->field_0010) && (param_1->field_0010 < 8)) {
    return 1;
  }
  return 0;
}

