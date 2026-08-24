#include "../../pseudocode_runtime.h"


undefined4 FUN_006029c0(void)

{
  byte *this;
  short sVar1;
  int local_EAX_41;
  char *text;
  int iVar3;
  int iVar2;
  InternalExceptionFrame local_50;
  AnonShape_006029C0_E1371936 *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_41 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (local_EAX_41 == 0) {
    if (local_c->field_0241 == 1) {
      text = (&PTR_s_Dest4_0_007cec00)[local_c->field_0372];
    }
    else {
      text = (&PTR_s_Dest1_0_007cebec)[local_c->field_0372];
    }
    this = &local_c->field_0x1d5;
    /* ST_CALLSITE[00602A35]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar3 = STT3DSprC::LoadSequence((STT3DSprC *)this,0xe,PTR_00806774,text,CASE_1D);
    if (iVar3 == 0) {
      thunk_FUN_004ac610(this,'\x0e');
      /* ST_CALLSITE[00602A56]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',local_c->field_0387);
      /* ST_CALLSITE[00602A6C]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this,0xe,g_playSystem_00802A38->field_00E4);
      /* ST_CALLSITE[00602A79]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
      STT3DSprC::sub_004ACEF0((STT3DSprC *)this,PTR_008073cc);
      local_c->field_037A = 1;
      if (-1 < local_c->field_0249) {
        /* ST_CALLSITE[00602AB1]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar3 = STT3DSprC::LoadSequence
                          ((STT3DSprC *)this,0xc,PTR_00806774,
                           (&PTR_s_dest0s0_007cec3c)[local_c->field_0249 + local_c->field_0372 * 8],
                           CASE_1D);
        if (iVar3 != 0) {
          return local_8;
        }
        /* ST_CALLSITE[00602AC9]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        STT3DSprC::SetCurFase((STT3DSprC *)this,'\f',local_c->field_038F);
        thunk_FUN_004ac610(this,'\f');
        /* ST_CALLSITE[00602ADB]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        STT3DSprC::ShowCurFase((STT3DSprC *)this,'\f');
        /* ST_CALLSITE[00602AF0]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        STT3DSprC::StartShow((STT3DSprC *)this,0xc,g_playSystem_00802A38->field_00E4);
        ST3DSMAPContext::sub_006E9EF0(local_c->field_0211,local_c->field_01ED,0xc,1,0,0,30000);
      }
      local_c->field_036E = 2;
      sVar1 = PTR_00806724->entryCount;
      local_c->field_039F = 0xff;
      local_c->field_0397 = sVar1 + -1;
      iVar2 = thunk_FUN_004ad650((STT3DSprC *)this);
      local_c->field_039B = iVar2;
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
  }
  return local_8;
}

