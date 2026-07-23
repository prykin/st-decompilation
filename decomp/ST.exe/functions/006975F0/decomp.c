
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_006975F0(CGenerate *this)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_20;
  uint local_18;
  AnonShape_006975F0_6D562F4E *local_10;
  int local_8;

  pDVar1 = this->field_5853;
  if (pDVar1 != (DArrayTy *)0x0) {
    uVar2 = pDVar1->count;
    iVar8 = 0;
    uVar9 = 0;
    local_8 = 0;
    if (0 < (int)uVar2) {
      do {
        if (uVar9 < uVar2) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar9) (runtime stride) */
          piVar4 = (int *)(pDVar1->elementSize * uVar9 + (int)pDVar1->data);
        }
        else {
          piVar4 = (int *)0x0;
        }
        iVar5 = *piVar4;
        if ((((iVar5 < 2) && ((char)piVar4[1] == '\0')) && (0 < *(int *)((int)piVar4 + 5))) &&
           (((*(int *)((int)piVar4 + 0xd) == 1 && (iVar5 == 0)) ||
            ((*(int *)((int)piVar4 + 0xd) == 2 && (iVar5 == 1)))))) {
          if ((piVar4 != (int *)0x0) && (*(int *)((int)piVar4 + 0x11) < 10)) {
            iVar8 = iVar8 + 1;
          }
          local_8 = local_8 + *(int *)((int)piVar4 + 0x11);
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
          pDVar1 = this->field_5853;
          if (uVar9 < pDVar1->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar9) (runtime stride) */
            local_10 = (AnonShape_006975F0_6D562F4E *)
                       (pDVar1->elementSize * uVar9 + (int)pDVar1->data);
          }
          else {
            local_10 = (AnonShape_006975F0_6D562F4E *)0x0;
          }
          if ((((local_10->field_0x4 == '\0') && (0 < local_10->field_0005)) &&
              (((local_10->field_000D == 1 && (*(int *)local_10 == 0)) ||
               ((local_10->field_000D == 2 && (*(int *)local_10 == 1)))))) &&
             ((local_10 != (AnonShape_006975F0_6D562F4E *)0x0 &&
              (((local_10->field_0011 <= local_20 &&
                (uVar6 = Library::MSVCRT::FUN_0072e6c0(),
                (int)uVar6 % (int)(((iVar8 < 4) - 1 & 3) + 2) != 0)) &&
               (iVar7 = local_10->field_0015, iVar7 != 0)))))) {
            local_18 = 0;
            if (0 < *(int *)(iVar7 + 0xc)) {
              bVar10 = *(int *)(iVar7 + 0xc) != 0;
              do {
                if (bVar10) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar7 = *(int *)(iVar7 + 8) * local_18 + *(int *)(iVar7 + 0x1c);
                }
                else {
                  iVar7 = 0;
                }
                if (*(char *)(iVar7 + 1) == '\0') {
                  iVar3 = this->field_5833;
                  *(undefined1 *)(iVar7 + 1) = 1;
                  sub_006A0E30(this,*(int *)(iVar7 + 2) % iVar3,*(int *)(iVar7 + 2) / iVar3,
                               (uint)(local_10->field_000D != 1),-1);
                  local_8 = local_8 + -1;
                }
                iVar7 = local_10->field_0015;
                local_18 = local_18 + 1;
                bVar10 = local_18 < *(uint *)(iVar7 + 0xc);
              } while ((int)local_18 < (int)*(uint *)(iVar7 + 0xc));
            }
          }
        }
        local_20 = local_20 + 9;
      } while (this->field_5843 < iVar5);
    }
  }
  return;
}

