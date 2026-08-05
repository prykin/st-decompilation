
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006E1320
          (ST3DSMAPContext *this,double *param_1,double *param_2,int *param_3,int *param_4,
          int *param_5)

{
  double dVar1;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  float local_20 [3];
  double local_14;
  double local_c;

  local_c = this->field_0098;
  local_14 = this->field_00A0;
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = 0.0;
  sub_006E25D0(this,&local_40,local_20,local_c,local_14,0.0,0);
  Library::Ourlib::STREND::FUN_006dd050(this,this->field_00A8,*param_1,*param_2);
  dVar1 = local_14;
  *(undefined4 *)param_1 = *(undefined4 *)&this->field_0098;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)&this->field_0098 + 4);
  *(undefined4 *)param_2 = *(undefined4 *)&this->field_00A0;
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)&this->field_00A0 + 4);
  sub_006E25D0(this,&local_30,local_20,local_c,local_14,0.0,0);
  *param_3 = (local_30 - local_40) + 0x8000 >> 0x10;
  *param_4 = (local_2c - local_3c) + 0x8000 >> 0x10;
  if (param_5 != nullptr) {
    *param_5 = local_28 - local_38;
  }
  Library::Ourlib::STREND::FUN_006dd050(this,this->field_00A8,local_c,dVar1);
  return;
}

