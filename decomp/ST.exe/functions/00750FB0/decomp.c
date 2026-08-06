#include "../../pseudocode_runtime.h"


void FUN_00750fb0(AnonShape_00750FB0_15A3AC3E *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar2;
  int local_EAX_64;
  int iVar1;
  int local_EAX_125;
  int iVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar3;
  *(undefined4 *)(iVar3 + 0xc) = param_2;
  *(undefined4 *)(param_1->field_000C + 0x10) = param_3;
  *(undefined4 *)(param_1->field_000C + 0x40) = 0;
  *(undefined4 *)(param_1->field_000C + 0x1c) = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1->field_0008 + 0x34) + *(int *)(param_1->field_000C + 0x24);
  local_EAX_64 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
  if (-1 < local_EAX_64) {
    iVar1 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
    iVar2 = *(int *)(iVar1 + 0x10 + iVar3);
    while (iVar2 != -1) {
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar3 = FUN_00753b80((AnonShape_00750F20_F8C16F98 *)param_1,iVar2,
                           *(int *)(param_1->field_000C + 0x1c));
      local_EAX_125 =
           FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(local_EAX_125 + 0x10 + iVar3);
    }
  }
  *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
       (int)*(short *)(iVar3 + 8);
  return;
}

