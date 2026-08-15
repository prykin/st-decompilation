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
  word wVar1;
  undefined4 uVar2;
  int iVar3;
  STMessage *pSVar4;
  STMessage local_24;

  if (*(int *)&this->field_0x361 == 2) {
    thunk_FUN_004e5f20(this->field_0024,*(uint *)&this->field_0x369);
    if (g_aiBossClass_008117BC != nullptr) {
      wVar1 = *(word *)&this->field_0024;
      pSVar4 = &local_24;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        pSVar4->unknown_00 = 0;
        pSVar4 = (STMessage *)&pSVar4->unknown_04;
      }
      local_24.arg0.words.high = this->field_0032;
      local_24.arg1.words.low = *(undefined2 *)&this->field_0x369;
      local_24.id = 0x5de8;
      local_24.arg0.words.low = wVar1;
      uVar2 = thunk_FUN_004e60d0((int)this->field_0024,*(int *)&this->field_0x369);
      local_24.arg1.words.high = (short)uVar2 + 1;
      g_aiBossClass_008117BC->GetMessage(&local_24);
    }
    this->field_04D0 = CASE_0;
    RotateSpr(this,1);
  }
  return 1;
}

