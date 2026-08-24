#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::DrawTrakSprite */

void __thiscall
TraksClassTy::DrawTrakSprite(TraksClassTy *this,RecoveredRecord_TraksClassTy_00555910 *param_1)

{
  ushort uVar1;
  int iVar3;
  int iVar5;
  short sVar3;
  int iVar4;
  int iVar6;
  InternalExceptionFrame local_64;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  TraksClassTy *local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (iVar3 == 0) {
    sVar3 = param_1->field_0022;
    local_20 = (int)sVar3;
    if (((uint)((int)param_1->field_0014 + param_1->field_0024) <= local_8->field_0020) ||
       (param_1->field_003A != 0)) {
      param_1->field_0022 = sVar3 + 1;
      if (param_1->field_0036 <= (short)(sVar3 + 1)) {
        param_1->field_0022 = sVar3;
        param_1->field_0038 = 1;
      }
      param_1->field_0024 = local_8->field_0020;
    }
    local_c = (int)(short)param_1->field_0002;
    local_10 = (int)(short)param_1->field_0004;
    local_18 = (int)(short)param_1->field_001E;
    uVar1 = param_1->field_001C;
    local_14 = (int)(short)param_1->field_0006;
    local_1c = (int)(short)param_1->field_0020;
    if (param_1->field_003A == 0) {
      iVar6 = local_8->field_0020 - param_1->field_0028;
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      iVar4 = param_1->field_0008 * iVar6;
      sVar3 = (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
              (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + param_1->field_002C;
      param_1->field_0002 = sVar3;
      if (param_1->field_000E != 0) {
        iVar4 = param_1->field_000E * iVar6 * iVar6;
        param_1->field_0002 =
             (((short)(iVar4 / 0x14) + (short)(iVar4 >> 0x1f)) -
             (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + sVar3;
      }
      iVar4 = param_1->field_000A * iVar6;
      sVar3 = (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
              (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + param_1->field_002E;
      param_1->field_0004 = sVar3;
      if (param_1->field_0010 != 0) {
        iVar4 = param_1->field_0010 * iVar6 * iVar6;
        param_1->field_0004 =
             (((short)(iVar4 / 0x14) + (short)(iVar4 >> 0x1f)) -
             (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + sVar3;
      }
      iVar4 = param_1->field_000C * iVar6;
      sVar3 = (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
              (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) + param_1->field_0030;
      param_1->field_0006 = sVar3;
      if (param_1->field_0012 != 0) {
        iVar6 = param_1->field_0012 * iVar6 * iVar6;
        param_1->field_0006 =
             (((short)(iVar6 / 0x14) + (short)(iVar6 >> 0x1f)) -
             (short)((longlong)iVar6 * 0x66666667 >> 0x3f)) + sVar3;
      }
      sVar3 = param_1->field_0002;
      sVar3 = STBiasedDiv16(sVar3, 0xc9); /* exact signed 16-bit grid-index division */
      param_1->field_001C = sVar3;
      sVar3 = param_1->field_0004;
      sVar3 = STBiasedDiv16(sVar3, 0xc9); /* exact signed 16-bit grid-index division */
      param_1->field_001E = sVar3;
      sVar3 = param_1->field_0006;
      sVar3 = STBiasedDiv16(sVar3, 200); /* exact signed 16-bit grid-index division */
      param_1->field_0020 = sVar3;
      iVar6 = thunk_FUN_00555880((RecoveredRecord_TraksClassTy_00555880 *)param_1);
      if (iVar6 == 0) {
        param_1->field_0002 = (undefined2)local_c;
        param_1->field_0004 = (undefined2)local_10;
        param_1->field_001C = uVar1;
        param_1->field_001E = (undefined2)local_18;
        param_1->field_0006 = (undefined2)local_14;
        param_1->field_0020 = (undefined2)local_1c;
        if (((param_1->field_0008 != 0) || (param_1->field_000A != 0)) || (param_1->field_000C != 0)
           ) {
          param_1->field_003A = 1;
        }
      }
    }
    if (((((short)param_1->field_0002 != local_c) || ((short)param_1->field_0004 != local_10)) ||
        (((short)param_1->field_0006 != local_14 || (param_1->field_0022 != local_20)))) &&
       (param_1->field_0038 == 0)) {
      ST3DSMAPContext::sub_006EA270
                (g_sT3DSMAPContext_00807598,param_1->field_0032,0,(int)param_1->field_0022);
      local_20 = (int)(short)param_1->field_0002;
      Library::Ourlib::ST3DSMAP::SprMove
                (g_sT3DSMAPContext_00807598,param_1->field_0032,
                 (float)local_20 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)(short)param_1->field_0004 * _DAT_007904f8 * _DAT_007904f0,
                 (float)(int)(short)param_1->field_0006 * _DAT_007904f8 * _DAT_007904f0 +
                 _DAT_007904fc);
    }
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\grig\\traks.cpp",0x96,0,iVar3,"%s",
                             "TraksClassTy::DrawTrakSprite error");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\traks.cpp",0x97);
  return;
}

