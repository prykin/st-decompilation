
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_006988C0(CGenerate *this)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  dword dVar6;
  AnonShape_00697AF0_A94F4D28 *pAVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_3c [2];
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
  AnonShape_00697AF0_A94F4D28 *local_8;

  if (this->field_5853 != (DArrayTy *)0x0) {
    dVar6 = this->field_5853->count;
    local_30 = 0;
    local_34 = dVar6;
    if (0 < (int)dVar6) {
      do {
        pDVar4 = this->field_5853;
        if (local_30 < pDVar4->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, local_30) (runtime stride) */
          local_8 = (AnonShape_00697AF0_A94F4D28 *)
                    (pDVar4->elementSize * local_30 + (int)pDVar4->data);
        }
        else {
          local_8 = (AnonShape_00697AF0_A94F4D28 *)0x0;
        }
        pAVar7 = local_8;
        if (((0 < *(int *)local_8) && (*(int *)&local_8->field_0x9 == 4)) &&
           (*(int *)&local_8->field_0xd == 2)) {
          iVar1 = thunk_FUN_00697af0(this,local_8,(int *)&local_14,&local_18,(int *)&local_1c,
                                     &local_10);
          if (iVar1 != 0) {
            local_c = 0;
            iVar8 = (byte)pAVar7->field_0x4 - 1;
            local_24 = local_1c + 1;
            local_20 = local_10 + 1;
            iVar1 = sub_00697C50(this,iVar8,local_14 - 1,local_18 + -1);
            if (iVar1 != 0) {
              local_c = 1;
            }
            iVar1 = sub_00697C50(this,iVar8,local_24,local_20);
            if (iVar1 != 0) {
              local_c = local_c + 1;
            }
            local_28 = 0;
            local_24 = local_1c + 1;
            local_20 = local_18 - 1;
            iVar1 = sub_00697C50(this,iVar8,local_14 - 1,local_10 + 1);
            if (iVar1 != 0) {
              local_28 = 1;
            }
            iVar1 = sub_00697C50(this,iVar8,local_24,local_20);
            uVar2 = local_28;
            if (iVar1 != 0) {
              uVar2 = local_28 + 1;
            }
            if ((int)uVar2 < local_c) {
              if (0 < local_c) {
                sub_006A0E30(this,local_14,local_18,*(int *)pAVar7,-1);
                iVar1 = *(int *)pAVar7;
                iVar8 = local_10;
LAB_00698a36:
                sub_006A0E30(this,local_1c,iVar8,iVar1,-1);
              }
            }
            else if (0 < (int)uVar2) {
              sub_006A0E30(this,local_14,local_10,*(int *)pAVar7,-1);
              iVar1 = *(int *)pAVar7;
              iVar8 = local_18;
              goto LAB_00698a36;
            }
          }
          dVar6 = local_34;
          if (*(int *)pAVar7 <= this->field_5847 + -1) {
            pDVar4 = pAVar7->field_0015;
            uVar2 = 0;
            local_c = 0;
            if ((pDVar4 != (DArrayTy *)0x0) && (uVar5 = pDVar4->count, 0 < (int)uVar5)) {
              bVar9 = uVar5 != 0;
              do {
                if (bVar9) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, uVar2) (runtime stride) */
                  pbVar3 = (byte *)(pDVar4->elementSize * uVar2 + (int)pDVar4->data);
                }
                else {
                  pbVar3 = (byte *)0x0;
                }
                if ((pbVar3[1] == 0) && ((*pbVar3 & 2) != 0)) {
                  local_c = local_c + 1;
                }
                uVar2 = uVar2 + 1;
                bVar9 = uVar2 < uVar5;
              } while ((int)uVar2 < (int)uVar5);
            }
            uVar2 = Library::MSVCRT::FUN_0072e6c0();
            uVar2 = uVar2 & 0x80000001;
            if ((int)uVar2 < 0) {
              uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
            }
            local_28 = uVar2 + 1;
            if (this->field_5847 < (int)(*(int *)pAVar7 + uVar2 + 1)) {
              local_28 = uVar2;
            }
            dVar6 = local_34;
            if ((local_28 != 0) && (0 < local_c)) {
              pDVar4 = pAVar7->field_0015;
              local_2c = 0;
              if (0 < (int)pDVar4->count) {
                bVar9 = pDVar4->count != 0;
                do {
                  if (bVar9) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, local_2c) (runtime stride) */
                    pbVar3 = (byte *)(pDVar4->elementSize * local_2c + (int)pDVar4->data);
                  }
                  else {
                    pbVar3 = (byte *)0x0;
                  }
                  if (pbVar3[1] == 0) {
                    local_24 = *(int *)(pbVar3 + 2) / this->field_5833;
                    local_20 = *(int *)(pbVar3 + 2) % this->field_5833;
                    pAVar7 = local_8;
                    if (((*pbVar3 & 2) != 0) &&
                       (uVar2 = Library::MSVCRT::FUN_0072e6c0(), pAVar7 = local_8,
                       (int)uVar2 % (local_c + 1) == 1)) {
                      uVar2 = Library::MSVCRT::FUN_0072e6c0();
                      uVar2 = uVar2 & 0x80000001;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
                      }
                      uVar5 = Library::MSVCRT::FUN_0072e6c0();
                      iVar1 = thunk_FUN_006a1370(this->field_0008,local_20,local_24,local_28,
                                                 local_3c);
                      pAVar7 = local_8;
                      if ((int)((int)(short)iVar1 + uVar2 + 1) < this->field_5847) {
                        thunk_FUN_006a0c90(local_20,local_24,*(int *)local_8 + 1,uVar2 + 1,0xff,0,
                                           (int)uVar5 % 6 + 1);
                        pAVar7 = local_8;
                      }
                    }
                  }
                  pDVar4 = pAVar7->field_0015;
                  local_2c = local_2c + 1;
                  bVar9 = local_2c < pDVar4->count;
                  dVar6 = local_34;
                } while ((int)local_2c < (int)pDVar4->count);
              }
            }
          }
        }
        local_30 = local_30 + 1;
      } while ((int)local_30 < (int)dVar6);
    }
  }
  return;
}

