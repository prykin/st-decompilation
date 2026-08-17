#include "../../pseudocode_runtime.h"


void __thiscall
FUN_0055c0e0(void *this,char *param_1,undefined4 param_2,int param_3,uint param_4,
            undefined4 *param_5)

{
  int iVar1;
  InternalExceptionFrame local_48;

  if (((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) &&
     (param_5 != nullptr)) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    iVar1 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
    if (iVar1 == 0) {
      /* ST_CALLSITE[0055C13A]: CALL 0x00402108; direct=00402108 FSGSTy::SetBanner */
      FSGSTy::SetBanner(g_fSGS_0081174C,param_1,param_2,param_3,param_4,param_5);
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
  }
  return;
}

