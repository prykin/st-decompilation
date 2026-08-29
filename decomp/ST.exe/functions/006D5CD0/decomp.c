#include "../../pseudocode_runtime.h"


undefined4 * __thiscall
FUN_006d5cd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  Library::Win32::COMSupport::FUN_00749024(this,param_2,0,param_3,1);
  STField<undefined4>(this,0x58) = 0;
  STField<undefined4>(this,0x60) = 0;
  STField<undefined4>(this,100) = 0;
  STField<undefined4>(this,0x6c) = 0;
  STField<undefined4>(this,0x68) = 0;
  STField<undefined4>(this,0x70) = 0;
  STField<undefined4>(this,0x5c) = param_1;
  *(VTable_0079DD1C **)this = &VTable_0079DD1C;
  STField<VTable_0079DCF8 *>(this,0xc) = &VTable_0079DCF8;
  return this;
}

