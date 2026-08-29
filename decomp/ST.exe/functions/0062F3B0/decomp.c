#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::LoadImagSpr

   [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/STRubbishC_LoadImagSpr_param_4Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

undefined4 __thiscall
STRubbishC::LoadImagSpr
          (STRubbishC *this,void *param_1,int *param_2,undefined4 param_3,
          STRubbishC_LoadImagSpr_param_4Enum param_4)

{
  STT3DSprC *this_00;
  int iVar2;
  int iVar4;
  int iVar3;
  uint uVar5;
  InternalExceptionFrame local_5c;
  uint local_18;
  STT3DSprC *local_14;
  int local_10;
  int local_c;
  char **local_8;

  local_18 = 0;
  switch(param_4) {
  case CASE_1:
    local_10 = *(int *)(&DAT_007d1530 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1534 + *param_2 * 8);
  default:
    local_8 = &PTR_s_rubb_w0_007d1480;
    break;
  case CASE_2:
    local_8 = &PTR_s_rubb_g0_007d14a8;
    local_10 = *(int *)(&DAT_007d1530 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1534 + *param_2 * 8);
    break;
  case CASE_3:
    local_8 = &PTR_s_rubb3_007d14d0;
    local_10 = 0xf;
    local_c = 0xf;
    break;
  case CASE_4:
    local_8 = &PTR_s_rubb_gw0_007d1514;
    goto LAB_0062f450;
  case CASE_5:
    local_8 = &PTR_s_rubb_gb0_007d14f8;
LAB_0062f450:
    local_10 = *(int *)(&DAT_007d1580 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1584 + *param_2 * 8);
    break;
  case CASE_6:
    local_8 = &PTR_s_rubb3_007d14d0;
    local_10 = *(int *)(&DAT_007d1580 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1584 + *param_2 * 8);
  }
  local_14 = param_1;
  if (param_1 == nullptr) {
    return 0xffffffff;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;

  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 == 0) {
    /* ST_CALLSITE[0062F4D9]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    iVar4 = STT3DSprC::Init(local_14,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar4 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_Rubb.cpp",0x17b);
      return 0xffff;
    }
    /* ST_CALLSITE[0062F51F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar4 = STT3DSprC::LoadSequence(this_00,0xe,PTR_00806774,local_8[*param_2],CASE_1D);
    if (iVar4 == 0) {
      /* ST_CALLSITE[0062F534]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase(this_00,'\x0e',param_2[6]);
      thunk_FUN_004ad380(this_00,local_10 / 2,local_c / 2 - 0xe);
      /* ST_CALLSITE[0062F596]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      STT3DSprC::sub_004AD3C0
                (this_00,(float)param_2[3] * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_2[4] * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_2[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      g_currentExceptionFrame = local_5c.previous;
      return local_18;
    }
  }
  else {
    g_currentExceptionFrame = local_5c.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\nick\\to_Rubb.cpp",0x189,0,iVar2,"%s",
                               "STRubbishC::LoadImagSpr");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\nick\\to_Rubb.cpp",0x18b);
  }
  return 0xffff;
}

