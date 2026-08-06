#include "../../pseudocode_runtime.h"


void FUN_006e2d50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar6;
  int *piVar7;
  int *piVar6_mg3;
  int *piVar4;
  int *piVar7_mg3;
  int *temp_103fa829f3ca;
  int *piVar5;
  int *temp_103f510114be;

  if (param_2 < param_1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (int *)((int)param_2 + param_4 * 2 + (param_5 + -1) * param_3 + -2);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int *)((int)param_1 + param_4 * 2 + (param_5 + -1) * param_3 + -2);
    while (0 < param_5) {
      if (param_6 < 1) {
        iVar3 = param_4;
        piVar6 = param_2;
        piVar7 = param_1;
        if (((uint)param_1 & 2) != 0) {
          piVar6 = (int *)((int)param_2 + -2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar7 = (int *)((int)param_1 + -2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto cf_continue_loop_006E2F66;
        }
        piVar6 = (int *)((int)piVar6 + -2);
        piVar7 = (int *)((int)piVar7 + -2);
        while (bVar2 = 1 < iVar3, iVar3 = iVar3 + -2, bVar2) {
          iVar1 = *piVar6;
          piVar6 = piVar6 + -1;
          *piVar7 = iVar1 - CONCAT22(-(short)param_6,-(short)param_6);
          piVar7 = piVar7 + -1;
        }
        if (iVar3 == -1) {
          STField<short>(piVar7,2) = STField<short>(piVar6,2) + (short)param_6;
        }
      }
      else {
        iVar3 = param_4;
        piVar4 = param_2;
        piVar5 = param_1;
        if (((uint)param_1 & 2) != 0) {
          piVar4 = (int *)((int)param_2 + -2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar5 = (int *)((int)param_1 + -2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto cf_continue_loop_006E2F66;
        }
        piVar6 = (int *)((int)piVar4 + -2);
        piVar7 = (int *)((int)piVar5 + -2);
        while (bVar2 = 1 < iVar3, iVar3 = iVar3 + -2, bVar2) {
          iVar1 = *piVar6;
          piVar6 = piVar6 + -1;
          *piVar7 = iVar1 + CONCAT22((short)param_6,(short)param_6);
          piVar7 = piVar7 + -1;
        }
        if (iVar3 == -1) {
          STField<short>(piVar7,2) = STField<short>(piVar6,2) + (short)param_6;
        }
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_continue_loop_006E2F66:
      param_2 = (int *)((int)param_2 - param_3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)((int)param_1 - param_3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_5 + -1;
    }
  }
  else {
    while (0 < param_5) {
      if (param_6 < 1) {
        temp_103fa829f3ca = param_2;
        temp_103f510114be = param_1;
        iVar3 = param_4;
        if (((uint)param_1 & 2) != 0) {
          temp_103fa829f3ca = (int *)((int)param_2 + 2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          temp_103f510114be = (int *)((int)param_1 + 2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto cf_continue_loop_006E2E31;
        }
        while (1 < iVar3) {
          *temp_103f510114be = *temp_103fa829f3ca - CONCAT22(-(short)param_6,-(short)param_6);
          temp_103fa829f3ca = temp_103fa829f3ca + 1;
          temp_103f510114be = temp_103f510114be + 1;
          iVar3 = iVar3 + -2;
        }
        if (iVar3 + -2 == -1) {
          *(short *)temp_103f510114be = (short)*temp_103fa829f3ca + (short)param_6;
        }
      }
      else {
        piVar6_mg3 = param_2;
        piVar7_mg3 = param_1;
        iVar3 = param_4;
        if (((uint)param_1 & 2) != 0) {
          piVar6_mg3 = (int *)((int)param_2 + 2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar7_mg3 = (int *)((int)param_1 + 2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto cf_continue_loop_006E2E31;
        }
        while (1 < iVar3) {
          *piVar7_mg3 = *piVar6_mg3 + CONCAT22((short)param_6,(short)param_6);
          piVar6_mg3 = piVar6_mg3 + 1;
          piVar7_mg3 = piVar7_mg3 + 1;
          iVar3 = iVar3 + -2;
        }
        if (iVar3 + -2 == -1) {
          *(short *)piVar7_mg3 = (short)*piVar6_mg3 + (short)param_6;
        }
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_continue_loop_006E2E31:
      param_2 = (int *)((int)param_2 + param_3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)((int)param_1 + param_3);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_5 + -1;
    }
  }
  return;
}

