#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_coll3.cpp
   STColl3C::LoadImagSpr */

undefined4 __thiscall STColl3C::LoadImagSpr(STColl3C *this,int param_1)

{
  STColl3CVTable_at_1D5 **this_00;
  code *pcVar1;
  STColl3C *this_01;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  STColl3C *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_01 = local_8;
  if (iVar2 == 0) {
    this_00 = &local_8->vtable_at_1d5;
    if (param_1 == 0) {
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_00,8,DAT_00806774,"Expb12" + local_8->field_02CD * 0x39,
                 0x1d);
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_00,9,DAT_00806764,
                 "expl_bbt0" + this_01->field_02CD * 0x39,0x1d);
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_00,10,DAT_00806774,
                 "expmask3" + this_01->field_02CD * 0x39,0x1d);
      thunk_FUN_004ac700(this_00,'\n');
      STT3DSprC::StartShow((STT3DSprC *)this_00,10,PTR_00802a38->field_00E4);
      thunk_FUN_004acf20(this_00,DAT_008032b8,0x10);
      STT3DSprC::StartShow((STT3DSprC *)this_00,8,PTR_00802a38->field_00E4);
      thunk_FUN_004acfe0(this_00,'\n');
      uVar3 = thunk_FUN_004ad650((int)this_00);
      this_01->field_02B7 = uVar3;
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0xe,DAT_00806774,"coll3",0x1d);
    if (iVar2 == 0) {
      thunk_FUN_004ad380(this_00,DAT_007ce78c,DAT_007ce790);
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,PTR_00802a38->field_00E4);
      thunk_FUN_00417e70(this_01,0x18);
      iVar2 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_00,0xc,DAT_00806774,
                         (&PTR_s_col3l0_007ce6e0)[this_01->field_0235],0x1d);
      if (iVar2 != 0) {
        return local_c;
      }
      thunk_FUN_004ac610(this_00,'\f');
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xc,PTR_00802a38->field_00E4);
      thunk_FUN_005fa0b0((int)this_01);
      uVar3 = thunk_FUN_004ad650((int)this_00);
      this_01->field_02B7 = uVar3;
      thunk_FUN_004ad430((int)this_00);
      if (this_01->field_02BB != '\0') {
        thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this_01);
      }
      this_01->field_02BB = 0;
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_coll3.cpp",0x1af,0,iVar2,"%s",
                               "STColl3C::LoadImagSpr");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\nick\\to_coll3.cpp",0x1b1);
  }
  return 0xffff;
}

