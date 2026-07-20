
undefined4 FUN_006029c0(void)

{
  STT3DSprC *this;
  short sVar1;
  int iVar2;
  char *text;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(int *)(local_c + 0x241) == 1) {
      text = (&PTR_s_Dest4_0_007cec00)[*(int *)(local_c + 0x372)];
    }
    else {
      text = (&PTR_s_Dest1_0_007cebec)[*(int *)(local_c + 0x372)];
    }
    this = (STT3DSprC *)(local_c + 0x1d5);
    iVar2 = STT3DSprC::LoadSequence(this,0xe,DAT_00806774,text,0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004ac610(this,'\x0e');
      STT3DSprC::SetCurFase(this,'\x0e',*(uint *)(local_c + 0x387));
      STT3DSprC::StartShow(this,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004acef0(this,DAT_008073cc);
      *(undefined1 *)(local_c + 0x37a) = 1;
      if (-1 < *(int *)(local_c + 0x249)) {
        iVar2 = STT3DSprC::LoadSequence
                          (this,0xc,DAT_00806774,
                           (&PTR_s_dest0s0_007cec3c)
                           [*(int *)(local_c + 0x249) + *(int *)(local_c + 0x372) * 8],0x1d);
        if (iVar2 != 0) {
          return local_8;
        }
        STT3DSprC::SetCurFase(this,'\f',*(uint *)(local_c + 0x38f));
        thunk_FUN_004ac610(this,'\f');
        STT3DSprC::ShowCurFase(this,'\f');
        STT3DSprC::StartShow(this,0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
        FUN_006e9ef0(*(void **)(local_c + 0x211),*(uint *)(local_c + 0x1ed),0xc,1,0,0,30000);
      }
      *(undefined4 *)(local_c + 0x36e) = 2;
      sVar1 = *(short *)(DAT_00806724 + 0x23);
      *(undefined1 *)(local_c + 0x39f) = 0xff;
      *(int *)(local_c + 0x397) = sVar1 + -1;
      uVar3 = thunk_FUN_004ad650((int)this);
      *(undefined4 *)(local_c + 0x39b) = uVar3;
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
  }
  return local_8;
}

