#include "../../pseudocode_runtime.h"


char * __fastcall FUN_00694510(RecoveredRecord_00694510_C4C313B6 *param_1)

{
  char *pcVar1;
  int iVar2;

  param_1->field_199D = -1;
  while( true ) {
    iVar2 = param_1->field_199D + 1;
    param_1->field_199D = iVar2;
    while( true ) {
      if (7 < iVar2) {
        return nullptr;
      }

      iVar2 = thunk_FUN_00693e60(param_1,iVar2);
      if (iVar2 != 0) break;
      iVar2 = param_1->field_199D + 1;
      param_1->field_199D = iVar2;
    }

    pcVar1 = STPointerBoundaryCast<char *>(thunk_FUN_00693e60(param_1,param_1->field_199D));
    if (pcVar1 == nullptr) break;
    if (*pcVar1 == '\0') {
      return pcVar1;
    }
  }
  return nullptr;
}

