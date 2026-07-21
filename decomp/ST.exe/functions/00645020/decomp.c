#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::IsDangerous */

int __thiscall STTorpC::IsDangerous(STTorpC *this,int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint index;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STTorpC *local_10;
  uint local_c;
  int local_8;

  local_c = this->field_0241[3];
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  uVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",
                 0x466);
    }
    index = 0;
    local_8 = 0;
    *param_2 = 0xffffffff;
    if (0 < (int)uVar2) {
      while (DArrayGetElement((DArrayTy *)local_10->field_0241,index,&local_18), local_18 != param_1
            ) {
        index = index + 1;
        if ((int)uVar2 <= (int)index) {
          g_currentExceptionFrame = local_5c.previous;
          return local_8;
        }
      }
      local_8 = (local_14 != 1) + 1;
      *param_2 = index;
    }
    g_currentExceptionFrame = local_5c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_5c.previous;
  if (iVar3 != -0x5001fff7) {
    iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x471,0,iVar3,"%s",
                               "STTorpC::IsDangerous");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_torp.cpp",0x472);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  *param_2 = 0xffffffff;
  return 0;
}

