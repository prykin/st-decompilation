#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_optic.cpp
   OpticClassC::ReInitOptic */

void __thiscall OpticClassC::ReInitOptic(OpticClassC *this,int param_1)

{
  double dVar1;
  int errorCode;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  InternalExceptionFrame local_5c;
  OpticClassC *local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;

  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_5c.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_optic.cpp",0x13c,0,errorCode,
                               "%s");
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\wlad\\To_optic.cpp",0x13d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  DAT_0080745d = 0;
  _DAT_00807430 = 0x40200000;
  DAT_00807408 = (&DAT_00807570)[param_1 * 4];
  DAT_0080740c = (&DAT_00807574)[param_1 * 4];
  DAT_00807400 = (&DAT_00807568)[param_1 * 4];
  DAT_00807404 = (&DAT_0080756c)[param_1 * 4];
  DAT_00807420 = ((float)DAT_00807408 * _DAT_007ac580) / (float)DAT_00807570;
  uVar4 = DAT_0080743c & 0xff;
  _DAT_00807434 = 0x3f800000;
  _DAT_00807438 = 0x3f800000;
  DAT_0080743c = DAT_0080743c & 0xffffff00;
  dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
  DAT_00807410 = DAT_00807400;
  DAT_00807414 = DAT_00807404;
  DAT_00807418 = DAT_00807408;
  DAT_0080741c = DAT_0080740c;
  local_14 = DAT_00807408;
  fVar5 = Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  local_14 = (&DAT_00807574)[param_1 * 4];
  _DAT_00807428 = DAT_00807420;
  DAT_0080743c = DAT_0080743c & 0xff;
  uRam00807440 = 0;
  _DAT_00807441 = 0;
  _DAT_00807445 = 0;
  _DAT_00807449 = 0;
  _DAT_0080744d = 0;
  _DAT_00807451 = 0;
  _DAT_00807455 = 0;
  _DAT_00807459 = 0;
  DAT_00807424 = (float)((float10)local_14 * ((float10)_DAT_00790580 / fVar5));
  _DAT_0080742c = DAT_00807424;
  ST3DSMAPContext::sub_006DBD20
            (g_sT3DSMAPContext_00807598,g_dDXContext_0080759C,(&DAT_00807568)[param_1 * 4],
             (&DAT_0080756c)[param_1 * 4],(&DAT_00807570)[param_1 * 4],local_14,
             (double)(DAT_00807420 * _DAT_00790780),(double)(DAT_00807420 * _DAT_00790784),
             (double)(DAT_00807424 * _DAT_00790780),(double)(DAT_00807424 * _DAT_00790784));
  ST3DSMAPContext::sub_006DD530(g_sT3DSMAPContext_00807598,&local_10,&local_c,&local_8);
  ST3DSMAPContext::sub_006DD790
            (g_sT3DSMAPContext_00807598,
             ((local_8 - _DAT_0079077c) * (float)_DAT_00790770 - _DAT_0080742c * _DAT_00790784) -
             _DAT_0080742c * _DAT_0079070c);
  ST3DSMAPContext::sub_006DD800
            (g_sT3DSMAPContext_00807598,
             _DAT_0080742c * _DAT_00790784 + local_8 * (float)_DAT_00790770 + (float)_DAT_00790760);
  /* ST_CALLSITE[004A97C6]: CALL 0x00401b6d; direct=00401B6D OpticClassC::sub_004A9B60 */
  sub_004A9B60(local_18,DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c);
  thunk_FUN_004a8f20(1);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  if (uVar4 == 1) {
    thunk_FUN_004a9c80(1);
  }
  else {
    if (uVar4 != 2) {
      DAT_0080674c = 2;
      DAT_0080745d = 0;
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    thunk_FUN_004a9c80(1);
    thunk_FUN_004a9c80(1);
  }
  SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_00567510::thunk_FUN_00567510
            ((RecoveredReceiver_00567510 *)&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,
             DAT_0080743c & 0xff);
  g_currentExceptionFrame = local_5c.previous;
  return;
}

