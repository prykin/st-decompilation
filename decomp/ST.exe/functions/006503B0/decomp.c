#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_006503b0(RecoveredRecord_006503B0_3B1FB22E *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  sVar1 = *(short *)param_1;
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0;
  }
  else if (param_1->field_00D7 != '\n') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 1;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (9 < sVar1) {
    if (param_1->field_00D9 != '\b') {
      return 0;
    }
    return 1;
  }
  *(undefined4 *)&param_1->field_0x2c = 0;
  return 1;
}

