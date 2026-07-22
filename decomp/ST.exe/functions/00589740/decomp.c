
undefined4 __fastcall FUN_00589740(AnonShape_00589740_397F9B27 *param_1)

{
  undefined1 *this;
  int iVar1;
  undefined4 uVar2;

  this = &param_1->field_0x1d5;
  iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this,8,DAT_00806774,"Expb23",0x1d);
  if (iVar1 == 0) {
    STT3DSprC::StartShow((STT3DSprC *)this,8,g_playSystem_00802A38->field_00E4);
    STT3DSprC::LoadSequence((STT3DSprC *)this,10,DAT_00806774,"expmask2",0x1d);
    STT3DSprC::sub_004ACFE0((STT3DSprC *)this,'\n');
    STT3DSprC::sub_004ACF20((STT3DSprC *)this,DAT_008032b8,0x10);
    STT3DSprC::StartShow((STT3DSprC *)this,10,g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0xd8))();
    iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this,9,DAT_00806764,"bulb_n4",0x1d);
    if (iVar1 == 0) {
      STT3DSprC::sub_004AD070((STT3DSprC *)this,9);
      uVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this,'\t');
      param_1->field_0275 = (char)uVar2;
      param_1->field_0276 = DAT_007cb958;
      param_1->field_0277 = 0;
    }
    return 0;
  }
  return 0xffffffff;
}

