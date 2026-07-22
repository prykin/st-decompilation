
undefined4 __fastcall FUN_00639990(AnonShape_00639990_2135AB0A *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1->field_026F < 2) {
    puVar1 = &param_1->field_0x1d5;
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xd,DAT_00806774,"trmbomb",0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xf,DAT_00806764,(char *)&DAT_007d1db8,0x1d)
    ;
    if (iVar2 != 0) {
      return 0xffff;
    }
    thunk_FUN_004ac700(puVar1,'\x0f');
    sub_00416240(param_1,param_1->field_027A,param_1->field_027E,param_1->field_0282);
    uVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
    param_1->field_0296 = uVar3;
    thunk_FUN_004ac660(puVar1,'\r');
    STT3DSprC::StartShow((STT3DSprC *)puVar1,0xd,g_playSystem_00802A38->field_00E4);
    param_1->field_0271 = 1;
  }
  else {
    if (param_1->field_026F != 2) {
      return 0;
    }
    puVar1 = &param_1->field_0x1d5;
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xd,DAT_00806774,&DAT_007d1db0,0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xe,DAT_00806774,"expmask2",0x1d);
    if (iVar2 != 0) {
      return 0xffff;
    }
    STT3DSprC::StartShow((STT3DSprC *)puVar1,0xe,g_playSystem_00802A38->field_00E4);
    param_1->field_02A2 = 1;
    STT3DSprC::StartShow((STT3DSprC *)puVar1,0xd,g_playSystem_00802A38->field_00E4);
    param_1->field_0271 = 1;
    if (param_1->field_0292 != 0) {
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\r',param_1->field_0292);
    }
    if (param_1->field_0292 != 0) {
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',param_1->field_0292);
    }
    sub_00416240(param_1,param_1->field_027A,param_1->field_027E,param_1->field_0282);
    STT3DSprC::sub_004ACF20((STT3DSprC *)puVar1,DAT_008032b8,0x10);
    STT3DSprC::sub_004ACFE0((STT3DSprC *)puVar1,'\x0e');
    uVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
    param_1->field_0296 = uVar3;
    uVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x0e');
    param_1->field_029E = uVar3;
  }
  param_1->field_02A7 = g_playSystem_00802A38->field_00E4;
  return 0;
}

