#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall CGenerate::sub_006971B0(CGenerate *this)

{
  dword dVar1;
  CGenerate_field_5853DArray *pCVar2;
  int iVar3;
  CGenerate_field_5853Element *element_5853;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int local_38;
  int local_20;

  local_20 = 0;
  uVar5 = this->field_583B;
  iVar3 = uVar5 * -4;
  if ((this->field_5853 != nullptr) &&
     (&stack0xffffffb0 != (undefined1 *)(uVar5 * 4))) {
    puVar10 = (undefined4 *)(&stack0xffffffb0 + iVar3);
    for (uVar5 = uVar5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    dVar1 = this->field_5853->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar2 = this->field_5853;
        if (uVar5 < pCVar2->count) {
          element_5853 = DArrayAt<CGenerate_field_5853Element>(pCVar2, uVar5);
        }
        else {
          element_5853 = nullptr;
        }
        if (element_5853 != nullptr) {
          *(int *)(&stack0xffffffb0 + element_5853->field_0000 * 4 + iVar3) =
               *(int *)(&stack0xffffffb0 + element_5853->field_0000 * 4 + iVar3) + element_5853->field_0011;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
    }
    local_38 = -1;
    iVar7 = 0;
    iVar9 = 0;
    iVar6 = -1;
    if (0 < this->field_583B) {
      do {
        iVar6 = (*(int *)(&stack0xffffffb0 + iVar9 * 4 + iVar3) * 100) / (int)this->field_582F;
        if (iVar9 == 0) {
          uVar5 = iVar6 - this->field_5843;
          uVar8 = (int)uVar5 >> 0x1f;
          iVar7 = (uVar5 ^ uVar8) - uVar8;
          local_38 = iVar9;
        }
        else {
          uVar5 = iVar6 - this->field_5843;
          uVar8 = (int)uVar5 >> 0x1f;
          iVar6 = (uVar5 ^ uVar8) - uVar8;
          if (iVar6 < iVar7) {
            iVar7 = iVar6;
            local_38 = iVar9;
          }
        }
        iVar9 = iVar9 + 1;
        iVar6 = local_38;
      } while (iVar9 < this->field_583B);
    }
    if (-1 < iVar6) {
      local_20 = iVar6;
    }
  }
  return local_20;
}

