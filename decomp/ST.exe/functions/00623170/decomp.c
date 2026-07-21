#include "../../pseudocode_runtime.h"


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
  InternalExceptionFrame local_50;
  STMineSetC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_mine_set.cpp",0x2df,0,iVar3,
                               "%s","STMineSetC::LoadImagMineSet");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_mine_set.cpp",0x2e1);
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
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',pSVar2->field_02CE);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
    STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,PTR_00802a38->field_00E4);
    iVar3 = thunk_FUN_004acd30(this_00,'\x0e');
    pSVar2->field_02D2 = iVar3;
    if (pSVar2->field_0352 != '\0') {
      iVar3 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_00,0xc,DAT_00806774,
                         (&PTR_s_mine0_007d02d4)
                         [pSVar2->field_0262 + (uint)(byte)pSVar2->field_02AD * 8],0x1d);
      if (iVar3 != 0) {
        return local_8;
      }
      STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\f',pSVar2->field_02CE);
      thunk_FUN_004ac610(this_00,'\f');
      STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\f');
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xc,PTR_00802a38->field_00E4);
    }
    if (DAT_00807326 != '\0') {
      STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',(uint)(byte)pSVar2->field_02D6);
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
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',pSVar2->field_02CE);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
    STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,PTR_00802a38->field_00E4);
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,10,DAT_00806774,
                       (&PTR_DAT_007d0364)[(byte)pSVar2->field_02AD],0x1d);
    if (iVar3 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this_00,'\n');
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\n',pSVar2->field_02E1);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\n');
    thunk_FUN_004acf20(this_00,DAT_008032b8,0x10);
    thunk_FUN_004acfe0(this_00,'\n');
    STT3DSprC::StartShow((STT3DSprC *)this_00,10,PTR_00802a38->field_00E4);
    pSVar2->field_02E0 = 1;
    iVar3 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,9,DAT_00806764,
                       (&PTR_DAT_007d0374)[(byte)pSVar2->field_02AD],0x1d);
    if (iVar3 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this_00,'\t');
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\t',pSVar2->field_02DB);
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\t');
    STT3DSprC::StartShow((STT3DSprC *)this_00,9,PTR_00802a38->field_00E4);
    thunk_FUN_004ad070(this_00,9);
    pSVar2->field_02DF = 1;
  }
  thunk_FUN_004ad3c0(this_00,(float)pSVar2->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
                     (float)pSVar2->field_02C6 * _DAT_007904f8 * _DAT_007904f0,
                     (float)pSVar2->field_02CA * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  pSVar2->field_02E9 = 1;
  g_currentExceptionFrame = local_50.previous;
  return 1;
}

