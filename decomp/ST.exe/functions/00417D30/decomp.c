
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_00417D30(TLOBaseTy *this)

{
  undefined4 uVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;

  if (this->field_002C == 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar1 = thunk_FUN_00495ff0(this->field_0047,this->field_0049,this->field_004B,
                               CONCAT31((int3)((uint)this >> 8),this->field_008E),
                               (AnonShape_00495FF0_59081BDD *)this);
    return uVar1;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar2 = thunk_FUN_00495ff0(this->field_0047,this->field_0049,this->field_004B,
                             CONCAT31((int3)((uint)this->field_002C >> 8),this->field_008E),
                             (AnonShape_00495FF0_59081BDD *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar2 = thunk_FUN_00495ff0(this->field_0047 + 1,this->field_0049,this->field_004B,
                             CONCAT31((int3)((uint)extraout_EDX >> 8),this->field_008E),
                             (AnonShape_00495FF0_59081BDD *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar2 = thunk_FUN_00495ff0(this->field_0047,this->field_0049 + 1,this->field_004B,
                             CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_008E),
                             (AnonShape_00495FF0_59081BDD *)this);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  uVar1 = thunk_FUN_00495ff0(this->field_0047 + 1,this->field_0049 + 1,this->field_004B,
                             (uint)(byte)this->field_008E,(AnonShape_00495FF0_59081BDD *)this);
  return uVar1;
}

