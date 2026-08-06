#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079E2C8+0xC */

undefined4 __fastcall FUN_00724d40(void *param_1)

{
  int iVar1;

  STField<undefined2>(param_1,0x17e) = STField<undefined2>(param_1,0x198);
  STField<undefined2>(param_1,0x17c) = STField<undefined2>(param_1,0x194);
  STField<int>(param_1,0x180) = (int)param_1 + 0x24;
  iVar1 = FUN_006e5fe0(param_1,(undefined4 *)((int)param_1 + 0x168));
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return 0;
}

