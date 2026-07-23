
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall CGenerate::sub_006978C0(CGenerate *this)

{
  dword dVar1;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  DArrayTy *pDVar7;
  DArrayTy *pDVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint local_18;
  uint local_10;
  AnonShape_006978C0_CB24540D *local_8;

  pDVar7 = this->field_5853;
  if (pDVar7 != (DArrayTy *)0x0) {
    dVar1 = pDVar7->count;
    local_18 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar7 = this->field_5853;
        if (local_18 < pDVar7->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, local_18) (runtime stride) */
          local_8 = (AnonShape_006978C0_CB24540D *)
                    (pDVar7->elementSize * local_18 + (int)pDVar7->data);
        }
        else {
          local_8 = (AnonShape_006978C0_CB24540D *)0x0;
        }
        pDVar2 = *(DArrayTy **)local_8;
        pDVar7 = pDVar2;
        if ((((0 < (int)pDVar2) && ((int)pDVar2 <= this->field_5847 + -1)) &&
            (local_8->field_0009 == 4)) && (0xb < local_8->field_0011)) {
          iVar3 = local_8->field_0015;
          iVar10 = 0;
          if (iVar3 != 0) {
            uVar6 = *(uint *)(iVar3 + 0xc);
            uVar9 = 0;
            if (0 < (int)uVar6) {
              bVar11 = uVar6 != 0;
              do {
                if (bVar11) {
                  pbVar5 = (byte *)(*(int *)(iVar3 + 8) * uVar9 + *(int *)(iVar3 + 0x1c));
                }
                else {
                  pbVar5 = (byte *)0x0;
                }
                if ((pbVar5[1] == 0) && ((*pbVar5 & 1) != 0)) {
                  iVar10 = iVar10 + 1;
                }
                uVar9 = uVar9 + 1;
                bVar11 = uVar9 < uVar6;
              } while ((int)uVar9 < (int)uVar6);
            }
          }
          uVar6 = Library::MSVCRT::FUN_0072e6c0();
          pDVar7 = (DArrayTy *)(uVar6 & 0x80000001);
          if ((int)pDVar7 < 0) {
            pDVar7 = (DArrayTy *)(((uint)((int)&pDVar7[-1].data + 3U) | 0xfffffffe) + 1);
          }
          pDVar8 = (DArrayTy *)((int)&pDVar7->flags + 1);
          if (this->field_5847 < (int)&pDVar8->flags + *(int *)local_8) {
            pDVar8 = pDVar7;
          }
          pDVar7 = pDVar8;
          if ((pDVar8 != (DArrayTy *)0x0) && (0 < iVar10)) {
            uVar6 = Library::MSVCRT::FUN_0072e6c0();
            pDVar7 = (DArrayTy *)((int)uVar6 / (iVar10 + 1));
            if (-1 < (int)uVar6 % (iVar10 + 1)) {
              pDVar7 = (DArrayTy *)local_8->field_0015;
              local_10 = 0;
              if (0 < (int)pDVar7->count) {
                bVar11 = pDVar7->count != 0;
                do {
                  if (bVar11) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, local_10) (runtime stride) */
                    pbVar5 = (byte *)(pDVar7->elementSize * local_10 + (int)pDVar7->data);
                  }
                  else {
                    pbVar5 = (byte *)0x0;
                  }
                  if (pbVar5[1] == 0) {
                    iVar3 = *(int *)(pbVar5 + 2);
                    iVar4 = this->field_5833;
                    if (((*pbVar5 & 2) != 0) &&
                       (uVar6 = Library::MSVCRT::FUN_0072e6c0(),
                       (int)uVar6 % (int)(((iVar10 < 3) - 1 & 2) + 2) == 1)) {
                      thunk_FUN_006a0c90(iVar3 % iVar4,iVar3 / iVar4,(int)((int)&pDVar2->flags + 1),
                                         (uint)pDVar8,0xff,1,1);
                    }
                  }
                  pDVar7 = (DArrayTy *)local_8->field_0015;
                  local_10 = local_10 + 1;
                  bVar11 = local_10 < pDVar7->count;
                } while ((int)local_10 < (int)pDVar7->count);
              }
            }
          }
        }
        local_18 = local_18 + 1;
      } while ((int)local_18 < (int)dVar1);
    }
  }
  return (uint)pDVar7;
}

