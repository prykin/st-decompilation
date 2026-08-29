#include "../../pseudocode_runtime.h"


void __thiscall FUN_006d7060(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(STField<int>(this,0xe0) + 0xa0);
  uVar2 = STField<uint>(iVar1,0x4);
  if ((uVar2 & 0x1000000) != 0) {
    STField<uint>(iVar1,0x4) = uVar2 | 0x800000;
  }
  iVar1 = *(int *)(STField<int>(this,0xe0) + 0xa0);
  STField<uint>(iVar1,0x4) = STField<uint>(iVar1,0x4) | 0x1000000;
  Library::Win32::COMSupport::FUN_0074c434(this,param_1);
  return;
}

