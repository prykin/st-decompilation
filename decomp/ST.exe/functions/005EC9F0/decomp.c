#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005ec9f0(int param_1)

{
  undefined1 *this;
  int local_EAX_48;
  int iVar2;
  int local_EAX_322;
  int iVar1;
  InternalExceptionFrame local_54;
  char **local_10;
  undefined4 local_c;
  AnonShape_005EC9F0_B12E6711 *local_8;

  local_c = 0;
  local_10 = &PTR_s_cont1_007cde70;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_EAX_48 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  this = &local_8->field_0x1d5;
  if (param_1 == 0) {
    thunk_FUN_004ad380(this,DAT_007cde88,DAT_007cde8c);
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this,0xe,PTR_00806774,local_10[local_8->field_02B1],CASE_1D);
    if (iVar2 != 0) {
      return local_c;
    }
    thunk_FUN_004ac610(this,'\x0e');
    STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',local_8->field_02CA);
    STT3DSprC::sub_004AD3C0
              ((STT3DSprC *)this,(float)local_8->field_02BE * _DAT_007904f8 * _DAT_007904f0,
               (float)local_8->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
               (float)local_8->field_02C6 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    STT3DSprC::StartShow((STT3DSprC *)this,0xe,g_playSystem_00802A38->field_00E4);
    STT3DSprC::SetCurShad((STT3DSprC *)this,'\x0e',local_8->field_02BA / 0xf);
    thunk_FUN_00417e70(local_8,0x18);
    local_8->field_02B9 = 1;
    local_EAX_322 = thunk_FUN_004ad650((STT3DSprC *)this);
    local_8->field_02D6 = local_EAX_322;
    if (local_8->field_0235 == '\x01') {
      STT3DSprC::LoadSequence((STT3DSprC *)this,0xb,PTR_00806774,"forcef0",CASE_1D);
      thunk_FUN_004ad670(this,'\x0e');
      thunk_FUN_004ad150(this,'\v');
      thunk_FUN_004ac700(this,'\v');
      STT3DSprC::StartShow((STT3DSprC *)this,0xb,g_playSystem_00802A38->field_00E4);
      g_currentExceptionFrame = local_54.previous;
      return local_c;
    }
  }
  else {
    STT3DSprC::LoadSequence
              ((STT3DSprC *)this,8,PTR_00806774,
               "expl_bt0" + (uint)local_8->field_02DF * 0x32,CASE_1D);
    STT3DSprC::LoadSequence
              ((STT3DSprC *)this,9,PTR_00806764,
               "expl_bbt0" + (uint)local_8->field_02DF * 0x32,CASE_1D);
    STT3DSprC::LoadSequence
              ((STT3DSprC *)this,10,PTR_00806774,
               "expmask3" + (uint)local_8->field_02DF * 0x32,CASE_1D);
    thunk_FUN_004ac700(this,'\n');
    STT3DSprC::StartShow((STT3DSprC *)this,10,g_playSystem_00802A38->field_00E4);
    STT3DSprC::sub_004ACF20((STT3DSprC *)this,PTR_008032b8,0x10);
    STT3DSprC::StartShow((STT3DSprC *)this,8,g_playSystem_00802A38->field_00E4);
    STT3DSprC::sub_004ACFE0((STT3DSprC *)this,'\n');
    iVar1 = thunk_FUN_004ad650((STT3DSprC *)this);
    local_8->field_02D6 = iVar1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

