#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_006988C0(CGenerate *this)

{
  CGenerate_field_5853DArray *pCVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  DArrayTy *pDVar5;
  uint uVar6;
  dword dVar7;
  AnonShape_00697AF0_A94F4D28 *pAVar8;
  int iVar9;
  bool bVar10;
  undefined1 local_3c [8];
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

  if (this->field_5853 != (CGenerate_field_5853DArray *)0x0) {
    dVar7 = this->field_5853->count;
    local_30 = 0;
    local_34 = dVar7;
    if (0 < (int)dVar7) {
      do {
        pCVar1 = this->field_5853;
        if (local_30 < pCVar1->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pAStack_8 = (AnonShape_00697AF0_A94F4D28 *)
                      ((int)&pCVar1->data->field_0000 + pCVar1->elementSize * local_30);
        }
        else {
          pAStack_8 = (AnonShape_00697AF0_A94F4D28 *)0x0;
        }
        pAVar8 = pAStack_8;
        if (((0 < *(int *)&pAStack_8->field_0x0) && (*(int *)&pAStack_8->field_0x9 == 4)) &&
           (*(int *)&pAStack_8->field_0xd == 2)) {
          iVar2 = thunk_FUN_00697af0(this,pAStack_8,(int *)&local_14,&local_18,(int *)&local_1c,
                                     &local_10);
          if (iVar2 != 0) {
            local_c = 0;
            iVar9 = (byte)pAVar8->field_0x4 - 1;
            local_24 = local_1c + 1;
            local_20 = local_10 + 1;
            iVar2 = sub_00697C50(this,iVar9,local_14 - 1,local_18 + -1);
            if (iVar2 != 0) {
              local_c = 1;
            }
            iVar2 = sub_00697C50(this,iVar9,local_24,local_20);
            if (iVar2 != 0) {
              local_c = local_c + 1;
            }
            local_28 = 0;
            local_24 = local_1c + 1;
            local_20 = local_18 - 1;
            iVar2 = sub_00697C50(this,iVar9,local_14 - 1,local_10 + 1);
            if (iVar2 != 0) {
              local_28 = 1;
            }
            iVar2 = sub_00697C50(this,iVar9,local_24,local_20);
            uVar3 = local_28;
            if (iVar2 != 0) {
              uVar3 = local_28 + 1;
            }
            if ((int)uVar3 < local_c) {
              if (0 < local_c) {
                sub_006A0E30(this,local_14,local_18,*(int *)&pAVar8->field_0x0,-1);
                iVar2 = *(int *)&pAVar8->field_0x0;
                iVar9 = local_10;
LAB_00698a36:
                sub_006A0E30(this,local_1c,iVar9,iVar2,-1);
              }
            }
            else if (0 < (int)uVar3) {
              sub_006A0E30(this,local_14,local_10,*(int *)&pAVar8->field_0x0,-1);
              iVar2 = *(int *)&pAVar8->field_0x0;
              iVar9 = local_18;
              goto LAB_00698a36;
            }
          }
          dVar7 = local_34;
          if (*(int *)&pAVar8->field_0x0 <= this->field_5847 + -1) {
            pDVar5 = pAVar8->field_0015;
            uVar3 = 0;
            local_c = 0;
            if ((pDVar5 != (DArrayTy *)0x0) && (uVar6 = pDVar5->count, 0 < (int)uVar6)) {
              bVar10 = uVar6 != 0;
              do {
                if (bVar10) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar3) (runtime stride) */
                  pbVar4 = (byte *)(pDVar5->elementSize * uVar3 + (int)pDVar5->data);
                }
                else {
                  pbVar4 = (byte *)0x0;
                }
                if ((pbVar4[1] == 0) && ((*pbVar4 & 2) != 0)) {
                  local_c = local_c + 1;
                }
                uVar3 = uVar3 + 1;
                bVar10 = uVar3 < uVar6;
              } while ((int)uVar3 < (int)uVar6);
            }
            uVar3 = Library::MSVCRT::FUN_0072e6c0();
            uVar3 = uVar3 & 0x80000001;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
            }
            local_28 = uVar3 + 1;
            if (this->field_5847 < (int)(*(int *)&pAVar8->field_0x0 + uVar3 + 1)) {
              local_28 = uVar3;
            }
            dVar7 = local_34;
            if ((local_28 != 0) && (0 < local_c)) {
              pDVar5 = pAVar8->field_0015;
              local_2c = 0;
              if (0 < (int)pDVar5->count) {
                bVar10 = pDVar5->count != 0;
                do {
                  if (bVar10) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, local_2c) (runtime stride) */
                    pbVar4 = (byte *)(pDVar5->elementSize * local_2c + (int)pDVar5->data);
                  }
                  else {
                    pbVar4 = (byte *)0x0;
                  }
                  if (pbVar4[1] == 0) {
                    local_24 = *(int *)(pbVar4 + 2) / this->field_5833;
                    local_20 = *(int *)(pbVar4 + 2) % this->field_5833;
                    pAVar8 = pAStack_8;
                    if (((*pbVar4 & 2) != 0) &&
                       (uVar3 = Library::MSVCRT::FUN_0072e6c0(), pAVar8 = pAStack_8,
                       (int)uVar3 % (local_c + 1) == 1)) {
                      uVar3 = Library::MSVCRT::FUN_0072e6c0();
                      uVar3 = uVar3 & 0x80000001;
                      if ((int)uVar3 < 0) {
                        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
                      }
                      uVar6 = Library::MSVCRT::FUN_0072e6c0();
                      iVar2 = thunk_FUN_006a1370(this->field_0008,local_20,local_24,local_28,
                                                 (int)local_3c);
                      pAVar8 = pAStack_8;
                      if ((int)((int)(short)iVar2 + uVar3 + 1) < this->field_5847) {
                        thunk_FUN_006a0c90(local_20,local_24,*(int *)&pAStack_8->field_0x0 + 1,
                                           uVar3 + 1,0xff,0,(int)uVar6 % 6 + 1);
                        pAVar8 = pAStack_8;
                      }
                    }
                  }
                  pDVar5 = pAVar8->field_0015;
                  local_2c = local_2c + 1;
                  bVar10 = local_2c < pDVar5->count;
                  dVar7 = local_34;
                } while ((int)local_2c < (int)pDVar5->count);
              }
            }
          }
        }
        local_30 = local_30 + 1;
      } while ((int)local_30 < (int)dVar7);
    }
  }
  return;
}

