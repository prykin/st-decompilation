#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0061DB80 -> 0061D9C0 @ 0061DBE3

   [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=23; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STLightC::sub_0061D9C0(STLightC *this,ushort *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint local_c;
  int local_8;

  local_8 = 0;
  local_c = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_3 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0x10;
    this->field_0093 = *(int *)param_1;
    this->field_0097 = *(undefined4 *)(param_1 + 2);
    this->field_009B = *(void **)(param_1 + 4);
    this->field_009F = *(void **)(param_1 + 6);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_1 + 8;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
  }
  uVar6 = this->field_0093;
  puVar1 = Library::DKW::LIB::MemAlloc(uVar6 * 4);
  this->field_009B = puVar1;
  puVar8 = param_1;
  for (uVar3 = uVar6 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *(undefined4 *)puVar8;
    puVar8 = puVar8 + 2;
    puVar1 = puVar1 + 1;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = param_3 + uVar6 * 4;
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)puVar1 = (char)*puVar8;
    puVar8 = (ushort *)((int)puVar8 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = param_1 + uVar6 * 2;
  iVar4 = this->field_0093;
  if (0 < iVar4) {
    piVar5 = this->field_009B;
    do {
      iVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      local_c = local_c + 8 + iVar7 * 0x14;
      local_8 = local_8 + iVar7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *param_2 = local_8;
  pvVar2 = Library::DKW::LIB::MemAlloc(local_c);
  this->field_009F = pvVar2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_2 = (int *)((int)pvVar2 + this->field_0093 * 4);
  local_c = 0;
  if (0 < this->field_0093) {
    do {
      *(int **)((int)this->field_009F + local_c * 4) = param_2;
      iVar4 = *(int *)((int)this->field_009B + local_c * 4);
      puVar8 = param_1;
      puVar1 = *(undefined4 **)((int)this->field_009F + local_c * 4);
      for (uVar6 = iVar4 * 5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar1 = *(undefined4 *)puVar8;
        puVar8 = puVar8 + 2;
        puVar1 = puVar1 + 1;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + iVar4 * 0x14;
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)puVar1 = (char)*puVar8;
        puVar8 = (ushort *)((int)puVar8 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + iVar4 * 10;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + iVar4 * 5;
      local_c = local_c + 1;
    } while ((int)local_c < this->field_0093);
  }
  return param_3;
}

