
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_006A09F0(CGenerate *this,byte *param_1,uint param_2)

{
  CHAR local_108 [260];

  wsprintfA(local_108,"%s%08u",&DAT_007c8400,this->field_570B);
  cMf32::RecPut(this->field_0018,0xc,local_108,param_1,param_2,(undefined4 *)0x0,'\0',(uint *)0x0);
  this->field_570B = this->field_570B + 1;
  return;
}

