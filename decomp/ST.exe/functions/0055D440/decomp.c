#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055d440(void *this,int param_1,undefined4 *param_2)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    /* ST_CALLSITE[0055D463]: CALL 0x0040556a; direct=0040556A FSGSTy::SetChannelList */
    FSGSTy::SetChannelList(g_fSGS_0081174C,param_1,param_2);
  }
  return;
}

