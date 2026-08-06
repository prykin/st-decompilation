#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00696940(CGenerate *this,int param_1)

{
  dword dVar1;
  CGenerate_field_5853DArray *pCVar2;
  uint local_EAX_111;
  int iVar3;
  int iVar4;
  uint uVar3;
  uint uVar5;
  uint local_EAX_455;
  uint local_EAX_565;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint local_14;
  uint local_c;
  uint local_8;

  local_14 = 1;
  if (this->field_5853 != nullptr) {
    dVar1 = this->field_5853->count;
    local_c = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar2 = this->field_5853;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if (((local_c < pCVar2->count) &&
            (piVar7 = (int *)((int)&pCVar2->data->field_0000 + pCVar2->elementSize * local_c),
            piVar7 != nullptr)) && (*piVar7 != param_1)) {
          if (STField<int>(piVar7,0x15) != 0) {
            local_EAX_111 = Library::MSVCRT::FUN_0072e6c0();
            local_14 = (int)local_EAX_111 % 6 + 1;
          }
          iVar3 = STField<int>(piVar7,0x15);
          local_8 = 0;
          uVar5 = *(uint *)(iVar3 + 0xc);
          if (0 < (int)uVar5) {
            do {
              if (local_8 < uVar5) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar3 = *(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              iVar4 = *(int *)(iVar3 + 2) / this->field_5833;
              uVar6 = *(int *)(iVar3 + 2) % this->field_5833;
              uVar3 = Library::MSVCRT::FUN_0072e6c0();
              uVar5 = uVar3 & 0x80000003;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
              }
              if (((uVar5 == 1) && (uVar6 != 0)) &&
                 ((iVar4 != 0 && ((uVar6 != this->field_5833 && (iVar4 != this->field_5837)))))) {
                thunk_FUN_006a0c90(uVar6,iVar4,0,1,0,1,local_14);
              }
              local_8 = local_8 + 1;
              iVar3 = STField<int>(piVar7,0x15);
              uVar5 = *(uint *)(iVar3 + 0xc);
            } while ((int)local_8 < (int)uVar5);
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
    local_c = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar2 = this->field_5853;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((((local_c < pCVar2->count) &&
             (piVar7 = (int *)((int)&pCVar2->data->field_0000 + pCVar2->elementSize * local_c),
             piVar7 != nullptr)) && (*piVar7 == param_1)) &&
           (iVar3 = STField<int>(piVar7,0x15), iVar3 != 0)) {
          uVar5 = *(uint *)(iVar3 + 0xc);
          local_8 = 0;
          if (0 < (int)uVar5) {
            do {
              if (local_8 < uVar5) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar3 = *(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              iVar3 = *(int *)(iVar3 + 2);
              iVar4 = this->field_5833;
              local_14 = 0;
              if ((((int)STField<uint>(piVar7,5) < 1) || (2 < (int)STField<uint>(piVar7,5)))
                 || (local_EAX_455 = Library::MSVCRT::FUN_0072e6c0(), (int)local_EAX_455 % 3 != 0))
              {
                if (STField<uint>(piVar7,5) != 1) goto LAB_00696b1f;
                local_EAX_565 = Library::MSVCRT::FUN_0072e6c0();
                uVar5 = local_EAX_565 & 0x80000007;
                if ((int)uVar5 < 0) {
                  uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                }
                uVar6 = STField<uint>(piVar7,5);
                uVar5 = uVar5 + 1;
                iVar8 = 1;
                local_14 = 0;
              }
              else {
                local_14 = 1;
LAB_00696b1f:
                uVar6 = STField<uint>(piVar7,5);
                uVar5 = 1;
                iVar8 = 0xff;
              }
              thunk_FUN_006a0c90(iVar3 % iVar4 + 1,iVar3 / iVar4 + 1,local_14,uVar6,iVar8,1,uVar5);
              iVar3 = STField<int>(piVar7,0x15);
              local_8 = local_8 + 1;
              uVar5 = *(uint *)(iVar3 + 0xc);
            } while ((int)local_8 < (int)uVar5);
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
  }
  return;
}

