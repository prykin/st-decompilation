
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=5; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=20; direct_non_thunk_callers=7;
   incoming_ecx_receiver_callers=3; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00A8 uses
   /SubmarineTitans/Recovered/Enums/ST3DSMAPContext_field_00A8State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
ST3DSMAPContext::sub_006E1C20
          (ST3DSMAPContext *this,float param_1,int param_2,float param_3,float *param_4,
          float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int local_24;
  int local_20;
  float local_14;
  float local_10;
  undefined4 local_c;

  local_14 = (float)this->field_0098;
  local_10 = (float)this->field_00A0;
  local_c = 0;
  sub_006E25D0(this,&local_24);
  fVar1 = (float)((int)param_1 * 0x10000 - local_24) * (float)_DAT_0079b148;
  fVar2 = (float)(param_2 * 0x10000 - local_20) * (float)_DAT_0079b148;
  fVar3 = param_3 * (float)_DAT_0079df60;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = fVar3;
  switch(this->field_00A8) {
  case CASE_0:
    fVar2 = fVar2 * (float)this->field_00F0;
    fVar1 = fVar1 * (float)this->field_00E8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = fVar3 + (fVar1 + fVar2) * (float)_DAT_0079df60;
    fVar3 = fVar3 + (fVar2 * (float)_DAT_0079df60 - fVar1 * (float)_DAT_0079df60);
    break;
  case CASE_1:
    fVar1 = fVar1 * (float)this->field_00E8;
    fVar2 = fVar2 * (float)this->field_00F0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = -fVar3 + (fVar1 - fVar2) * (float)_DAT_0079df60;
    fVar3 = fVar3 + (fVar1 + fVar2) * (float)_DAT_0079df60;
    break;
  case CASE_2:
    fVar2 = fVar2 * (float)this->field_00F0;
    fVar1 = fVar1 * (float)this->field_00E8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = -fVar3 - (fVar1 + fVar2) * (float)_DAT_0079df60;
    fVar3 = -fVar3 + (fVar1 - fVar2) * (float)_DAT_0079df60;
    break;
  case CASE_3:
    fVar2 = fVar2 * (float)this->field_00F0;
    fVar1 = fVar1 * (float)this->field_00E8;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = fVar3 + (fVar2 * (float)_DAT_0079df60 - fVar1 * (float)_DAT_0079df60);
    fVar3 = -fVar3 - (fVar1 + fVar2) * (float)_DAT_0079df60;
  }
  *param_4 = param_1 + (float)this->field_0098;
  *param_5 = fVar3 + (float)this->field_00A0;
  return 0;
}

