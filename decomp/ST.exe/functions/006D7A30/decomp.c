#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 006C7610 -> 006D7A30 @ 006C7675; FUN_006c7610 parameter param_8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006d7a30(int param_1,int param_2,uint param_3,uint param_4,int param_5,byte param_6)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  bVar2 = param_6;
  uVar3 = param_3 + param_5 * -2;
  pbVar8 = (byte *)(param_2 * param_5 + param_1);
  if (param_5 < (int)(param_4 - param_5)) {
    local_18 = (param_4 - param_5) - param_5;
    do {
      pbVar9 = pbVar8;
      for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(uint *)pbVar9 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
        pbVar9 = pbVar9 + 4;
      }
      for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar9 = param_6;
        pbVar9 = pbVar9 + 1;
      }
      pbVar8 = pbVar8 + param_2;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar1 = param_1 + param_5;
  auto param_3_after_write = 0; /* compiler stack-slot lifetime split */
  iVar6 = param_5 * param_5;
  auto param_1_after_write = (param_4 - 1) * param_2 + param_1 + param_5; /* compiler stack-slot lifetime split */
  iVar7 = (1 - param_5) * iVar6 + (STSignedDiv4(iVar6));
  iVar4 = iVar6 * 2 * param_5;
  local_14 = param_5;
  local_c = 0;
  uint param_4_after_write = uVar3; /* compiler stack-slot lifetime split */
  int param_5_after_write = iVar1; /* compiler stack-slot lifetime split */
  local_10 = iVar4;
  if (0 < iVar4) {
    do {
      if (0 < iVar7) {
        pbVar8 = (byte *)(param_5_after_write - param_3_after_write);
        for (uVar5 = param_4_after_write >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pbVar8 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
          pbVar8 = pbVar8 + 4;
        }
        for (uVar5 = param_4_after_write & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar8 = param_6;
          pbVar8 = pbVar8 + 1;
        }
        pbVar8 = (byte *)(param_1_after_write - param_3_after_write);
        for (uVar5 = param_4_after_write >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pbVar8 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
          pbVar8 = pbVar8 + 4;
        }
        for (uVar5 = param_4_after_write & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar8 = param_6;
          pbVar8 = pbVar8 + 1;
        }
        param_5_after_write = param_5_after_write + param_2;
        param_1_after_write = param_1_after_write - param_2;
        local_14 = local_14 + -1;
        iVar4 = local_10 + iVar6 * -2;
        iVar7 = iVar7 - iVar4;
        local_10 = iVar4;
      }
      local_c = local_c + iVar6 * 2;
      param_3_after_write = param_3_after_write + 1;
      iVar7 = iVar7 + local_c + iVar6;
      param_4_after_write = param_4_after_write + 2;
    } while (local_c < iVar4);
  }
  iVar7 = iVar7 - (iVar4 + local_c) / 2;
  if (-1 < local_14) {
    param_4_after_write = local_14 + 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_6 = uVar3 + param_3_after_write * 2;
    do {
      pbVar8 = (byte *)(param_5_after_write - param_3_after_write);
      for (uVar3 = _param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pbVar8 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
        pbVar8 = pbVar8 + 4;
      }
      for (uVar3 = _param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar8 = bVar2;
        pbVar8 = pbVar8 + 1;
      }
      pbVar8 = (byte *)(param_1_after_write - param_3_after_write);
      for (uVar3 = _param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pbVar8 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
        pbVar8 = pbVar8 + 4;
      }
      for (uVar3 = _param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar8 = bVar2;
        pbVar8 = pbVar8 + 1;
      }
      if (iVar7 < 0) {
        param_3_after_write = param_3_after_write + 1;
        _param_6 = _param_6 + 2;
        local_c = local_c + iVar6 * 2;
        iVar7 = iVar7 + local_c;
      }
      param_5_after_write = param_5_after_write + param_2;
      param_1_after_write = param_1_after_write - param_2;
      local_10 = local_10 + iVar6 * -2;
      iVar7 = iVar7 + (iVar6 - local_10);
      param_4_after_write = param_4_after_write - 1;
    } while (param_4_after_write != 0);
  }
  return;
}

