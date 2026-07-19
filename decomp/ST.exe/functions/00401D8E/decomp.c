
undefined4 __thiscall STColl3C::LoadImagSpr(STColl3C *this,int param_1)

{
  STT3DSprC *this_00;
  code *pcVar1;
  STColl3C *this_01;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_50;
  undefined4 uStack_c;
  STColl3C *pSStack_8;
  
  uStack_c = 0;
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pSStack_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = pSStack_8;
  if (iVar2 == 0) {
    this_00 = (STT3DSprC *)(pSStack_8 + 0x1d5);
    if (param_1 == 0) {
      STT3DSprC::LoadSequence
                (this_00,8,DAT_00806774,
                 (byte *)(s_Expb12_007ce718 + *(int *)(pSStack_8 + 0x2cd) * 0x39),0x1d);
      STT3DSprC::LoadSequence
                (this_00,9,DAT_00806764,
                 (byte *)(s_expl_bbt0_007ce723 + *(int *)(this_01 + 0x2cd) * 0x39),0x1d);
      STT3DSprC::LoadSequence
                (this_00,10,DAT_00806774,
                 (byte *)(s_expmask3_007ce72e + *(int *)(this_01 + 0x2cd) * 0x39),0x1d);
      thunk_FUN_004ac700(this_00,'\n');
      STT3DSprC::StartShow(this_00,10,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004acf20(this_00,DAT_008032b8,0x10);
      STT3DSprC::StartShow(this_00,8,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004acfe0(this_00,'\n');
      uVar3 = thunk_FUN_004ad650((int)this_00);
      *(undefined4 *)(this_01 + 0x2b7) = uVar3;
      g_currentExceptionFrame = IStack_50.previous;
      return uStack_c;
    }
    iVar2 = STT3DSprC::LoadSequence(this_00,0xe,DAT_00806774,(byte *)s_coll3_007ce6d8,0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004ad380(this_00,DAT_007ce78c,DAT_007ce790);
      STT3DSprC::StartShow(this_00,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_00417e70(this_01,0x18);
      iVar2 = STT3DSprC::LoadSequence
                        (this_00,0xc,DAT_00806774,
                         (&PTR_s_col3l0_007ce6e0)[*(int *)(this_01 + 0x235)],0x1d);
      if (iVar2 != 0) {
        return uStack_c;
      }
      thunk_FUN_004ac610(this_00,'\f');
      STT3DSprC::StartShow(this_00,0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_005fa0b0((int)this_01);
      uVar3 = thunk_FUN_004ad650((int)this_00);
      *(undefined4 *)(this_01 + 0x2b7) = uVar3;
      thunk_FUN_004ad430((int)this_00);
      if (this_01[699] != (STColl3C)0x0) {
        thunk_FUN_0041c5a0((int *)this_01);
      }
      this_01[699] = (STColl3C)0x0;
      g_currentExceptionFrame = IStack_50.previous;
      return uStack_c;
    }
  }
  else {
    g_currentExceptionFrame = IStack_50.previous;
    iVar4 = ReportDebugMessage(s_E____titans_nick_to_coll3_cpp_007ce868,0x1af,0,iVar2,&DAT_007a4ccc,
                               s_STColl3C__LoadImagSpr_007ce8a8);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    RaiseInternalException(iVar2,0,s_E____titans_nick_to_coll3_cpp_007ce868,0x1b1);
  }
  return 0xffff;
}

