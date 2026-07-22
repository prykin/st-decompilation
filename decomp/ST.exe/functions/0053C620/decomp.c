
/* [STMethodOwnerApplier] Structural method owner recovered as ResearchPanelTy.
   Evidence: this_call_owners=[ResearchPanelTy]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ResearchPanelTy::sub_0053C620(ResearchPanelTy *this)

{
  uint uVar1;
  undefined4 uVar2;
  UINT UVar3;
  uint uVar4;
  int iVar5;
  Global_sub_00528060_param_1Enum *pGVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_14;
  int local_c;
  undefined4 *local_8;

  if ((&this->field_027A)[(byte)this->field_0278] != 0) {
    local_8 = &this->field_01B6;
    puVar7 = &this->field_01A1;
    local_c = 0;
    local_14 = 5;
    do {
      this->field_0028 = 0x21;
      FUN_006e6080(this,2,*puVar7,(undefined4 *)&this->field_0x18);
      iVar5 = this->field_002C;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = (uint)((uint)(local_c + this->field_0199) <
                    *(uint *)((&this->field_027A)[(byte)this->field_0278] + 0xc));
      this->field_002C = uVar1;
      if (uVar1 == 0) {
        if (iVar5 != 0) goto LAB_0053c75b;
LAB_0053c6ac:
        this->field_0028 = 5;
        uVar2 = *puVar7;
      }
      else {
        if (iVar5 != 0) goto LAB_0053c6ac;
LAB_0053c75b:
        this->field_0028 = 0x20;
        uVar2 = *puVar7;
      }
      FUN_006e6080(this,2,uVar2,(undefined4 *)&this->field_0x18);
      if ((this->field_002C != 0) &&
         (iVar5 = (&this->field_027A)[(byte)this->field_0278], iVar5 != 0)) {
        uVar4 = this->field_0199 + local_c;
        uVar1 = *(uint *)(iVar5 + 0xc);
        if ((uVar4 < uVar1) &&
           (pGVar6 = (Global_sub_00528060_param_1Enum *)
                     (*(int *)(iVar5 + 8) * uVar4 + *(int *)(iVar5 + 0x1c)),
           pGVar6 != (Global_sub_00528060_param_1Enum *)0x0)) {
          *(char *)((int)local_8 + -1) = (pGVar6[8] == ~(CASE_80|CASE_7F)) + '\x03';
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar2 = thunk_FUN_005293c0(CONCAT31((int3)(uVar1 >> 8),*pGVar6));
          *local_8 = uVar2;
          UVar3 = thunk_FUN_00528060(*pGVar6,(char)((uint)*(undefined4 *)pGVar6 >> 0x10));
          local_8[1] = UVar3;
          if (pGVar6[8] == ~(CASE_80|CASE_7F)) {
            pGVar6 = pGVar6 + 0x12;
            puVar8 = local_8 + 2;
            for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *(undefined4 *)pGVar6;
              pGVar6 = pGVar6 + 4;
              puVar8 = puVar8 + 1;
            }
            *(undefined2 *)puVar8 = *(undefined2 *)pGVar6;
          }
          else {
            local_8[2] = *(undefined4 *)(pGVar6 + 10);
            local_8[3] = *(undefined4 *)(pGVar6 + 0xe);
          }
        }
      }
      local_c = local_c + 1;
      puVar7 = puVar7 + 1;
      local_8 = (undefined4 *)((int)local_8 + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

