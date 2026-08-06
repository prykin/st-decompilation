#include "../../pseudocode_runtime.h"


int __thiscall FUN_00724330(void *this,int param_1)

{
  int iVar1;

  iVar1 = 1;
  if ((STField<int>(this,0x58) != 0) && (STField<int>(this,0x5c) != 0)) {
    iVar1 = (param_1 / STField<int>(this,0x5c)) * STField<int>(this,0x60) + 1;
  }
  return iVar1;
}

