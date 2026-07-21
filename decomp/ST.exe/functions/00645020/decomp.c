#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::IsDangerous */

int __thiscall STTorpC::IsDangerous(STTorpC *this,int param_1,uint *param_2)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  uint index;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STTorpC *local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(int *)(this->field_0241 + 0xc);
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  iVar2 = local_c;
  if (errorCode == 0) {
    if (local_c == 0) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_torp.cpp",
                 0x466);
    }
    index = 0;
    local_8 = 0;
    *param_2 = 0xffffffff;
    if (0 < iVar2) {
      while (DArrayGetElement((DArrayTy *)local_10->field_0241,index,&local_18), local_18 != param_1
            ) {
        index = index + 1;
        if (iVar2 <= (int)index) {
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
  if (errorCode != -0x5001fff7) {
    iVar2 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x471,0,errorCode,
                               "%s","STTorpC::IsDangerous");
    if (iVar2 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\nick\\to_torp.cpp",0x472);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  *param_2 = 0xffffffff;
  return 0;
}

