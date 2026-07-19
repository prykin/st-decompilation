
undefined4 thunk_FUN_006029c0(void)

{
  STT3DSprC *this;
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  iVar2 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(int *)(iStack_c + 0x241) == 1) {
      pbVar3 = (&PTR_s_Dest4_0_007cec00)[*(int *)(iStack_c + 0x372)];
    }
    else {
      pbVar3 = (&PTR_s_Dest1_0_007cebec)[*(int *)(iStack_c + 0x372)];
    }
    this = (STT3DSprC *)(iStack_c + 0x1d5);
    iVar2 = STT3DSprC::LoadSequence(this,0xe,DAT_00806774,pbVar3,0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004ac610(this,'\x0e');
      thunk_FUN_004abe40(this,'\x0e',*(undefined4 *)(iStack_c + 0x387));
      STT3DSprC::StartShow(this,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004acef0(this,DAT_008073cc);
      *(undefined1 *)(iStack_c + 0x37a) = 1;
      if (-1 < *(int *)(iStack_c + 0x249)) {
        iVar2 = STT3DSprC::LoadSequence
                          (this,0xc,DAT_00806774,
                           (&PTR_s_dest0s0_007cec3c)
                           [*(int *)(iStack_c + 0x249) + *(int *)(iStack_c + 0x372) * 8],0x1d);
        if (iVar2 != 0) {
          return uStack_8;
        }
        thunk_FUN_004abe40(this,'\f',*(undefined4 *)(iStack_c + 0x38f));
        thunk_FUN_004ac610(this,'\f');
        STT3DSprC::ShowCurFase(this,'\f');
        STT3DSprC::StartShow(this,0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
        FUN_006e9ef0(*(void **)(iStack_c + 0x211),*(uint *)(iStack_c + 0x1ed),0xc,1,0,0,30000);
      }
      *(undefined4 *)(iStack_c + 0x36e) = 2;
      sVar1 = *(short *)(DAT_00806724 + 0x23);
      *(undefined1 *)(iStack_c + 0x39f) = 0xff;
      *(int *)(iStack_c + 0x397) = sVar1 + -1;
      uVar4 = thunk_FUN_004ad650((int)this);
      *(undefined4 *)(iStack_c + 0x39b) = uVar4;
      g_currentExceptionFrame = IStack_50.previous;
      return 1;
    }
  }
  else {
    g_currentExceptionFrame = IStack_50.previous;
  }
  return uStack_8;
}

