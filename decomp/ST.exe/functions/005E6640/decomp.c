#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   ChooseMapTy::OutListProc */

void __thiscall
ChooseMapTy::OutListProc
          (ChooseMapTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          DWORD param_6,DWORD param_7,int param_8)

{
  code *pcVar1;
  byte bVar2;
  int errorCode;
  int iVar3;
  byte bVar4;
  InternalExceptionFrame local_50;
  AnonShape_005E6640_0F1EE66B *local_c;
  uint local_8;

  local_c = (AnonShape_005E6640_0F1EE66B *)param_8;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x1c,0,errorCode,
                               "%s","ChooseMapTy::OutListProc");
    if (iVar3 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\wait_obj.cpp",0x1c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((local_c != (AnonShape_005E6640_0F1EE66B *)0x0) && (local_c->field_1AEC != (BITMAPINFO *)0x0))
  {
    bVar2 = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      bVar4 = bVar2;
      if (local_c->entries[local_8 & 0xff] == param_2) break;
      bVar2 = bVar2 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(local_8._1_3_,bVar2);
      bVar4 = 0xff;
    } while (bVar2 < 0x16);
    if (bVar4 != 0xff) {
      Library::DKW::DDX::FUN_006b4680
                (param_1,param_4,param_5,local_c->field_1AEC,(uint *)0x0,0,param_5 + -0x3f,param_6,
                 param_7,0);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

