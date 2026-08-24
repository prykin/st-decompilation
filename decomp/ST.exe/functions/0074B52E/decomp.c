#include "../../pseudocode_runtime.h"


undefined4 FUN_0074b52e(AnonShape_0074B52E_469E30A2 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_CALLSITE[0074B548]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1[-1].field_0x4);
    if ((*(int *)&param_1[-3].field_0x40 == 0) || (param_1->field_0044 < 2)) {
      *param_2 = 0;
    }
    else {
      uVar2 = param_1->field_0044 - 1;
      uVar3 = Library::MSVCRT::__alldiv
                        (param_1->field_0048,param_1->field_004C,uVar2,(int)uVar2 >> 0x1f);
      *param_2 = (int)uVar3;
    }
    /* ST_CALLSITE[0074B576]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[-1].field_0x4);
    uVar1 = 0;
  }
  return uVar1;
}

