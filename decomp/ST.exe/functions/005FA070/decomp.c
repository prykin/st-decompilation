
void __fastcall FUN_005fa070(AnonReceiver_00417FF0 *param_1)

{
  if (*(int *)&param_1->field_0x2dd == 5) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0x20))();
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00417FF0::sub_004167A0(param_1);
  }
  thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)param_1);
  return;
}

