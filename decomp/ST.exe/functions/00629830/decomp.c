
void __fastcall FUN_00629830(AnonShape_00629830_F056CE49 *param_1)

{
  param_1->field_00B2 = 0;
  param_1->field_00BF = 1;
  if (param_1->field_0014 < 4) {
    param_1->field_00BA = 0x25;
  }
  else {
    param_1->field_00BA = 0x23;
  }
  if (-1 < (int)param_1->field_00C6) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              ((AnonReceiver_004248D0 *)PTR_00807598,param_1->field_00C6,0,0,0);
  }
  return;
}

