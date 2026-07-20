
undefined4 __fastcall FUN_004cc900(AnonShape_004CC900_31EE9CAA *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((((STT3DSprC *)param_1->field_0603 != (STT3DSprC *)0x0) && (param_1->field_0444 != 0)) &&
     (param_1->field_0448 != 0)) {
    param_1->field_0448 = 0;
    STT3DSprC::StopShow((STT3DSprC *)param_1->field_0603,0xe);
    thunk_FUN_004ad430(param_1->field_0603);
    uVar2 = thunk_FUN_004ad650(param_1->field_0603);
    FUN_006ea2f0(param_1->field_0211,uVar2);
    STT3DSprC::UnLoadSequence((STT3DSprC *)param_1->field_0603,0xe);
    param_1->field_044C = 0xffffffff;
    uVar1 = PTR_00802a38->field_00E4;
    param_1->field_043C = 0;
    param_1->field_0450 = uVar1;
  }
  return 0;
}

