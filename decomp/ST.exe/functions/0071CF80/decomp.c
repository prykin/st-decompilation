#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079E284+0xC */

undefined4 __fastcall FUN_0071cf80(void *param_1)

{
  int iVar1;

  if (STField<int>(param_1,0x188) != 0) {
    STField<undefined2>(param_1,0x18e) = STField<undefined2>(param_1,0x1e8);
    STField<undefined2>(param_1,0x18c) = STField<undefined2>(param_1,0x1c);
    STField<int>(param_1,400) = (int)param_1 + 0x24;
    iVar1 = FUN_006e5fe0(param_1,(undefined4 *)((int)param_1 + 0x178));
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

