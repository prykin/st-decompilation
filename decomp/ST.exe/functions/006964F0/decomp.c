#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_006964F0(CGenerate *this,uint param_1,int param_2)

{
  CGenerate_field_5853DArray *pCVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  int *piVar5;
  int local_54 [9];
  ulonglong local_30;
  int local_28;
  ushort *local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_8 = 0;
  pCVar1 = this->field_5853;
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
  if (((pCVar1 != nullptr) && (param_1 < pCVar1->count)) &&
     (piVar5 = (int *)((int)&pCVar1->data->field_0000 + pCVar1->elementSize * param_1),
     piVar5 != nullptr)) {
    if (param_2 != 0) {
      local_8 = *piVar5;
    }
    local_24 = this->field_584F + this->field_582F * local_8;
    iVar2 = *(int *)(STField<int>(piVar5,0x15) + 0xc);
    STField<int>(piVar5,0x11) = iVar2;
    local_1c = piVar5;
    if (iVar2 == 0) {
      thunk_FUN_00695cd0(this,param_1,param_2,-1);
    }
    else {
      /* ST_CALLSITE[00696570]: CALL 0x0040564b; direct=0040564B CGenerate::sub_006948E0 */
      sub_006948E0(this,this->field_5833);
      iVar2 = STField<int>(piVar5,0x15);
      local_18 = 0;
      uVar3 = STField<uint>(iVar2,0xC);
      if (0 < (int)uVar3) {
        do {
          if (local_18 < uVar3) {
            puVar4 = (undefined1 *)(STField<int>(iVar2,0x8) * local_18 + STField<int>(iVar2,0x1C));
          }
          else {
            puVar4 = nullptr;
          }
          /* ST_CALLSITE[006965AA]: CALL 0x0040208b; direct=0040208B CGenerate::sub_00696400 */
          local_28 = sub_00696400(this,*(int *)(puVar4 + 2),(int)local_54);
          local_14 = 0;
          local_10 = 0;
          if (0 < local_28) {
            local_c = local_54;
            local_20 = local_28;
            do {
              iVar2 = *local_c;
              if ((short)local_24[iVar2] == param_1) {
                local_14 = local_14 + 1;
                if (param_2 != 0) {

                  thunk_FUN_006a1370(this->field_0008,iVar2 % this->field_5833,
                                     iVar2 / this->field_5833,local_8,
                                     (RecoveredRecord_006A1370_30F34641 *)&local_30);
                  uVar3 = STPiece<4,4>(local_30) & 0xf;
                  piVar5 = local_1c;
                  if (((STPiece<4,4>(local_30) & 0x2000) == 0x2000) &&
                     (((8 < uVar3 && (uVar3 < 0xf)) || (uVar3 == 0)))) {
                    local_10 = local_10 + 1;
                  }
                }
              }
              else {

                thunk_FUN_006960d0(this,param_1,(short)local_24[iVar2]);
              }
              local_c = local_c + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            local_20 = 0;
          }
          *puVar4 = 0;
          if (((local_14 == local_28) && (local_28 == 8)) &&
             ((*puVar4 = 1, 3 < local_10 && (*puVar4 = 3, local_10 == 8)))) {
            *puVar4 = 7;
          }
          iVar2 = STField<int>(piVar5,0x15);
          local_18 = local_18 + 1;
          uVar3 = STField<uint>(iVar2,0xC);
        } while ((int)local_18 < (int)uVar3);
        return;
      }
    }
  }
  return;
}

