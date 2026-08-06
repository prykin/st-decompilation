#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_006501a0(RecoveredRecord_AiEventClassTy_006501A0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  sVar1 = *(short *)param_1;
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\n') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\n') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 1;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if ((-1 < *(int *)&param_1->field_0xc) && (*(int *)&param_1->field_0xc < 8)) {
    return 1;
  }
  return 0;
}

