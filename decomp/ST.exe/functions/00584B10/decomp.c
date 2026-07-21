
void __fastcall FUN_00584b10(AnonShape_00584B10_33997544 *param_1)

{
  undefined1 *this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  this = &param_1->field_0x1d5;
  STT3DSprC::StopShow((STT3DSprC *)this,0xe);
  thunk_FUN_004ad5e0((int)this);
  STT3DSprC::LoadSequence((STT3DSprC *)this,8,DAT_00806774,s_Expb22_007cb8c0,0x1d);
  STT3DSprC::LoadSequence((STT3DSprC *)this,10,DAT_00806774,s_expmask3_007cb8c8,0x1d);
  uVar4 = 0x45;
  uVar3 = 0x5a;
  iVar2 = 1;
  uVar1 = thunk_FUN_004ad650((int)this);
  FUN_006ea4e0(param_1->field_0211,uVar1,iVar2,uVar3,uVar4);
  thunk_FUN_004acfe0(this,'\n');
  thunk_FUN_004acf20(this,DAT_008032b8,0x10);
  STT3DSprC::StartShow((STT3DSprC *)this,10,PTR_00802a38->field_00E4);
  STT3DSprC::StartShow((STT3DSprC *)this,8,PTR_00802a38->field_00E4);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this,9,DAT_00806764,s_expl_bbt0_007cb8d4,0x1d);
  if (iVar2 == 0) {
    thunk_FUN_004ad070(this,9);
    uVar3 = thunk_FUN_004acd30(this,'\t');
    param_1->field_0255 = (char)uVar3;
    param_1->field_0256 = DAT_007cb8e0;
    param_1->field_0257 = 0;
  }
  return;
}

