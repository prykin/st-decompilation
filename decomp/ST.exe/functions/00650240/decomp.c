#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00650240(RecoveredRecord_AiEventClassTy_00650240 *param_1)

{
  short sVar1;

  sVar1 = *(short *)param_1;
  if (sVar1 < 1) {
    *(undefined4 *)&param_1->field_0x8 = 0xffffffff;
  }
  else if (param_1->field_0xd0 != '\b') {
    return 0;
  }
  if (sVar1 < 2) {
    *(undefined4 *)&param_1->field_0xc = 0;
  }
  else if (param_1->field_00D1 != '\n') {
    return 0;
  }
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0xffffffff;
  }
  else if (param_1->field_0xd2 != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
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
    *(undefined4 *)&param_1->field_0x28 = 1;
  }
  else if (*(char *)(param_1 + 1) != '\b') {
    return 0;
  }
  return 1;
}

