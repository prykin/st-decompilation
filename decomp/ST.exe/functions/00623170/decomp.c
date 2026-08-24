#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_mine_set.cpp
   STMineSetC::LoadImagMineSet */

undefined4 __thiscall STMineSetC::LoadImagMineSet(STMineSetC *this,int param_1)

{
  undefined4 *this_00;
  STMineSetC *pSVar2;
  int local_EAX_41;
  int iVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  InternalExceptionFrame local_50;
  STMineSetC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  local_EAX_41 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (local_EAX_41 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_mine_set.cpp",0x2df,0,local_EAX_41,
                               "%s","STMineSetC::LoadImagMineSet");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_41,0,"E:\\__titans\\nick\\to_mine_set.cpp",0x2e1);
    return 0xffff;
  }
  this_00 = &local_c->field_01D5;
  iVar3 = thunk_FUN_004ad650((STT3DSprC *)this_00);
  pSVar2->field_02BA = iVar3;
  if (param_1 == 0) {
    /* ST_CALLSITE[006231E9]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,0xe,PTR_00806774,(&PTR_DAT_007d02c4)[pSVar2->field_02AD]
                       ,CASE_1D);
    if (iVar5 != 0) {
      return local_8;
    }
    thunk_FUN_004ad380(this_00,0x5a,0x45);
    thunk_FUN_004ac610(this_00,'\x0e');
    /* ST_CALLSITE[0062321C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',pSVar2->field_02CE);
    /* ST_CALLSITE[00623225]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
    /* ST_CALLSITE[0062323B]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00623244]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar5 = STT3DSprC::sub_004ACD30((STT3DSprC *)this_00,'\x0e');
    pSVar2->field_02D2 = iVar5;
    if (pSVar2->field_0352 != '\0') {
      /* ST_CALLSITE[0062327F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar5 = STT3DSprC::LoadSequence
                        ((STT3DSprC *)this_00,0xc,PTR_00806774,
                         (&PTR_s_mine0_007d02d4)[pSVar2->field_0262 + (uint)pSVar2->field_02AD * 8],
                         CASE_1D);
      if (iVar5 != 0) {
        return local_8;
      }
      /* ST_CALLSITE[0062329E]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\f',pSVar2->field_02CE);
      thunk_FUN_004ac610(this_00,'\f');
      /* ST_CALLSITE[006232B0]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\f');
      /* ST_CALLSITE[006232C5]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow((STT3DSprC *)this_00,0xc,g_playSystem_00802A38->field_00E4);
    }
    if (DAT_00807326 != '\0') {
      /* ST_CALLSITE[006232E4]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
      STT3DSprC::SetCurShad((STT3DSprC *)this_00,'\x0e',(uint)(byte)pSVar2->field_02D6);
    }
  }
  else {
    /* ST_CALLSITE[00623309]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,0xe,PTR_00806774,
                       (&PTR_s_expdeep_007d0354)[pSVar2->field_02AD],CASE_1D);
    if (iVar5 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this_00,'\x0e');
    /* ST_CALLSITE[00623331]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\x0e',pSVar2->field_02CE);
    /* ST_CALLSITE[0062333A]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\x0e');
    /* ST_CALLSITE[00623350]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_00,0xe,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00623372]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,10,PTR_00806774,
                       (&PTR_CHAR_e_007d0364)[pSVar2->field_02AD],CASE_1D);
    if (iVar5 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this_00,'\n');
    /* ST_CALLSITE[0062339A]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\n',pSVar2->field_02E1);
    /* ST_CALLSITE[006233A3]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\n');
    /* ST_CALLSITE[006233B3]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    STT3DSprC::sub_004ACF20((STT3DSprC *)this_00,PTR_008032b8,0x10);
    /* ST_CALLSITE[006233BC]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
    STT3DSprC::sub_004ACFE0((STT3DSprC *)this_00,'\n');
    /* ST_CALLSITE[006233D2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_00,10,g_playSystem_00802A38->field_00E4);
    pSVar2->field_02E0 = 1;
    /* ST_CALLSITE[006233FA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)this_00,9,PTR_00806764,
                       (&PTR_CHAR_e_007d0374)[pSVar2->field_02AD],CASE_1D);
    if (iVar5 != 0) {
      return local_8;
    }
    thunk_FUN_004ac610(this_00,'\t');
    /* ST_CALLSITE[00623422]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    STT3DSprC::SetCurFase((STT3DSprC *)this_00,'\t',pSVar2->field_02DB);
    /* ST_CALLSITE[0062342B]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    STT3DSprC::ShowCurFase((STT3DSprC *)this_00,'\t');
    /* ST_CALLSITE[00623441]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this_00,9,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[0062344A]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
    STT3DSprC::sub_004AD070((STT3DSprC *)this_00,9);
    pSVar2->field_02DF = 1;
  }
  /* ST_CALLSITE[006234A0]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  STT3DSprC::sub_004AD3C0
            ((STT3DSprC *)this_00,(float)pSVar2->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
             (float)pSVar2->field_02C6 * _DAT_007904f8 * _DAT_007904f0,
             (float)pSVar2->field_02CA * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  pSVar2->field_02E9 = 1;
  g_currentExceptionFrame = local_50.previous;
  return 1;
}

