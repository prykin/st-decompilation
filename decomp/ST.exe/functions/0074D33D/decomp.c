#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0074d33d(void *this,undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;

  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  EnterCriticalSection(lpCriticalSection);
  if (STField<int>(this,0x14) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    uVar1 = 0x80004005;
  }
  else {
    STField<undefined4>(this,0xc) = param_1;
    SetEvent(STField<HANDLE>(this,4));
    WaitForSingleObject(STField<HANDLE>(this,8),0xffffffff);
    uVar1 = STField<undefined4>(this,0x10);
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar1;
}

