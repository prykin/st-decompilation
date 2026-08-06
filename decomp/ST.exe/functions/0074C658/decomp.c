#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C658 @ 0074BED6 */

undefined4 * __thiscall
FUN_0074c658(void *this,undefined4 param_1,int param_2,undefined4 param_3,char *text)

{
  CBaseOutputPin(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  STField<undefined4>(this,0xa4) = 0;
  STField<int>(this,0xa0) = param_2;
  *(VTable_007A1868 **)this = &VTable_007A1868;
  STField<VTable_007A1820 *>(this,0xc) = &VTable_007A1820;
  STField<VTable_007A1808 *>(this,0x10) = &VTable_007A1808;
  return this;
}

