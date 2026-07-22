
/* [STMethodOwnerApplier] Structural method owner recovered as BldLabPanelTy.
   Evidence: this_call_owners=[BldLabPanelTy]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall BldLabPanelTy::sub_004EFE20(BldLabPanelTy *this)

{
  DArrayTy *pDVar1;
  UINT UVar2;
  uint uVar3;
  int iVar4;
  Global_sub_00523410_param_1Enum *pGVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int local_14;
  undefined4 *local_c;
  int local_8;

  if (this->field_027A != (DArrayTy *)0x0) {
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
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar3) (runtime stride) */
      if ((((this->field_002C != 0) && (pDVar1 = this->field_027A, pDVar1 != (DArrayTy *)0x0)) &&
          (uVar3 = this->field_0199 + local_8, uVar3 < pDVar1->count)) &&
         (pGVar5 = (Global_sub_00523410_param_1Enum *)
                   (pDVar1->elementSize * uVar3 + (int)pDVar1->data),
         pGVar5 != (Global_sub_00523410_param_1Enum *)0x0)) {
        *(char *)((int)local_c + -9) = ((char)pGVar5[2] == 0) + '\x03';
        UVar2 = thunk_FUN_00523410(*pGVar5,'\x03',0);
        local_c[-2] = UVar2;
        if ((char)pGVar5[2] == 0) {
          pbVar6 = (byte *)((int)pGVar5 + 0x12);
          puVar8 = local_c;
          for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            puVar8 = puVar8 + 1;
          }
          *(undefined2 *)puVar8 = *(undefined2 *)pbVar6;
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

