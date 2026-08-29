#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0057F530 returns data at 007CB0A4 @ 0057F553 | 0057F530 returns data at 007CB0A4 @
   0057F567 */

char * __thiscall FUN_0057f530(void *this,int param_1)

{
  int iVar1;


  iVar1 = thunk_FUN_0057f240(0xe0,STField<int>(this,0x259));
  if (((param_1 == 0) && (0 < iVar1)) && (iVar1 < 5)) {
    return (&PTR_s_term0_007cb0a4)[iVar1];
  }
  return PTR_s_term0_007cb0a4;
}

