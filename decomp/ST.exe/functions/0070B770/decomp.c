#include "../../pseudocode_runtime.h"


int __cdecl FUN_0070b770(AnonShape_0070B770_3BA0472D *param_1,int param_2)

{
  short sVar1;
  int local_EAX_84;
  int iVar3;
  int local_EAX_212;
  int iVar2;
  bool bVar4;
  InternalExceptionFrame local_d4;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  int local_8;

  sVar1 = param_1->field_000E;
  local_8 = 0;
  if (sVar1 == 8) {
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        local_d4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_d4;
        iVar2 = Library::MSVCRT::__setjmp3(local_d4.jumpBuffer,0);
        if (iVar2 != 0) {
          g_currentExceptionFrame = local_d4.previous;
          return local_8;
        }
        iVar3 = FUN_006d1a10(nullptr,0,0,0,param_1,0,0,0,param_1->field_0004,
                             param_1->field_0008);
        g_currentExceptionFrame = local_d4.previous;
        return iVar3;
      }
      if (param_2 != 0x18) {
        return 0;
      }
      local_90.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_90;
      local_EAX_212 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
      if (local_EAX_212 != 0) {
        g_currentExceptionFrame = local_90.previous;
        return local_8;
      }
      iVar3 = FUN_006d1a50(nullptr,0,0,0,param_1,0,0,0,param_1->field_0004,
                           param_1->field_0008);
      g_currentExceptionFrame = local_90.previous;
      return iVar3;
    }
  }
  else {
    if (sVar1 == 0x10) {
      bVar4 = param_2 == 0x10;
    }
    else {
      if (sVar1 != 0x18) {
        return 0;
      }
      if (param_2 == 0x10) {
        local_4c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_4c;
        local_EAX_84 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
        if (local_EAX_84 != 0) {
          g_currentExceptionFrame = local_4c.previous;
          return local_8;
        }
        iVar3 = FUN_006d1a90(nullptr,0,0,0,param_1,0,0,0,param_1->field_0004,
                             param_1->field_0008);
        g_currentExceptionFrame = local_4c.previous;
        return iVar3;
      }
      bVar4 = param_2 == 0x18;
    }
    if (!bVar4) {
      return 0;
    }
  }
  return (int)param_1;
}

