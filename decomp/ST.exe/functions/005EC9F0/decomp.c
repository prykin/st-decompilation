
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005ec9f0(int param_1)

{
  undefined1 *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined **local_10;
  undefined4 local_c;
  AnonShape_005EC9F0_B12E6711 *local_8;
  
  local_c = 0;
  local_10 = &PTR_s_cont1_007cde70;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  this = &local_8->field_0x1d5;
  if (param_1 == 0) {
    thunk_FUN_004ad380(this,DAT_007cde88,DAT_007cde8c);
    iVar1 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this,0xe,DAT_00806774,local_10[local_8->field_02B1],0x1d);
    if (iVar1 != 0) {
      return local_c;
    }
    thunk_FUN_004ac610(this,'\x0e');
    STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',local_8->field_02CA);
    thunk_FUN_004ad3c0(this,(float)local_8->field_02BE * _DAT_007904f8 * _DAT_007904f0,
                       (float)local_8->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
                       (float)local_8->field_02C6 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    STT3DSprC::StartShow((STT3DSprC *)this,0xe,PTR_00802a38->field_00E4);
    STT3DSprC::SetCurShad((STT3DSprC *)this,'\x0e',local_8->field_02BA / 0xf);
    thunk_FUN_00417e70(local_8,0x18);
    local_8->field_02B9 = 1;
    uVar2 = thunk_FUN_004ad650((int)this);
    local_8->field_02D6 = uVar2;
    if (local_8->field_0235 == '\x01') {
      STT3DSprC::LoadSequence((STT3DSprC *)this,0xb,DAT_00806774,s_forcef0_007aa008,0x1d);
      thunk_FUN_004ad670(this,'\x0e');
      thunk_FUN_004ad150(this,'\v');
      thunk_FUN_004ac700(this,'\v');
      STT3DSprC::StartShow((STT3DSprC *)this,0xb,PTR_00802a38->field_00E4);
      g_currentExceptionFrame = local_54.previous;
      return local_c;
    }
  }
  else {
    STT3DSprC::LoadSequence
              ((STT3DSprC *)this,8,DAT_00806774,
               s_expl_bt0_007cdf30 + (uint)local_8->field_02DF * 0x32,0x1d);
    STT3DSprC::LoadSequence
              ((STT3DSprC *)this,9,DAT_00806764,
               s_expl_bbt0_007cdf3a + (uint)local_8->field_02DF * 0x32,0x1d);
    STT3DSprC::LoadSequence
              ((STT3DSprC *)this,10,DAT_00806774,
               s_expmask3_007cdf44 + (uint)local_8->field_02DF * 0x32,0x1d);
    thunk_FUN_004ac700(this,'\n');
    STT3DSprC::StartShow((STT3DSprC *)this,10,PTR_00802a38->field_00E4);
    thunk_FUN_004acf20(this,DAT_008032b8,0x10);
    STT3DSprC::StartShow((STT3DSprC *)this,8,PTR_00802a38->field_00E4);
    thunk_FUN_004acfe0(this,'\n');
    uVar2 = thunk_FUN_004ad650((int)this);
    local_8->field_02D6 = uVar2;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

