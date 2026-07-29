#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall CGenerate::sub_006971B0(CGenerate *this)

{
  dword dVar1;
  CGenerate_field_5853DArray *pCVar2;
  CGenerate_field_5853Element *element_5853;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_38;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079d788;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_20 = 0;
  local_8 = 0;
  uVar3 = this->field_583B;
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  if ((this->field_5853 != (CGenerate_field_5853DArray *)0x0) &&
     (&stack0x00000000 != (undefined1 *)0x50)) {
    puVar8 = (undefined4 *)&stack0xffffffb0;
    for (uVar3 = uVar3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    dVar1 = this->field_5853->count;
    uVar3 = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar2 = this->field_5853;
        if (uVar3 < pCVar2->count) {
          element_5853 = DArrayAt<CGenerate_field_5853Element>(pCVar2, uVar3);
        }
        else {
          element_5853 = (CGenerate_field_5853Element *)0x0;
        }
        if (element_5853 != (CGenerate_field_5853Element *)0x0) {
          *(int *)(&stack0xffffffb0 + element_5853->field_0000 * 4) =
               *(int *)(&stack0xffffffb0 + element_5853->field_0000 * 4) + element_5853->field_0011;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)dVar1);
    }
    local_38 = -1;
    iVar5 = 0;
    iVar7 = 0;
    iVar4 = -1;
    if (0 < this->field_583B) {
      do {
        iVar4 = (*(int *)(&stack0xffffffb0 + iVar7 * 4) * 100) / (int)this->field_582F;
        if (iVar7 == 0) {
          uVar3 = iVar4 - this->field_5843;
          uVar6 = (int)uVar3 >> 0x1f;
          iVar5 = (uVar3 ^ uVar6) - uVar6;
          local_38 = iVar7;
        }
        else {
          uVar3 = iVar4 - this->field_5843;
          uVar6 = (int)uVar3 >> 0x1f;
          iVar4 = (uVar3 ^ uVar6) - uVar6;
          if (iVar4 < iVar5) {
            iVar5 = iVar4;
            local_38 = iVar7;
          }
        }
        iVar7 = iVar7 + 1;
        iVar4 = local_38;
      } while (iVar7 < this->field_583B);
    }
    if (-1 < iVar4) {
      local_20 = iVar4;
    }
  }
  ExceptionList = local_14;
  return local_20;
}

