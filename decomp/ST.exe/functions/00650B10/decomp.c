#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00650b10(RecoveredRecord_AiEventClassTy_00650B10 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 2;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\n') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (*(int *)&param_1->field_0x10 != 0) {
    sVar1 = *(short *)param_1;
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
    return 1;
  }
  return 0;
}

