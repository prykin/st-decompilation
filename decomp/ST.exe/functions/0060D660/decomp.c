#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STFieldC.
   Evidence: this_call_owners=[STFieldC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STFieldC::sub_0060D660(STFieldC *this,int *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint size;
  int *piVar7;
  int *piVar8;
  int local_14;
  int local_10;
  int local_8;
  int *piVar6;

  iVar6 = this->field_023C;
  size = iVar6 * 0x44;

  pvVar1 = Library::DKW::LIB::MemAlloc(size);
  this->field_0244 = pvVar1;
  if (pvVar1 == nullptr) {
    return 0;
  }

  iVar2 = thunk_FUN_0062ca00();
  piVar6 = param_1;
  piVar7 = this->field_0244;
  for (uVar4 = size >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  local_8 = 0;
  local_10 = 0;
  piVar7 = param_1 + iVar6 * 0x11;
  if (0 < (int)this->field_023C) {
    local_14 = 0;
    param_1 = piVar7;
    do {
      pvVar1 = this->field_0244;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = *(int *)((int)pvVar1 + local_14 + 0x40);
      if (((iVar6 != 0) || (*(int *)((int)pvVar1 + local_14 + 8) != 0)) && (*piVar7 != 0)) {
        piVar7 = piVar7 + 1;
        if (iVar6 != 0) {

          uVar3 = thunk_FUN_0062ca70((undefined4 *)((int)pvVar1 + local_14 + 0x40),piVar7);
          if (uVar3 != 0) {
            local_8 = local_8 + iVar2;
          }
          piVar7 = (int *)((int)piVar7 + iVar2);
        }
        if (*(int *)(local_14 + 8 + (int)this->field_0244) != 0) {

          pvVar1 = Library::DKW::LIB::MemAlloc(*(int *)((int)this->field_0244 + local_14 + 4) << 2);
          *(void **)(local_14 + 8 + (int)this->field_0244) = pvVar1;
          piVar8 = *(int **)((int)this->field_0244 + local_14 + 8);
          for (uVar4 = *(uint *)(local_14 + 4 + (int)this->field_0244) & 0x3fffffff; uVar4 != 0;
              uVar4 = uVar4 - 1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(char *)piVar8 = (char)*piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
            piVar8 = (int *)((int)piVar8 + 1);
          }
        }
        piVar7 = (int *)((int)param_1 + *param_1);
        param_1 = piVar7;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x44;
    } while (local_10 < (int)this->field_023C);
  }
  return size + local_8;
}

