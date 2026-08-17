#include "../../pseudocode_runtime.h"


undefined4 FUN_0074b4d1(AnonShape_0074B4D1_EE56C337 *param_1,int *param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;

  if (param_2 == nullptr) {
    uVar1 = 0x80004003;
  }
  else {
    /* ST_CALLSITE[0074B4EB]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1[-1].field_0x30);
    if (*(int *)&param_1[-1].field_0x18 == 0) {
      iVar3 = param_1->field_0078;
    }
    else {
      /* ST_CALLSITE[0074B4F7]: CALL dword ptr [0x0085bedc] */
      DVar2 = timeGetTime();
      iVar3 = DVar2 - param_1->field_0078;
    }
    if (iVar3 < 1) {
      *param_2 = 0;
    }
    else {
      /* ST_CALLSITE[0074B517]: CALL dword ptr [0x0085bd14] */
      iVar3 = MulDiv(100000,param_1->field_0044,iVar3);
      *param_2 = iVar3;
    }
    /* ST_CALLSITE[0074B520]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[-1].field_0x30);
    uVar1 = 0;
  }
  return uVar1;
}

