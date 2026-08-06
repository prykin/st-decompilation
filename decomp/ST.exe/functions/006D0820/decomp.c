#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 006D0820 -> 006B0460 @ 006D089A */

void FUN_006d0820(int param_1,int param_2,int param_3,int param_4,
                 AnonShape_006D0820_E08F8169 *param_5,int param_6,int *param_7,int param_8,
                 int param_9,int param_10,int param_11,HPALETTE param_12)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  char *pcVar8;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  UINT UVar4;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_6 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = FUN_006b4fa0((int *)param_5);
  }
  local_1c = param_5->field_0004;
  local_18 = param_5->field_0008;
  uVar5 = (uint)param_5->field_000E * local_1c + 0x1f >> 3 & 0x1ffffffc;
  local_20 = 0;
  local_24 = 0;
  uVar6 = -uVar5;
  if (local_18 < 0) {
    local_18 = -local_18;
    uVar6 = uVar5;
  }
  local_10 = param_8;
  local_14 = param_7;
  local_c = param_9;
  local_8 = param_10;
  iVar3 = FUN_006b0460((int *)&local_14,(int *)&local_14,&local_24);
  if (iVar3 != 0) {
    pcVar8 = (char *)((int)local_14 +
                     param_3 + param_1 + (((local_10 - param_8) + param_4) * param_2 - (int)param_7)
                     );
    if ((int)uVar6 < 0) {
      iVar3 = -(((local_18 - local_10) + -1) * uVar6);
    }
    else {
      iVar3 = local_10 * uVar6;
    }
    puVar7 = (ushort *)(iVar3 + param_6 + (int)local_14 * 2);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = local_c;
    if ((param_5->field_0010 == 3) && (param_5->field_0028 == 0xf800)) {
      if (0 < local_8) {
        do {
          local_8 = local_8 + -1;
          iVar3 = param_6;
          if (0 < param_6) {
            do {
              uVar5 = (uint)*puVar7;
              puVar7 = puVar7 + 1;
              cVar2 = *(char *)(uVar5 + param_11);
              if (uVar5 < 0x8001) {
                if (cVar2 == -1) goto LAB_006d0950;
              }
              else if (cVar2 == '\0') {
LAB_006d0950:
                UVar4 = FUN_006d07d0(param_11,param_12,uVar5);
                cVar2 = (char)UVar4;
              }
              *pcVar8 = cVar2;
              pcVar8 = pcVar8 + 1;
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_6 = param_6 + -1;
              iVar3 = local_c;
            } while (param_6 != 0);
          }
          pcVar8 = pcVar8 + (param_2 - iVar3);
          puVar7 = (ushort *)((int)puVar7 + uVar6 + iVar3 * -2);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_6 = iVar3;
          if (local_8 < 1) {
            return;
          }
        } while( true );
      }
    }
    else {
      while (0 < local_8) {
        local_8 = local_8 + -1;
        iVar3 = param_6;
        if (0 < param_6) {
          do {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            uVar5 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x1f;
            cVar2 = *(char *)(uVar5 + param_11);
            if (uVar5 < 0x8001) {
              if (cVar2 == -1) goto LAB_006d09e1;
            }
            else if (cVar2 == '\0') {
LAB_006d09e1:
              UVar4 = FUN_006d07d0(param_11,param_12,uVar5);
              cVar2 = (char)UVar4;
            }
            *pcVar8 = cVar2;
            pcVar8 = pcVar8 + 1;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = param_6 + -1;
            iVar3 = local_c;
          } while (param_6 != 0);
        }
        pcVar8 = pcVar8 + (param_2 - iVar3);
        puVar7 = (ushort *)((int)puVar7 + uVar6 + iVar3 * -2);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = iVar3;
      }
    }
  }
  return;
}

