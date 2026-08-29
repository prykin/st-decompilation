#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0064fef0(RecoveredRecord_0064FEF0_DD304A9A *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*(short *)param_1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 10000;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (5 < *(short *)param_1) {
    if (param_1->field_00D5 != '\b') {
      return 0;
    }
    return 1;
  }
  *(undefined4 *)&param_1->field_0x1c = 1;
  return 1;
}

