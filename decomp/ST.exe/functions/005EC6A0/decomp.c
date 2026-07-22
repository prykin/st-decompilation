#include "../../pseudocode_runtime.h"


void __fastcall FUN_005ec6a0(AnonShape_005EC6A0_C8559927 *param_1)

{
  int iVar1;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  int local_8;

  if (DAT_008117bc != (undefined4 *)0x0) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    local_12 = param_1->field_0032;
    local_10 = param_1->field_032A;
    local_18 = 0x5ddb;
    if (param_1->field_0354 != 0) {
      iVar1 = FUN_006e62d0(g_playSystem_00802A38,param_1->field_0354,&local_8);
      if (iVar1 != -4) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_e = *(undefined2 *)(local_8 + 0x32);
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_28);
  }
  return;
}

