#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0064fb00(RecoveredRecord_0064FB00_42E58B4A *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  if (*(short *)param_1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0;
  }
  else if (param_1->field_00D7 != '\n') {
    return 0;
  }
  if (8 < *(short *)param_1) {
    if (((char *)param_1)[1] != '\b') {
      return 0;
    }
    return 1;
  }
  *(undefined4 *)&param_1->field_0x28 = 1;
  return 1;
}

