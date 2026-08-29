#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 0044C130 -> 00709470 @ 0044C2AB; literal 255 at 0044C29C | 0044C130 -> 00709470 @
   0044C48C; literal 255 at 0044C47D | 00709670 -> 00709470 @ 0070976B; FUN_00709670 parameter
   param_4

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=21; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044C130 @ 0044C2AB -> read as EAX on
   every CFG path | 0044C130 @ 0044C48C -> read as EAX on every CFG path | 00709670 @ 0070976B ->
   unknown: terminal before explicit accumulator kill */

int __thiscall
ST3DSMAPContext::sub_00709470
          (ST3DSMAPContext *this,int *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  byte uVar1;
  short sVar2;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar3;
  int iVar4;
  byte *puVar5;
  RecoveredSourceFamily_dibcopy *pRVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint local_414;
  ST3DSMAPContext *local_14;
  uint local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    iVar8 = 0;
    iVar12 = 0;
    local_8 = 0;
    param_3 = 0;
    piVar9 = param_1;
    iVar14 = param_2;
    if (0 < param_2) {
      do {
        iVar4 = *piVar9;
        if (((iVar4 != 0) && (iVar11 = STField<int>(iVar4,0x4), 0 < iVar11)) &&
           (iVar4 = STField<int>(iVar4,0x8), 0 < iVar4)) {
          if (iVar8 < iVar11) {
            iVar8 = iVar11;
          }
          if (iVar12 < iVar4) {
            iVar12 = iVar4;
          }
        }
        iVar14 = iVar14 + -1;
        piVar9 = piVar9 + 1;
      } while (iVar14 != 0);
    }
  }
  else {
    iVar14 = 32000;
    iVar8 = -32000;
    local_8 = 32000;
    param_3 = 32000;
    iVar12 = -32000;
    if (0 < param_2) {
      local_c = param_2;
      piVar9 = param_1;
      do {
        iVar4 = *piVar9;
        if ((iVar4 != 0) && (0 < STField<short>(iVar4,0x12))) {
          sVar2 = STField<short>(iVar4,0x14);
          local_10 = STReplaceLowWord((uint32_t)(piVar9), (uint16_t)(sVar2));
          if (0 < sVar2) {
            iVar11 = (int)STField<short>(iVar4,0xE);
            if (iVar11 < iVar14) {
              iVar14 = iVar11;
            }
            iVar11 = iVar11 + STField<short>(iVar4,0x12);
            if (iVar8 < iVar11) {
              iVar8 = iVar11;
            }
            iVar4 = (int)STField<short>(iVar4,0x10);
            if (iVar4 < param_3) {
              param_3 = iVar4;
            }
            if (iVar12 < iVar4 + sVar2) {
              iVar12 = iVar4 + sVar2;
            }
          }
        }
        piVar9 = piVar9 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      local_8 = iVar14;
    }
    iVar8 = iVar8 - local_8;
    iVar12 = iVar12 - param_3;
  }
  local_14 = this;

  FUN_006b0ba0(this->field_0004,&local_414,0,0x100);
  puVar5 = (undefined1 *)((int)&local_414 + 2);
  iVar14 = 0x100;
  do {
    uVar1 = puVar5[-2];
    puVar5[-2] = *puVar5;
    *puVar5 = uVar1;
    puVar5 = puVar5 + 4;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  iVar8 = iVar8 + param_4 * 2;
  if ((0 < iVar8) && (iVar12 = iVar12 + param_4 * 2, 0 < iVar12)) {

    pRVar6 = STPointerBoundaryCast<RecoveredSourceFamily_dibcopy *>(FUN_006b50c0(iVar8,iVar12,8,0x100,&local_414,1));
    uVar13 = pRVar6[1].field_0004;
    if (uVar13 == 0) {
      uVar13 = ((uint)pRVar6->field_000E * pRVar6->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pRVar6->field_0008;
    }

    pbVar7 = STPointerBoundaryCast<byte *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pRVar6));
    for (uVar10 = uVar13 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(uint *)pbVar7 = CONCAT22(CONCAT11(param_5,param_5),CONCAT11(param_5,param_5));
      pbVar7 = pbVar7 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pbVar7 = param_5;
      pbVar7 = pbVar7 + 1;
    }
    if (-1 < param_2 + -1) {
      piVar9 = param_1 + param_2 + -1;
      do {
        pRVar3 = (RecoveredRecordView_006B84D0_87AF9D9B *)*piVar9;
        if (((pRVar3 != nullptr) &&
            (0 < *(int *)&pRVar3->field_0x4)) && (0 < *(int *)&pRVar3->field_0x8)) {
          FUN_006b84d0(pRVar6,0,param_4 - local_8,param_4 - param_3,pRVar3);
        }
        piVar9 = piVar9 + -1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return (int)pRVar6;
  }
  return 0;
}

