
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005ec9f0(int param_1)

{
  STT3DSprC *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  undefined **local_10;
  undefined4 local_c;
  void *local_8;
  
  local_c = 0;
  local_10 = &PTR_s_cont1_007cde70;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  this = (STT3DSprC *)((int)local_8 + 0x1d5);
  if (param_1 == 0) {
    thunk_FUN_004ad380(this,DAT_007cde88,DAT_007cde8c);
    iVar1 = STT3DSprC::LoadSequence
                      (this,0xe,DAT_00806774,local_10[*(int *)((int)local_8 + 0x2b1)],0x1d);
    if (iVar1 != 0) {
      return local_c;
    }
    thunk_FUN_004ac610(this,'\x0e');
    thunk_FUN_004abe40(this,'\x0e',*(undefined4 *)((int)local_8 + 0x2ca));
    thunk_FUN_004ad3c0(this,(float)*(int *)((int)local_8 + 0x2be) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)local_8 + 0x2c2) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)((int)local_8 + 0x2c6) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
    STT3DSprC::StartShow(this,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    STT3DSprC::SetCurShad(this,'\x0e',*(int *)((int)local_8 + 0x2ba) / 0xf);
    thunk_FUN_00417e70(local_8,0x18);
    *(undefined1 *)((int)local_8 + 0x2b9) = 1;
    uVar2 = thunk_FUN_004ad650((int)this);
    *(undefined4 *)((int)local_8 + 0x2d6) = uVar2;
    if (*(char *)((int)local_8 + 0x235) == '\x01') {
      STT3DSprC::LoadSequence(this,0xb,DAT_00806774,(byte *)s_forcef0_007aa008,0x1d);
      thunk_FUN_004ad670(this,'\x0e');
      thunk_FUN_004ad150(this,'\v');
      thunk_FUN_004ac700(this,'\v');
      STT3DSprC::StartShow(this,0xb,*(undefined4 *)(DAT_00802a38 + 0xe4));
      g_currentExceptionFrame = local_54.previous;
      return local_c;
    }
  }
  else {
    STT3DSprC::LoadSequence
              (this,8,DAT_00806774,
               (byte *)(s_expl_bt0_007cdf30 + (uint)*(byte *)((int)local_8 + 0x2df) * 0x32),0x1d);
    STT3DSprC::LoadSequence
              (this,9,DAT_00806764,
               (byte *)(s_expl_bbt0_007cdf3a + (uint)*(byte *)((int)local_8 + 0x2df) * 0x32),0x1d);
    STT3DSprC::LoadSequence
              (this,10,DAT_00806774,
               (byte *)(s_expmask3_007cdf44 + (uint)*(byte *)((int)local_8 + 0x2df) * 0x32),0x1d);
    thunk_FUN_004ac700(this,'\n');
    STT3DSprC::StartShow(this,10,*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004acf20(this,DAT_008032b8,0x10);
    STT3DSprC::StartShow(this,8,*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004acfe0(this,'\n');
    uVar2 = thunk_FUN_004ad650((int)this);
    *(undefined4 *)((int)local_8 + 0x2d6) = uVar2;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

