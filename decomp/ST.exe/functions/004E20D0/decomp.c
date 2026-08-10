#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0046F5C0 -> 004E20D0 @ 004706A7; /STBoatC+0x6f7 */

undefined4 __thiscall
FUN_004e20d0(void *this,int param_1,int param_2,STBoatC_field_06F7State param_3,undefined4 param_4)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) == 0)) {
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4d4) = 1;
    *(STBoatC_field_06F7State *)((int)this + (param_1 * 5 + 0x9b) * 8) = param_3;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4e4) =
         *(undefined4 *)(&DAT_007dfbac + param_3 * 4);
    thunk_FUN_004e2200(this,param_1,param_2,param_4);
    if (STField<int>(this,0x520) == 0) {
      STField<undefined4>(this,0x520) = 1;
      TLOBaseTy::RotateSpr(this,0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

