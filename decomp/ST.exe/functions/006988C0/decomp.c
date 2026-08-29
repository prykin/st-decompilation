#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_006988C0(CGenerate *this)

{
  CGenerate_field_5853DArray *pCVar1;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar3;
  DArrayTy *pDVar6;
  uint local_EAX_596;
  uint local_EAX_615;
  uint uVar7;
  int iVar2;
  dword dVar8;
  AnonShape_00697AF0_A94F4D28 *pAVar9;
  int iVar10;
  bool bVar11;
  RecoveredRecord_006A1370_30F34641 local_3c;
  dword local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  AnonShape_00697AF0_A94F4D28 *pAStack_8;

  if (this->field_5853 != nullptr) {
    dVar8 = this->field_5853->count;
    local_30 = 0;
    local_34 = dVar8;
    if (0 < (int)dVar8) {
      do {
        pCVar1 = this->field_5853;
        if (local_30 < pCVar1->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pAStack_8 = (AnonShape_00697AF0_A94F4D28 *)
                      ((int)&pCVar1->data->field_0000 + pCVar1->elementSize * local_30);
        }
        else {
          pAStack_8 = nullptr;
        }
        pAVar9 = pAStack_8;
        if (((0 < *(int *)&pAStack_8->field_0x0) && (*(int *)&pAStack_8->field_0x9 == 4)) &&
           (*(int *)&pAStack_8->field_0xd == 2)) {

          iVar3 = thunk_FUN_00697af0(this,pAStack_8,(int *)&local_14,&local_18,(int *)&local_1c,
                                     &local_10);
          if (iVar3 != 0) {
            local_c = 0;
            iVar10 = (byte)pAVar9->field_0x4 - 1;
            local_24 = local_1c + 1;
            local_20 = local_10 + 1;
            /* ST_CALLSITE[0069897A]: CALL 0x00405d85; direct=00405D85 CGenerate::sub_00697C50 */
            iVar3 = sub_00697C50(this,iVar10,local_14 - 1,local_18 + -1);
            if (iVar3 != 0) {
              local_c = 1;
            }
            /* ST_CALLSITE[00698995]: CALL 0x00405d85; direct=00405D85 CGenerate::sub_00697C50 */
            iVar3 = sub_00697C50(this,iVar10,local_24,local_20);
            if (iVar3 != 0) {
              local_c = local_c + 1;
            }
            local_28 = 0;
            local_24 = local_1c + 1;
            local_20 = local_18 - 1;
            /* ST_CALLSITE[006989C5]: CALL 0x00405d85; direct=00405D85 CGenerate::sub_00697C50 */
            iVar3 = sub_00697C50(this,iVar10,local_14 - 1,local_10 + 1);
            if (iVar3 != 0) {
              local_28 = 1;
            }
            /* ST_CALLSITE[006989E0]: CALL 0x00405d85; direct=00405D85 CGenerate::sub_00697C50 */
            iVar3 = sub_00697C50(this,iVar10,local_24,local_20);
            uVar4 = local_28;
            if (iVar3 != 0) {
              uVar4 = local_28 + 1;
            }
            if ((int)uVar4 < local_c) {
              if (0 < local_c) {
                /* ST_CALLSITE[00698A07]: CALL 0x00405731; direct=00405731 CGenerate::sub_006A0E30 */
                sub_006A0E30(this,local_14,local_18,*(int *)&pAVar9->field_0x0,-1);
                iVar3 = *(int *)&pAVar9->field_0x0;
                iVar10 = local_10;
LAB_00698a36:
                /* ST_CALLSITE[00698A3D]: CALL 0x00405731; direct=00405731 CGenerate::sub_006A0E30 */
                sub_006A0E30(this,local_1c,iVar10,iVar3,-1);
              }
            }
            else if (0 < (int)uVar4) {
              /* ST_CALLSITE[00698A29]: CALL 0x00405731; direct=00405731 CGenerate::sub_006A0E30 */
              sub_006A0E30(this,local_14,local_10,*(int *)&pAVar9->field_0x0,-1);
              iVar3 = *(int *)&pAVar9->field_0x0;
              iVar10 = local_18;
              goto LAB_00698a36;
            }
          }
          dVar8 = local_34;
          if (*(int *)&pAVar9->field_0x0 <= this->field_5847 + -1) {
            pDVar6 = pAVar9->field_0015;
            uVar4 = 0;
            local_c = 0;
            if ((pDVar6 != nullptr) && (uVar7 = pDVar6->count, 0 < (int)uVar7)) {
              bVar11 = uVar7 != 0;
              do {
                if (bVar11) {
                  pbVar5 = DArrayAt<byte>(pDVar6, uVar4);
                }
                else {
                  pbVar5 = nullptr;
                }
                if ((pbVar5[1] == 0) && ((*pbVar5 & 2) != 0)) {
                  local_c = local_c + 1;
                }
                uVar4 = uVar4 + 1;
                bVar11 = uVar4 < uVar7;
              } while ((int)uVar4 < (int)uVar7);
            }

            uVar3 = Library::MSVCRT::FUN_0072e6c0();
            uVar4 = uVar3 & 0x80000001;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
            }
            local_28 = uVar4 + 1;
            if (this->field_5847 < (int)(*(int *)&pAVar9->field_0x0 + uVar4 + 1)) {
              local_28 = uVar4;
            }
            dVar8 = local_34;
            if ((local_28 != 0) && (0 < local_c)) {
              pDVar6 = pAVar9->field_0015;
              local_2c = 0;
              if (0 < (int)pDVar6->count) {
                bVar11 = pDVar6->count != 0;
                do {
                  if (bVar11) {
                    pbVar5 = DArrayAt<byte>(pDVar6, local_2c);
                  }
                  else {
                    pbVar5 = nullptr;
                  }
                  if (pbVar5[1] == 0) {
                    local_24 = *(int *)(pbVar5 + 2) / this->field_5833;
                    local_20 = *(int *)(pbVar5 + 2) % this->field_5833;
                    pAVar9 = pAStack_8;
                    if (((*pbVar5 & 2) != 0) &&

                       (local_EAX_596 = Library::MSVCRT::FUN_0072e6c0(), pAVar9 = pAStack_8,
                       (int)local_EAX_596 % (local_c + 1) == 1)) {

                      local_EAX_615 = Library::MSVCRT::FUN_0072e6c0();
                      uVar4 = local_EAX_615 & 0x80000001;
                      if ((int)uVar4 < 0) {
                        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                      }

                      uVar7 = Library::MSVCRT::FUN_0072e6c0();

                      iVar2 = thunk_FUN_006a1370(this->field_0008,local_20,local_24,local_28,
                                                 &local_3c);
                      pAVar9 = pAStack_8;
                      if ((int)((short)iVar2 + uVar4 + 1) < this->field_5847) {
                        thunk_FUN_006a0c90(local_20,local_24,*(int *)&pAStack_8->field_0x0 + 1,
                                           uVar4 + 1,0xff,0,(int)uVar7 % 6 + 1);
                        pAVar9 = pAStack_8;
                      }
                    }
                  }
                  pDVar6 = pAVar9->field_0015;
                  local_2c = local_2c + 1;
                  bVar11 = local_2c < pDVar6->count;
                  dVar8 = local_34;
                } while ((int)local_2c < (int)pDVar6->count);
              }
            }
          }
        }
        local_30 = local_30 + 1;
      } while ((int)local_30 < (int)dVar8);
    }
  }
  return;
}

