#include "../../pseudocode_runtime.h"


undefined4 * __thiscall
FUN_006d70b0(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0074c952(this,param_1,param_2,(undefined4 *)&DAT_0079dae0);
  *(VTable_0079DDEC **)this = &VTable_0079DDEC;
  STField<undefined4>(this,0xa0) = param_4;
  STField<VTable_0079DDB0 *>(this,0xc) = &VTable_0079DDB0;
  STField<VTable_0079DD9C *>(this,0x10) = &VTable_0079DD9C;
  return this;
}

