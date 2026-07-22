
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041da30(AnonShape_0041DA30_EF7DF530 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;

  if (param_1->field_002C == 0) {
    if (DAT_0080732c == 1) {
      fVar3 = (float)(int)param_1->field_0045 * _DAT_007904f8 * _DAT_007904f0 + param_1->field_0070
              + _DAT_007904fc;
      fVar2 = (float)(int)param_1->field_0043 * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)param_1->field_0041 * _DAT_007904f8 * _DAT_007904f0;
    }
    else {
      fVar3 = (float)(int)param_1->field_0045 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc;
      fVar2 = (float)(int)param_1->field_0043 * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)param_1->field_0041 * _DAT_007904f8 * _DAT_007904f0;
    }
  }
  else {
    fVar3 = (float)(int)param_1->field_0045 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc;
    fVar2 = (float)(param_1->field_0049 + 1) * _DAT_007904f8;
    fVar1 = (float)(param_1->field_0047 + 1) * _DAT_007904f8;
  }
  STT3DSprC::sub_004AD3C0((STT3DSprC *)&param_1[4].field_0x5,fVar1,fVar2,fVar3);
  thunk_FUN_004ac9e0(&param_1[4].field_0x5,g_playSystem_00802A38->field_00E4);
  return;
}

