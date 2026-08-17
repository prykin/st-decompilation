#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055c2e0(void *this,int param_1,int param_2)

{
  if ((STField<char>(this,9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055C2FC]: CALL 0x00405529; direct=00405529 FSGSTy::ConnectProc */
    FSGSTy::ConnectProc(g_fSGS_0081174C,param_1,param_2);
  }
  return;
}

