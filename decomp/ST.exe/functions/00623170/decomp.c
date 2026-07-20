
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_mine_set.cpp
   STMineSetC::LoadImagMineSet */

undefined4 __thiscall STMineSetC::LoadImagMineSet(STMineSetC *this,int param_1)

{
  undefined4 *this_00;
  code *pcVar1;
  STMineSetC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  STMineSetC *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_nick_to_mine_set_cpp_007d06b0,0x2df,0,iVar3,
                               &DAT_007a4ccc,s_STMineSetC__LoadImagMineSet_007d06f4);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(iVar3,0,s_E____titans_nick_to_mine_set_cpp_007d06b0,0x2e1);
    return 0xffff;
  }
  this_00 = &local_c->field_01D5;
  uVar4 = thunk_FUN_004ad650((int)this_00);
  pSVar2->field_02BA = uVar4;
  if (param_1 == 0) {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,0xe,DAT_00806774,
                       (&PTR_DAT_007d02c4)[(byte)pSVar2->field_02AD],0x1d);
    if (iVar3 != 0) {
      return local_8;
    }
    thunk_FUN_004ad380(this_00,0x5a,0x45);
    thunk_FUN_004ac610(this_00,'\x0e');
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',*(uint *)&pSVar2->field_0x2ce);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
    STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    uVar4 = thunk_FUN_004acd30(this_00,'\x0e');
    *(undefined4 *)&pSVar2->field_0x2d2 = uVar4;
    if (pSVar2->field_0x352 != '\0') {
      iVar3 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_00,0xc,DAT_00806774,
                         (&PTR_s_mine0_007d02d4)
                         [*(int *)&pSVar2->field_0x262 + (uint)(byte)pSVar2->field_02AD * 8],0x1d);
      if (iVar3 != 0) {
        return local_8;
      }
      STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\f',*(uint *)&pSVar2->field_0x2ce);
      thunk_FUN_004ac610(this_00,'\f');
      STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\f');
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
    }
    if (DAT_00807326 != '\0') {
      STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',(uint)(byte)pSVar2->field_0x2d6);
    }
  }
  else {
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,0xe,DAT_00806774,
                       (&PTR_s_expdeep_007d0354)[(byte)pSVar2->field_02AD],0x1d);
    if (iVar3 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this_00,'\x0e');
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',*(uint *)&pSVar2->field_0x2ce);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
    STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,10,DAT_00806774,
                       (&PTR_DAT_007d0364)[(byte)pSVar2->field_02AD],0x1d);
    if (iVar3 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this_00,'\n');
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\n',*(uint *)&pSVar2->field_0x2e1);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\n');
    thunk_FUN_004acf20(this_00,DAT_008032b8,0x10);
    thunk_FUN_004acfe0(this_00,'\n');
    STT3DSprC::StartShow((STT3DSprC *)this_00,10,*(undefined4 *)(DAT_00802a38 + 0xe4));
    pSVar2->field_0x2e0 = 1;
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,9,DAT_00806764,
                       (&PTR_DAT_007d0374)[(byte)pSVar2->field_02AD],0x1d);
    if (iVar3 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this_00,'\t');
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\t',*(uint *)&pSVar2->field_0x2db);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\t');
    STT3DSprC::StartShow((STT3DSprC *)this_00,9,*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004ad070(this_00,9);
    pSVar2->field_0x2df = 1;
  }
  thunk_FUN_004ad3c0(this_00,(float)*(int *)&pSVar2->field_0x2c2 * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)&pSVar2->field_0x2c6 * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)&pSVar2->field_0x2ca * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
  pSVar2->field_02E9 = 1;
  g_currentExceptionFrame = local_50.previous;
  return 1;
}

