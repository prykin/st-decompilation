#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074d423(AnonShape_0074D423_CE3F4999 *param_1)

{
  HoloTy *pHVar1;
  AnonShape_0074D423_CE3F4999 *local_8;

  if (param_1->field_0008 != (HANDLE)0x0) {
    local_8 = param_1;
    /* ST_CALLSITE[0074D43C]: CALL dword ptr [0x0085bce0] */
    WaitForSingleObject(param_1->field_0008,0xffffffff);
    /* ST_CALLSITE[0074D445]: CALL EBX */
    CloseHandle(param_1->field_0008);
  }
  local_8 = (AnonShape_0074D423_CE3F4999 *)param_1->field_000C;
  while (local_8 != nullptr) {
    pHVar1 = (HoloTy *)FUN_0074dec2((int *)&local_8);
    Library::MSVCRT::FUN_0072e2b0(pHVar1);
  }
  FUN_0074de91(&param_1->field_000C);
  if (param_1->field_003C != (HANDLE)0x0) {
    /* ST_CALLSITE[0074D47B]: CALL EBX */
    CloseHandle(param_1->field_003C);
  }
  /* ST_CALLSITE[0074D481]: CALL dword ptr [0x0085bb84] */
  DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->field_0x24);
  FUN_0074de7f(&param_1->field_000C);
  return;
}

