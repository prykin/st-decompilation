#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0064f620(RecoveredRecord_0064F620_E51BA62D *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  sVar1 = *(short *)param_1;
  if (sVar1 < 2) {
    *(undefined4 *)&param_1->field_0xc = 0;
  }
  else if (param_1->field_00D1 != '\b') {
    return 0;
  }
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0;
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
  if (4 < sVar1) {
    if (((char *)param_1)[1] != '\b') {
      return 0;
    }
    return 1;
  }
  *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  return 1;
}

