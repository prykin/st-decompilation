#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004E2190 -> 00490CA0 @ 004E21C7 | 004E2190 -> 006E62D0 @ 004E21BB */

undefined4 __thiscall FUN_004e2190(void *this,int *param_1)

{
  AnonShape_005EFAE0_B406B78B *pAVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar1 = *(AnonShape_005EFAE0_B406B78B **)((int)this + (int)param_1 * 0x28 + 0x4d0);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((pAVar1 != nullptr) &&
     (*(int *)((int)this + (int)param_1 * 0x28 + 0x4d4) != 0)) {
    iVar2 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,pAVar1,(int *)&param_1);
    if (iVar2 == 0) {
      thunk_FUN_00490ca0((STBoatC *)param_1);
    }
  }
  return 0;
}

