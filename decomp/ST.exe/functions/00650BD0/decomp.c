#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00650bd0(RecoveredRecord_AiEventClassTy_00650BD0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *(short *)param_1;
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  return 1;
}

