#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateArt */

int __thiscall
AiEventClassTy::_CreateArt
          (AiEventClassTy *this,short param_1,short param_2,int param_3,int param_4,
          undefined4 param_5,char *param_6,char *param_7,undefined4 param_8)

{
  bool bVar2;
  int local_EAX_38;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_68;
  int local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_24 = -1;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_EAX_38 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (local_EAX_38 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_event.cpp",0x117,0,local_EAX_38,
                               "%s","AiEventClassTy::_CreateArt");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_38,0,"E:\\__titans\\ai\\ai_event.cpp",0x118);
    return local_EAX_38;
  }
  if (g_allPlayers_007FA174 != nullptr) {
    if ((param_1 < 1) && (0x15 < param_1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (((param_2 == 1 || (param_2 == 2)) || (param_2 == 3)))) {
      local_c = param_3;
      local_8 = param_4;
      local_10 = param_5;
      iVar3 = thunk_FUN_004961b0((short)param_3,(short)param_4,(short)param_5);
      if (iVar3 == 0) {
        local_14 = param_3 + -1;
        local_18 = param_4 + -1;
        local_20[0] = 3;
        local_20[1] = 0;
        local_20[2] = 3;
        local_20[3] = 0;
        thunk_FUN_006756d0((short *)&local_14,(short *)&local_18,local_20,local_20 + 2);
        local_c = local_14 + 1;
        local_8 = local_18 + 1;
      }
      iVar5 = thunk_FUN_00675b10(local_c,local_8,(short)local_10,(short *)&local_c,(short *)&local_8
                                 ,(short *)&local_10,0xfd);
      if (iVar5 != 0) {
        if (param_7 == nullptr) {
          param_7 = &CHAR_00h_008016a0;
        }
        if (param_6 == nullptr) {
          param_6 = &CHAR_00h_008016a0;
        }
        thunk_FUN_005f0ec0((int)param_1,(int)param_2,(int)(short)local_c,(int)(short)local_8,
                           (int)(short)local_10,param_6,param_7,0xffffffff,param_8);
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return local_24;
}

