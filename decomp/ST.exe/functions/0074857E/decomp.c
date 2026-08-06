#include "../../pseudocode_runtime.h"


void * __thiscall
FUN_0074857e(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            short *param_5)

{

  FUN_00747b12(this,param_1,param_2,param_3,param_4,param_5,0);
  STField<undefined4>(this,0x9c) = 0;
  STField<undefined1>(this,0xa0) = 0;
  STField<undefined1>(this,0xa1) = 0;
  memset((void *)((int)this + 0xa8), 0, 0x30); /* compiler bulk-zero initialization */
  return this;
}

