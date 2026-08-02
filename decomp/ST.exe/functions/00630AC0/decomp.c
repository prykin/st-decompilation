#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STManRuinC::sub_00630AC0(STManRuinC *this,uint param_1)

{
  int iVar1;
  short sVar2;
  STManRuinC_field_0038DArray *array;
  short *psVar3;
  int iVar4;
  int iVar5;

  array = this->field_0038;
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
  if ((array->count <= param_1) ||
     (psVar3 = (short *)((int)&array->data->field_0000 + array->elementSize * param_1),
     psVar3 == nullptr)) {
    return 0;
  }
  sVar2 = psVar3[3];
  iVar5 = ((int)psVar3[2] * (int)g_worldGrid.sizeX + (int)psVar3[1]) * (int)g_worldGrid.sizeY +
          (int)*psVar3;
  iVar1 = g_worldGrid.sizeY + iVar5;
  iVar4 = DArrayRemoveAt((DArrayTy *)array,param_1);
  if (iVar4 != 0) {
    return 0;
  }
  if (sVar2 == 1) {
    this->field_0034[iVar5] = 0;
    return 1;
  }
  this->field_0034[iVar5] = 0;
  this->field_0034[iVar5 + 1] = 0;
  this->field_0034[iVar1] = 0;
  this->field_0034[iVar1 + 1] = 0;
  return 1;
}

