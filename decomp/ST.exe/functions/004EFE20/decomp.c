#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as BldLabPanelTy.
   Evidence: this_call_owners=[BldLabPanelTy]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall BldLabPanelTy::sub_004EFE20(BldLabPanelTy *this)

{
  BldLabPanelTy_field_027ADArray *pBVar1;
  UINT UVar2;
  uint uVar3;
  int iVar4;
  Global_sub_00526BA0_param_1Enum *pGVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  byte *puVar8;
  undefined4 uVar9;
  int local_14;
  undefined4 *local_c;
  int local_8;

  if (this->field_027A != nullptr) {
    local_c = &this->field_01BE;
    puVar7 = &this->field_01A1;
    local_8 = 0;
    local_14 = 5;
    do {
      this->field_0028 = 0x21;
      FUN_006e6080(this,2,*puVar7,(undefined4 *)&this->field_0x18);
      iVar4 = this->field_002C;
      uVar3 = (uint)((uint)(local_8 + this->field_0199) < this->field_027A->count);
      this->field_002C = uVar3;
      if (uVar3 == 0) {
        if (iVar4 != 0) goto LAB_004eff2c;
LAB_004efe9c:
        this->field_0028 = 5;
        uVar9 = *puVar7;
      }
      else {
        if (iVar4 != 0) goto LAB_004efe9c;
LAB_004eff2c:
        this->field_0028 = 0x20;
        uVar9 = *puVar7;
      }
      FUN_006e6080(this,2,uVar9,(undefined4 *)&this->field_0x18);
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((((this->field_002C != 0) &&
           (pBVar1 = this->field_027A, pBVar1 != nullptr)) &&
          (uVar3 = this->field_0199 + local_8, uVar3 < pBVar1->count)) &&
         (pGVar5 = (Global_sub_00526BA0_param_1Enum *)
                   ((int)&pBVar1->data->field_0000 + pBVar1->elementSize * uVar3),
         pGVar5 != nullptr)) {
        *(char *)((int)local_c + -9) = ((char)pGVar5[2] == 0) + '\x03';
        UVar2 = thunk_FUN_00523410(*pGVar5,'\x03',0);
        local_c[-2] = UVar2;
        if ((char)pGVar5[2] == 0) {
          pbVar6 = (byte *)((int)pGVar5 + 0x12);
          puVar8 = (byte *)(local_c);
          memmove(puVar8, pbVar6, 0x1e); /* compiler REP MOVS byte copy */
        }
        else {
          *local_c = *(undefined4 *)((int)pGVar5 + 10);
          local_c[1] = *(undefined4 *)((int)pGVar5 + 0xe);
        }
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 1;
      local_c = (undefined4 *)((int)local_c + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

