#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0044C130 -> 00709470 @ 0044C2AB; literal 255 at 0044C29C | 0044C130 -> 00709470 @
   0044C48C; literal 255 at 0044C47D | 00709670 -> 00709470 @ 0070976B; FUN_00709670 parameter
   param_4

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
ST3DSMAPContext::sub_00709470
          (ST3DSMAPContext *this,int *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  RecoveredSourceFamily_dibcopy *pRVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_414;
  ST3DSMAPContext *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    iVar7 = 0;
    iVar11 = 0;
    local_8 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    piVar8 = param_1;
    iVar13 = param_2;
    if (0 < param_2) {
      do {
        iVar3 = *piVar8;
        if (((iVar3 != 0) && (iVar10 = *(int *)(iVar3 + 4), 0 < iVar10)) &&
           (iVar3 = *(int *)(iVar3 + 8), 0 < iVar3)) {
          if (iVar7 < iVar10) {
            iVar7 = iVar10;
          }
          if (iVar11 < iVar3) {
            iVar11 = iVar3;
          }
        }
        iVar13 = iVar13 + -1;
        piVar8 = piVar8 + 1;
      } while (iVar13 != 0);
    }
  }
  else {
    iVar13 = 32000;
    iVar7 = -32000;
    local_8 = 32000;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 32000;
    iVar11 = -32000;
    if (0 < param_2) {
      local_c = param_2;
      piVar8 = param_1;
      do {
        iVar3 = *piVar8;
        if ((iVar3 != 0) && (0 < *(short *)(iVar3 + 0x12))) {
          sVar2 = *(short *)(iVar3 + 0x14);
          local_10 = STReplaceLowWord((uint32_t)(piVar8), (uint16_t)(sVar2));
          if (0 < sVar2) {
            iVar10 = (int)*(short *)(iVar3 + 0xe);
            if (iVar10 < iVar13) {
              iVar13 = iVar10;
            }
            iVar10 = iVar10 + *(short *)(iVar3 + 0x12);
            if (iVar7 < iVar10) {
              iVar7 = iVar10;
            }
            iVar3 = (int)*(short *)(iVar3 + 0x10);
            if (iVar3 < param_3) {
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_3 = iVar3;
            }
            if (iVar11 < iVar3 + sVar2) {
              iVar11 = iVar3 + sVar2;
            }
          }
        }
        piVar8 = piVar8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      local_8 = iVar13;
    }
    iVar7 = iVar7 - local_8;
    iVar11 = iVar11 - param_3;
  }
  local_14 = this;
  FUN_006b0ba0(this->field_0004,&local_414,0,0x100);
  puVar4 = (undefined1 *)((int)&local_414 + 2);
  iVar13 = 0x100;
  do {
    uVar1 = puVar4[-2];
    puVar4[-2] = *puVar4;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 4;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  iVar7 = iVar7 + param_4 * 2;
  if ((0 < iVar7) && (iVar11 = iVar11 + param_4 * 2, 0 < iVar11)) {
    pRVar5 = (RecoveredSourceFamily_dibcopy *)FUN_006b50c0(iVar7,iVar11,8,0x100,&local_414,1);
    uVar12 = pRVar5[1].field_0004;
    if (uVar12 == 0) {
      uVar12 = ((uint)pRVar5->field_000E * pRVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pRVar5->field_0008;
    }
    pbVar6 = (byte *)FUN_006b4fa0((int *)pRVar5);
    for (uVar9 = uVar12 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(uint *)pbVar6 = CONCAT22(CONCAT11(param_5,param_5),CONCAT11(param_5,param_5));
      pbVar6 = pbVar6 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pbVar6 = param_5;
      pbVar6 = pbVar6 + 1;
    }
    if (-1 < param_2 + -1) {
      piVar8 = param_1 + param_2 + -1;
      do {
        pbVar6 = (byte *)*piVar8;
        if (((pbVar6 != nullptr) && (0 < *(int *)(pbVar6 + 4))) && (0 < *(int *)(pbVar6 + 8))) {
          FUN_006b84d0(pRVar5,0,param_4 - local_8,param_4 - param_3,pbVar6);
        }
        piVar8 = piVar8 + -1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return (uint)pRVar5;
  }
  return 0;
}

