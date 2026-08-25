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
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_20;
  uint local_18;
  CGenerate_field_5853Element *element_5853_2;
  int local_8;

  pCVar1 = this->field_5853;
  if (pCVar1 != nullptr) {
    uVar2 = pCVar1->count;
    iVar8 = 0;
    uVar9 = 0;
    local_8 = 0;
    if (0 < (int)uVar2) {
      do {
        if (uVar9 < uVar2) {
          element_5853 = DArrayAt<CGenerate_field_5853Element>(pCVar1, uVar9);
        }
        else {
          element_5853 = nullptr;
        }
        iVar5 = element_5853->field_0000;
        if ((((iVar5 < 2) && ((char)element_5853[1] == '\0')) && (0 < (int)element_5853->field_0005)) &&
           (((element_5853->field_000D == 1 && (iVar5 == 0)) ||
            ((element_5853->field_000D == 2 && (iVar5 == 1)))))) {
          if ((element_5853 != nullptr) && (element_5853->field_0011 < 10)) {
            iVar8 = iVar8 + 1;
          }
          local_8 = local_8 + element_5853->field_0011;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
    iVar5 = (local_8 * 100) / (int)this->field_582F;
    if (this->field_5843 < iVar5) {
      local_20 = 9;
      do {
        uVar9 = uVar2;
        if (0x117 < local_20) {
          return;
        }
        while ((uVar9 = uVar9 - 1, -1 < (int)uVar9 &&
               (iVar5 = (local_8 * 100) / (int)this->field_582F, this->field_5843 < iVar5))) {
          pCVar1 = this->field_5853;
          if (uVar9 < pCVar1->count) {
            element_5853_2 = DArrayAt<CGenerate_field_5853Element>(pCVar1, uVar9);
          }
          else {
            element_5853_2 = nullptr;
          }
          if (((((char)element_5853_2[1] == '\0') && (0 < (int)element_5853_2->field_0005)) &&
              (((element_5853_2->field_000D == 1 && (element_5853_2->field_0000 == 0)) ||
               ((element_5853_2->field_000D == 2 && (element_5853_2->field_0000 == 1)))))) &&
             ((element_5853_2 != nullptr &&
              (((element_5853_2->field_0011 <= local_20 &&
                (uVar6 = Library::MSVCRT::FUN_0072e6c0(),
                (int)uVar6 % (int)(((iVar8 < 4) - 1 & 3) + 2) != 0)) &&
               (iVar7 = element_5853_2->field_0015, iVar7 != 0)))))) {
            local_18 = 0;
            if (0 < STField<int>(iVar7,0xC)) {
              bVar10 = STField<int>(iVar7,0xC) != 0;
              do {
                if (bVar10) {
                  iVar7 = STField<int>(iVar7,0x8) * local_18 + STField<int>(iVar7,0x1C);
                }
                else {
                  iVar7 = 0;
                }
                if (((char *)iVar7)[1] == '\0') {
                  iVar3 = this->field_5833;
                  ((undefined1 *)iVar7)[1] = 1;
                  /* ST_CALLSITE[006977D5]: CALL 0x00405731; direct=00405731 CGenerate::sub_006A0E30 */
                  sub_006A0E30(this,STField<int>(iVar7,0x2) % iVar3,STField<int>(iVar7,0x2) / iVar3,
                               (uint)(element_5853_2->field_000D != 1),-1);
                  local_8 = local_8 + -1;
                }
                iVar7 = element_5853_2->field_0015;
                local_18 = local_18 + 1;
                bVar10 = local_18 < STField<uint>(iVar7,0xC);
              } while ((int)local_18 < (int)STField<uint>(iVar7,0xC));
            }
          }
        }
        local_20 = local_20 + 9;
      } while (this->field_5843 < iVar5);
    }
  }
  return;
}

