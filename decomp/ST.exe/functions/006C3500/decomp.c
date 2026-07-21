#include "../../pseudocode_runtime.h"


void FUN_006c3500(AnonShape_006C3500_19C01617 *param_1)

{
  int iVar1;
  undefined4 local_80 [26];
  uint local_18;

  iVar1 = param_1->field_0028;
  if (((param_1->field_0004 & 1) != 0) && (*(int *)(iVar1 + 0x40) == 0)) {
    memset(local_80, 0, 0x7c); /* compiler bulk-zero initialization */
    local_80[0] = 0x7c;
    local_18 = param_1->field_002C & 0x4840;
    local_80[1] = 7;
    local_80[3] = *(undefined4 *)(iVar1 + 0x18);
    local_80[2] = *(undefined4 *)(iVar1 + 0x1c);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(**(int **)(iVar1 + 0x30) + 0x18))(*(int **)(iVar1 + 0x30),local_80,iVar1 + 0x40,0);
  }
  return;
}

