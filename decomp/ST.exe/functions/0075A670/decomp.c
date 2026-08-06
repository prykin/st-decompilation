#include "../../pseudocode_runtime.h"


void FUN_0075a670(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar4;
  int iVar6;
  int *piVar8;
  int iVar9;
  int *piVar7;

  piVar7 = param_1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  puVar3 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x74);
  STField<undefined4 *>(param_1,0x19a) = puVar3;
  *puVar3 = FUN_0075a780;
  puVar3[2] = FUN_0075a800;
  puVar3[0x1c] = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == nullptr) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*param_1 + 4))(param_1,1,0xa00);
    piVar8 = puVar3 + 8;
    iVar9 = 10;
    do {
      *piVar8 = iVar6;
      piVar8 = piVar8 + 1;
      iVar6 = iVar6 + 0x100;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    puVar3[4] = 0;
    puVar3[1] = &LAB_0075aaa0;
    puVar3[3] = FUN_0075a860;
    return;
  }
  piVar8 = param_1 + 7;
  piVar1 = param_1 + 0x34;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = nullptr;
  if (0 < *piVar8) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = puVar3 + 0x12;
    piVar8 = (int *)(*piVar1 + 0xc);
    do {
      iVar6 = *piVar8;
      iVar9 = iVar6;
      if (piVar7[0x35] != 0) {
        iVar9 = iVar6 * 3;
      }
      iVar2 = *piVar7;
      iVar4 = FUN_00759e90(piVar8[5],iVar6);
      iVar5 = FUN_00759e90(piVar8[4],piVar8[-1]);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar4 = (**(code **)(iVar2 + 0x14))(piVar7,1,1,iVar5,iVar4,iVar9);
      piVar8 = piVar8 + 0x15;
      *param_2 = uVar4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < piVar7[7]);
  }
  puVar3[1] = FUN_0075aab0;
  puVar3[3] = FUN_0075acb0;
  puVar3[4] = puVar3 + 0x12;
  return;
}

