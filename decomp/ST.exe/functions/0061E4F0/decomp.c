
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STLightC::sub_0061E4F0(STLightC *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int local_8;

  iVar5 = 0;
  if (0 < this->field_0093) {
    do {
      local_8 = 1;
      if (1 < *(int *)(this->field_009B + iVar5 * 4)) {
        iVar6 = 0x14;
        do {
          uVar3 = this->field_00AC * 0x41c64e6d + 0x3039;
          this->field_00AC = uVar3;
          if (((uVar3 >> 0x10) % 5 == 0) &&
             ((iVar5 != 0 || ((iVar6 != 0 && (local_8 != *(int *)this->field_009B + -1)))))) {
            uVar3 = this->field_00AC * 0x41c64e6d + 0x3039;
            this->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)(this->field_009F + iVar5 * 4) + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (this->field_0047 + this->field_0047) + *pfVar4;
            uVar3 = this->field_00AC * 0x41c64e6d + 0x3039;
            this->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)(this->field_009F + iVar5 * 4) + 4 + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (this->field_0047 + this->field_0047) + *pfVar4;
            uVar3 = this->field_00AC * 0x41c64e6d + 0x3039;
            this->field_00AC = uVar3;
            pfVar4 = (float *)(*(int *)(this->field_009F + iVar5 * 4) + 8 + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (this->field_0047 + this->field_0047) + *pfVar4;
            iVar1 = *(int *)(this->field_009F + iVar5 * 4);
            iVar2 = *(int *)(iVar1 + 0x10 + iVar6);
            if (iVar2 != 0) {
              **(undefined4 **)(this->field_009F + iVar2 * 4) = *(undefined4 *)(iVar1 + iVar6);
              *(undefined4 *)(*(int *)(this->field_009F + iVar2 * 4) + 4) =
                   *(undefined4 *)(*(int *)(this->field_009F + iVar5 * 4) + 4 + iVar6);
              *(undefined4 *)(*(int *)(this->field_009F + iVar2 * 4) + 8) =
                   *(undefined4 *)(*(int *)(this->field_009F + iVar5 * 4) + 8 + iVar6);
            }
          }
          local_8 = local_8 + 1;
          iVar6 = iVar6 + 0x14;
        } while (local_8 < *(int *)(this->field_009B + iVar5 * 4));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < this->field_0093);
  }
  return;
}

