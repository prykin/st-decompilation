#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/BldLabPanelTy.cpp

// 004EFE20 BldLabPanelTy::sub_004EFE20
#line 4 "decomp/ST.exe/functions/004EFE20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as BldLabPanelTy.
   Evidence: this_call_owners=[BldLabPanelTy]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_004EFE20(BldLabPanelTy *this)

{
  BldLabPanelTy_field_027ADArray *pBVar1;
  int iVar2;
  uint uVar3;
  Global_sub_00526BA0_param_1Enum *pGVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *puVar7;
  uint uVar8;
  int local_14;
  undefined4 *local_c;
  int local_8;

  if (this->field_027A != nullptr) {
    local_c = &this->field_01BE;
    puVar6 = &this->field_01A1;
    local_8 = 0;
    local_14 = 5;
    do {
      this->field_0028 = 0x21;
      st::fn_006E6080(this,2,*puVar6,reinterpret_cast<undefined4 *>(&this->field_0x18));
      iVar2 = this->field_002C;
      uVar3 = st::storage_bit_cast<uint>(static_cast<uint32_t>((uint)(local_8 + this->field_0199) < this->field_027A->count));
      this->field_002C = uVar3;
      if (uVar3 == 0) {
        if (iVar2 != 0) goto LAB_004eff2c;
LAB_004efe9c:
        this->field_0028 = 5;
        uVar8 = *puVar6;
      }
      else {
        if (iVar2 != 0) goto LAB_004efe9c;
LAB_004eff2c:
        this->field_0028 = 0x20;
        uVar8 = *puVar6;
      }
      st::fn_006E6080(this,2,uVar8,reinterpret_cast<undefined4 *>(&this->field_0x18));
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((((this->field_002C != 0) &&
           (pBVar1 = this->field_027A, pBVar1 != nullptr)) &&
          (uVar3 = this->field_0199 + local_8, uVar3 < pBVar1->count)) &&
         (pGVar4 = (Global_sub_00526BA0_param_1Enum *)
                   ((int)&pBVar1->data->field_0000 + pBVar1->elementSize * uVar3),
         pGVar4 != nullptr)) {
        *(char *)((int)local_c + -9) = ((char)pGVar4[2] == 0) + '\x03';

        iVar2 = st::fn_00403684(*pGVar4,'\x03',0);
        local_c[-2] = iVar2;
        if ((char)pGVar4[2] == 0) {
          pbVar5 = (byte *)((int)pGVar4 + 0x12);
          puVar7 = reinterpret_cast<byte *>((local_c));
          memmove(puVar7, pbVar5, 0x1e); /* compiler REP MOVS byte copy */
        }
        else {
          *local_c = STField<undefined4>(pGVar4,10);
          local_c[1] = STField<undefined4>(pGVar4,0xe);
        }
      }
      local_8 = local_8 + 1;
      puVar6 = puVar6 + 1;
      local_c = (undefined4 *)((int)local_c + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
