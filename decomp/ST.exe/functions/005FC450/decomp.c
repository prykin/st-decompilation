#include "../../pseudocode_runtime.h"


bool __thiscall FUN_005fc450(void *this,int param_1)

{
  int iVar1;

  iVar1 = STField<int>(this,0x23e) - param_1;
  STField<int>(this,0x23e) = iVar1;
  if (iVar1 < 1) {
    STField<undefined4>(this,0x23e) = 0;
  }
  return STField<int>(this,0x23e) == 0;
}

