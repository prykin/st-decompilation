#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0052a030(RecoveredRecord_0052A030_A4DBF22A *param_1)

{
  uint uVar1;
  uVar1 = 0;
  switch(param_1->field_0014) {
  case 0:
    return 2;
  case 1:
    uVar1 = 1;
    break;
  case 2:
  case 3:
    return 0;
  }
  return uVar1;
}

