#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055c290(void *this,char *param_1)

{
  ulong uVar1;
  DWORD lastError;

  if (param_1 != nullptr) {
    /* ST_CALLSITE[0055C29E]: CALL dword ptr [0x0085c038] */
    uVar1 = CFsgsConnection::InitConnection(this,param_1);
    if (uVar1 == 1) {
      STField<undefined1>(this,8) = 1;
      return;
    }
  }
  /* ST_CALLSITE[0055C2B1]: CALL dword ptr [0x0085bbcc] */
  lastError = GetLastError();
  thunk_FUN_0055beb0(this,lastError);
  return;
}

