#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __thiscall TLOBaseTy::sub_004E2AD0(TLOBaseTy *this,int param_1,uint param_2)

{
  byte *pbVar1;
  int uVar2;
  undefined4 uVar3;
  TLOBaseTyVTable *pTVar5;
  undefined2 arg_2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;

  if (param_1 != 2) {
    return 0;
  }
  this->field_04D0 = CASE_1;
  RotateSpr(this,1);
  thunk_FUN_004e5eb0(this->field_0024,param_2);
  if (this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D)
  goto cf_common_exit_004E2B69;
  uVar2 = LookupRecordByte(*(char *)&this->field_023D);
  uVar2 = (int)(byte)uVar2;
  if (uVar2 == 1) {
    pTVar5 = this->vtable;
    arg_2 = 0x20c;
  }
  else {
    if (uVar2 == 2) {
      this->vfunc_90(4,0x2d4);
      goto cf_common_exit_004E2B69;
    }
    if (uVar2 != 3) goto cf_common_exit_004E2B69;
    pTVar5 = this->vtable;
    arg_2 = 0x38f;
  }
  (*pTVar5->vfunc_90)(this,4,arg_2);
cf_common_exit_004E2B69:
  if (DAT_008117bc == nullptr) {
    return 0;
  }
  pbVar1 = this->field_0024;
  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_e = this->field_0032;
  local_10 = *(undefined2 *)&this->field_0024;
  local_14 = 0x5de6;
  local_c = (undefined2)param_2;
  uVar3 = thunk_FUN_004e60d0((int)pbVar1,param_2);
  local_a = (short)uVar3 + 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)*DAT_008117bc)(local_24);
  return 0;
}

