
undefined4 FUN_006029c0(void)

{
  undefined1 *this;
  short sVar1;
  int iVar2;
  char *text;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  AnonShape_006029C0_E1371936 *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (local_c->field_0241 == 1) {
      text = (&PTR_s_Dest4_0_007cec00)[local_c->field_0372];
    }
    else {
      text = (&PTR_s_Dest1_0_007cebec)[local_c->field_0372];
    }
    this = &local_c->field_0x1d5;
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this,0xe,DAT_00806774,text,0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004ac610(this,'\x0e');
      STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',local_c->field_0387);
      STT3DSprC::StartShow((STT3DSprC *)this,0xe,PTR_00802a38->field_00E4);
      thunk_FUN_004acef0(this,DAT_008073cc);
      local_c->field_037A = 1;
      if (-1 < local_c->field_0249) {
        iVar2 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this,0xc,DAT_00806774,
                           (&PTR_s_dest0s0_007cec3c)[local_c->field_0249 + local_c->field_0372 * 8],
                           0x1d);
        if (iVar2 != 0) {
          return local_8;
        }
        STT3DSprC::SetCurFase((STT3DSprC *)this,'\f',local_c->field_038F);
        thunk_FUN_004ac610(this,'\f');
        STT3DSprC::ShowCurFase((STT3DSprC *)this,'\f');
        STT3DSprC::StartShow((STT3DSprC *)this,0xc,PTR_00802a38->field_00E4);
        FUN_006e9ef0(local_c->field_0211,local_c->field_01ED,0xc,1,0,0,30000);
      }
      local_c->field_036E = 2;
      sVar1 = *(short *)(DAT_00806724 + 0x23);
      local_c->field_039F = 0xff;
      local_c->field_0397 = sVar1 + -1;
      uVar3 = thunk_FUN_004ad650((int)this);
      local_c->field_039B = uVar3;
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
  }
  return local_8;
}

