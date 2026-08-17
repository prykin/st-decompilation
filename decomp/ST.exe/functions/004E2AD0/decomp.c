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
  int iVar4;
  TLOBaseTyVTable *pTVar5;
  STMessage *pSVar6;
  undefined2 arg_2;
  STMessage local_24;

  if (param_1 != 2) {
    return 0;
  }
  this->field_04D0 = CASE_1;
  /* ST_CALLSITE[004E2AF2]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
  RotateSpr(this,1);
  thunk_FUN_004e5eb0(this->field_0024,param_2);
  if (this->field_0024 != (byte *)(uint)(byte)this->field_0010->field_112D)
  goto cf_common_exit_004E2B69;
  /* ST_CALLSITE[004E2B29]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  uVar2 = LookupRecordByte(*(char *)&this->field_023D);
  uVar2 = (int)(byte)uVar2;
  if (uVar2 == 1) {
    pTVar5 = this->vtable;
    arg_2 = 0x20c;
  }
  else {
    if (uVar2 == 2) {
      /* ST_CALLSITE[004E2B50]: CALL dword ptr [EAX + 0x90] */
      this->vfunc_90(4,0x2d4);
      goto cf_common_exit_004E2B69;
    }
    if (uVar2 != 3) goto cf_common_exit_004E2B69;
    pTVar5 = this->vtable;
    arg_2 = 0x38f;
  }
  /* ST_CALLSITE[004E2B63]: CALL dword ptr [EDX + 0x90] */
  (*pTVar5->vfunc_90)(this,4,arg_2);
cf_common_exit_004E2B69:
  if (g_aiBossClass_008117BC == nullptr) {
    return 0;
  }
  pbVar1 = this->field_0024;
  pSVar6 = &local_24;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    pSVar6->unknown_00 = 0;
    pSVar6 = (STMessage *)&pSVar6->unknown_04;
  }
  local_24.arg0.words.high = this->field_0032;
  local_24.arg0.words.low = *(undefined2 *)&this->field_0024;
  local_24.id = 0x5de6;
  local_24.arg1.words.low = (word)param_2;
  uVar3 = thunk_FUN_004e60d0((int)pbVar1,param_2);
  local_24.arg1.words.high = (short)uVar3 + 1;
  /* ST_CALLSITE[004E2BBB]: CALL dword ptr [EAX] */
  g_aiBossClass_008117BC->GetMessage(&local_24);
  return 0;
}

