#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006239A0 -> 00627790 @ 00623B42; STMineSetC::sub_006239A0 this; stable alias ESI */

void __fastcall FUN_00627790(STMineSetC *param_1)

{
  int iVar1;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  int local_8;

  if (DAT_008117bc != (undefined4 *)0x0) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_14 = *(undefined2 *)&param_1->field_0024;
    local_12 = param_1->field_0032;
    if ((((AnonShape_005EFAE0_B406B78B *)param_1->field_0241 == (AnonShape_005EFAE0_B406B78B *)0x0)
        || (iVar1 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,
                               (AnonShape_005EFAE0_B406B78B *)param_1->field_0241,&local_8),
           iVar1 == -4)) || (local_8 == 0)) {
      local_10 = 0xff;
      local_e = 0xffff;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_10 = *(undefined2 *)(local_8 + 0x24);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_e = *(undefined2 *)(local_8 + 0x32);
    }
    local_18 = 0x5de4;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_28);
    return;
  }
  return;
}

