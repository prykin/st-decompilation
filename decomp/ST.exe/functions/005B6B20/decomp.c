#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::InitMMsg */

void __thiscall MMsgTy::InitMMsg(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    g_startSystem_0081176C->field_02E6 = local_8;
    local_8->field_009A = 8;
    MMObjTy::InitSprBut((MMObjTy *)local_8,(AnonShape_005B5240_B2C8755B *)&local_8->field_0x9b,
                        "MM_MBUT12",0x194,0x213,0x24,0x12,0x12,7,0xa0,0x31,0x14,(char *)0x0
                        ,0,0,0,0,0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(AnonShape_005B5240_B2C8755B *)&this_00->field_0x296,
                        "MM_MBUT08",0x25c,0x213,0xf,0x14,2,8,0xa0,0x34,0x14,(char *)0x0,0,0
                        ,0,0,0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(AnonShape_005B5240_B2C8755B *)&this_00->field_0x491,
                        "MM_MBUT09",0x261,0x1da,0x10,0x12,1,7,0xa0,0x34,0xf,(char *)0x0,0,0
                        ,0,0,0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(AnonShape_005B5240_B2C8755B *)&this_00->field_0x68c,
                        "MM_MBUT10",0x264,0x1a3,0x10,0x10,2,6,0x9e,0x33,10,(char *)0x0,0,0,
                        0,0,0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(AnonShape_005B5240_B2C8755B *)&this_00->field_0x887,
                        "MM_MBUT07",0,0x1a3,0x2f,0x10,0x1c,6,0x9d,0x31,10,(char *)0x0,0,0,0
                        ,0,0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(AnonShape_005B5240_B2C8755B *)&this_00->field_0xa82,
                        "MM_MBUT06",0,0x1da,0x32,0x12,0x1d,7,0xa0,0x32,0xf,(char *)0x0,0,0,
                        0,0,0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(AnonShape_005B5240_B2C8755B *)&this_00->field_0xc7d,
                        "MM_MBUT05",0,0x213,0x34,0x13,0x21,9,0xa0,0x33,0x14,(char *)0x0,0,0
                        ,0,0,0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(AnonShape_005B5240_B2C8755B *)&this_00->field_0xe78,
                        "MM_MBUT11",0xb4,0x213,0x37,0x12,0x26,8,0xa0,0x30,0x14,(char *)0x0,
                        0,0,0,0,0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    MMObjTy::InitSprBut((MMObjTy *)this_00,(AnonShape_005B5240_B2C8755B *)&this_00->field_0x1caf,
                        "MM_TABLO",0x30,0x203,0xb5,0x11,0,0,0,0,0x14,(char *)0x0,0,0,0,0,
                        0x4b,0,(ccFntTy *)0x0,0,0,0,-1,-1);
    HideSprites(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x22,0,errorCode,
                             "%s","MMsgTy::InitMMsg");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x22);
  return;
}

