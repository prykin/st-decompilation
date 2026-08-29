#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=33;
   incoming_edx_uses=9; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STParticleC::sub_0062A370(STParticleC *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_8;
  short local_6;

  local_2c = 0;
  iVar2 = param_1 - this->field_00AE;
  iVar3 = this->field_008E * this->field_009A * iVar2;
  local_14 = 1;
  param_1 = this->field_00A6 * 20000;
  iVar4 = this->field_008A * this->field_009A * iVar2;
  local_c = iVar3 / 10000 - (iVar3 * iVar2) / param_1;
  iVar3 = iVar4 / 10000 +
          ((iVar4 * iVar2) / param_1 - (iVar2 * iVar2) / (int)(this->field_00A2 << 1)) +
          this->field_0082;
  iVar2 = (this->field_0092 * local_c) / 10000 + this->field_007E;
  local_10 = (this->field_0096 * local_c) / 10000 + this->field_007A;
  if ((this->field_0014 & 0xff00) == 0x400) {
    iVar4 = STBiasedDiv16(local_10, 0xc9); /* exact signed 16-bit grid-index division */
    if (iVar4 == this->field_005E) {
      iVar4 = STBiasedDiv16(iVar2, 0xc9); /* exact signed 16-bit grid-index division */
      if (iVar4 == this->field_005E) {
        iVar4 = STBiasedDiv16(iVar2, 200); /* exact signed 16-bit grid-index division */
        if (iVar4 == this->field_0066) {
          local_14 = 0;
        }
      }
    }
  }

  iVar4 = SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00601500::thunk_FUN_00601500
                    ((RecoveredReceiver_00601500 *)&this->field_0xd7,local_10,iVar2,iVar3,
                     this->field_0046,this->field_004A,this->field_004E,0xff,
                     *(int *)(&DAT_007d0a1c + (uint)(byte)this->field_0014 * 4),0,0xffff,0x14e,0,0);
  if ((iVar4 == 0) || (local_14 == 0)) {
    iVar4 = this->field_004E;
    this->field_0086 = this->field_0086 + local_c;
    this->field_004E = iVar3;
    this->field_0052 = this->field_0046;
    this->field_0056 = this->field_004A;
    this->field_005A = iVar4;
    this->field_0046 = local_10;
    this->field_004A = iVar2;
    return 1;
  }
  if (iVar4 == 2) {
    if ((this->field_00EB != nullptr) &&
       /* ST_CALLSITE[0062A58F]: CALL dword ptr [EAX + 0xe0]; [STIndirectCallsiteApplier] exact slot 0xE0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
       /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
       (iVar2 = (**(code **)(this->field_00EB->field_0000 + 0xe0))
                          (this->field_00EF,(int)&param_1 + 2,&local_6,&local_8,&local_24),
       iVar2 == 0)) {
      this->field_0052 = this->field_0046;
      this->field_0056 = this->field_004A;
      this->field_005A = this->field_004E;
      this->field_0046 = (int)STPiece<2,2>(param_1);
      this->field_004A = (int)local_6;
      this->field_004E = (int)local_8;
      this->field_0076 = 2;
      this->field_00F3 = local_24;
      return 0;
    }
  }
  else if (iVar4 == 1) {
    iVar4 = this->field_0046;
    this->field_0046 = local_10;
    iVar4 = local_10 - iVar4;
    iVar1 = this->field_004A;
    local_14 = iVar3 - this->field_004E;
    this->field_004E = iVar3;
    this->field_004A = iVar2;
    if (this->field_00C0 == '\0') {
      return -1;
    }

    local_2c = thunk_FUN_0062a8b0(&local_20,&local_1c,&local_18,local_10,iVar2,
                                  iVar3 - (uint)(byte)this->field_00BE);
    if ((local_2c < 1) && (local_14 < 1)) {
      if (-1 < local_2c) {
        return 0;
      }
      iVar4 = this->field_004E;
      this->field_0086 = this->field_0086 + local_c;
      this->field_0052 = this->field_0046;
      this->field_004E = iVar3;
      this->field_0056 = this->field_004A;
      this->field_005A = iVar4;
      this->field_0046 = local_10;
      this->field_004A = iVar2;
      return 1;
    }
    if (-1 < local_2c) {
      if ((local_2c == 0) && (0 < local_14)) {
        local_20 = 0;
        local_1c = 0;
        local_18 = -10000;
      }

      local_2c = thunk_FUN_0062ab10(this,local_20,local_1c,local_18,iVar4,iVar2 - iVar1,local_14);
      if (0 < local_2c) {
        this->field_0086 = this->field_0086 + local_c;
        this->field_0052 = this->field_0046;
        iVar4 = this->field_004E;
        this->field_0056 = this->field_004A;
        this->field_004E = iVar3;
        this->field_005A = iVar4;
        this->field_0046 = local_10;
        this->field_004A = iVar2;
        return 1;
      }
    }
  }
  return local_2c;
}

