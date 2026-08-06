#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall CGenerate::sub_006978C0(CGenerate *this)

{
  dword dVar1;
  CGenerate_field_5853DArray *pCVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  CGenerate_field_5853DArray *pCVar7;
  CGenerate_field_5853DArray *pCVar8;
  CGenerate_field_5853Element *element_5853;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint local_18;
  uint local_10;
  CGenerate_field_5853Element *element_5853_2;

  pCVar7 = this->field_5853;
  if (pCVar7 != nullptr) {
    dVar1 = pCVar7->count;
    local_18 = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar7 = this->field_5853;
        if (local_18 < pCVar7->count) {
          element_5853_2 = DArrayAt<CGenerate_field_5853Element>(pCVar7, local_18);
        }
        else {
          element_5853_2 = nullptr;
        }
        pCVar2 = (CGenerate_field_5853DArray *)element_5853_2->field_0000;
        pCVar7 = pCVar2;
        if ((((0 < (int)pCVar2) && ((int)pCVar2 <= this->field_5847 + -1)) &&
            (element_5853_2->field_0009 == 4)) && (0xb < element_5853_2->field_0011)) {
          iVar3 = element_5853_2->field_0015;
          iVar11 = 0;
          if (iVar3 != 0) {
            uVar6 = *(uint *)(iVar3 + 0xc);
            uVar10 = 0;
            if (0 < (int)uVar6) {
              bVar12 = uVar6 != 0;
              do {
                if (bVar12) {
                  pbVar5 = (byte *)(*(int *)(iVar3 + 8) * uVar10 + *(int *)(iVar3 + 0x1c));
                }
                else {
                  pbVar5 = nullptr;
                }
                if ((pbVar5[1] == 0) && ((*pbVar5 & 1) != 0)) {
                  iVar11 = iVar11 + 1;
                }
                uVar10 = uVar10 + 1;
                bVar12 = uVar10 < uVar6;
              } while ((int)uVar10 < (int)uVar6);
            }
          }
          uVar6 = Library::MSVCRT::FUN_0072e6c0();
          pCVar7 = (CGenerate_field_5853DArray *)(uVar6 & 0x80000001);
          if ((int)pCVar7 < 0) {
            pCVar7 = (CGenerate_field_5853DArray *)
                     (((uint)((int)&pCVar7[-1].data + 3U) | 0xfffffffe) + 1);
          }
          pCVar8 = (CGenerate_field_5853DArray *)((int)&pCVar7->flags + 1);
          if (this->field_5847 < (int)&pCVar8->flags + element_5853_2->field_0000) {
            pCVar8 = pCVar7;
          }
          pCVar7 = pCVar8;
          if ((pCVar8 != nullptr) && (0 < iVar11)) {
            uVar6 = Library::MSVCRT::FUN_0072e6c0();
            pCVar7 = (CGenerate_field_5853DArray *)((int)uVar6 / (iVar11 + 1));
            if (-1 < (int)uVar6 % (iVar11 + 1)) {
              pCVar7 = element_5853_2->field_0015;
              local_10 = 0;
              if (0 < (int)pCVar7->count) {
                bVar12 = pCVar7->count != 0;
                do {
                  if (bVar12) {
                    element_5853 = DArrayAt<CGenerate_field_5853Element>(pCVar7, local_10);
                  }
                  else {
                    element_5853 = nullptr;
                  }
                  if (STField<byte>(element_5853,1) == 0) {
                    iVar3 = STField<int>(element_5853,2);
                    iVar4 = this->field_5833;
                    if (((element_5853->field_0000 & 2) != 0) &&
                       (uVar6 = Library::MSVCRT::FUN_0072e6c0(),
                       (int)uVar6 % (int)(((iVar11 < 3) - 1 & 2) + 2) == 1)) {
                      thunk_FUN_006a0c90(iVar3 % iVar4,iVar3 / iVar4,(int)((int)&pCVar2->flags + 1),
                                         (uint)pCVar8,0xff,1,1);
                    }
                  }
                  pCVar7 = element_5853_2->field_0015;
                  local_10 = local_10 + 1;
                  bVar12 = local_10 < pCVar7->count;
                } while ((int)local_10 < (int)pCVar7->count);
              }
            }
          }
        }
        local_18 = local_18 + 1;
      } while ((int)local_18 < (int)dVar1);
    }
  }
  return (uint)pCVar7;
}

