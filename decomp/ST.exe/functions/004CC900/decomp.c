
undefined4 __fastcall FUN_004cc900(AnonShape_004CC900_31EE9CAA *param_1)

{
  uint uVar1;

  if ((((STT3DSprC *)param_1->field_0603 != (STT3DSprC *)0x0) && (param_1->field_0444 != 0)) &&
     (param_1->field_0448 != 0)) {
    param_1->field_0448 = 0;
    STT3DSprC::StopShow((STT3DSprC *)param_1->field_0603,0xe);
    thunk_FUN_004ad430(param_1->field_0603);
    uVar1 = thunk_FUN_004ad650(param_1->field_0603);
    FUN_006ea2f0(param_1->field_0211,uVar1);
    STT3DSprC::UnLoadSequence((STT3DSprC *)param_1->field_0603,0xe);
    param_1->field_044C = 0xffffffff;
    uVar1 = g_playSystem_00802A38->field_00E4;
    param_1->field_043C = 0;
    param_1->field_0450 = uVar1;
  }
  return 0;
}

