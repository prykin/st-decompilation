#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __thiscall TLOBaseTy::sub_004E3120(TLOBaseTy *this)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  short local_a;

  if (*(int *)&this->field_0x361 == 2) {
    thunk_FUN_004e5f20(this->field_0024,*(uint *)&this->field_0x369);
    if (DAT_008117bc != nullptr) {
      uVar1 = *(undefined2 *)&this->field_0024;
      memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
      local_e = this->field_0032;
      local_c = *(undefined2 *)&this->field_0x369;
      local_14 = 0x5de8;
      local_10 = uVar1;
      uVar2 = thunk_FUN_004e60d0((int)this->field_0024,*(int *)&this->field_0x369);
      local_a = (short)uVar2 + 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*DAT_008117bc)(local_24);
    }
    this->field_04D0 = CASE_0;
    RotateSpr(this,1);
  }
  return 1;
}

