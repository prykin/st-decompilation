#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00755830 -> 007574C0 @ 00755958

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00755830 -> 007574C0 @ 00755958 */

void FUN_007574c0(AnonShape_00753C80_4C8E695D *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  AnonPointee_TLOBaseTy_0607 *pAVar5;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar2 = *(short *)(param_1->field_000C + 0x34);
  if (sVar2 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (**(code **)(param_1->field_000C + 8))(param_3 + 2);
  }
  else {
    iVar3 = (int)sVar2;
  }
  uVar1 = iVar3 + 8;
  pAVar5 = (AnonPointee_TLOBaseTy_0607 *)(param_2 + 0x10 + param_4);
  Library::MSVCRT::FUN_0072da70
            ((undefined4 *)(uVar1 + param_2 + 0x10 + param_4),pAVar5,
             *(short *)(param_2 + 8) - param_4);
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pAVar5->field_0000 = *param_3;
    param_3 = param_3 + 1;
    pAVar5 = (AnonPointee_TLOBaseTy_0607 *)&pAVar5->field_0004;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)&pAVar5->field_0000 = (char)*param_3;
    param_3 = (uint *)((int)param_3 + 1);
    pAVar5 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar5->field_0000 + 1);
  }
  *(short *)(param_2 + 8) = *(short *)(param_2 + 8) + (short)uVar1;
  return;
}

