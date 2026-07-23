
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00696940(CGenerate *this,int param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint local_14;
  uint local_c;
  uint local_8;

  local_14 = 1;
  if (this->field_5853 != (DArrayTy *)0x0) {
    dVar1 = this->field_5853->count;
    local_c = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_5853;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, local_c) (runtime stride) */
        if (((local_c < pDVar2->count) &&
            (piVar7 = (int *)(pDVar2->elementSize * local_c + (int)pDVar2->data),
            piVar7 != (int *)0x0)) && (*piVar7 != param_1)) {
          if (*(int *)((int)piVar7 + 0x15) != 0) {
            uVar3 = Library::MSVCRT::FUN_0072e6c0();
            local_14 = (int)uVar3 % 6 + 1;
          }
          iVar4 = *(int *)((int)piVar7 + 0x15);
          local_8 = 0;
          uVar3 = *(uint *)(iVar4 + 0xc);
          if (0 < (int)uVar3) {
            do {
              if (local_8 < uVar3) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar4 = *(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c);
              }
              else {
                iVar4 = 0;
              }
              iVar5 = *(int *)(iVar4 + 2) / this->field_5833;
              uVar6 = *(int *)(iVar4 + 2) % this->field_5833;
              uVar3 = Library::MSVCRT::FUN_0072e6c0();
              uVar3 = uVar3 & 0x80000003;
              if ((int)uVar3 < 0) {
                uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
              }
              if (((uVar3 == 1) && (uVar6 != 0)) &&
                 ((iVar5 != 0 && ((uVar6 != this->field_5833 && (iVar5 != this->field_5837)))))) {
                thunk_FUN_006a0c90(uVar6,iVar5,0,1,0,1,local_14);
              }
              local_8 = local_8 + 1;
              iVar4 = *(int *)((int)piVar7 + 0x15);
              uVar3 = *(uint *)(iVar4 + 0xc);
            } while ((int)local_8 < (int)uVar3);
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
    local_c = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_5853;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, local_c) (runtime stride) */
        if ((((local_c < pDVar2->count) &&
             (piVar7 = (int *)(pDVar2->elementSize * local_c + (int)pDVar2->data),
             piVar7 != (int *)0x0)) && (*piVar7 == param_1)) &&
           (iVar4 = *(int *)((int)piVar7 + 0x15), iVar4 != 0)) {
          uVar3 = *(uint *)(iVar4 + 0xc);
          local_8 = 0;
          if (0 < (int)uVar3) {
            do {
              if (local_8 < uVar3) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar4 = *(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c);
              }
              else {
                iVar4 = 0;
              }
              iVar4 = *(int *)(iVar4 + 2);
              iVar5 = this->field_5833;
              local_14 = 0;
              if (((*(int *)((int)piVar7 + 5) < 1) || (2 < *(int *)((int)piVar7 + 5))) ||
                 (uVar3 = Library::MSVCRT::FUN_0072e6c0(), (int)uVar3 % 3 != 0)) {
                if (*(int *)((int)piVar7 + 5) != 1) goto LAB_00696b1f;
                uVar3 = Library::MSVCRT::FUN_0072e6c0();
                uVar3 = uVar3 & 0x80000007;
                if ((int)uVar3 < 0) {
                  uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
                }
                uVar6 = *(uint *)((int)piVar7 + 5);
                uVar3 = uVar3 + 1;
                iVar8 = 1;
                local_14 = 0;
              }
              else {
                local_14 = 1;
LAB_00696b1f:
                uVar6 = *(uint *)((int)piVar7 + 5);
                uVar3 = 1;
                iVar8 = 0xff;
              }
              thunk_FUN_006a0c90(iVar4 % iVar5 + 1,iVar4 / iVar5 + 1,local_14,uVar6,iVar8,1,uVar3);
              iVar4 = *(int *)((int)piVar7 + 0x15);
              local_8 = local_8 + 1;
              uVar3 = *(uint *)(iVar4 + 0xc);
            } while ((int)local_8 < (int)uVar3);
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
  }
  return;
}

