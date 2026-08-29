#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ResearchPanelTy.
   Evidence: this_call_owners=[ResearchPanelTy]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall ResearchPanelTy::sub_0053C620(ResearchPanelTy *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  Global_sub_00528060_param_1Enum *pGVar4;
  uint *puVar5;
  byte *puVar6;
  int local_14;
  int local_c;
  undefined4 *local_8;

  if ((&this->field_027A)[(byte)this->field_0278] != 0) {
    local_8 = &this->field_01B6;
    puVar5 = &this->field_01A1;
    local_c = 0;
    local_14 = 5;
    do {
      this->field_0028 = 0x21;
      FUN_006e6080(this,2,*puVar5,(undefined4 *)&this->field_0x18);
      iVar2 = *(int *)&this->field_0x2c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = (uint)((uint)(local_c + this->field_0199) <
                    *(uint *)((&this->field_027A)[(byte)this->field_0278] + 0xc));
      *(uint *)&this->field_0x2c = uVar3;
      if (uVar3 == 0) {
        if (iVar2 != 0) goto LAB_0053c75b;
LAB_0053c6ac:
        this->field_0028 = 5;
        uVar1 = *puVar5;
      }
      else {
        if (iVar2 != 0) goto LAB_0053c6ac;
LAB_0053c75b:
        this->field_0028 = 0x20;
        uVar1 = *puVar5;
      }
      FUN_006e6080(this,2,uVar1,(undefined4 *)&this->field_0x18);
      if ((((*(int *)&this->field_0x2c != 0) &&
           (iVar2 = (&this->field_027A)[(byte)this->field_0278], iVar2 != 0)) &&
          (uVar3 = this->field_0199 + local_c, uVar3 < STField<uint>(iVar2,0xC))) &&
         (pGVar4 = (Global_sub_00528060_param_1Enum *)
                   (STField<int>(iVar2,0x8) * uVar3 + STField<int>(iVar2,0x1C)),
         pGVar4 != nullptr)) {
        *(char *)((int)local_8 + -1) = (pGVar4[8] == CASE_0) + '\x03';

        uVar1 = thunk_FUN_005293c0(*pGVar4);
        *local_8 = uVar1;

        iVar2 = thunk_FUN_00528060(*pGVar4,(char)((uint)*(undefined4 *)pGVar4 >> 0x10));
        local_8[1] = iVar2;
        if (pGVar4[8] == CASE_0) {
          pGVar4 = pGVar4 + 0x12;
          puVar6 = (byte *)(local_8 + 2);
          memmove(puVar6, pGVar4, 0x1e); /* compiler REP MOVS byte copy */
          pGVar4 = pGVar4 + 0x1c;
        }
        else {
          local_8[2] = *(undefined4 *)(pGVar4 + 10);
          local_8[3] = *(undefined4 *)(pGVar4 + 0xe);
        }
      }
      local_c = local_c + 1;
      puVar5 = puVar5 + 1;
      local_8 = (undefined4 *)((int)local_8 + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

