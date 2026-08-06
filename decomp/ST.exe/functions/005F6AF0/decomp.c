#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_coll3.cpp
   STColl3C::LoadImagSpr */

undefined4 __thiscall STColl3C::LoadImagSpr(STColl3C *this,int param_1)

{
  STColl3CVTable_at_1D5 **this_00;
  STColl3C *this_01;
  int local_EAX_41;
  int iVar4;
  int local_EAX_247;
  int iVar2;
  int iVar3;
  undefined4 uVar5;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  STColl3C *local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  local_EAX_41 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_01 = local_8;
  if (local_EAX_41 == 0) {
    this_00 = &local_8->vtable_at_1d5;
    if (param_1 == 0) {
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_00,8,PTR_00806774,"Expb12" + local_8->field_02CD * 0x39,
                 CASE_1D);
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_00,9,PTR_00806764,
                 "expl_bbt0" + this_01->field_02CD * 0x39,CASE_1D);
      STT3DSprC::LoadSequence
                ((STT3DSprC *)this_00,10,PTR_00806774,
                 "expmask3" + this_01->field_02CD * 0x39,CASE_1D);
      thunk_FUN_004ac700(this_00,'\n');
      STT3DSprC::StartShow((STT3DSprC *)this_00,10,g_playSystem_00802A38->field_00E4);
      STT3DSprC::sub_004ACF20((STT3DSprC *)this_00,PTR_008032b8,0x10);
      STT3DSprC::StartShow((STT3DSprC *)this_00,8,g_playSystem_00802A38->field_00E4);
      STT3DSprC::sub_004ACFE0((STT3DSprC *)this_00,'\n');
      iVar2 = thunk_FUN_004ad650((STT3DSprC *)this_00);
      this_01->field_02B7 = iVar2;
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
    iVar4 = STT3DSprC::LoadSequence((STT3DSprC *)this_00,0xe,PTR_00806774,"coll3",CASE_1D);
    if (iVar4 == 0) {
      thunk_FUN_004ad380(this_00,DAT_007ce78c,DAT_007ce790);
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
      thunk_FUN_00417e70(this_01,0x18);
      iVar4 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_00,0xc,PTR_00806774,
                         (&PTR_s_col3l0_007ce6e0)[this_01->field_0235],CASE_1D);
      if (iVar4 != 0) {
        return local_c;
      }
      thunk_FUN_004ac610(this_00,'\f');
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xc,g_playSystem_00802A38->field_00E4);
      thunk_FUN_005fa0b0(this_01);
      local_EAX_247 = thunk_FUN_004ad650((STT3DSprC *)this_00);
      this_01->field_02B7 = local_EAX_247;
      thunk_FUN_004ad430((STT3DSprC *)this_00);
      if (this_01->field_02BB != '\0') {
        sub_0041C5A0(this_01);
      }
      this_01->field_02BB = 0;
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\nick\\to_coll3.cpp",0x1af,0,local_EAX_41,
                               "%s","STColl3C::LoadImagSpr");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_41,0,"E:\\__titans\\nick\\to_coll3.cpp",0x1b1);
  }
  return 0xffff;
}

