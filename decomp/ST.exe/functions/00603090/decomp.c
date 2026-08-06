#include "../../pseudocode_runtime.h"


void __thiscall FUN_00603090(void *this,int param_1)

{
  short sVar1;

  if ((STField<int>(this,0x36e) == 0) && (param_1 != 0)) {
    sVar1 = PTR_00806724->entryCount;
    STField<undefined1>(this,0x39f) = 0xff;
    STField<int>(this,0x397) = sVar1 + -1;
    STField<undefined4>(this,0x36e) = 2;
  }
  if ((STField<int>(this,0x36e) == 1) && (param_1 == 0)) {
    STField<undefined4>(this,0x397) = 0;
    STField<undefined1>(this,0x39f) = 1;
    STField<undefined4>(this,0x36e) = 2;
  }
  return;
}

