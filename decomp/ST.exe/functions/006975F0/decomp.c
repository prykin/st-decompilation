#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_006975F0(CGenerate *this)

{
  CGenerate_field_5853DArray *pCVar1;
  uint uVar2;
  int iVar3;
  CGenerate_field_5853Element *element_5853;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_20;
  uint local_18;
  CGenerate_field_5853Element *element_5853_2;
  int local_8;

  pCVar1 = this->field_5853;
  if (pCVar1 != (CGenerate_field_5853DArray *)0x0) {
    uVar2 = pCVar1->count;
    iVar7 = 0;
    uVar8 = 0;
    local_8 = 0;
    if (0 < (int)uVar2) {
      do {
        if (uVar8 < uVar2) {
          element_5853 = DArrayAt<CGenerate_field_5853Element>(pCVar1, uVar8);
        }
        else {
          element_5853 = (CGenerate_field_5853Element *)0x0;
        }
        iVar4 = element_5853->field_0000;
        if ((((iVar4 < 2) && (element_5853->field_0x4 == '\0')) && (0 < (int)element_5853->field_0005)) &&
           (((element_5853->field_000D == 1 && (iVar4 == 0)) ||
            ((element_5853->field_000D == 2 && (iVar4 == 1)))))) {
          if ((element_5853 != (CGenerate_field_5853Element *)0x0) && (element_5853->field_0011 < 10)) {
            iVar7 = iVar7 + 1;
          }
          local_8 = local_8 + element_5853->field_0011;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar2);
    }
    iVar4 = (local_8 * 100) / (int)this->field_582F;
    if (this->field_5843 < iVar4) {
      local_20 = 9;
      do {
        uVar8 = uVar2;
        if (0x117 < local_20) {
          return;
        }
        while ((uVar8 = uVar8 - 1, -1 < (int)uVar8 &&
               (iVar4 = (local_8 * 100) / (int)this->field_582F, this->field_5843 < iVar4))) {
          pCVar1 = this->field_5853;
          if (uVar8 < pCVar1->count) {
            element_5853_2 = DArrayAt<CGenerate_field_5853Element>(pCVar1, uVar8);
          }
          else {
            element_5853_2 = (CGenerate_field_5853Element *)0x0;
          }
          if ((((element_5853_2->field_0x4 == '\0') && (0 < (int)element_5853_2->field_0005)) &&
              (((element_5853_2->field_000D == 1 && (element_5853_2->field_0000 == 0)) ||
               ((element_5853_2->field_000D == 2 && (element_5853_2->field_0000 == 1)))))) &&
             ((element_5853_2 != (CGenerate_field_5853Element *)0x0 &&
              (((element_5853_2->field_0011 <= local_20 &&
                (uVar5 = Library::MSVCRT::FUN_0072e6c0(),
                (int)uVar5 % (int)(((iVar7 < 4) - 1 & 3) + 2) != 0)) &&
               (iVar6 = element_5853_2->field_0015, iVar6 != 0)))))) {
            local_18 = 0;
            if (0 < *(int *)(iVar6 + 0xc)) {
              bVar9 = *(int *)(iVar6 + 0xc) != 0;
              do {
                if (bVar9) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar6 = *(int *)(iVar6 + 8) * local_18 + *(int *)(iVar6 + 0x1c);
                }
                else {
                  iVar6 = 0;
                }
                if (*(char *)(iVar6 + 1) == '\0') {
                  iVar3 = this->field_5833;
                  *(undefined1 *)(iVar6 + 1) = 1;
                  sub_006A0E30(this,*(int *)(iVar6 + 2) % iVar3,*(int *)(iVar6 + 2) / iVar3,
                               (uint)(element_5853_2->field_000D != 1),-1);
                  local_8 = local_8 + -1;
                }
                iVar6 = element_5853_2->field_0015;
                local_18 = local_18 + 1;
                bVar9 = local_18 < *(uint *)(iVar6 + 0xc);
              } while ((int)local_18 < (int)*(uint *)(iVar6 + 0xc));
            }
          }
        }
        local_20 = local_20 + 9;
      } while (this->field_5843 < iVar4);
    }
  }
  return;
}

