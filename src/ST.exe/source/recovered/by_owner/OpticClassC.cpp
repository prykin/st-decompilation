#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/OpticClassC.cpp

// 004A88C0 OpticClassC::OpticClassC
#line 4 "decomp/ST.exe/functions/004A88C0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790758 (store 004A88C8)
   Evidence: final_vptr=00790758; returns_this=true; calls_before=1; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

OpticClassC * __thiscall st::fn_004A88C0(OpticClassC *this)

{
  DWORD DVar1;

  st::fn_006E5FB0(this);
  this->vtable = &st_global_00790758;
  DVar1 = st::external_000000DA();
  this->field_0018 = DVar1;
  return this;
}

// 004AB070 OpticClassC::sub_004AB070
#line 4 "decomp/ST.exe/functions/004AB070/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AB070_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8

   [STMethodOwnerApplier] Structural method owner recovered as OpticClassC.
   Evidence: this_call_owners=[OpticClassC]; agreed_this_calls=10; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=17; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/OpticClassC_sub_004AB070_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

undefined4 __thiscall
st::fn_004AB070
          (OpticClassC *this,OpticClassC_sub_004AB070_param_1Enum param_1,float param_2,int param_3,
          int param_4)

{
  DWORD DVar1;
  int iVar2;

  DVar1 = st::external_000000DA();
  if (DVar1 - this->field_0018 < 0x32) {
    if (this->field_001C == -2) {
      return 0xfffffffe;
    }
    this->field_001C = 0xffffffff;
    return 0;
  }
  DAT_008073e0 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 1.4013e-45) {
    if (param_3 == 0) {
      DAT_00807461 = DAT_00807461 + 1;
      if (0x18 < DAT_00807461) goto LAB_004ab0d1;
    }
    else {
      DAT_00807461 = 0;
    }
  }
  else {
LAB_004ab0d1:
    DAT_00807461 = 0x18;
  }
  param_2 = (float)(DAT_00807461 + 1) * *(float *)(&DAT_007ac584 + (uint)DAT_0080733a * 4) *
            _DAT_0079078c;
  if (param_4 == 1) {
    param_2 = param_2 * _DAT_00790788;
  }
  this->field_0018 = DVar1;
  switch(param_1) {
  case CASE_1:
    iVar2 = st::fn_00405BF5(param_2);
    break;
  case CASE_2:
    iVar2 = st::fn_00401FAA(param_2);
    break;
  case CASE_3:
    iVar2 = st::fn_004059E8(param_2);
    break;
  case CASE_4:
    iVar2 = st::fn_004031B1(param_2);
    break;
  case CASE_5:
    iVar2 = st::fn_00404313(param_2);
    break;
  case CASE_6:
    iVar2 = st::fn_0040509C(param_2);
    break;
  case CASE_7:
    iVar2 = st::fn_00405709(param_2);
    break;
  case CASE_8:
    iVar2 = st::fn_00401D89(param_2);
    break;
  default:
    goto switchD_004ab11d_default;
  }
  if (iVar2 == 1) {
    st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
    this->field_001C = 0;
    return 0;
  }
switchD_004ab11d_default:
  this->field_001C = 0xfffffffe;
  return 0xfffffffe;
}

