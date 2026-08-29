#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0064f110(RecoveredRecord_0064F110_056D040B *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(short *)param_1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  return 1;
}

