
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=33;
   incoming_edx_uses=9; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STParticleC::sub_0062A370(STParticleC *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_8;
  short local_6;

  local_2c = 0;
  iVar3 = param_1 - this->field_00AE;
  iVar4 = this->field_008E * this->field_009A * iVar3;
  local_14 = 1;
  param_1 = this->field_00A6 * 20000;
  iVar5 = this->field_008A * this->field_009A * iVar3;
  local_c = iVar4 / 10000 - (iVar4 * iVar3) / param_1;
  iVar4 = iVar5 / 10000 +
          ((iVar5 * iVar3) / param_1 - (iVar3 * iVar3) / (int)(this->field_00A2 << 1)) +
          this->field_0082;
  iVar3 = (this->field_0092 * local_c) / 10000 + this->field_007E;
  local_10 = (this->field_0096 * local_c) / 10000 + this->field_007A;
  if ((this->field_0014 & 0xff00) == 0x400) {
    if (local_10 < 0) {
      iVar5 = (short)(local_10 / 0xc9) + -1;
    }
    else {
      iVar5 = (int)(short)(local_10 / 0xc9);
    }
    if (iVar5 == this->field_005E) {
      if (iVar3 < 0) {
        iVar5 = (short)(iVar3 / 0xc9) + -1;
      }
      else {
        iVar5 = (int)(short)(iVar3 / 0xc9);
      }
      if (iVar5 == this->field_005E) {
        if (iVar3 < 0) {
          iVar5 = (short)(iVar3 / 200) + -1;
        }
        else {
          iVar5 = (int)(short)(iVar3 / 200);
        }
        if (iVar5 == this->field_0066) {
          local_14 = 0;
        }
      }
    }
  }
  uVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::thunk_FUN_00601500
                    ((AnonReceiver_00601500 *)&this->field_0xd7,local_10,iVar3,iVar4,
                     this->field_0046,this->field_004A,this->field_004E,0xff,
                     *(int *)(&DAT_007d0a1c + (uint)*(byte *)&this->field_0014 * 4),0,0xffff,0x14e,0
                     ,0);
  if ((uVar2 == 0) || (local_14 == 0)) {
    iVar5 = this->field_004E;
    this->field_0086 = this->field_0086 + local_c;
    this->field_004E = iVar4;
    this->field_0052 = this->field_0046;
    this->field_0056 = this->field_004A;
    this->field_005A = iVar5;
    this->field_0046 = local_10;
    this->field_004A = iVar3;
    return 1;
  }
  if (uVar2 == 2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((this->field_00EB != (AnonPointee_STParticleC_00EB *)0x0) &&
       (iVar3 = (**(code **)(this->field_00EB->field_0000 + 0xe0))
                          (this->field_00EF,(int)&param_1 + 2,&local_6,&local_8,&local_24),
       iVar3 == 0)) {
      this->field_0052 = this->field_0046;
      this->field_0056 = this->field_004A;
      this->field_005A = this->field_004E;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      this->field_0046 = (int)param_1._2_2_;
      this->field_004A = (int)local_6;
      this->field_004E = (int)local_8;
      this->field_0076 = 2;
      this->field_00F3 = local_24;
      return 0;
    }
  }
  else if (uVar2 == 1) {
    iVar5 = this->field_0046;
    this->field_0046 = local_10;
    iVar5 = local_10 - iVar5;
    iVar1 = this->field_004A;
    local_14 = iVar4 - this->field_004E;
    this->field_004E = iVar4;
    this->field_004A = iVar3;
    if (this->field_00C0 == '\0') {
      return -1;
    }
    local_2c = thunk_FUN_0062a8b0(&local_20,&local_1c,&local_18,local_10,iVar3,
                                  iVar4 - (uint)(byte)this->field_00BE);
    if ((local_2c < 1) && (local_14 < 1)) {
      if (-1 < local_2c) {
        return 0;
      }
      iVar5 = this->field_004E;
      this->field_0086 = this->field_0086 + local_c;
      this->field_0052 = this->field_0046;
      this->field_004E = iVar4;
      this->field_0056 = this->field_004A;
      this->field_005A = iVar5;
      this->field_0046 = local_10;
      this->field_004A = iVar3;
      return 1;
    }
    if (-1 < local_2c) {
      if ((local_2c == 0) && (0 < local_14)) {
        local_20 = 0;
        local_1c = 0;
        local_18 = -10000;
      }
      local_2c = thunk_FUN_0062ab10(this,local_20,local_1c,local_18,iVar5,iVar3 - iVar1,local_14);
      if (0 < local_2c) {
        this->field_0086 = this->field_0086 + local_c;
        this->field_0052 = this->field_0046;
        iVar5 = this->field_004E;
        this->field_0056 = this->field_004A;
        this->field_004E = iVar4;
        this->field_005A = iVar5;
        this->field_0046 = local_10;
        this->field_004A = iVar3;
        return 1;
      }
    }
  }
  return local_2c;
}

