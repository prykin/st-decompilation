#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_event.cpp
   AiEventClassTy::_CreateRCCont
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0064D903 MOV ESI,dword ptr [EBP + 0x8];
   first-use mask */

int __thiscall
AiEventClassTy::_CreateRCCont
          (AiEventClassTy *this,ushort param_1,short param_2,int param_3,int param_4,
          undefined4 param_5,undefined4 param_6,char *param_7,int param_8)

{
  bool bVar2;
  int local_EAX_39;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_6c;
  int local_28;
  uint local_24;
  short local_20 [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_28 = -1;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_EAX_39 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (local_EAX_39 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_event.cpp",0xee,0,local_EAX_39,
                               "%s","AiEventClassTy::_CreateRCCont");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_39,0,"E:\\__titans\\ai\\ai_event.cpp",0xef);
    return local_EAX_39;
  }
  if (g_allPlayers_007FA174 != nullptr) {
    if ((((param_2 == 0xdd) || (param_2 == 0xde)) || (param_2 == 0xe2)) || (param_2 == 0xdc)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_c = param_3;
      local_8 = param_4;
      local_24 = (uint)g_bulkInitializedRecords_008087C7[param_1].field_0021;
      local_10 = param_5;
      iVar3 = thunk_FUN_004961b0((short)param_3,(short)param_4,(short)param_5);
      if (iVar3 == 0) {
        local_20[0] = 3;
        local_20[1] = 0;
        local_20[2] = 3;
        local_20[3] = 0;
        local_14 = param_3 + -1;
        local_18 = param_4 + -1;
        thunk_FUN_006756d0((short *)&local_14,(short *)&local_18,local_20,local_20 + 2);
        local_c = local_14 + 1;
        local_8 = local_18 + 1;
      }
      iVar5 = thunk_FUN_00675b10(local_c,local_8,(short)local_10,(short *)&local_c,(short *)&local_8
                                 ,(short *)&local_10,0xfe);
      if (iVar5 != 0) {
        if (param_7 == nullptr) {
          param_7 = &DAT_008016a0;
        }
        thunk_FUN_005fcff0((uint)param_1,local_24,(int)param_2,param_6,(int)(short)local_c,
                           (int)(short)local_8,(int)(short)local_10,param_7,0xffffffff,
                           (ushort)param_8);
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_28;
}

