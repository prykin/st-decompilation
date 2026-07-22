
/* [STMethodOwnerApplier] Structural method owner recovered as BldBoatPanelTy.
   Evidence: this_call_owners=[BldBoatPanelTy]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall BldBoatPanelTy::sub_004EF140(BldBoatPanelTy *this)

{
  UINT UVar1;
  uint uVar2;
  int iVar3;
  Global_sub_00523410_param_1Enum *pGVar4;
  UINT *pUVar5;
  undefined4 *puVar6;
  UINT *pUVar7;
  undefined4 uVar8;
  int local_14;
  UINT *local_c;
  int local_8;

  if ((&this->field_027A)[(byte)this->field_0278] != 0) {
    local_c = &this->field_01B6;
    puVar6 = &this->field_01A1;
    local_8 = 0;
    local_14 = 5;
    do {
      this->field_0028 = 0x21;
      FUN_006e6080(this,2,*puVar6,(undefined4 *)&this->field_0x18);
      iVar3 = this->field_002C;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = (uint)((uint)(local_8 + this->field_0199) <
                    *(uint *)((&this->field_027A)[(byte)this->field_0278] + 0xc));
      this->field_002C = uVar2;
      if (uVar2 == 0) {
        if (iVar3 != 0) goto LAB_004ef270;
LAB_004ef1cc:
        this->field_0028 = 5;
        uVar8 = *puVar6;
      }
      else {
        if (iVar3 != 0) goto LAB_004ef1cc;
LAB_004ef270:
        this->field_0028 = 0x20;
        uVar8 = *puVar6;
      }
      FUN_006e6080(this,2,uVar8,(undefined4 *)&this->field_0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((this->field_002C != 0) &&
           (iVar3 = (&this->field_027A)[(byte)this->field_0278], iVar3 != 0)) &&
          (uVar2 = this->field_0199 + local_8, uVar2 < *(uint *)(iVar3 + 0xc))) &&
         (pGVar4 = (Global_sub_00523410_param_1Enum *)
                   (*(int *)(iVar3 + 8) * uVar2 + *(int *)(iVar3 + 0x1c)),
         pGVar4 != (Global_sub_00523410_param_1Enum *)0x0)) {
        *(char *)((int)local_c + -1) = ((char)pGVar4[2] == 0) + '\x03';
        UVar1 = thunk_FUN_00523410(*pGVar4,*(byte *)((int)pGVar4 + 9),0);
        *local_c = UVar1;
        local_c[1] = 0;
        if ((char)pGVar4[2] == 0) {
          pUVar5 = (UINT *)((int)pGVar4 + 0x12);
          pUVar7 = local_c + 2;
          for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pUVar7 = *pUVar5;
            pUVar5 = pUVar5 + 1;
            pUVar7 = pUVar7 + 1;
          }
          *(short *)pUVar7 = (short)*pUVar5;
        }
        else {
          local_c[2] = *(UINT *)((int)pGVar4 + 10);
          local_c[3] = *(UINT *)((int)pGVar4 + 0xe);
        }
      }
      local_8 = local_8 + 1;
      puVar6 = puVar6 + 1;
      local_c = (UINT *)((int)local_c + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

