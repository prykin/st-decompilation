#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0057F530 returns data at 007CB0A4 @ 0057F553 | 0057F530 returns data at 007CB0A4 @
   0057F567 */

char * __thiscall FUN_0057f530(void *this,int param_1)

{
  byte uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int3 extraout_var;
  int iVar2;

  uVar1 = thunk_FUN_0057f240(0xe0,STField<int>(this,0x259));
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar2 = CONCAT31(extraout_var,uVar1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((param_1 == 0) && (iVar2 != 0 && -1 < extraout_var)) && (iVar2 < 5)) {
    return (&PTR_s_term0_007cb0a4)[iVar2];
  }
  return PTR_s_term0_007cb0a4;
}

